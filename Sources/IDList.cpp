#include "IDList.hpp"

namespace CTRPluginFramework
{
	std::string IDList::GetName(u8 ID)
	{
		std::string t;
		if((ID & 0xFF) >= 0 && (ID & 0xFF) <= 0x1) //everything between 0 and 1 is invalid
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x2)
		{
			t.assign("Basic Cat");
		}
		if((ID) == 0x3)
		{
			t.assign("Tank Cat");
		}
		if((ID) == 0x4)
		{
			t.assign("Axe Cat");
		}
		if((ID) == 0x5)
		{
			t.assign("Gross Cat");
		}
		if((ID) == 0x6)
		{
			t.assign("Cow Cat");
		}
		if((ID) == 0x7)
		{
			t.assign("Bird Cat");
		}
		if((ID) == 0x8)
		{
			t.assign("Fish Cat");
		}
		if((ID) == 0x9)
		{
			t.assign("Lizard Cat");
		}
		if((ID) == 0xA)
		{
			t.assign("Titan Cat");
		}
		if((ID) == 0xB)
		{
			t.assign("Actress Cat");
		}
		if((ID) == 0xC)
		{
			t.assign("KungFu Cat");
		}
		if((ID) == 0xD)
		{
			t.assign("Mr.");
		}
		if((ID) == 0xE)
		{
			t.assign("Bondage Cat");
		}
		if((ID) == 0xF)
		{
			t.assign("Dom Cat");
		}
		if((ID) == 0x10)
		{
			t.assign("Cats in a Box");
		}
		if((ID) == 0x11)
		{
			t.assign("Panties Cat");
		}
		if((ID) == 0x12)
		{
			t.assign("Moneko");
		}
		if((ID) == 0x13)
		{
			t.assign("Tricycle Cat");
		}
		if((ID) == 0x14)
		{
			t.assign("Ninja Cat");
		}
		if((ID) == 0x15)
		{
			t.assign("Zombie Cat");
		}
		if((ID) == 0x16)
		{
			t.assign("Samurai Cat");
		}
		if((ID) == 0x17)
		{
			t.assign("Sumo Cat");
		}
		if((ID) == 0x18)
		{
			t.assign("Boogie Cat");
		}
		if((ID) == 0x19)
		{
			t.assign("Skirt Cat");
		}
		if((ID) == 0x1A)
		{
			t.assign("Valkyrie Cat");
		}
		if((ID) == 0x1B)
		{
			t.assign("Bahamut Cat");
		}
		if((ID & 0xFF) >= 0x1C && (ID & 0xFF) <= 0x1F)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x20)
		{
			t.assign("Bodhi Cat");
		}
		if((ID) == 0x21)
		{
			t.assign("Delinquent Cat");
		}
		if((ID) == 0x22)
		{
			t.assign("Hip Hop Cat");
		}
		if((ID) == 0x23)
		{
			t.assign("Kotatsu Cat");
		}
		if((ID) == 0x24)
		{
			t.assign("Nekoluga");
		}
		if((ID) == 0x25)
		{
			t.assign("Nerd Cat");
		}
		if((ID) == 0x26)
		{
			t.assign("Swimmer Cat");
		}
		if((ID) == 0x27)
		{
			t.assign("Pogo Cat");
		}
		if((ID) == 0x28)
		{
			t.assign("Wheel Cat");
		}
		if((ID) == 0x29)
		{
			t.assign("Apple Cat");
		}
		if((ID) == 0x2A)
		{
			t.assign("Bath Cat");
		}
		if((ID) == 0x2B)
		{
			t.assign("Salon Cat");
		}
		if((ID) == 0x2C)
		{
			t.assign("Ice Cat");
		}
		if((ID) == 0x2D)
		{
			t.assign("Cat Mecha");
		}
		if((ID) == 0x2E)
		{
			t.assign("Ogre Cat");
		}
		if((ID & 0xFF) == 0x2F)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x30)
		{
			t.assign("Jurassic Cat");
		}
		if((ID) == 0x31)
		{
			t.assign("Viking Cat");
		}
		if((ID) == 0x32)
		{
			t.assign("Pirate Cat");
		}
		if((ID) == 0x33)
		{
			t.assign("Theif Cat");
		}
		if((ID) == 0x34)
		{
			t.assign("Bishop Cat");
		}
		if((ID) == 0x35)
		{
			t.assign("Mystic Cat");
		}
		if((ID) == 0x36)
		{
			t.assign("Shaman Cat");
		}
		if((ID & 0xFF) >= 0x37 && (ID & 0xFF) <= 0x38)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x39)
		{
			t.assign("Witch Cat");
		}
		if((ID) == 0x3A)
		{
			t.assign("Archer Cat");
		}
		if((ID) == 0x3B)
		{
			t.assign("Marader Cat");
		}
		if((ID) == 0x3C)
		{
			t.assign("Swordscat");
		}
		if((ID) == 0x3D)
		{
			t.assign("Baby Cat");
		}
		if((ID) == 0x3E)
		{
			t.assign("Bronze Cat");
		}
		if((ID) == 0x3F)
		{
			t.assign("Sushi Cat");
		}
		if((ID & 0xFF) == 0x40)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x41)
		{
			t.assign("Sports Cat");
		}
		if((ID & 0xFF) >= 0x42 && (ID & 0xFF) <= 0x47)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x48)
		{
			t.assign("Salerycat");
		}
		if((ID) == 0x49)
		{
			t.assign("Sanada Yukimura");
		}
		if((ID) == 0x4A)
		{
			t.assign("Maeda Keiji");
		}
		if((ID) == 0x4B)
		{
			t.assign("Oda Nobunaga");
		}
		if((ID) == 0x4C)
		{
			t.assign("Reindeer Cat");
		}
		if((ID) == 0x4D)
		{
			t.assign("Windy");
		}
		if((ID) == 0x4E)
		{
			t.assign("Thundia");
		}
		if((ID & 0xFF) == 0x4F)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x50)
		{
			t.assign("Space Cat");
		}
		if((ID) == 0x51)
		{
			t.assign("Adult Cat");
		}
		if((ID) == 0x52)
		{
			t.assign("Evil Cat");
		}
		if((ID) == 0x53)
		{
			t.assign("Doll Cats");
		}
		if((ID & 0xFF) == 0x54)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x55)
		{
			t.assign("Sodom");
		}
		if((ID) == 0x56)
		{
			t.assign("Megidora");
		}
		if((ID) == 0x57)
		{
			t.assign("Vars");
		}
		if((ID) == 0x58)
		{
			t.assign("Kamukura");
		}
		if((ID) == 0x59)
		{
			t.assign("Raiden");
		}
		if((ID) == 0x5A)
		{
			t.assign("Jumprope Cat");
		}
		if((ID & 0xFF) >= 0x5B && (ID & 0xFF) <= 0x5C)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x5D)
		{
			t.assign("Crazed Cat");
		}
		if((ID) == 0x5E)
		{
			t.assign("Crazed Tank Cat");
		}
		if((ID) == 0x5F)
		{
			t.assign("Crazed Axe Cat");
		}
		if((ID) == 0x60)
		{
			t.assign("Crazed Legs");
		}
		if((ID) == 0x61)
		{
			t.assign("Crazed Cow Cat");
		}
		if((ID) == 0x62)
		{
			t.assign("Crazed Bird Cat");
		}
		if((ID) == 0x63)
		{
			t.assign("Crazed Fish Cat");
		}
		if((ID) == 0x64)
		{
			t.assign("Crazed Lizard Cat");
		}
		if((ID) == 0x65)
		{
			t.assign("Crazed Titan Cat");
		}
		if((ID) == 0x66)
		{
			t.assign("Maiden Cat");
		}
		if((ID & 0xFF) >= 0x67 && (ID & 0xFF) <= 0x68)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x69)
		{
			t.assign("Singer Cat");
		}
		if((ID) == 0x6A)
		{
			t.assign("Koi Cat");
		}
		if((ID) == 0x6B)
		{
			t.assign("Kuu");
		}
		if((ID) == 0x6C)
		{
			t.assign("Kai");
		}
		if((ID) == 0x6D)
		{
			t.assign("Coppermine");
		}
		if((ID & 0xFF) == 0x6E)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x6F)
		{
			t.assign("Madam Bride");
		}
		if((ID & 0xFF) >= 0x70 && (ID & 0xFF) <= 0x7B)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x7C)
		{
			t.assign("Vacation Queen");
		}
		if((ID) == 0x7D)
		{
			t.assign("Bean Cats");
		}
		if((ID) == 0x7E)
		{
			t.assign("Date Masamune");
		}
		if((ID) == 0x7F)
		{
			t.assign("Takeda Shingen");
		}
		if((ID) == 0x80)
		{
			t.assign("Clockwork Cat");
		}
		if((ID) == 0x81)
		{
			t.assign("Flower Cat");
		}
		if((ID) == 0x82)
		{
			t.assign("Vengeful Cat");
		}
		if((ID) == 0x83)
		{
			t.assign("Gold Cat");
		}
		if((ID) == 0x84)
		{
			t.assign("Ururun Wolf");
		}
		if((ID) == 0x85)
		{
			t.assign("Neneko");
		}
		if((ID) == 0x86)
		{
			t.assign("KungFu Cat G");
		}
		if((ID & 0xFF) == 0x87)
		{
			t.assign("Invalid ID!");
		}
		if((ID) == 0x88)
		{
			t.assign("Urashimataro");
		}
		if((ID) == 0x89)
		{
			t.assign("Grateful Crane");
		}
		if((ID) == 0x8A)
		{
			t.assign("Momotaro");
		}
		if((ID) == 0x8B)
		{
			t.assign("Kasa Jizo");
		}
		if((ID) == 0x8C)
		{
			t.assign("Kaguya-hime");
		}
		if((ID & 0xFF) >= 0x8D)
		{
			t.assign("Invalid ID!");
		}
		return t;
	}
}