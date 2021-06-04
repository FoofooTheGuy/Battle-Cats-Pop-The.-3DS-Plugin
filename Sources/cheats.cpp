#include "cheats.hpp"
#include "strings.hpp"
#include "IDList.hpp"
//using namespace GameHelper;

namespace CTRPluginFramework
{
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

	void SpeedUp(MenuEntry* entry) {
		Process::Write32(0x8105D4C, 0x64);
		if(*(u8 *)0x8131FFC != 6)
		Process::Write8(0x81316D4, 0x1);
		if(*(u8 *)0x8131FFC == 6)
		Process::Write8(0x81316D4, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Speed Up will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(0x81316D4, 0);
	OSD::Notify(Color::White << "Speed Up " << Color::Red << "DISABLED!");
	}
	}

	void TreasureRadar(MenuEntry* entry) {
		Process::Write32(0x8105D50, 0x64);
		if(*(u8 *)0x8131FFC != 6)
		Process::Write8(0x81316D5, 0x1);
		if(*(u8 *)0x8131FFC == 6)
		Process::Write8(0x81316D5, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Treasure Radar will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(0x81316D5, 0);
	OSD::Notify(Color::White << "Treasure Radar " << Color::Red << "DISABLED!");
	}
	}

	void RichCat(MenuEntry* entry) {
		Process::Write32(0x8105D54, 0x64);
		if(*(u8 *)0x8131FFC != 6)
		Process::Write8(0x81316D6, 0x1);
		if(*(u8 *)0x8131FFC == 6)
		Process::Write8(0x81316D6, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Rich Cat will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(0x81316D6, 0);
	OSD::Notify(Color::White << "Rich Cat " << Color::Red << "DISABLED!");
	}
	}

	void CatCPU(MenuEntry* entry) {
		Process::Write32(0x8105D58, 0x64);
		if(*(u8 *)0x8131FFC != 6)
		Process::Write8(0x81316D7, 0x1);
		if(*(u8 *)0x8131FFC == 6)
		Process::Write8(0x81316D7, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Cat CPU will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(0x81316D7, 0);
	OSD::Notify(Color::White << "Cat CPU " << Color::Red << "DISABLED!");
	}
	}

	void CatJobs(MenuEntry* entry) {
		Process::Write32(0x8105D5C, 0x64);
		if(*(u8 *)0x8131FFC != 6)
		Process::Write8(0x81316D8, 0x1);
		if(*(u8 *)0x8131FFC == 6)
		Process::Write8(0x81316D8, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Cat Jobs will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(0x81316D8, 0);
	OSD::Notify(Color::White << "Cat Jobs " << Color::Red << "DISABLED!");
	}
	}
	
	void SnipertheCat(MenuEntry* entry) {
		Process::Write32(0x8105D60, 0x64);
		if(*(u8 *)0x8131FFC != 6)
		Process::Write8(0x81316D9, 0x1);
		if(*(u8 *)0x8131FFC == 6)
		Process::Write8(0x81316D9, 0);
		if (entry->WasJustActivated())
		{
		OSD::Notify("Sniper the Cat will stay on!");
		}
	else if (!entry->IsActivated())
	{
	Process::Write8(0x81316D9, 0);
	OSD::Notify(Color::White << "Sniper the Cat " << Color::Red << "DISABLED!");
	}
	}

  void InfiniteEnergy(MenuEntry* entry) {
      Process::Write32(0x8103B90, 0xFFFFFFF);
  }
  
  void CatsInstantRecharge(MenuEntry* entry) {
    for(int i = 0; i < 10; i++) {
      Process::Write32(0x813180C + (i * 0x4), 0);
    }
  }
  
  void InvincibleCats(MenuEntry* entry) {
  if(entry->WasJustActivated())
    OSD::Notify("Your cats will never die!");

    for(int i = 0; i < 50; i++) {
      Process::Write32(0x8109A40+ (i * 0x124), 0xFFFFFFF);
    }
  }
  
  void MaxBattleMoney(MenuEntry* entry) {
       Process::Write32(0x8109624, 0xFFFFFFF);
  }
  
  void CannonAlwaysFull(MenuEntry* entry) {
       Process::Write32(0x810992C, 0);
  }

