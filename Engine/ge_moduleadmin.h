#ifndef GE_MODULEADMIN_H_INCLUDED
#define GE_MODULEADMIN_H_INCLUDED

#pragma warning( push )
#pragma warning( disable : 4251 )  // class 'bTPtrArray<T>' needs to have dll-interface to be used by clients of class 'eCModuleAdmin'
                                   // class 'bTValMap<K,T>' needs to have dll-interface to be used by clients of class 'eCModuleAdmin'

class GE_DLLIMPORT eCModuleAdmin :
    public bCObjectRefBase
{
public: virtual bEResult ResetResources( GEBool );
public: virtual bEResult RestoreResources( GEBool );
public: virtual GEU16    GetVersion( void ) const;
public: virtual bEResult Create( void );
public: virtual void     Destroy( void );
public: virtual         ~eCModuleAdmin( void );
protected:
    bTPtrArray< eCEngineComponentBase * >       m_arrModules;
    bTValMap< eCEngineComponentBase *, bCGuid > m_mapModules;
    void *                                      __FIXME;
private:
    GEInt GetMaxModuleLevel( void ) const;
    void  SendEngineMessageLevel( eSEngineMessage &, GEInt );
    void  SortModules( GEBool );
protected:
    void Invalidate( void );
public:
    static eCModuleAdmin & GE_STDCALL GetInstance( void );
public:
    GEBool                  IsEngineComponent( bCObjectBase const & ) const;
    GEBool                  RegisterModule( eCEngineComponentBase &, GEInt, bCGuid const & );
    GEBool                  UnregisterModule( eCEngineComponentBase & );
    GEInt                   GetModuleCount( void ) const;
    bCGuid                  GetGuid( eCEngineComponentBase const * ) const;
    bEResult                DoInitializeModules( void );
    bEResult                DoOnAppInitializeModules( void );
    bEResult                DoPostInitializeModules( void );
    bEResult                DoPreShutdownModules( void );
    bEResult                DoShutdownModules( void );
    bEResult                ReadPreLoadData( eCArchiveFile & );
    bEResult                ReadSaveGame( eCArchiveFile & );
    bEResult                WritePreLoadData( eCArchiveFile & );
    bEResult                WriteSaveGame( eCArchiveFile & );
    eCEngineComponentBase * FindModule( bCGuid const & ) const;
    eCEngineComponentBase * FindModule( bCString const & ) const;
    eCEngineComponentBase * GetModule( GEInt ) const;
    void                    DoBeginRenderAlpha( void );
    void                    DoBeginRenderSolid( void );
    void                    DoEndRenderAlpha( void );
    void                    DoEndRenderSolid( void );
    void                    DoPostRender( void );
    void                    SendEngineMessage( eSEngineMessage & );
protected:
    eCModuleAdmin const & operator = ( eCModuleAdmin const & );
public:
    eCModuleAdmin( eCModuleAdmin const & );
    eCModuleAdmin( void );
};
GE_ASSERT_SIZEOF( eCModuleAdmin, 0x0028 )

#pragma warning( pop )

template< typename T >
T * g_GetModule( void );

#include "ge_moduleadmin.inl"

#endif
