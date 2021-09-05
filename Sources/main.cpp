#include "cheats.hpp"
#include <CTRPluginFramework.hpp>

//void    abort(void);

namespace CTRPluginFramework
{

	static MenuEntry *EntryWithHotkey(MenuEntry *entry, const Hotkey &hotkey)
    {
        if (entry != nullptr)
        {
            entry->Hotkeys += hotkey;
            entry->SetArg(new std::string(entry->Name()));
            entry->Name() += " " + hotkey.ToString();
            entry->Hotkeys.OnHotkeyChangeCallback([](MenuEntry *entry, int index)
            {
                std::string *name = reinterpret_cast<std::string *>(entry->GetArg());

                entry->Name() = *name + " " + entry->Hotkeys[0].ToString();
            });
        }

        return (entry);
    }

    static MenuEntry *EntryWithHotkey(MenuEntry *entry, const std::vector<Hotkey> &hotkeys)
    {
        if (entry != nullptr)
        {
            for (const Hotkey &hotkey : hotkeys)
                entry->Hotkeys += hotkey;
        }

        return (entry);
    }

	std::string GetRegionName(void) {
		switch(Process::GetTitleID()) {
			case TID_JPN: 
				c_Region = CurrRegion::JPN; 
			return "JPN";
			case TID_USA: 
				c_Region = CurrRegion::USA;
			return "USA";
			case TID_EUR: 
				c_Region = CurrRegion::EUR;
			return "EUR";
			case TID_KOR: 
				c_Region = CurrRegion::KOR;
			return "KOR";
			default: 
				c_Region = CurrRegion::INVALID;
			return "INVALID";
		}
	}

    int main()
    {

		PluginMenu *menu = new PluginMenu(Color::Yellow << "TBCP Plugin (" << GetRegionName() << ") " << Color::Silver << "By: FooFoo", MAJ, MIN, MUM, "TBCP Plugin Made by Foofoo\n\nyoutube.com/c/foofooanimations");

		menu->SynchronizeWithFrame(true);

		if(GetRegionName() == "INVALID") {
			Sleep(Seconds(5));
			MessageBox("Game not supported!\nreturning to the home menu...")();
			Process::ReturnToHomeMenu();
			return 0;
		}

		InitMenu(menu);

		if(!File::Exists("CTRPFData.bin")) {
		Keyboard keyboard(Color::Red << "WARNING: " << Color::White << "Don't open the plugin during\nloading screens and pause the game\nbefore opening the menu in a battle to\nprevent freezes!", { "Understood." });
		int choice = keyboard.Open();

		if(choice < 0)
			return choice;
		}
		else {
		OSD::Notify(Color::Red << "REMINDER: " << Color::White << "Dont't open the plugin during loading screens!");
		OSD::Notify("Also pause before opening the menu to prevent freezes!");
		}

        menu->Run();
		delete menu;
		return 0;
    }
}
