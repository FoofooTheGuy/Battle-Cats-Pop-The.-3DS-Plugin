#ifndef GAME_HPP
#define GAME_HPP

#include <CTRPluginFramework.hpp>
#include "strings.hpp"

namespace CTRPluginFramework
{
	class IDList
	{
	public:
		static std::string GetName(u8 ID);
	};
}
#endif