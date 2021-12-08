#include "cheats.hpp"
#include "IDList.hpp"
#include <vector>
#include <string>

namespace CTRPluginFramework
{
	bool toupperstr(std::string &str)
	{
		for (char &i : str)
			i = toupper(i);

		return true;
	}
	
	std::vector<std::string> UnitList
	{
		"Empty",
		"Basic Cat",
		"Tank Cat",
		"Axe Cat",
		"Gross Cat",
		"Cow Cat",
		"Bird Cat",
		"Fish Cat",
		"Lizard Cat",
		"Titan Cat",
		"Actress Cat",
		"KungFu Cat",
		"Mr.",
		"Bondage Cat",
		"Dom Cat",
		"Cats in a Box",
		"Panties Cat",
		"Moneko",
		"Tricycle Cat",
		"Ninja Cat",
		"Zombie Cat",
		"Samurai Cat",
		"Sumo Cat",
		"Boogie Cat",
		"Skirt Cat",
		"Valkyrie Cat",
		"Bahamut Cat", //THESE // THINGS MEANS IT SKIPS OVER INVALID ONES AFTER IT
		"Bodhi Cat",
		"Delinquent Cat",
		"Hip Hop Cat",
		"Kotatsu Cat",
		"Nekoluga",
		"Nerd Cat",
		"Swimmer Cat",
		"Pogo Cat",
		"Wheel Cat",
		"Apple Cat",
		"Bath Cat",
		"Salon Cat",
		"Ice Cat",
		"Cat Mecha",
		"Ogre Cat",
		"Jurassic Cat",//
		"Viking Cat",
		"Pirate Cat",
		"Thief Cat",
		"Bishop Cat",
		"Mystic Cat",
		"Shaman Cat",//
		"Witch Cat",
		"Archer Cat",
		"Marader Cat",
		"Swordscat",
		"Baby Cat",
		"Bronze Cat",
		"Sushi Cat",//
		"Sports Cat",//
		"Salerycat",
		"Sanada Yukimura",
		"Maeda Keiji",
		"Oda Nobunaga",
		"Reindeer Cat",
		"Windy",
		"Thundia",//
		"Space Cat",
		"Adult Cat",
		"Evil Cat",
		"Doll Cats",//
		"Sodom",
		"Megidora",
		"Vars",
		"Kamukura",
		"Raiden",
		"Jumprope Cats",//
		"Crazed Cat",
		"Crazed Tank Cat",
		"Crazed Axe Cat",
		"Crazed Legs",
		"Crazed Cow Cat",
		"Crazed Bird Cat",
		"Crazed Fish Cat",
		"Crazed Lizard Cat",
		"Crazed Titan Cat",
		"Maiden Cat",//
		"Singer Cat",
		"Koi Cat",
		"Kuu",
		"Kai",
		"Coppermine",//
		"Madam Bride",//
		"Vacation Queen",
		"Bean Cats",
		"Date Masamune",
		"Takeda Shingen",
		"Clockwork Cat",
		"Flower Cat",
		"Vengeful Cat",
		"Gold Cat",
		"Ururun Wolf",
		"Neneko",
		"KungFu Cat G",//
		"Urashimataro",
		"Grateful Crane",
		"Momotaro",
		"Kasa Jizo",
		"Kaguya-hime",//whoo its over
	};
	
	Keyboard *kb = new Keyboard("Enter ID:");
	Keyboard *optKb = new Keyboard("Choose option:");
	//Region::AutoRegion(u32 jpn, u32 usa, u32 eur, u32 kor)
	void SpeedUp(MenuEntry* entry) {
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	static const u32 Item = Region::AutoRegion(0x8131634, 0x81316D4, 0x81316D4, 0x81316D4);
		Process::Write32(0x8105D4C, 0x64);
		u8 val;
		if(Process::Read8(IsOnline, val) && val == 1)//if isnt in vs
		Process::Write8(Item, 1);
		else
		Process::Write8(Item, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Speed Up will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(Item, 0);
	OSD::Notify(Color::White << "Speed Up " << Color::Red << "DISABLED!");
	}
	}

