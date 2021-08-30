#include <CTRPluginFramework.hpp>
#include "cheats.hpp"

namespace CTRPluginFramework {

	CurrRegion c_Region = INVALID;
//AutoRegion
	u32 Region::AutoRegion(u32 jpn, u32 usa, u32 eur, u32 kor) {
		switch(c_Region) {
			case CurrRegion::JPN: return jpn;  
			case CurrRegion::USA: return usa; 
			case CurrRegion::EUR: return eur; 
			case CurrRegion::KOR: return kor; 
			case CurrRegion::INVALID: return 0;
			default: return 0;
		}
	}
}