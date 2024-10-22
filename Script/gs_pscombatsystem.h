#ifndef GS_PSCOMBATSYSTEM_H_INCLUDED
#define GS_PSCOMBATSYSTEM_H_INCLUDED

GS_DECLARE_PROPERTYSET( PSCombatSystem, gCCombatSystem_PS )
public:
    GS_DECLARE_PROPERTY( ActiveFightAI,  bCString )
    GS_DECLARE_PROPERTY( FightAIMode,    gECombatFightAIMode )
    GS_DECLARE_PROPERTY( PassiveFightAI, bCString )
public:
    GEBool       CanCounterCurrentTarget( gECombatMove ) const;
    GEBool       DelegateActiveStatus( void );
    gECombatMode GetCombatMode( GEInt, GEInt ) const;
    gECombatMode GetCombatMode( gEItemUseType, gEItemUseType ) const;
    gECombatMode GetCombatMode( void ) const;
    gECombatPose GetCombatPose( GEInt, GEInt ) const;
    gECombatPose GetCombatPose( gEItemUseType, gEItemUseType ) const;
    gECombatPose GetCombatPose( void ) const;
    gEWalkMode   GetCombatWalkMode( void ) const;
    Entity       GetCurrentAttacker( void ) const;
    gECombatMove GetCurrentMove( void ) const;
    GEFloat      GetCurrentPowerLoad( void ) const;
    Entity       GetCurrentTarget( void ) const;
    bCString     GetEffectMaterialName( void ) const;
    GEFloat      GetHitSufferRadius( void ) const;
    gECombatMove GetLastAttackMove( void );
    Template     GetLeftFistItem( void ) const;
    gECombatMove GetNextMove( void ) const;
    GEFloat      GetNextWalkDuration( void ) const;
    Template     GetRightFistItem( void ) const;
    bCString     GetStyleName( gEItemUseType, gEItemUseType ) const;
    GEBool       HasMove( void );
    GEBool       HasMoveAttackCombo( void );
    GEBool       InteruptCurrentMove( void );
    void         InteruptPowerRaise( void ) const;
    GEBool       IsAttackSecEnabled( void ) const;
    GEBool       IsInParade( gECombatParadeType, bCVector const & );
    GEBool       IsMoveInteruptable( void );
    GEBool       IsPowerRaiseEnabled( void ) const;
    GEBool       IsSideAttacksEnabled( void ) const;
    GEBool       IsStumbling( void ) const;
    GEBool       IsToFar( GEFloat, GEFloat ) const;
    GEBool       IsToNear( GEFloat, GEFloat ) const;
    GEBool       IsToNearMeleeDistance( GEFloat, GEFloat ) const;
    GEBool       IsValid( void ) const;
    GEBool       RequestActiveStatus( void );
    GEBool       SelectNextMove( gECombatMove ) const;
    GEBool       SetCurrentTarget( Entity const & );
    void         SetNextMove( gECombatMove ) const;
    GEBool       StartComboMove( gECombatMove ) const;
    GEBool       StartMove( gECombatMove ) const;
    GEBool       StartStumble( Entity ) const;
    GEBool       StartStumble( gECombatMove, bCVector ) const;
    GEBool       StartStumble( gECombatMove, bCVector, bCVector ) const;
    GEBool       StartStumble( gECombatMove, Entity ) const;
    GEBool       StopCurrentCombo( void ) const;
    GEBool       StopCurrentMove( void );
};

#endif