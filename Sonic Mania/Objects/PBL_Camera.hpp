#ifndef OBJ_PBL_CAMERA_H
#define OBJ_PBL_CAMERA_H

#include "../SonicMania.hpp"

#if RETRO_USE_PLUS
// Object Class
struct ObjectPBL_Camera : Object {

};

// Entity Class
struct EntityPBL_Camera : Entity {

};

// Object Struct
extern ObjectPBL_Camera *PBL_Camera;

// Standard Entity Events
void PBL_Camera_Update();
void PBL_Camera_LateUpdate();
void PBL_Camera_StaticUpdate();
void PBL_Camera_Draw();
void PBL_Camera_Create(void* data);
void PBL_Camera_StageLoad();
void PBL_Camera_EditorDraw();
void PBL_Camera_EditorLoad();
void PBL_Camera_Serialize();

// Extra Entity Functions
#endif

#endif //!OBJ_PBL_CAMERA_H