  void InvincibleCatBase(MenuEntry* entry) {
  if(entry->WasJustActivated())
    OSD::Notify("You are now invincible!");

   if(*(u8 *)0x8131FFC != 6)
      Process::Write32(0x810991C, 0x10D88);
  }
  
 void EnemyBaseOneHealth(MenuEntry *entry) {
  if(*(u8 *)0x8131FFC != 6)
    Process::Write32(0x810D348, 0x1);
}
   
  void SpecialCoordinateGuy(MenuEntry *entry) {
	if(*(u8 *)0x8131FFC != 6)
	Process::Write32(0x8109A2C, 0x800);
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
	std::string namevalue;
    u8 ID;
    optKb->Populate(NameEdit);
	switch (optKb->Open())
	{
	case 0:
		if (SetUpKB("Enter Unit ID:\n\n(The displayed name is the first class one)", true, 2, ID, ID, GetNamecb) && ID != 0)
		{
			if (Process::Write32(0x8103BEC, 0)) {
			Process::Write8(0x8103BEC, ID);
			}
		switch(*(u32 *)0x806BE88) {
			case 0x9085C: 
			case 0x8C7FC: 
			case 0x8F3DC:
			case 0xC: 
			OSD::Notify(Color::Red << "Please select a SAVE FILE first!");
			break;
			default: {
			OSD::Notify(Color::White << "Unit edit " << Color::Green << "SUCCESSFUL!"); 
			} break;
		}
		}
		break;
	case 1:
		optKb->Populate(UnitList);
			switch (optKb->Open())
		{
			case 0://EMPY
			Process::Write32(0x8103BEC, 0XFFFFFFFF);
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
			switch(*(u32 *)0x806BE88) {
			case 0x9085C: 
			case 0x8C7FC: 
			case 0x8F3DC:
			case 0xC:
			OSD::Notify(Color::Red << "Please select a SAVE FILE first!");
			break;
			default: {
			OSD::Notify(Color::White << "Unit edit " << Color::Green << "SUCCESSFUL!"); 
			} break;
			}
		break;
    }
	}

	void NewCopy(MenuEntry *entry) {
	u32 val;
	u8 team;
		if(Controller::IsKeysPressed(entry->Hotkeys[0].GetKeys())) {
		if(*(u8 *)0x806BE88 != 0x4C){
		OSD::Notify(Color::Red << "You can't use that here!");
		}
		if(*(u8 *)0x806BE88 == 0x4C) {
		if(*(u8 *)0x8144010 == 0) //Team A equip menu
		{
			if (Process::Read32(0x8103BEC, val)) Process::Write32(0x01E81000, val);
			if (Process::Read32(0x8103BF0, val)) Process::Write32(0x01E81004, val);
			if (Process::Read32(0x8103BF4, val)) Process::Write32(0x01E81008, val);
			if (Process::Read32(0x8103BF8, val)) Process::Write32(0x01E8100C, val);
			if (Process::Read32(0x8103BFC, val)) Process::Write32(0x01E81010, val);
			if (Process::Read32(0x8103C00, val)) Process::Write32(0x01E81014, val);
			if (Process::Read32(0x8103C04, val)) Process::Write32(0x01E81018, val);
			if (Process::Read32(0x8103C08, val)) Process::Write32(0x01E8101C, val);
			if (Process::Read32(0x8103C0C, val)) Process::Write32(0x01E81020, val);
			if (Process::Read32(0x8103C10, val)) Process::Write32(0x01E81024, val);
			Process::Write8(0x01E81028, 0xA);
			OSD::Notify(Color::White << "Team A Copied!");
		}
		if(*(u8 *)0x8144010 == 0x1) //Team B equip menu
		{
			if (Process::Read32(0x8103C14, val)) Process::Write32(0x01E81000, val);
			if (Process::Read32(0x8103C18, val)) Process::Write32(0x01E81004, val);
			if (Process::Read32(0x8103C1C, val)) Process::Write32(0x01E81008, val);
			if (Process::Read32(0x8103C20, val)) Process::Write32(0x01E8100C, val);
			if (Process::Read32(0x8103C24, val)) Process::Write32(0x01E81010, val);
			if (Process::Read32(0x8103C28, val)) Process::Write32(0x01E81014, val);
			if (Process::Read32(0x8103C2C, val)) Process::Write32(0x01E81018, val);
			if (Process::Read32(0x8103C30, val)) Process::Write32(0x01E8101C, val);
			if (Process::Read32(0x8103C34, val)) Process::Write32(0x01E81020, val);
			if (Process::Read32(0x8103C38, val)) Process::Write32(0x01E81024, val);
			Process::Write8(0x01E81028, 0xB);
			OSD::Notify(Color::White << "Team B Copied!");
		}
		if(*(u8 *)0x8144010 == 0x2) //Team C equip menu
		{
			if (Process::Read32(0x8103C3C, val)) Process::Write32(0x01E81000, val);
			if (Process::Read32(0x8103C40, val)) Process::Write32(0x01E81004, val);
			if (Process::Read32(0x8103C44, val)) Process::Write32(0x01E81008, val);
			if (Process::Read32(0x8103C48, val)) Process::Write32(0x01E8100C, val);
			if (Process::Read32(0x8103C4C, val)) Process::Write32(0x01E81010, val);
			if (Process::Read32(0x8103C50, val)) Process::Write32(0x01E81014, val);
			if (Process::Read32(0x8103C54, val)) Process::Write32(0x01E81018, val);
			if (Process::Read32(0x8103C58, val)) Process::Write32(0x01E8101C, val);
			if (Process::Read32(0x8103C5C, val)) Process::Write32(0x01E81020, val);
			if (Process::Read32(0x8103C60, val)) Process::Write32(0x01E81024, val);
			Process::Write8(0x01E81028, 0xC);
			OSD::Notify(Color::White << "Team C Copied!");
		}	
		if(*(u8 *)0x8144010 == 0x3) //Team D equip menu
		{
			if (Process::Read32(0x8103C64, val)) Process::Write32(0x01E81000, val);
			if (Process::Read32(0x8103C68, val)) Process::Write32(0x01E81004, val);
			if (Process::Read32(0x8103C6C, val)) Process::Write32(0x01E81008, val);
			if (Process::Read32(0x8103C70, val)) Process::Write32(0x01E8100C, val);
			if (Process::Read32(0x8103C74, val)) Process::Write32(0x01E81010, val);
			if (Process::Read32(0x8103C78, val)) Process::Write32(0x01E81014, val);
			if (Process::Read32(0x8103C7C, val)) Process::Write32(0x01E81018, val);
			if (Process::Read32(0x8103C80, val)) Process::Write32(0x01E8101C, val);
			if (Process::Read32(0x8103C84, val)) Process::Write32(0x01E81020, val);
			if (Process::Read32(0x8103C88, val)) Process::Write32(0x01E81024, val);
			Process::Write8(0x01E81028, 0xD);
			OSD::Notify(Color::White << "Team D Copied!");
		}
		if(*(u8 *)0x8144010 == 0x4) //Team E equip menu
		{
			if (Process::Read32(0x8103C8C, val)) Process::Write32(0x01E81000, val);
			if (Process::Read32(0x8103C90, val)) Process::Write32(0x01E81004, val);
			if (Process::Read32(0x8103C94, val)) Process::Write32(0x01E81008, val);
			if (Process::Read32(0x8103C98, val)) Process::Write32(0x01E8100C, val);
			if (Process::Read32(0x8103C9C, val)) Process::Write32(0x01E81010, val);
			if (Process::Read32(0x8103CA0, val)) Process::Write32(0x01E81014, val);
			if (Process::Read32(0x8103CA4, val)) Process::Write32(0x01E81018, val);
			if (Process::Read32(0x8103CA8, val)) Process::Write32(0x01E8101C, val);
			if (Process::Read32(0x8103CAC, val)) Process::Write32(0x01E81020, val);
			if (Process::Read32(0x8103CB0, val)) Process::Write32(0x01E81024, val);
			Process::Write8(0x01E81028, 0xE);
			OSD::Notify(Color::White << "Team E Copied!");
		}
		if(*(u8 *)0x8144010 == 0x5){//Random equip menu
		OSD::Notify(Color::Red << "You can't use that here!");
		}
	}
		}
/*=====================================================================================================================================
============================================================BRUH=======================================================================
=====================================================================================================================================*/
		if(Controller::IsKeysPressed(entry->Hotkeys[1].GetKeys())) {
			if(*(u8 *)0x806BE88 != 0x4C){
		OSD::Notify(Color::Red << "You can't use that here!");
		}
		if(*(u8 *)0x806BE88 == 0x4C){
			if(*(u8 *)0x01E81028 != 0){
			if(*(u8 *)0x8144010 == 0) //Team A equip menu
		{
			if (Process::Read32(0x01E81000, val)) Process::Write32(0x8103BEC, val);
			if (Process::Read32(0x01E81004, val)) Process::Write32(0x8103BF0, val);
			if (Process::Read32(0x01E81008, val)) Process::Write32(0x8103BF4, val);
			if (Process::Read32(0x01E8100C, val)) Process::Write32(0x8103BF8, val);
			if (Process::Read32(0x01E81010, val)) Process::Write32(0x8103BFC, val);
			if (Process::Read32(0x01E81014, val)) Process::Write32(0x8103C00, val);
			if (Process::Read32(0x01E81018, val)) Process::Write32(0x8103C04, val);
			if (Process::Read32(0x01E8101C, val)) Process::Write32(0x8103C08, val);
			if (Process::Read32(0x01E81020, val)) Process::Write32(0x8103C0C, val);
			if (Process::Read32(0x01E81024, val)) Process::Write32(0x8103C10, val);
			Process::Read8(0x01E81028, team);
			OSD::Notify(Utils::Format("Team %X Pasted!", team));
		}
		if(*(u8 *)0x8144010 == 0x1) //Team B equip menu
		{
			if (Process::Read32(0x01E81000, val)) Process::Write32(0x8103C14, val);
			if (Process::Read32(0x01E81004, val)) Process::Write32(0x8103C18, val);
			if (Process::Read32(0x01E81008, val)) Process::Write32(0x8103C1C, val);
			if (Process::Read32(0x01E8100C, val)) Process::Write32(0x8103C20, val);
			if (Process::Read32(0x01E81010, val)) Process::Write32(0x8103C24, val);
			if (Process::Read32(0x01E81014, val)) Process::Write32(0x8103C28, val);
			if (Process::Read32(0x01E81018, val)) Process::Write32(0x8103C2C, val);
			if (Process::Read32(0x01E8101C, val)) Process::Write32(0x8103C30, val);
			if (Process::Read32(0x01E81020, val)) Process::Write32(0x8103C34, val);
			if (Process::Read32(0x01E81024, val)) Process::Write32(0x8103C38, val);
			Process::Read8(0x01E81028, team);
			OSD::Notify(Utils::Format("Team %X Pasted!", team));
		}
		if(*(u8 *)0x8144010 == 0x2) //Team C equip menu
		{
			if (Process::Read32(0x01E81000, val)) Process::Write32(0x8103C3C, val);
			if (Process::Read32(0x01E81004, val)) Process::Write32(0x8103C40, val);
			if (Process::Read32(0x01E81008, val)) Process::Write32(0x8103C44, val);
			if (Process::Read32(0x01E8100C, val)) Process::Write32(0x8103C48, val);
			if (Process::Read32(0x01E81010, val)) Process::Write32(0x8103C4C, val);
			if (Process::Read32(0x01E81014, val)) Process::Write32(0x8103C50, val);
			if (Process::Read32(0x01E81018, val)) Process::Write32(0x8103C54, val);
			if (Process::Read32(0x01E8101C, val)) Process::Write32(0x8103C58, val);
			if (Process::Read32(0x01E81020, val)) Process::Write32(0x8103C5C, val);
			if (Process::Read32(0x01E81024, val)) Process::Write32(0x8103C60, val);
			Process::Read8(0x01E81028, team);
			OSD::Notify(Utils::Format("Team %X Pasted!", team));
		}
		if(*(u8 *)0x8144010 == 0x3) //Team D equip menu
		{
			if (Process::Read32(0x01E81000, val)) Process::Write32(0x8103C64, val);
			if (Process::Read32(0x01E81004, val)) Process::Write32(0x8103C68, val);
			if (Process::Read32(0x01E81008, val)) Process::Write32(0x8103C6C, val);
			if (Process::Read32(0x01E8100C, val)) Process::Write32(0x8103C70, val);
			if (Process::Read32(0x01E81010, val)) Process::Write32(0x8103C74, val);
			if (Process::Read32(0x01E81014, val)) Process::Write32(0x8103C78, val);
			if (Process::Read32(0x01E81018, val)) Process::Write32(0x8103C7C, val);
			if (Process::Read32(0x01E8101C, val)) Process::Write32(0x8103C80, val);
			if (Process::Read32(0x01E81020, val)) Process::Write32(0x8103C84, val);
			if (Process::Read32(0x01E81024, val)) Process::Write32(0x8103C88, val);
			Process::Read8(0x01E81028, team);
			OSD::Notify(Utils::Format("Team %X Pasted!", team));
		}
		if(*(u8 *)0x8144010 == 0x4) //Team E equip menu
		{
			if (Process::Read32(0x01E81000, val)) Process::Write32(0x8103C8C, val);
			if (Process::Read32(0x01E81004, val)) Process::Write32(0x8103C90, val);
			if (Process::Read32(0x01E81008, val)) Process::Write32(0x8103C94, val);
			if (Process::Read32(0x01E8100C, val)) Process::Write32(0x8103C98, val);
			if (Process::Read32(0x01E81010, val)) Process::Write32(0x8103C9C, val);
			if (Process::Read32(0x01E81014, val)) Process::Write32(0x8103CA0, val);
			if (Process::Read32(0x01E81018, val)) Process::Write32(0x8103CA4, val);
			if (Process::Read32(0x01E8101C, val)) Process::Write32(0x8103CA8, val);
			if (Process::Read32(0x01E81020, val)) Process::Write32(0x8103CAC, val);
			if (Process::Read32(0x01E81024, val)) Process::Write32(0x8103CB0, val);
			Process::Read8(0x01E81028, team);
			OSD::Notify(Utils::Format("Team %X Pasted!", team));
			}
		}
		if (!entry->IsActivated())
		{
		for(int i = 0; i < 10; i++) {
			Process::Write32(0x8103BEC+ (i * 0x6), 0);
		}
		}
		if(*(u8 *)0x01E81028 == 0){
		OSD::Notify(Color::Red << "No team selected!");
		}
		if(*(u8 *)0x8144010 == 0x5){ //Random equip menu
		OSD::Notify(Color::Red << "You can't use that here!");
		}
	}
}
	}
	void SaveRandom(MenuEntry *entry) {
	u32 val;
			if(*(u8 *)0x8144010 != 0x5){
			MessageBox("Function Failed!\nRandom Team not loaded?\nYou must be in a battle to use this!")();
			return;
			}
				switch(*(u32 *)0x2B81A4) {
			case 0x3F000000:
			for (int i = 0; i < 40; i+=4)
			{
				if (Process::Read32((0x8103CB4 + i), val))
				{
					Process::Write32((0x8103BEC + i), val);
				}
			}
			/*if (Process::Read32(0x8103CB4, val)) Process::Write32(0x8103BEC, val);
			if (Process::Read32(0x8103CB8, val)) Process::Write32(0x8103BF0, val);
			if (Process::Read32(0x8103CBC, val)) Process::Write32(0x8103BF4, val);
			if (Process::Read32(0x8103CC0, val)) Process::Write32(0x8103BF8, val);
			if (Process::Read32(0x8103CC4, val)) Process::Write32(0x8103BFC, val);
			if (Process::Read32(0x8103CC8, val)) Process::Write32(0x8103C00, val);
			if (Process::Read32(0x8103CCC, val)) Process::Write32(0x8103C04, val);
			if (Process::Read32(0x8103CD0, val)) Process::Write32(0x8103C08, val);
			if (Process::Read32(0x8103CD4, val)) Process::Write32(0x8103C0C, val);
			if (Process::Read32(0x8103CD8, val)) Process::Write32(0x8103C10, val);*/
			MessageBox(Color::White << "Random Team saved to Team A!")();
			break;
			default: {
			MessageBox("Function Failed!\nRandom Team not loaded?\nYou must be in a battle to use this!")();
			} break;
		}
	}
void BackupOptions(MenuEntry *entry) {
  static const std::vector<std::string> list = {
    "Back up team A", //0x8103BEC
    "Back up team B", //0x8103C14
    "Back up team C", //0x8103C3C
    "Back up team D", //0x8103C64
    "Back up team E", //0x8103C8C
  };

  static const std::vector<std::string> teams = {
    "A", "B", "C", "D", "E"
  }; 

  static const u32 TeamAddress[5] = {
    0x8103BEC, 0x8103C14, 0x8103C3C, 0x8103C64, 0x8103C8C
  };  

  std::vector<u32> TeamData; //Used to store the data into the vector first
  Directory folder;
  std::vector<std::string> files;
  File *file = new File();

  Keyboard keyboard("Select Option:", list);
  int userChoice = keyboard.Open();
//you could use a switch case here too, though this works aswell
  if(userChoice == -1)
    return;

//Copies selected team to vector
  for(int i = 0; i < 10; i++) {
    TeamData.push_back(TeamAddress[userChoice]);
  }
//If teamdata vector is somehow empty return
  if(TeamData.empty()) { 
    return; 
  }

  Directory::Open(folder, "Teams", Directory::IsExists("Teams") == 0);

  int count;
  count = folder.ListFiles(files);
//If File doesn't exist create the file
  if(File::Exists("Teams/Team" << teams[userChoice] << std::to_string(count) << ".bin") == 0) 
    File::Create("Teams/Team" << teams[userChoice] << std::to_string(count) << ".bin");
            
  File::Open(*file, "Teams/Team" << teams[userChoice] << std::to_string(count) << ".bin", File::Mode::WRITE);
  file->Flush();
  for(int i = 0; i < 10; i++) {
    file->Write(&TeamData.at(i), 4);
  }
  file->Close();
  OSD::Notify("Saved as Team" << teams[userChoice] << std::to_string(count) << ".bin");
}

 void RestoreOptions(MenuEntry *entry)
 {
  static const std::vector<std::string> list = {
    "Restore team A", //0x8103BEC
    "Restore team B", //0x8103C14
    "Restore team C", //0x8103C3C
    "Restore team D", //0x8103C64
    "Restore team E", //0x8103C8C
  };

  static const u32 TeamAddress[5] = {
    0x8103BEC, 0x8103C14, 0x8103C3C, 0x8103C64, 0x8103C8C
  };  

  std::vector<std::string> files;
  File *file = new File();
  std::vector<u32> TeamData;
  Directory folder;
  u32 Team;
  int index;
  Keyboard OP;

  Keyboard keyboard("Select Option:", list);
  int userChoice = keyboard.Open();

  if(userChoice == -1)
    return;

  files.clear();
  TeamData.clear();
//If Directory doesn't exist create it and open it
  Directory::Open(folder, "Teams", Directory::IsExists("Teams") == 0);
//If there are files in the folder populate them    
  if(folder.ListFiles(files) > 0) {
    OP.Populate(files);
    index = OP.Open();
    if(index != -1) {
      File::Open(*file, "Teams" << files.at(index), File::Mode::READ);
      for(int i = 0; i < 10; i++) {
        file->Read(&Team, 4);
        TeamData.push_back(Team & 0xFFFFFFFF);
        Process::Write32(TeamAddress[userChoice], TeamData.at(i));
      }
        
      file->Close();
      OSD::Notify(files.at(index) << " loaded!");
    }
  
  else 
    OSD::Notify("No files found.");
        
  folder.Close();
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
      Process::Write32(0x81332C4, 0xFFFFFFF);
 }	  

 bool SetUpKB(std::string msg, bool hex, const int length, u8 &output, u8 def, GetNameCallback cb)
 {
	 kb->GetMessage() = msg;
	 kb->IsHexadecimal(hex);
	 kb->SetMaxLength(length);
	 kb->OnKeyboardEvent(cb);
	 return kb->Open(output, def) == 0;

 }
} 
