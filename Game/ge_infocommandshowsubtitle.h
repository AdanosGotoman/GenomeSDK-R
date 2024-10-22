#ifndef GE_INFOCOMMANDSHOWSUBTITLE_H_INCLUDED
#define GE_INFOCOMMANDSHOWSUBTITLE_H_INCLUDED

class GE_DLLIMPORT gCInfoCommandShowSubtitle :
    public gCInfoCommand
{
GE_DECLARE_PROPERTY_OBJECT( gCInfoCommandShowSubtitle, gCInfoCommand )
public: virtual void           Destroy( void );
public: virtual GEBool         HandleDeprecatedProperty( bCString const &, bCString const &, bCIStream & );
public: virtual               ~gCInfoCommandShowSubtitle( void );
public: virtual gEInfoCommand  GetCommandType( void ) const;
public: virtual void           GetTableKeys( bTObjArray< bCString > & );
public: virtual GEBool         Execute( gCRuntimeInfo &, GEBool );
public: virtual GEBool         IsValid( bCString &, gCInfo const & ) const;
public: using bCObjectRefBase::IsValid;
protected:
    GE_DECLARE_PROPERTY( gCInfoLocString, m_locText, Text )
protected:
    void Invalidate( void );
};
GE_ASSERT_SIZEOF( gCInfoCommandShowSubtitle, 0x0014 )

#endif
