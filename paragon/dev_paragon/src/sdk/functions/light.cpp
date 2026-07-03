#include "light.h"

DrawArrayLightFn oDrawArrayLight = nullptr;

void __fastcall DrawArrayLight(__int64 a1, CSceneLightObject* a2, __int64 a3)
{
	if (!a2)
		return;

	a2->desc.colorR = 255;
	a2->desc.colorG = 0;
	a2->desc.colorB = 0;

	if (oDrawArrayLight)
	{
		oDrawArrayLight(a1, a2, a3);
	}
}
