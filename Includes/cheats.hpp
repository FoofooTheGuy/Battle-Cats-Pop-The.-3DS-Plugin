#ifndef CHEATS_H
#define CHEATS_H

#include <CTRPluginFramework.hpp>
#include "Unicode.h"
#include "Helpers/Region.hpp"
#include "MenuPointers.hpp"


namespace CTRPluginFramework
{

//Stuffs
	#define TID_JPN 0x000400000015DA00
	#define TID_USA 0x000400000018BC00
	#define TID_EUR 0x000400000018F500
	#define TID_KOR 0x000400000018B500
	#define Colortop 0x538453FF
	#define Colorbot 0x33476FF
	#define keycolor 0xFFBF02FF
	#define BubbleGum 0xFF126BFF
	#define TeamDir "teams"
	using GetNameCallback = void(*)(Keyboard &keyboard, KeyboardEvent &event);
	void InitMenu(PluginMenu *menu);
//Folder
	void SpeedUp(MenuEntry *entry);
	void TreasureRadar(MenuEntry *entry);
	void RichCat(MenuEntry *entry);
	void CatCPU(MenuEntry* entry);
	void CatJobs(MenuEntry* entry);
	void SnipertheCat(MenuEntry* entry);
	void InfiniteEnergy(MenuEntry* entry);
	void CatsInstantRecharge(MenuEntry* entry);
	void InvincibleCats(MenuEntry* entry);
	void MaxBattleMoney(MenuEntry* entry);
	void CannonAlwaysFull(MenuEntry* entry);
	void InvincibleCatBase(MenuEntry* entry);
	void EnemyBaseOneHealth(MenuEntry* entry);
	void SpecialCoordinateGuy(MenuEntry* entry);
	bool SetUpKB(std::string msg, bool hex, const int length, u32 &output, u32 def, GetNameCallback cb);
	bool SetUpKB(std::string msg, bool hex, const int length, u16 &output, u16 def, GetNameCallback cb);
	bool SetUpKB(std::string msg, bool hex, const int length, u8 &output, u8 def, GetNameCallback cb);
	void UnitEditor(MenuEntry* entry);
//other folder
	void NewerCopy(MenuEntry* entry);
	void SetPaste(MenuEntry* entry);
	void SaveRandom(MenuEntry* entry);
	void BackupOptions(MenuEntry* entry);
	void RestoreOptions(MenuEntry* entry);
	void unlock(MenuEntry* entry);
//other other folder
	void InfiniteXP(MenuEntry* entry);
	void InfiniteCatFood(MenuEntry* entry);
	void InfiniteGoldTickets(MenuEntry* entry);
}
#endif
