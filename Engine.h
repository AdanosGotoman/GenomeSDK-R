#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include "FFC.h"

// EMotion FX declarations (external)
namespace EMotionFX
{
    class ActorInstance;
    class Motion;
    class MotionInstance;
    class SkeletalSubMotion;
}
// PhysX declarations (external)
class NxActor;
class NxCCDSkeleton;
class NxShape;

#include "Engine/EngineEnum.h"

//FIXME: bCImageOrMaterialResourceString is not exported and the naming convention indicates
// that it is a SharedBase class, but the class seems to be introduced in the Engine module.
class bCImageOrMaterialResourceString :
    public bCString
{
};
GE_ASSERT_SIZEOF( bCImageOrMaterialResourceString, 0x0004 )

#include "Engine/ge_locadmin2.h"
#include "Engine/ge_locstring.h"

#include "Engine/ge_virtualfilesystem.h"

#include "Engine/ge_archivefile.h"
#include "Engine/ge_archivemanager.h"

#include "Engine/ge_processibleelement.h"

#include "Engine/ge_docobject.h"
#include "Engine/ge_docobjectmap.h"
#include "Engine/ge_docarchive.h"

class eCVideoPlayer{
protected:
    char __FIXME[ 0x0030 ];
};
#include "Engine/ge_gfxshared.h"
#include "Engine/ge_apitexture.h"
#include "Engine/ge_gfxobject.h"
#include "Engine/ge_gfximagedata.h"

#include "Engine/ge_animshared.h"

/*

//HACK: bTRefPtrArray is like bTPtrArray but uses Add/ReleaseReference of the elements.
#define bTRefPtrArray bTPtrArray
//HACK: Get Entity classes it compiling...

*/
template< typename T >
class bTRefPtrArray : public bTPtrArray< T >
{
};

class GE_DLLIMPORT eCDeferredGuiBitmap2{};
class GE_DLLIMPORT eCGuiBitmapProxy2
{
    eCDeferredGuiBitmap2 * m_pBitmap;
};

struct eSGizmoPickInfo{};
struct eSRayIntersectionDesc{};
struct eCPrimitiveCollisionDesc{};
class GE_DLLIMPORT eCCollisionDesc{};
class GE_DLLIMPORT eCContactIterator{};
class GE_DLLIMPORT eCGfxCamera{};
class GE_DLLIMPORT eCFrustumDatabase{
public:
    struct eSRenderTargetDesc{};
public:
    void Execute( eSRenderTargetDesc * );
protected:
    char __FIXME[ 0x0B1C ];
};
class GE_DLLIMPORT eCIlluminated_PS{};
class GE_DLLIMPORT eCLightSet{};
class GE_DLLIMPORT eCRenderContext{};
class GE_DLLIMPORT eCShadowMapBase{};
class GE_DLLIMPORT eCPhysicObject{};
class GE_DLLIMPORT eCPortalRoom_PS;
class eCEntity;
class eCGeometryEntity;
#include "Engine/ge_camerabase.h"

#include "Engine/ge_node.h"
#include "Engine/ge_entityproxy.h"
#include "Engine/ge_entitystringproxy.h"
#include "Engine/ge_templateentityproxy.h"
#include "Engine/ge_entitypropertyset.h"
#include "Engine/ge_psmap.h"
#include "Engine/ge_entity.h"
#include "Engine/ge_contextbase.h"
#include "Engine/ge_templateentity.h"
#include "Engine/ge_frustumelementitem.h"
#include "Engine/ge_geometryentity.h"
#include "Engine/ge_processible.h"
#include "Engine/ge_processor.h"
#include "Engine/ge_dynamicentity.h"
#include "Engine/ge_entitydynamiccontext.h"

class GE_DLLIMPORT eCGuiWindow2{};
class GE_DLLIMPORT eCGuiFrame2{};

class eCStatisticView;
#include "Engine/ge_statistic.h"
#include "Engine/ge_statisticview.h"

#include "Engine/ge_enginecomponentbase.h"
#include "Engine/ge_moduleadmin.h"

#include "Engine/ge_entityadmin.h"

#include "Engine/ge_effectsystembase.h"
#include "Engine/ge_effectmodulebase.h"

#include "Engine/ge_resourceinputstream2.h"
#include "Engine/ge_resourceoutputstream2.h"
class GE_DLLIMPORT eCCollisionMeshResource2{};
class GE_DLLIMPORT eCImageResource2{};
class GE_DLLIMPORT eCMaterialResource2{};
class GE_DLLIMPORT eCMeshResource2{};
class GE_DLLIMPORT eCMotionActorResource2{};
class GE_DLLIMPORT eCMotionResource2{};
class GE_DLLIMPORT eCSoundResource2{};
class GE_DLLIMPORT eCSpeedTreeResource2{};
class eCResourceCache2;
#include "Engine/ge_resource2.h"
#include "Engine/ge_resourcecache2.h"
#include "Engine/ge_resourcemodule2.h"

class eCCollisionShape_PS;
#include "Engine/ge_collisionshape.h"
#include "Engine/ge_collisionshapebase_ps.h"
#include "Engine/ge_collisionshape_ps.h"

#include "Engine/ge_particle_ps.h"
#include "Engine/ge_strip_ps.h"

