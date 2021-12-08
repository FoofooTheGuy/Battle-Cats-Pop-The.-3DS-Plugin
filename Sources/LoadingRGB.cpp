#include "cheats.hpp"

namespace CTRPluginFramework {

	int UI_Pos = 0;
	c_RGBA* logoArray = nullptr;
	bool logoExists = true;

	bool OSD_SaveIcon(const Screen &Splash) {
		int Pixels = 0,
			XLocation = 10, YLocation = 11,
			XResult = 25 + XLocation, YResult = 25 + YLocation;

		if(Splash.IsTop) {
			if(logoExists) {
				for(int X = XLocation; X < XResult; ++X) {
					for(int Y = YLocation; Y < YResult; ++Y) {
						Color cPix = Color(logoArray[Pixels].R, logoArray[Pixels].G, logoArray[Pixels].B, logoArray[Pixels].A);
						if(cPix != Color(0, 0, 0, 0))
							Splash.DrawPixel(X, Y, cPix);//125 45
							
						Pixels++;
					}
				}
			}
		}
		return true;
	}
}