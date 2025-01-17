#ifndef GE_INFOCOMMANDSHOWPICTURE_H_INCLUDED
#define GE_INFOCOMMANDSHOWPICTURE_H_INCLUDED

class GE_DLLIMPORT gCInfoCommandShowPicture :
    public gCInfoCommand
{
GE_DECLARE_PROPERTY_OBJECT( gCInfoCommandShowPicture, gCInfoCommand )
public: virtual void           Destroy( void );
public: virtual               ~gCInfoCommandShowPicture( void );
public: virtual gEInfoCommand  GetCommandType( void ) const;
public: virtual GEBool         Execute( gCRuntimeInfo &, GEBool );
public: virtual GEBool         IsValid( bCString &, gCInfo const & ) const;
public: using bCObjectRefBase::IsValid;
protected:
    GE_DECLARE_PROPERTY( bCString, m_strFileName, FileName )
protected:
    void Invalidate( void );
};
GE_ASSERT_SIZEOF( gCInfoCommandShowPicture, 0x000C )

#endif
