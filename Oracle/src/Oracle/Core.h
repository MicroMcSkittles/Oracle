#pragma once

#ifdef OC_PLATFORM_WINDOWS
	#ifdef OC_BUILD_DLL
		#define ORACLE_API __declspec(dllexport)
	#else
		#define ORACLE_API __declspec(dllimport)
	#endif // OC_BUILD_DLL
#else
#error This platform does not support Oracle
#endif // OC_PLATFORM_WINDOWS
