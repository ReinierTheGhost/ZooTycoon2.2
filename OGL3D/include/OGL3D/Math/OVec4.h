#pragma once
#include <OGL3D/OPrerequisites.h>

class OVec4
{
public:
	OVec4()
	{

	}
	OVec4(f32 r, f32 g, f32 b, f32 a): r(r), g(g), b(b), a(a)
	{
	}
	~OVec4()
	{

	}
public:
	f32 r = 0, g = 0, b = 0, a = 0;
};