#include "Engine/ge_portalbsp.h"
#include "Engine/ge_portal.h"
#include "Engine/ge_portalcell_ps.h"
#include "Engine/ge_portalroom_ps.h"

#include "Engine/ge_iteratorprimitive.h"
class GE_DLLIMPORT eCIteratorPrimitiveMoveEdge;
class GE_DLLIMPORT eCIteratorPrimitiveMoveArrow;
class GE_DLLIMPORT eCIteratorPrimitiveMoveLine;
class GE_DLLIMPORT eCIteratorPrimitiveScale;
class GE_DLLIMPORT eCIteratorPrimitiveBox;
class GE_DLLIMPORT eCIteratorPrimitiveRotateBox;
class GE_DLLIMPORT eCIteratorPrimitiveSphere;
class GE_DLLIMPORT eCIteratorPrimitiveCapsuleCap;
class GE_DLLIMPORT eCIteratorPrimitiveCapsuleCylinder;
class GE_DLLIMPORT eCIteratorPrimitiveBackArea;
class GE_DLLIMPORT eCIteratorPrimitiveBottomArea;
class GE_DLLIMPORT eCIteratorPrimitiveFrontArea;
class GE_DLLIMPORT eCIteratorPrimitiveLeftArea;
class GE_DLLIMPORT eCIteratorPrimitiveRightArea;
class GE_DLLIMPORT eCIteratorPrimitiveTopArea;
class GE_DLLIMPORT eCIteratorPrimitiveRadiusArea;
class GE_DLLIMPORT eCIteratorPrimitiveRadiusBackArea;
class GE_DLLIMPORT eCIteratorPrimitiveRadiusBottomArea;
class GE_DLLIMPORT eCIteratorPrimitiveRadiusFrontArea;
class GE_DLLIMPORT eCIteratorPrimitiveRadiusLeftArea;
class GE_DLLIMPORT eCIteratorPrimitiveRadiusRightArea;
class GE_DLLIMPORT eCIteratorPrimitiveRadiusTopArea;

#include "Engine/ge_gizmobase.h"
#include "Engine/ge_gizmotranslateandscale.h"
#include "Engine/ge_gizmotranslateandscalebox.h"
#include "Engine/ge_gizmotranslateandscalesphere.h"
#include "Engine/ge_gizmotransform.h"
#include "Engine/ge_gizmotransformcapsule.h"
#include "Engine/ge_gizmotransformcapsulecollisionshape.h"
#include "Engine/ge_gizmotransformobb.h"
#include "Engine/ge_gizmotransformobbcollisionshape.h"
#include "Engine/ge_gizmotransformsphere.h"
#include "Engine/ge_gizmotransformspherecollisionshape.h"

enum eEForceMode
{
    //FIXME: eEForceMode constants (NxForceMode?).
    eEForceMode_ForceDWORD = GE_FORCE_DWORD
};

enum eEPhysicObjectFlag
{
    //FIXME: eEPhysicObjectFlag constants (NxActorFlag?).
    eEPhysicObjectFlag_ForceDWORD = GE_FORCE_DWORD
};

#include "Engine/ge_rigidbodybase_ps.h"
#include "Engine/ge_rigidbody_ps.h"

#include "Engine/ge_messagehandler.h"
#include "Engine/ge_window.h"

#include "Engine/ge_guiresource2.h"

#include "Engine/ge_scriptadminbase.h"
#include "Engine/ge_scriptfunctionmap.h"
#include "Engine/ge_scriptproxy.h"
#include "Engine/ge_scriptproxyscript.h"

#include "Engine/ge_splash.h"
class eCConsoleEdit2{};
class eCConsoleListCtrl2{};
class eCPropertyEditFrame2{};
#include "Engine/ge_console2.h"

#include "Engine/ge_configadmin.h"
#include "Engine/ge_debugoptions.h"

#include "Engine/ge_configfile.h"
#include "Engine/ge_application.h"

#include "Engine/ge_inputadmin.h"

class GE_DLLIMPORT eCBodyPart_PS{};

#include "Engine/ge_actorwrapper.h"
class eCAnimation_PS;
#include "Engine/ge_actorattachment.h"
#include "Engine/ge_animation_ps.h"

class eCMover_PS;
#include "Engine/ge_moveranimationbase.h"
#include "Engine/ge_moveranimationfile.h"
//TODO: Analyze bTInterpolator templates.
// eCMoverAnimationKFBase: eCMoverAnimationBase
// eCMoverAnimationBezier: eCMoverAnimationKFBase
// eCMoverAnimationHermit: eCMoverAnimationKFBase
// eCMoverAnimationLinear: eCMoverAnimationKFBase
#include "Engine/ge_moveranimationrotate.h"
#include "Engine/ge_moveranimationskeletal.h"
// eCMoverAnimationTCB: eCMoverAnimationKFBase
#include "Engine/ge_mover_ps.h"

class GE_DLLIMPORT eCPrimitiveStateGraphArrow{};
class GE_DLLIMPORT eCPrimitiveStateGraphLine{};
class GE_DLLIMPORT eCPrimitiveWeatherZoneBox{};

#include "Engine/ge_area_stringproperty_ps.h"

#endif
