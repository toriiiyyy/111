#pragma once
#include "../Interfaces/c_scene_object.h"

typedef void(__fastcall* DrawArrayLightFn)(__int64 a1, CSceneLightObject* a2, __int64 a3);
extern DrawArrayLightFn oDrawArrayLight;

void __fastcall DrawArrayLight(__int64 a1, CSceneLightObject* a2, __int64 a3);
