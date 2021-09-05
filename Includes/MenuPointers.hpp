#ifndef MENUPOINTERS_HPP
#define MENUPOINTERS_HPP

#include <CTRPluginFramework.hpp>

namespace CTRPluginFramework {
	extern MenuFolder *BATC;
	extern MenuFolder *QOLC;
	extern MenuFolder *VERC;
	extern MenuFolder *TEAMC;

	void PatchProcess(FwkSettings &settings);
}

#endif