	void TreasureRadar(MenuEntry* entry) {
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	static const u32 Item = Region::AutoRegion(0x8131635, 0x81316D5, 0x81316D5, 0x81316D5);
		Process::Write32(0x8105D50, 0x64);
		u8 val;
		if(Process::Read8(IsOnline, val) && val == 1)
		Process::Write8(Item, 1);
		else
		Process::Write8(Item, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Treasure Radar will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(Item, 0);
	OSD::Notify(Color::White << "Treasure Radar " << Color::Red << "DISABLED!");
	}
	}

	void RichCat(MenuEntry* entry) {
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	static const u32 Item = Region::AutoRegion(0x8131636, 0x81316D6, 0x81316D6, 0x81316D6);
		Process::Write32(0x8105D54, 0x64);
		u8 val;
		if(Process::Read8(IsOnline, val) && val == 1)
		Process::Write8(Item, 1);
		else
		Process::Write8(Item, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Rich Cat will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(Item, 0);
	OSD::Notify(Color::White << "Rich Cat " << Color::Red << "DISABLED!");
	}
	}

	void CatCPU(MenuEntry* entry) {
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	static const u32 Item = Region::AutoRegion(0x8131637, 0x81316D7, 0x81316D7, 0x81316D7);
		Process::Write32(0x8105D58, 0x64);
		u8 val;
		if(Process::Read8(IsOnline, val) && val == 1)
		Process::Write8(Item, 1);
		else
		Process::Write8(Item, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Cat CPU will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(Item, 0);
	OSD::Notify(Color::White << "Cat CPU " << Color::Red << "DISABLED!");
	}
	}

	void CatJobs(MenuEntry* entry) {
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	static const u32 Item = Region::AutoRegion(0x8131638, 0x81316D8, 0x81316D8, 0x81316D8);
		Process::Write32(0x8105D5C, 0x64);
		u8 val;
		if(Process::Read8(IsOnline, val) && val == 1)
		Process::Write8(Item, 1);
		else
		Process::Write8(Item, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Cat Jobs will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(Item, 0);
	OSD::Notify(Color::White << "Cat Jobs " << Color::Red << "DISABLED!");
	}
	}
	
	void SnipertheCat(MenuEntry* entry) {
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	static const u32 Item = Region::AutoRegion(0x8131639, 0x81316D9, 0x81316D9, 0x81316D9);
		Process::Write32(0x8105D60, 0x64);
		u8 val;
		if(Process::Read8(IsOnline, val) && val == 1)
		Process::Write8(Item, 1);
		else
		Process::Write8(Item, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Sniper the Cat will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(Item, 0);
	OSD::Notify(Color::White << "Sniper the Cat " << Color::Red << "DISABLED!");
	}
	}

  void InfiniteEnergy(MenuEntry* entry) {
      Process::Write32(0x8103B90, 0xFFFFFFF);
  }
  
  void CatsInstantRecharge(MenuEntry* entry) {
  static const u32 addr = Region::AutoRegion(0x813176C, 0x813180C, 0x813180C, 0x813180C);
    for(int i = 0; i < 10; i++) {
      Process::Write32(addr + (i * 0x4), 0);
    }
  }
  
  void InvincibleCats(MenuEntry* entry) {
  static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
  if(entry->WasJustActivated())
    OSD::Notify("Your cats will never die!");
	u8 val;
	if(Process::Read8(IsOnline, val) && val == 1) {
      for(int i = 0; i < 50; i++) {
        Process::Write32(0x8109A40+ (i * 0x124), 0xFFFFFFF);
      }
	}
  }
  
  void MaxBattleMoney(MenuEntry* entry) {
       Process::Write32(0x8109624, 0xFFFFFFF);
  }
  
  void CannonAlwaysFull(MenuEntry* entry) {
       Process::Write32(0x810992C, 0);
  }

  void InvincibleCatBase(MenuEntry* entry) {
  static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
  if(entry->WasJustActivated())
    OSD::Notify("You are now invincible!");

	u8 val;
	if(Process::Read8(IsOnline, val) && val == 1) {
		Process::Write32(0x810991C, 0x10D88);
	}
  }
  
