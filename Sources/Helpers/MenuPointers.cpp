#include <CTRPluginFramework.hpp>
#include "cheats.hpp"
#include "MenuPointers.hpp"

extern "C" void _ZN18CTRPluginFramework10SearchMenu12ProcessEventERSt6vectorINS_5EventESaIS2_EERNS_4TimeE();

namespace CTRPluginFramework {
	MenuFolder *BATC;
	MenuFolder *QOLC;
	MenuFolder *VERC;
	MenuFolder *TEAMC;


    void PatchProcess(FwkSettings &settings)
    {
        *(u32*)((u32)(_ZN18CTRPluginFramework10SearchMenu12ProcessEventERSt6vectorINS_5EventESaIS2_EERNS_4TimeE)
		+ 0xB4) = 0xE1A00000;

	    settings.AllowSearchEngine = true;
        settings.AllowActionReplay = true;
        settings.WaitTimeToBoot = Time(Seconds(5));
		settings.BackgroundMainColor = Colortop;
		settings.BackgroundSecondaryColor = Colortop;
		settings.BackgroundBorderColor = Color::LimeGreen;
        settings.MainTextColor = Color::Red;
        settings.WindowTitleColor = Color::Silver;
        settings.MenuSelectedItemColor = Color::Red;
        settings.MenuUnselectedItemColor = Color::Red;
        settings.Keyboard.Background = keycolor;
        settings.Keyboard.KeyBackground = keycolor;
        settings.Keyboard.KeyBackgroundPressed = Color::Orange;
        settings.Keyboard.KeyText = Color::Black;
        settings.Keyboard.KeyTextPressed = Color::Black;
        settings.Keyboard.Cursor = Color::Orange;
        settings.Keyboard.Input = Color::Black;
        settings.CustomKeyboard.BackgroundMain = Colorbot;
        settings.CustomKeyboard.BackgroundSecondary = Colorbot;
        settings.CustomKeyboard.BackgroundBorder = Color::Cyan;
        settings.CustomKeyboard.KeyBackground = keycolor;
        settings.CustomKeyboard.KeyBackgroundPressed = Color::Orange;
        settings.CustomKeyboard.KeyText = Color::Black;
        settings.CustomKeyboard.KeyTextPressed = Color::Black;
        settings.CustomKeyboard.ScrollBarBackground = Color::Blue;
        settings.CustomKeyboard.ScrollBarThumb = Color::Cyan;
    }
}