#include <CTRPluginFramework.hpp>
#include <vector>
#include "cheats.hpp"

namespace CTRPluginFramework {

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

/*This will load all the folders and entrys*/
    void InitMenu(PluginMenu *menu) {

	//Battle codes folder
		BATC = new MenuFolder("Battle Codes");
	//QOL Codes SubFolder
		QOLC = new MenuFolder("Item QOL", "Quality of Life.\n\nSo that items aren't such a pain to remember");
			QOLC->Append(new MenuEntry("Speed Up item Always on", SpeedUp, "Doesn't work in VS Mode")),
			QOLC->Append(new MenuEntry("Treasure Radar item Always on", TreasureRadar, "Doesn't work in VS Mode")),
			QOLC->Append(new MenuEntry("Rich Cat item Always on", RichCat, "Doesn't work in VS Mode")),
			QOLC->Append(new MenuEntry("Cat CPU item Always on", CatCPU, "Doesn't work in VS Mode")),
			QOLC->Append(new MenuEntry("Cat Jobs item Always on", CatJobs, "Doesn't work in VS Mode")),
			QOLC->Append(new MenuEntry("Sniper The Cat item Always on", SnipertheCat, "Doesn't work in VS Mode")),
		BATC->Append(QOLC);//put qol in battle
			BATC->Append(new MenuEntry("Infinite energy", InfiniteEnergy, "The cats never tire out")),
			BATC->Append(new MenuEntry("Cats instant recharge", CatsInstantRecharge, "Spam cats!!1!")),
			BATC->Append(new MenuEntry("Max battle money", MaxBattleMoney)),
			BATC->Append(new MenuEntry("Cannon always full", CannonAlwaysFull)),
			BATC->Append(new MenuEntry("Invincible cat base", InvincibleCatBase, "Never be defeated\nDoesn't work in VS Mode")),
			BATC->Append(new MenuEntry("Invincible cats", InvincibleCats, "Enable this BEFORE going into battle\nor else the 51st+ cat or something will die! :(")),
			BATC->Append(new MenuEntry("Enemy base has one health", EnemyBaseOneHealth, "Beware that this causes all the bosses to come out at once!\nDoesn't work in VS Mode")),
			BATC->Append(new MenuEntry("Special coordinate guy", SpecialCoordinateGuy, "The first unit you send teleports to the enemy base.\nDoesn't work in VS Mode")),
			BATC->Append(new MenuEntry("All effects on", effects, "Baby boom, items, you name it.")),
		menu->Append(BATC);
	//VS codes folder
		VERC = new MenuFolder("VS Mode Codes", "Friendship over.");
			VERC->Append(EntryWithHotkey(new MenuEntry("Max bonus spin", bonus), { Hotkey(Key::R, "Press to set it to maximum") })),
		menu->Append(VERC);
	//Team Codes Folder
		TEAMC = new MenuFolder("Advanced Team Management");
	    TEAMC->Append(new MenuEntry("Unit editor", nullptr, UnitEditor, "Sets any unit you want to team A's first slot, even ones you don't have! Go to \nhttps://to.to/7qY3N\nfor the IDs")),
		TEAMC->Append(new MenuEntry("Save Random to A", nullptr, SaveRandom, "Saves the random team that you get to Team A so that you won't have to worry about copying down your favorite selection manually")),	
		TEAMC->Append(new MenuEntry("Unlock all units", nullptr, unlock)),
		TEAMC->Append(EntryWithHotkey(new MenuEntry("Team Clipboard", NewerCopy, SetPaste, "Go to the team equip menu to use this\nBackups are stored in the \"team\" folder, where the plugin is.\nTap the \"KB\" button to load a team from file (if there are any.)\nThis won't work in the VS Mode Equip menu."), { Hotkey(Key::Start | Key::DPadUp, "Save team you're viewing"), Hotkey(Key::Start | Key::DPadDown, "Paste the selected team") })),
		menu->Append(TEAMC);
	///Other Cheats
		menu->Append(new MenuEntry("Infinite XP", InfiniteXP)),
		menu->Append(new MenuEntry("Infinite Cat Food", InfiniteCatFood)),
		menu->Append(new MenuEntry("Infinite Gold Tickets", InfiniteGoldTickets)),
		//menu->Append(EntryWithHotkey(new MenuEntry("Run SaveIcon.bin", LoadRGB, "put the file in the plugin folder"), { Hotkey(Key::Start | Key::DPadUp, "Start/Stop the image") }));
	}
}
