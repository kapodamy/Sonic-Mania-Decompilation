#ifndef OBJ_TUBINAUT_H
#define OBJ_TUBINAUT_H

#include "SonicMania.h"

#define Tubinaut_OrbCount (3)

// Object Class
typedef struct {
    RSDK_OBJECT
    Hitbox hitbox1;
    Hitbox hitbox2;
    Hitbox hitbox3;
    uint16 aniFrames;
    uint16 sfxPowerdown;
    uint16 sfxRepel;
} ObjectTubinaut;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    StateMachine(stateOrb);
    Animator animator1;
    Animator animator2;
    Vector2 startPos;
    Vector2 orbPositions[Tubinaut_OrbCount];
    int32 orbAngles[Tubinaut_OrbCount];
    int16 field_BC[Tubinaut_OrbCount];
    int32 field_C4[Tubinaut_OrbCount];
    Animator animators[Tubinaut_OrbCount];
    uint16 playerTimers[PLAYER_MAX];
    int32 timer2;
    uint16 activeOrbs;
    uint8 orbCount;
    uint16 field_122;
    int32 timer;
    uint16 distanceRemain;
    uint16 distance;
} EntityTubinaut;

// Object Struct
extern ObjectTubinaut *Tubinaut;

// Standard Entity Events
void Tubinaut_Update(void);
void Tubinaut_LateUpdate(void);
void Tubinaut_StaticUpdate(void);
void Tubinaut_Draw(void);
void Tubinaut_Create(void* data);
void Tubinaut_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void Tubinaut_EditorDraw(void);
void Tubinaut_EditorLoad(void);
#endif
void Tubinaut_Serialize(void);

// Extra Entity Functions
void Tubinaut_DebugSpawn(void);
void Tubinaut_DebugDraw(void);

void Tubinaut_CheckPlayerCollisions(void);
bool32 Tubinaut_CheckAttacking(EntityPlayer *player);
void Tubinaut_Unknown5(EntityPlayer *player, int orbID);
void Tubinaut_HandleRepel(EntityPlayer *player, int playerID);
void Tubinaut_HandleOrbs(void);
void Tubinaut_CheckOnScreen(void);

void Tubinaut_State_Setup(void);
void Tubinaut_State_Move(void);

void Tubinaut_StateOrb_Unknown1(void);
void Tubinaut_StateOrb_Unknown2(void);
void Tubinaut_StateOrb_Unknown3(void);
void Tubinaut_StateOrb_Unknown4(void);

void Tubinaut_State2_Unknown(void);

#endif //!OBJ_TUBINAUT_H