  void EnemyBaseOneHealth(MenuEntry *entry) {
  static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	u8 val;
	if(Process::Read8(IsOnline, val) && val != 22) {
     Process::Write32(0x810D348, 0x1);
   }
  }
   
  void SpecialCoordinateGuy(MenuEntry *entry) {
  static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	u8 val;
	if(Process::Read8(IsOnline, val) && val == 1) {
		Process::Write32(0x8109A2C, 0x800);
	}
  }

    void GetNamecb(Keyboard &k, KeyboardEvent &e)
    {
        std::string s = k.GetInput();
        k.GetMessage() = "Enter Unit ID:\n\n(The displayed name is the first class one)\n\n\n" << IDList::GetName(s != "" ? std::stoi(s, nullptr, 16) : 0);
    }

	std::vector<std::string> NameEdit
	{
		"Enter ID",
		"Choose From List",
	};

    void UnitEditor(MenuEntry *entry) {
	static const u32 SaveLoad = Region::AutoRegion(0x887D798, 0x8879838, 0x8879838, 0x8879838);
	std::string namevalue;
    u8 ID;
	u32 sav;
	Process::Read32(SaveLoad, sav);
    optKb->Populate(NameEdit);
	switch (optKb->Open())
	{
	case 0:
		if (SetUpKB("Enter Unit ID:\n\n(The displayed name is the first class one)", true, 2, ID, ID, GetNamecb) && ID != 0)
		{
			if (Process::Write32(0x8103BEC, 0)) {
			Process::Write8(0x8103BEC, ID);
			}
			if(sav == 0) {
			MessageBox("Please select a save file first!")();
			}
			else {
			OSD::Notify(Color::White << "Unit edit " << Color::Green << "SUCCESSFUL!"); 
			}
		}
		break;
	case 1:
		optKb->Populate(UnitList);
			switch (optKb->Open())
		{
			case 0://EMPY
			Process::Write32(0x8103BEC, 0xFFFFFFFF);
			break;
			case 1://basic
			Process::Write32(0x8103BEC, 0x2);
			break;
			case 2://tank
			Process::Write32(0x8103BEC, 0x3);
			break;
			case 3://axe
			Process::Write32(0x8103BEC, 0x4);
			break;
			case 4://gross
			Process::Write32(0x8103BEC, 0x5);
			break;
			case 5://cow
			Process::Write32(0x8103BEC, 0x6);
			break;
			case 6://bird
			Process::Write32(0x8103BEC, 0x7);
			break;
			case 7://fish
			Process::Write32(0x8103BEC, 0x8);
			break;
			case 8://lizard
			Process::Write32(0x8103BEC, 0x9);
			break;
			case 9://titan
			Process::Write32(0x8103BEC, 0xA);
			break;
			case 10://actress
			Process::Write8(0x8103BEC, 0xB);
			break;
			case 11://kung fu
			Process::Write8(0x8103BEC, 0xC);
			break;
			case 12://mr
			Process::Write32(0x8103BEC, 0xD);
			break;
			case 13:
			Process::Write32(0x8103BEC, 0xE);
			break;
			case 14:
			Process::Write32(0x8103BEC, 0xF);
			break;
			case 15:
			Process::Write32(0x8103BEC, 0x10);
			break;
			case 16:
			Process::Write32(0x8103BEC, 0x11);
			break;
			case 17:
			Process::Write32(0x8103BEC, 0x12);
			break;
			case 18:
			Process::Write32(0x8103BEC, 0x13);
			break;
			case 19:
			Process::Write32(0x8103BEC, 0x14);
			break;
			case 20:
			Process::Write32(0x8103BEC, 0x15);
			break;
			case 21:
			Process::Write32(0x8103BEC, 0x16);
			break;
			case 22:
			Process::Write32(0x8103BEC, 0x17);
			break;
			case 23:
			Process::Write32(0x8103BEC, 0x18);
			break;
			case 24:
			Process::Write32(0x8103BEC, 0x19);
			break;
			case 25:
			Process::Write32(0x8103BEC, 0x1A);
			break;
			case 26://BAHAMUT
			Process::Write8(0x8103BEC, 0x1B);
			break;
			case 27://BODHI
			Process::Write32(0x8103BEC, 0x20);
			break;
			case 28:
			Process::Write32(0x8103BEC, 0x21);
			break;
			case 29:
			Process::Write32(0x8103BEC, 0x22);
			break;
			case 30:
			Process::Write32(0x8103BEC, 0x23);
			break;
			case 31:
			Process::Write32(0x8103BEC, 0x24);
			break;
			case 32:
			Process::Write32(0x8103BEC, 0x25);
			break;
			case 33:
			Process::Write32(0x8103BEC, 0x26);
			break;
			case 34:
			Process::Write32(0x8103BEC, 0x27);
			break;
			case 35:
			Process::Write32(0x8103BEC, 0x28);
			break;
			case 36:
			Process::Write32(0x8103BEC, 0x29);
			break;
			case 37:
			Process::Write32(0x8103BEC, 0x2A);
			break;
			case 38:
			Process::Write32(0x8103BEC, 0x2B);
			break;
			case 39:
			Process::Write32(0x8103BEC, 0x2C);
			break;
			case 40:
			Process::Write32(0x8103BEC, 0x2D);
			break;
			case 41://OGRE
			Process::Write32(0x8103BEC, 0x2E);
			break;
			case 42://JURASSIC
			Process::Write32(0x8103BEC, 0x30);
			break;
			case 43:
			Process::Write32(0x8103BEC, 0x31);
			break;
			case 44:
			Process::Write32(0x8103BEC, 0x32);
			break;
			case 45:
			Process::Write32(0x8103BEC, 0x33);
			break;
			case 46:
			Process::Write32(0x8103BEC, 0x34);
			break;
			case 47:
			Process::Write32(0x8103BEC, 0x35);
			break;
			case 48://SHAMON
			Process::Write32(0x8103BEC, 0x36);
			break;
			case 49://WITCH
			Process::Write32(0x8103BEC, 0x39);
			break;
			case 50:
			Process::Write32(0x8103BEC, 0x3A);
			break;
			case 51:
			Process::Write32(0x8103BEC, 0x3B);
			break;
			case 52:
			Process::Write32(0x8103BEC, 0x3C);
			break;
			case 53:
			Process::Write32(0x8103BEC, 0x3D);
			break;
			case 54:
			Process::Write32(0x8103BEC, 0x3E);
			break;
			case 55://SUSHI
			Process::Write32(0x8103BEC, 0x3F);
			break;
			case 56://SPORTS
			Process::Write32(0x8103BEC, 0x40);
			break;
			case 57://SALARY
			Process::Write32(0x8103BEC, 0x48);
			break;
			case 58:
			Process::Write32(0x8103BEC, 0x49);
			break;
			case 59:
			Process::Write32(0x8103BEC, 0x4A);
			break;
			case 60:
			Process::Write32(0x8103BEC, 0x4B);
			break;
			case 61:
			Process::Write32(0x8103BEC, 0x4C);
			break;
			case 62:
			Process::Write32(0x8103BEC, 0x4D);
			break;
			case 63://THUNDIA
			Process::Write32(0x8103BEC, 0x4E);
			break;
			case 64://SPACE
			Process::Write32(0x8103BEC, 0x50);
			break;
			case 65:
			Process::Write32(0x8103BEC, 0x51);
			break;
			case 66:
			Process::Write32(0x8103BEC, 0x52);
			break;
			case 67://DOLL
			Process::Write32(0x8103BEC, 0x53);
			break;
			case 68://SODOM
			Process::Write32(0x8103BEC, 0x55);
			break;
			case 69:
			Process::Write32(0x8103BEC, 0x56);
			break;
			case 70:
			Process::Write32(0x8103BEC, 0x57);
			break;
			case 71:
			Process::Write32(0x8103BEC, 0x58);
			break;
			case 72:
			Process::Write32(0x8103BEC, 0x59);
			break;
			case 73://JUMPROPE
			Process::Write32(0x8103BEC, 0x5A);
			break;
			case 74://CRAZED CAT
			Process::Write32(0x8103BEC, 0x5D);
			break;
			case 75:
			Process::Write32(0x8103BEC, 0x5E);
			break;
			case 76:
			Process::Write32(0x8103BEC, 0x5F);
			break;
			case 77:
			Process::Write32(0x8103BEC, 0x60);
			break;
			case 78:
			Process::Write32(0x8103BEC, 0x61);
			break;
			case 79:
			Process::Write32(0x8103BEC, 0x62);
			break;
			case 80:
			Process::Write32(0x8103BEC, 0x63);
			break;
			case 81:
			Process::Write32(0x8103BEC, 0x64);
			break;
			case 82:
			Process::Write32(0x8103BEC, 0x65);
			break;
			case 83://MAIDEN
			Process::Write32(0x8103BEC, 0x66);
			break;
			case 84://SINGER
			Process::Write32(0x8103BEC, 0x69);
			break;
			case 85:
			Process::Write32(0x8103BEC, 0x6A);
			break;
			case 86:
			Process::Write32(0x8103BEC, 0x6B);
			break;
			case 87:
			Process::Write32(0x8103BEC, 0x6C);
			break;
			case 88://COPPERMINE
			Process::Write32(0x8103BEC, 0x6D);
			break;
			case 89://MADAM BRIDE
			Process::Write32(0x8103BEC, 0x6F);
			break;
			case 90://VACATION QUEEN
			Process::Write32(0x8103BEC, 0x7C);
			break;
			case 91:
			Process::Write32(0x8103BEC, 0x7D);
			break;
			case 92:
			Process::Write32(0x8103BEC, 0x7E);
			break;
			case 93:
			Process::Write32(0x8103BEC, 0x7F);
			break;
			case 94:
			Process::Write32(0x8103BEC, 0x80);
			break;
			case 95:
			Process::Write32(0x8103BEC, 0x81);
			break;
			case 96:
			Process::Write32(0x8103BEC, 0x82);
			break;
			case 97:
			Process::Write32(0x8103BEC, 0x83);
			break;
			case 98:
			Process::Write32(0x8103BEC, 0x84);
			break;
			case 99:
			Process::Write32(0x8103BEC, 0x85);
			break;
			case 100://KUNGFU CAT G
			Process::Write32(0x8103BEC, 0x86);
			break;
			case 101://Urashimataro
			Process::Write32(0x8103BEC, 0x88);
			break;
			case 102:
			Process::Write32(0x8103BEC, 0x89);
			break;
			case 103:
			Process::Write32(0x8103BEC, 0x8A);
			break;
			case 104:
			Process::Write32(0x8103BEC, 0x8B);
			break;
			case 105:
			Process::Write32(0x8103BEC, 0x8C);
			break;
		}
			if(sav == 0) {
			MessageBox("Please select a save file first!")();
			}
			else {
			OSD::Notify(Color::White << "Unit edit " << Color::Green << "SUCCESSFUL!"); 
			}
		break;
    }
	}

/*std::string decToHex(int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[100];
 
    // counter for hexadecimal number array
    int i = 0;
    while (n != 0) {
        // temporary variable to store remainder
        int temp = 0;
 
        // storing remainder in temp variable.
        temp = n % 16;
 
        // check if temp < 10
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
 
    // converting char to string
    std::string s;
    for (int j = i - 1; j >= 0; j--) {
        s = s + hexaDeciNum[j];
    }
    return s;
}*/

