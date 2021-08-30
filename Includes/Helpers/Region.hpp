#ifndef REGION_HPP
#define REGION_HPP

#include <CTRPluginFramework.hpp>

namespace CTRPluginFramework {
	enum CurrRegion {
		INVALID,
        JPN,
		USA,
        EUR,
		KOR,
    };

	extern CurrRegion c_Region;

	namespace Region {
		u32	AutoRegion(u32 jpn, u32 usa, u32 eur, u32 kor);
	}
}
#endif