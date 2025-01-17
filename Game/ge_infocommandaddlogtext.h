#ifndef GE_INFOCOMMANDADDLOGTEXT_H_INCLUDED
#define GE_INFOCOMMANDADDLOGTEXT_H_INCLUDED

class GE_DLLIMPORT gCInfoCommandAddLogText :
    public gCInfoCommand
{
GE_DECLARE_PROPERTY_OBJECT( gCInfoCommandAddLogText, gCInfoCommand )
public: virtual void           Destroy( void );
public: virtual               ~gCInfoCommandAddLogText( void );
public: virtual gEInfoCommand  GetCommandType( void ) const;
public: virtual void           GetTableKeys( bTObjArray< bCString> & );
public: virtual GEBool         Execute( gCRuntimeInfo &, GEBool );
public: virtual GEBool         IsValid( bCString &, gCInfo const & ) const;
public: using bCObjectRefBase::IsValid;
protected:
    GE_DECLARE_PROPERTY( gCInfoLocString, m_locText,      Text )
    GE_DECLARE_PROPERTY( bCString,        m_strQuestName, QuestName )
protected:
    void Invalidate( void );
};
GE_ASSERT_SIZEOF( gCInfoCommandAddLogText, 0x0018 )

#endif

