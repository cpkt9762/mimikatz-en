/*	Benjamin DELPY `gentilkiwi`
	http://blog.gentilkiwi.com
	benjamin@gentilkiwi.com
	Licence : http://creativecommons.org/licenses/by-nc-sa/3.0/
*/
#pragma once
#include "globdefs.h"
#include "mod_system.h"
#include "mod_process.h"
#include "mod_thread.h"
#include <iostream>

class mod_mimikatz_impersonate
{
public:
	static vector<KIWI_MIMIKATZ_LOCAL_MODULE_COMMAND> getMimiKatzCommands();

	static bool revert(vector<wstring> * arguments);
};
