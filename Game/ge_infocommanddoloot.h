#ifndef GE_INFOCOMMANDDOLOOT_H_INCLUDED
#define GE_INFOCOMMANDDOLOOT_H_INCLUDED

class GE_DLLIMPORT gCInfoCommandDoLoot :
    public gCInfoCommand
{
GE_DECLARE_PROPERTY_OBJECT( gCInfoCommandDoLoot, gCInfoCommand )
public: virtual void            Destroy( void );
public: virtual                ~gCInfoCommandDoLoot( void );
public: virtual gEInfoCommand   GetCommandType( void ) const;
public: virtual eCEntityProxy & GetEntityProxy1( gCRuntimeInfo & );
public: virtual eCEntityProxy & GetEntityProxy2( gCRuntimeInfo & );
public: virtual void            ResetProxies( void );
public: virtual GEBool          Execute( gCRuntimeInfo &, GEBool );
public: virtual GEBool          IsValid( bCString &, gCInfo const & ) const;
public: using  bCObjectRefBase::IsValid;
protected:
    GE_DECLARE_PROPERTY( bCString, m_strEntity1, Entity1 )
    GE_DECLARE_PROPERTY( bCString, m_strEntity2, Entity2 )
    eCEntityProxy                  m_EntityProxy1;
    eCEntityProxy                  m_EntityProxy2;
protected:
    void Invalidate( void );
};
GE_ASSERT_SIZEOF( gCInfoCommandDoLoot, 0x0020 )

#endif
