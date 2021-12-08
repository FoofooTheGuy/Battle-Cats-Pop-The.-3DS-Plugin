#ifndef HELPER_HPP
#define HELPER_HPP

#include <CTRPluginFramework.hpp>

namespace CTRPluginFramework
{
	struct c_RGBA {
		u8 R;
		u8 G;
		u8 B;
		u8 A;
	};

	namespace Set {
		c_RGBA			ToRGBA(int hexValue);
		u32				ToRGB(int r = 255, int g = 255, int b = 255);
		u32				ToRGBA_U32(int r = 255, int g = 255, int b = 255, int a = 255);
	}
}
#endif