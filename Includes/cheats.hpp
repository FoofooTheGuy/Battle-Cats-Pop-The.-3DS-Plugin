#ifndef CHEATS_H
#define CHEATS_H

#include <CTRPluginFramework.hpp>
#include "Unicode.h"

namespace CTRPluginFramework
{

//Folder
	using GetNameCallback = void(*)(Keyboard &keyboard, KeyboardEvent &event);
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
	bool SetUpKB(std::string msg, bool hex, const int length, u8 &output, u8 def, GetNameCallback cb);
	void UnitEditor(MenuEntry* entry);
//other folder
	void NewCopy(MenuEntry* entry);
	void SaveRandom(MenuEntry* entry);
	void BackupOptions(MenuEntry* entry);
	void RestoreOptions(MenuEntry* entry);
//other other folder
	void InfiniteXP(MenuEntry* entry);
	void InfiniteCatFood(MenuEntry* entry);
	void InfiniteGoldTickets(MenuEntry* entry);
}
#endif
