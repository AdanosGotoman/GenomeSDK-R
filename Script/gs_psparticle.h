#ifndef GS_PSPARTICLE_H_INCLUDED
#define GS_PSPARTICLE_H_INCLUDED

//NOTE: PSParticle::PropertyAutoKill hasn't been declared as script property.
// Only the copy assignment operator is exported (the other two are missing).

GS_DECLARE_PROPERTYSET( PSParticle, eCParticle_PS )
public:
    GS_DECLARE_PROPERTY( Acceleration,              bCVector )
    GS_DECLARE_PROPERTY( AlphaReference,            GEU8 )
    GS_DECLARE_PROPERTY( AlphaTest,                 GEBool )
    GS_DECLARE_PROPERTY( AutoReset,                 GEBool )
    GS_DECLARE_PROPERTY( AutomaticSpawning,         GEBool )
    GS_DECLARE_PROPERTY( BlendBetweenSubdivisions,  GEBool )
    GS_DECLARE_PROPERTY( CollideWithCharacters,     GEBool )
    GS_DECLARE_PROPERTY( CollideWithDynamic,        GEBool )
    GS_DECLARE_PROPERTY( CollideWithStatic,         GEBool )
    GS_DECLARE_PROPERTY( CollideWithTransparent,    GEBool )
    GS_DECLARE_PROPERTY( ColorScaleRepeats,         GEFloat )
    GS_DECLARE_PROPERTY( CoordinateSystem,          eECoordinateSystem )
    GS_DECLARE_PROPERTY( DampingFactor,             bCRange3 )
    GS_DECLARE_PROPERTY( DepthTest,                 GEBool )
    GS_DECLARE_PROPERTY( DepthWrite,                GEBool )
    GS_DECLARE_PROPERTY( DisableFogging,            GEBool )
    GS_DECLARE_PROPERTY( DrawStyle,                 eETextureDrawStyle )
    GS_DECLARE_PROPERTY( Enabled,                   GEBool )
    GS_DECLARE_PROPERTY( ExtentMultiplier,          bCVector )
    GS_DECLARE_PROPERTY( FaceInFactor,              bCFloatAlphaColor )
    GS_DECLARE_PROPERTY( FaceOutFactor,             bCFloatAlphaColor )
    GS_DECLARE_PROPERTY( FacingDirection,           eEFacingDirection )
    GS_DECLARE_PROPERTY( FadeIn,                    GEBool )
    GS_DECLARE_PROPERTY( FadeInEndTime,             GEFloat )
    GS_DECLARE_PROPERTY( FadeOut,                   GEBool )
    GS_DECLARE_PROPERTY( FadeOutStartTime,          GEFloat )
    GS_DECLARE_PROPERTY( InitialAge,                bCRange1 )
    GS_DECLARE_PROPERTY( InitialDelay,              bCRange1 )
    GS_DECLARE_PROPERTY( Lifetime,                  bCRange1 )
    GS_DECLARE_PROPERTY( MaxAbsoluteVelocity,       bCVector )
    GS_DECLARE_PROPERTY( MaxCollisions,             bCRange1 )
    GS_DECLARE_PROPERTY( MaxNumParticles,           GEInt )
    GS_DECLARE_PROPERTY( MinSquaredVelocity,        GEFloat )
    GS_DECLARE_PROPERTY( NumUSubdivisions,          GEInt )
    GS_DECLARE_PROPERTY( NumVSubdivisions,          GEInt )
    GS_DECLARE_PROPERTY( ParticlesPerSecond,        GEFloat )
    GS_DECLARE_PROPERTY( ProjectionNormal,          bCVector )
    GS_DECLARE_PROPERTY( RandomSubdivision,         GEBool )
    GS_DECLARE_PROPERTY( RelativeWarmupTime,        GEFloat )
    GS_DECLARE_PROPERTY( ResetOnTrigger,            GEBool )
    GS_DECLARE_PROPERTY( RespawnDeadParticles,      GEBool )
    GS_DECLARE_PROPERTY( RevolutionCenterOffset,    bCRange3 )
    GS_DECLARE_PROPERTY( RevolutionScaleRepeats,    GEFloat )
    GS_DECLARE_PROPERTY( RevolutionsPerSecond,      bCRange3 )
    GS_DECLARE_PROPERTY( RotationDampingFactor,     bCRange3 )
    GS_DECLARE_PROPERTY( SecondsBeforeInactive,     GEFloat )
    GS_DECLARE_PROPERTY( SizeScaleRepeats,          GEFloat )
    GS_DECLARE_PROPERTY( SpawnFromOtherEmitter,     eCEntityProxy )
    GS_DECLARE_PROPERTY( SpawnNumParticles,         bCRange1 )
    GS_DECLARE_PROPERTY( SpawnedVelocityScale,      bCRange3 )
    GS_DECLARE_PROPERTY( SpinDirection,             GEFloat )
    GS_DECLARE_PROPERTY( SpinParticles,             GEBool )
    GS_DECLARE_PROPERTY( SpinsPerSecond,            bCRange3 )
    GS_DECLARE_PROPERTY( StartBoxLocation,          bCRange3 )
    GS_DECLARE_PROPERTY( StartLocationOffset,       bCVector )
    GS_DECLARE_PROPERTY( StartLocationShape,        eELocationShape )
    GS_DECLARE_PROPERTY( StartSize,                 bCRange3 )
    GS_DECLARE_PROPERTY( StartSphereRadius,         bCRange1 )
    GS_DECLARE_PROPERTY( StartSpin,                 bCRange3 )
    GS_DECLARE_PROPERTY( StartVelocity,             bCRange3 )
    GS_DECLARE_PROPERTY( StretchToEmitter,          GEBool )
    GS_DECLARE_PROPERTY( SubdivisionEnd,            GEInt )
    GS_DECLARE_PROPERTY( SubdivisionScaleRepeats,   GEFloat )
    GS_DECLARE_PROPERTY( SubdivisionStart,          GEInt )
    GS_DECLARE_PROPERTY( Target,                    eCEntityProxy )
    GS_DECLARE_PROPERTY( Texture,                   bCString )
    GS_DECLARE_PROPERTY( TicksPerSecond,            GEFloat )
    GS_DECLARE_PROPERTY( TriggerNumParticles,       bCRange1 )
    GS_DECLARE_PROPERTY( TriggerParticlesPerSecond, GEFloat )
    GS_DECLARE_PROPERTY( UniformSize,               GEBool )
    GS_DECLARE_PROPERTY( UseCollision,              GEBool )
    GS_DECLARE_PROPERTY( UseColorScale,             GEBool )
    GS_DECLARE_PROPERTY( UseMaxCollisions,          GEBool )
    GS_DECLARE_PROPERTY( UseRevolution,             GEBool )
    GS_DECLARE_PROPERTY( UseRevolutionScale,        GEBool )
    GS_DECLARE_PROPERTY( UseRotationDamping,        GEBool )
    GS_DECLARE_PROPERTY( UseRotationFrom,           eERotationFrom )
    GS_DECLARE_PROPERTY( UseSizeScale,              GEBool )
    GS_DECLARE_PROPERTY( UseSpawnedVelocityScale,   GEBool )
    GS_DECLARE_PROPERTY( UseSubdivisionScale,       GEBool )
    GS_DECLARE_PROPERTY( UseVelocityScale,          GEBool )
    GS_DECLARE_PROPERTY( VelocityDirectionFrom,     eEVelocityDirectionFrom )
    GS_DECLARE_PROPERTY( VelocityLoss,              bCRange3 )
    GS_DECLARE_PROPERTY( VelocityScaleRepeats,      GEFloat )
    GS_DECLARE_PROPERTY( WarmupTicksPerSecond,      GEFloat )
public:
    GEBool IsValid( void ) const;
};

#endif
