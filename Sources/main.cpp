#include "cheats.hpp"
#include "CTRPluginFramework.hpp"

void    abort(void);

namespace CTRPluginFramework
{
    static void    ToggleTouchscreenForceOn(void)
    {
        static u32 original = 0;
        static u32 *patchAddress = nullptr;

        if (patchAddress && original)
        {
            *patchAddress = original;
            return;
        }

        static const std::vector<u32> pattern =
        {
            0xE59F10C0, 0xE5840004, 0xE5841000, 0xE5DD0000,
            0xE5C40008, 0xE28DD03C, 0xE8BD80F0, 0xE5D51001,
            0xE1D400D4, 0xE3510003, 0x159F0034, 0x1A000003
        };

        Result  res;
        Handle  processHandle;
        s64     textTotalSize = 0;
        s64     startAddress = 0;
        u32 *   found;


        svcUnmapProcessMemory(CUR_PROCESS_HANDLE, 0x14000000, textTotalSize);
exit:
        svcCloseHandle(processHandle);
    }
#define Colortop 0x538453FF
#define Colorbot 0x33476FF
#define keycolor 0xFFBF02FF
    void    PatchProcess(FwkSettings &settings)
    {
        ToggleTouchscreenForceOn();
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

    #define MAJOR_VERSION       2 //Your plugin's version (You can modify the numbers)
    #define MINOR_VERSION       0
    #define REVISION_VERSION    5
    #define STRINGIFY(x)        #x
    #define TOSTRING(x)         STRINGIFY(x)
    #define STRING_VERSION      "[" TOSTRING(MAJOR_VERSION) "." TOSTRING(MINOR_VERSION) "." TOSTRING(REVISION_VERSION) "]"

	std::string     vert = "" << Color::Green << "";
	std::string     orange = "" << Color::Orange << "";
	std::string     rouge = "" << Color::Red << "";
	std::string     bleu = "" << Color::Blue << "";
	std::string     cyan = "" << Color::Cyan << "";
	std::string     turquoise = "" << Color::Turquoise << "";
	std::string     dogerblue = "" << Color::DodgerBlue << "";
	std::string 	noir = "" << Color::Black << "";
	std::string 	grisnoir = "" << Color::BlackGrey << "";
	std::string 	grissombre= "" << Color::DarkGrey << "";
	std::string 	bleuprofond = "" << Color::DeepSkyBlue << "";
	std::string 	grispale = "" << Color::DimGrey << "";
	std::string 	gainsboro= "" << Color::Gainsboro << "";
	std::string 	vertforet = "" << Color::ForestGreen << "";
	std::string 	vertcitron = "" << Color::LimeGreen << "";
	std::string 	Magenta = "" << Color::Magenta << "";
	std::string 	argent = "" << Color::Silver << "";
	std::string 	bleuciel = "" << Color::SkyBlue << "";
	std::string 	jaune = "" << Color::Yellow << "";
	std::string 	marron = "" << Color::Brown << "";

  const std::string about = u8"" STRING_VERSION "\n\n" \
        u8"TBCP Plugin Made by Foofoo\n"
		u8"youtube.com/c/foofooanimations\n";
	
	static MenuEntry *AddArg(void *arg, MenuEntry *entry)
    {
        if(entry != nullptr)
            entry->SetArg(arg);
        return (entry);
    }

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

    void    InitMenu(PluginMenu *menu)
    {        
	    std::string     vert = "" << Color::Green << "";
	    std::string     orange = "" << Color::Orange << "";
	    std::string     rouge = "" << Color::Red << "";
	    std::string     bleu = "" << Color::Blue << "";
	    std::string     cyan = "" << CTRPluginFramework::Color::Cyan << "";
	    std::string     turquoise = "" << Color::Turquoise << "";
	    std::string     dogerblue = "" << Color::DodgerBlue << "";
	    std::string 	noir = "" << Color::Black << "";
	    std::string 	grisnoir = "" << Color::BlackGrey << "";
	    std::string 	grissombre= "" << Color::DarkGrey << "";
	    std::string 	bleuprofond = "" << Color::DeepSkyBlue << "";
	    std::string 	grispale = "" << Color::DimGrey << "";
	    std::string 	gainsboro= "" << Color::Gainsboro << "";
	    std::string 	vertforet = "" << Color::ForestGreen << "";
	    std::string 	vertcitron = "" << Color::LimeGreen << "";
	    std::string 	Magenta = "" << Color::Magenta << "";
	    std::string 	argent = "" << Color::Silver << "";
	    std::string 	bleuciel = "" << Color::SkyBlue << "";
	    std::string 	jaune = "" << Color::Yellow << "";
	    std::string 	marron = "" << Color::Brown << "";
        	
	MenuFolder *folder = nullptr; //pointer to first folder
	MenuFolder *subfolder = nullptr; //pointer to second folder

	/*folder start*/
	folder = new MenuFolder("Battle Cheats"); //assign a new menufolder to the 'folder'
	/*subfolder start*/
	subfolder = new MenuFolder("Item QOL", "Quality of Life.\n\nSo that items aren't such a pain to remember"); //assign a new menufolder to the 'subfolder'
	subfolder->Append(new MenuEntry(rouge + "Speed Up item Always on", SpeedUp, "Doesn't work in VS Mode")), //assign a new menuentry to the 'subfolder'
	subfolder->Append(new MenuEntry(rouge + "Treasure Radar item Always on", TreasureRadar, "Doesn't work in VS Mode")),
	subfolder->Append(new MenuEntry(rouge + "Rich Cat item Always on", RichCat, "Doesn't work in VS Mode")),
	subfolder->Append(new MenuEntry(rouge + "Cat CPU item Always on", CatCPU, "Doesn't work in VS Mode")),
	subfolder->Append(new MenuEntry(rouge + "Cat Jobs item Always on", CatJobs, "Doesn't work in VS Mode")),
	subfolder->Append(new MenuEntry(rouge + "Sniper The Cat item Always on", SnipertheCat, "Doesn't work in VS Mode")),
	folder->Append(subfolder);
	/*subfolder end*/
	folder->Append(new MenuEntry(rouge + "Infinite energy", InfiniteEnergy, "The cats never tire out")),
	folder->Append(new MenuEntry(rouge + "Cats instant recharge", CatsInstantRecharge, "Spam cats!!1!")),
	folder->Append(new MenuEntry(rouge + "Max battle money", MaxBattleMoney, "")),
	folder->Append(new MenuEntry(rouge + "Cannon always full", CannonAlwaysFull, "")),
	folder->Append(new MenuEntry(rouge + "Invincible cat base", InvincibleCatBase, "Never be defeated\nDoesn't work in VS Mode")),
	folder->Append(new MenuEntry(rouge + "Invincible Cats", InvincibleCats, "Enable this BEFORE going into battle\nor else the 51st+ cat or something will die! :(")),
	folder->Append(new MenuEntry(rouge + "Enemy base has one health", EnemyBaseOneHealth, "Beware that this causes all the bosses to come out at once!\nDoesn't work in VS Mode")),
	folder->Append(new MenuEntry(rouge + "Special coordinate guy", SpecialCoordinateGuy, "The first unit you send teleports to the enemy base.\nDoesn't work in VS Mode")),
	menu->Append(folder);

	
	
	folder = new MenuFolder(rouge + "Advanced Team Management");
	folder->Append(new MenuEntry(rouge + "Unit editor", nullptr, UnitEditor, "Sets any unit you want to team A's first slot, even ones you don't have! Go to \nhttps://github.com/FoofooTheGuy/Battle-Cats-Unit-IDs/blob/main/ID%20List\nfor the IDs")),
	folder->Append(new MenuEntry(rouge + "Save Random to A", nullptr, SaveRandom, "Saves the random team that you get to Team A so that you won't have to worry about copying down your favorite selection manually")),
	folder->Append(EntryWithHotkey(new MenuEntry(rouge + "Copy", NewCopy, "Go to the team equip menus to use this"), { Hotkey(Key::Start | Key::DPadUp, "Copy team you're viewing"), Hotkey(Key::Start | Key::DPadDown, "Paste the copied team") })),
	//folder->Append(new MenuEntry(rouge + "Backup options", nullptr, BackupOptions, "Saves any team to TBCP/Team")),
	//folder->Append(new MenuEntry(rouge + "Restore options", nullptr, RestoreOptions, "Saves any team to TBCP/Team")),
	menu->Append(folder);
		
		
	menu->Append(new MenuEntry(rouge + "Infinite XP", InfiniteXP, "")),
	menu->Append(new MenuEntry(rouge + "Infinite Cat Food", InfiniteCatFood, "")),
	menu->Append(new MenuEntry(rouge + "Infinite Gold Tickets", InfiniteGoldTickets, ""));
		
		
	}

    static bool IsGameVersionSupported(void)
    {

        if (Process::GetTitleID() == 0x000400000018BC00 || Process::GetTitleID() == 0x000400000018F500)
            return true;

        return false;
    }

    int main()
    {
		
        if (!IsGameVersionSupported()) //thi s doesnt even work
        {
            MessageBox ("Bruh... this isn't The Battle Cats POP! USA")();
            return -1;
        }
	
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
		
        std::string     namenote = "" << Color::Yellow << "TBCP Plugin ";
        std::string     authornote = "" << Color::Silver << "By: FooFoo";

        PluginMenu *menu = new PluginMenu(namenote + authornote, MAJOR_VERSION, MINOR_VERSION, REVISION_VERSION, about);

        menu->SynchronizeWithFrame(true);

        InitMenu(menu);

        menu->Run();

        return (0);
    };

}