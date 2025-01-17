#ifndef GE_SCRIPTINIT_H_INCLUDED
#define GE_SCRIPTINIT_H_INCLUDED

typedef GEInt  (GE_STDCALL * gFScript)( gCScriptProcessingUnit *, GELPVoid, GELPVoid, GEInt );
typedef GEBool (GE_STDCALL * gFScriptAICallback)( gCScriptProcessingUnit * );
typedef GEBool (GE_STDCALL * gFScriptAIFunction)( bTObjStack< gScriptRunTimeSingleState > &, gCScriptProcessingUnit * );
typedef GEBool (GE_STDCALL * gFScriptAIState)( bTObjStack< gScriptRunTimeSingleState > &, gCScriptProcessingUnit * );

struct gSScriptInitScriptBase
{
	bCString m_strName;
	bCString m_strSource;
    gSScriptInitScriptBase( GELPCChar a_pcName, GELPCChar a_pcSource );
    gSScriptInitScriptBase( void );
   ~gSScriptInitScriptBase( void );
};

struct gSScriptInitScript :
    gSScriptInitScriptBase
{
	gFScript m_funcScript;
    gSScriptInitScript( GELPCChar a_pcName, GELPCChar a_pcSource, gFScript a_funcScript );
    gSScriptInitScript( void );
};

struct gSScriptInitScriptAICallback :
    gSScriptInitScriptBase
{
	gFScriptAICallback m_funcScriptAICallback;
    gSScriptInitScriptAICallback( GELPCChar a_pcName, GELPCChar a_pcSource, gFScriptAICallback a_funcScriptAICallback );
    gSScriptInitScriptAICallback( void );
};

struct gSScriptInitScriptAIFunction :
    gSScriptInitScriptBase
{
	gFScriptAIFunction m_funcScriptAIFunction;
    gSScriptInitScriptAIFunction( GELPCChar a_pcName, GELPCChar a_pcSource, gFScriptAIFunction a_funcScriptAIFunction );
    gSScriptInitScriptAIFunction( void );
};

struct gSScriptInitScriptAIState :
    gSScriptInitScriptBase
{
	gFScriptAIState m_funcScriptAIState;
    gSScriptInitScriptAIState( GELPCChar a_pcName, GELPCChar a_pcSource, gFScriptAIState a_funcScriptAIState );
    gSScriptInitScriptAIState( void );
};



struct gSScriptInit
{
	bTObjArray< gSScriptInitScriptAIState >    m_arrScriptAIStates;
    bTObjArray< gSScriptInitScriptAIFunction > m_arrScriptAIFunctions;
    bTObjArray< gSScriptInitScriptAICallback > m_arrScriptAICallbacks;
    bTObjArray< gSScriptInitScript >           m_arrScripts;
   ~gSScriptInit( void );
};

typedef gSScriptInit const * (GE_STDCALL * gFScriptInit)( void );

#endif
