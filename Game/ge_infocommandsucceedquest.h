#ifndef GE_INFOCOMMANDSUCCEEDQUEST_H_INCLUDED
#define GE_INFOCOMMANDSUCCEEDQUEST_H_INCLUDED

class GE_DLLIMPORT gCInfoCommandSucceedQuest :
    public gCInfoCommand
{
GE_DECLARE_PROPERTY_OBJECT( gCInfoCommandSucceedQuest, gCInfoCommand )
public: virtual void           Destroy( void );
public: virtual               ~gCInfoCommandSucceedQuest( void );
public: virtual gEInfoCommand  GetCommandType( void ) const;
public: virtual GEBool         Execute( gCRuntimeInfo &, GEBool );
public: virtual GEBool         IsValid( bCString &, gCInfo const & ) const;
public: using bCObjectRefBase::IsValid;
protected:
    GE_DECLARE_PROPERTY( bCString, m_strQuestName, QuestName )
protected:
    void Invalidate( void );
};
GE_ASSERT_SIZEOF( gCInfoCommandSucceedQuest, 0x000C )

#endif
