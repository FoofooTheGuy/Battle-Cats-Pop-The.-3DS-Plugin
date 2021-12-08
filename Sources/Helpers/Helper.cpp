#include "Helpers/Helper.hpp"

namespace CTRPluginFramework
{
	c_RGBA Set::ToRGBA(int hexValue) {	
		c_RGBA rgb;
		rgb.R = ((hexValue >> 24) & 0xFF) / 255.0;
		rgb.G = ((hexValue >> 16) & 0xFF) / 255.0;
		rgb.B = ((hexValue >> 8) & 0xFF) / 255.0;
		rgb.A = ((hexValue) & 0xFF) / 255.0;
		return rgb;
	}
}