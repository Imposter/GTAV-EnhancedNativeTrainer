/*
Some of this code began its life as a part of GTA V SCRIPT HOOK SDK.
http://dev-c.com
(C) Alexander Blade 2015

It is now part of the Enhanced Native Trainer project.
https://github.com/gtav-ent/GTAV-EnhancedNativeTrainer
(C) Rob Pridham and fellow contributors 2015
*/

#pragma once

#include <string>
#include <windows.h>

// returns module load path with trailing slash
std::string GetCurrentModulePath();

HMODULE GetENTModuleHandle();

bool does_file_exist(const char* name);
