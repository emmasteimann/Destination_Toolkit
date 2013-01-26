#pragma once

#define WINDOWS_LEAN_AND_MEAN
#include "winsock2.h"
#include <windows.h>
#include <string>
#include <iostream>
#include <sstream>


#if defined(_MSC_VER)
	#pragma comment(lib, "Graphics_Lib")
	#pragma comment(lib, "Common_Game_Objects_Lib")
	#pragma comment(lib, "Sound_Lib")
	#pragma comment(lib, "Physics_Lib")
#if defined(USE_WOODY3D)
#pragma comment(lib, "Woody_Lib")
#endif
#endif

const std::string Asset_Dir = "..\\Assets\\";