	void StringVectorToString(std::string &Str, std::vector<std::string> &Vec, bool ClearVector = false)
	{
		for (const std::string &i : Vec)
			Str.append(i);

		if (ClearVector) Vec.clear(); //Free Memory after getting Vector Data.
	}
	
	bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
	}

std::vector<std::string> teamVec;
	extern bool logoExists;
	extern c_RGBA* logoArray;
	bool OSD_SaveIcon(const Screen &Splash);

	void NewerCopy(MenuEntry *entry) {
	static const u32 Isteam = Region::AutoRegion(0x8052868, 0x806BE88, 0x806BE88, 0x806BE88);
	static const u32 WhTeam = Region::AutoRegion(0x8143F70, 0x8144010, 0x8144010, 0x8144010);
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	std::string teamtxt;
	u8 team;
	u32 val;
	if(entry->WasJustActivated()) {
		if (Directory::IsExists(TeamDir) == 0)
		Directory::Create(TeamDir);
	}
	if(Controller::IsKeysPressed(entry->Hotkeys[0].GetKeys())) {//copy
		if(*(u8 *)IsOnline != 0x1){
		OSD::Notify(Color::Red << "You can't use that here!");
		return;
		}
		if(*(u8 *)Isteam != 0x4C){
		OSD::Notify(Color::Red << "You can't use that here!");
		return;
		}
		else {
		if(Process::Read8(WhTeam, team)) //find your menu
		{

			const Screen& TopScreen = OSD::GetTopScreen();
			File file("SaveIcon.bin", File::READ);
			if(!file.IsOpen()) {
				OSD::Notify("SaveIcon.bin missing!");
				logoExists = false;
			}
			else {
				logoArray = new c_RGBA[file.GetSize() / sizeof(c_RGBA)];
				file.Read(logoArray, file.GetSize());
				file.Close();
			}

			if(*(u8 *)WhTeam > 4) {//Random equip menu
			OSD::Notify(Color::Red << "You can't use that here!");
			return;
			}
			teamVec.clear();
			Sleep(Milliseconds(100));
			if ((MessageBox(Color::White << "Do you want to name the file?", DialogType::DialogYesNo))())
			{
				std::string SaveName;
				Sleep(Milliseconds(200));
				Keyboard keyboard("Name the file");
				keyboard.SetMaxLength(30);
				if (keyboard.Open(SaveName) != -1) {
					OSD::Run(OSD_SaveIcon);
					Sleep(Seconds(0.1f));

					File SaveFile;
					File::Open(SaveFile,"teams/"+SaveName+".bin", File::RWC);
					SaveFile.Dump(0x8103BEC+(team*40), 40);
						std::string name = SaveFile.GetName();
						OSD::Notify(Color::White << "Saved team as " << Color(BubbleGum) << name);
						replace(name, ".bin", "");
						teamVec.push_back(name);
					SaveFile.Close();
					OSD::Stop(OSD_SaveIcon);
					delete[] logoArray;
				}
				else { OSD::Notify("Aborted.");
				return; }
			}
			else {
			OSD::Run(OSD_SaveIcon);
			teamVec.push_back(Utils::Format("Team %X", team+0xA));
			StringVectorToString(teamtxt, teamVec, false);
				File SaveFile;
				File::Open(SaveFile,"teams/"+teamtxt+".bin", File::RWC);
				SaveFile.Dump(0x8103BEC+(team*40), 40);
				std::string name = SaveFile.GetName();
				OSD::Notify(Color::White << "Saved team as " << Color(BubbleGum) << name);
				SaveFile.Close();
			OSD::Stop(OSD_SaveIcon);
			delete[] logoArray;
			}
		}
		}
	}
		if(Controller::IsKeysPressed(entry->Hotkeys[1].GetKeys())) {//paste

			const Screen& TopScreen = OSD::GetTopScreen();
			File file("SaveIcon.bin", File::READ);
			if(!file.IsOpen()) {
				OSD::Notify("SaveIcon.bin missing!");
				logoExists = false;
			}
			else {
				logoArray = new c_RGBA[file.GetSize() / sizeof(c_RGBA)];
				file.Read(logoArray, file.GetSize());
				file.Close();
			}

		if(*(u8 *)IsOnline != 0x1){
		OSD::Notify(Color::Red << "You can't use that here!");
		return;
		}
		if(*(u8 *)WhTeam > 4) {//Random equip menu
		OSD::Notify(Color::Red << "You can't use that here!");
		return;
		}
			StringVectorToString(teamtxt, teamVec, false);
			if (File::Exists("teams/"+teamtxt+".bin") == 0) {
			OSD::Notify(Color::Red << "No team file is loaded.");
			return;
			}
		if(*(u8 *)Isteam != 0x4C){
		OSD::Notify(Color::Red << "You can't use that here!");
		return;
		}
			else {
				if(teamtxt != "") {
					if(Process::Read8(WhTeam, team))// && team == 0) //Team A equip menu
					{
						OSD::Run(OSD_SaveIcon);
						Directory SaveDir;
						File SaveFile;
						Directory::Open(SaveDir,TeamDir, true);
						SaveDir.OpenFile(SaveFile,teamtxt+".bin", File::READ);
						SaveFile.Inject(0x8103BEC+(team*40), 40);

						OSD::Notify(Color(BubbleGum) << teamtxt+".bin" << Color::White << " Pasted!");
						OSD::Stop(OSD_SaveIcon);
						delete[] logoArray;
					}
				}
				else OSD::Notify(Color::Red << "No team selected!");
			}
		}
		if (!entry->IsActivated())
			teamVec.clear();
	}
	
	void SetPaste(MenuEntry *entry) {
        std::vector<std::string> FileList;
		if (Directory::IsExists(TeamDir) == 0)
			Directory::Create(TeamDir);
        Directory SaveDir;
      
        Directory::Open(SaveDir,TeamDir, true);
        SaveDir.ListFiles(FileList, ".bin");
        Keyboard keyboard("Select a team to load:", FileList);
        int FileChoice = keyboard.Open();

        if(FileChoice < 0)
            return;

        Sleep(Seconds(0.1f));
        File SaveFile;    
        SaveDir.OpenFile(SaveFile, FileList[FileChoice], File::READ);
		std::string name = SaveFile.GetName();
		replace(name, ".bin", "");
		teamVec.clear();
		teamVec.push_back(name);
		MessageBox(Color(BubbleGum) << name+".bin" << Color::White << " is selected!")();
	}

	void SaveRandom(MenuEntry *entry) {
	static const u32 IsBattle = Region::AutoRegion(0x2A9E84, 0x2B81A4, 0x2B81A4, 0x2B81A4);
	static const u32 WhTeam = Region::AutoRegion(0x8143F70, 0x8144010, 0x8144010, 0x8144010);
	u32 val;
			if(*(u8 *)WhTeam != 0x5){
			MessageBox("Function Failed!\nRandom Team not loaded?\nYou must be in a battle to use this!")();
			return;
			}
				switch(*(u32 *)IsBattle) {
			case 0x3F000000:
			for (int i = 0; i < 40; i+=4)
			{
				if (Process::Read32((0x8103CB4 + i), val))
				{
					Process::Write32((0x8103BEC + i), val);
				}
			}
			MessageBox(Color::White << "Random Team saved to Team A!")();
			break;
			default: {
			MessageBox("Function Failed!\nRandom Team not loaded?\nYou must be in a battle to use this!")();
			} break;
		}
	}
 
	void InfiniteXP(MenuEntry* entry)
	{
		Process::Write32(0x8103B88, 0xFFFFFFF);
	}

	void InfiniteCatFood(MenuEntry* entry) 
	{
		Process::Write32(0x8103B80, 0xFFFFFFF);
	}

	void InfiniteGoldTickets(MenuEntry* entry)
	{
		static const u32 addr = Region::AutoRegion(0x8133220, 0x81332C4, 0x81332C4, 0x81332C4);
		Process::Write32(addr, 0xFFFFFFF);
	}

 bool SetUpKB(std::string msg, bool hex, const int length, u8 &output, u8 def, GetNameCallback cb)
 {
	 kb->GetMessage() = msg;
	 kb->IsHexadecimal(hex);
	 kb->SetMaxLength(length);
	 kb->OnKeyboardEvent(cb);
	 return kb->Open(output, def) == 0;

 }

 void unlock(MenuEntry* entry)
 {
 static const u32 SaveLoad = Region::AutoRegion(0x887D798, 0x8879838, 0x8879838, 0x8879838);
	u32 sav;
	Process::Read32(SaveLoad, sav);
	if(sav == 0) {
	MessageBox("Please select a save file first!")();
	return;
	}
	else {
    for(int i = 0; i < 26; i++) {
      Process::Write32(0x8105664 + (i * 0x4), 1);
    }
	for(int i = 0; i < 15; i++) {
      Process::Write32(0x81056DC + (i * 0x4), 1);
    }
	for(int i = 0; i < 7; i++) {
      Process::Write32(0x810571C + (i * 0x4), 1);
    }
	for(int i = 0; i < 7; i++) {
      Process::Write32(0x8105740 + (i * 0x4), 1);
    }
	  Process::Write32(0x8105760, 1);
	for(int i = 0; i < 7; i++) {
      Process::Write32(0x810577C + (i * 0x4), 1);
    }
	for(int i = 0; i < 3; i++) {
      Process::Write32(0x810579C + (i * 0x4), 1);
    }
	  Process::Write32(0x81057A8, 1);
	for(int i = 0; i < 6; i++) {
      Process::Write32(0x81057B0 + (i * 0x4), 1);
    }
	for(int i = 0; i < 10; i++) {
      Process::Write32(0x81057D0 + (i * 0x4), 1);
    }
	for(int i = 0; i < 5; i++) {
      Process::Write32(0x8105800 + (i * 0x4), 1);
    }
	for(int i = 0; i < 5; i++) {
      Process::Write32(0x8105800 + (i * 0x4), 1);
    }
	  Process::Write32(0x8105818, 1);
	for(int i = 0; i < 11; i++) {
      Process::Write32(0x810584C + (i * 0x4), 1);
    }
	for(int i = 0; i < 5; i++) {
      Process::Write32(0x810587C + (i * 0x4), 1);
    }
	MessageBox(Color::White << "Unlocked.")();
	}
 }

	void effects(MenuEntry* entry) {
	static const u32 IsOnline = Region::AutoRegion(0x29A66C, 0x2A566C, 0x2A566C, 0x2A566C);
	static const u32 addr = Region::AutoRegion(0x813160C, 0x81316AC, 0x81316AC, 0x81316AC);
	static const u32 boom = Region::AutoRegion(0x8132E04, 0x8132EA4, 0x8132EA4, 0x8132EA4);
		if (entry->WasJustActivated())
		{
			OSD::Notify("Effects Enabled!");
		}
		else if (!entry->IsActivated())
		{
			for(int i = 0; i <= 6; i++) {
				Process::Write8(addr + (i * 0x4), 0);
			}
			Process::Write8(boom, 0);
			OSD::Notify("Effects " << Color::Red << "DISABLED!");
		}
		u8 val;
		if(Process::Read8(IsOnline, val) && val == 1)
		{
			for(int i = 0; i <= 6; i++) {
				Process::Write8(addr + (i * 0x4), 1);
			}
			Process::Write8(boom, 1);
		}
		else {
			for(int i = 0; i <= 6; i++) {
				Process::Write8(addr + (i * 0x4), 0);
			}
			Process::Write8(boom, 0);
		}
	}

	void bonus(MenuEntry* entry) {
		static const u32 addr = Region::AutoRegion(0x81319BC, 0x8131A5C, 0x8131A5C, 0x8131A5C);
		if(Controller::IsKeysPressed(entry->Hotkeys[0].GetKeys())) {
			Process::Write32(addr, 0x3E8);
		}
	}

	/*void LoadRGB(MenuEntry *entry) {
	static bool enabled = false;
		if(Controller::IsKeysPressed(entry->Hotkeys[0].GetKeys()))
		{
			if (!enabled)
			{
				enabled = true;
				OSD::Notify("image enabled");
			}
			else
			{
				enabled = false;
				OSD::Notify("image disabled");
			}
			const Screen& TopScreen = OSD::GetTopScreen();
			File file("SaveIcon.bin", File::READ);
			if(!file.IsOpen()) {
				OSD::Notify("SaveIcon.bin missing!");
				logoExists = false;
			}
			else {
				logoArray = new c_RGBA[file.GetSize() / sizeof(c_RGBA)];
				file.Read(logoArray, file.GetSize());
				file.Close();
			}
			if (enabled)
				OSD::Run(OSD_SaveIcon);
			else {
			OSD::Stop(OSD_SaveIcon);
			delete[] logoArray;
			}
		}
	}*/
}