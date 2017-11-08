/*
main() is the entry point of a console program
*/

// Include Files
//==============

//#include <Application/UnitTesting/UnitTest.h>

//#include <Engine/Logging/Logging.h>

//#include <cassert>
#include <cstdlib>
#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

// Entry Point
//============

int main(int, char**)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_crtBreakAlloc = 305;
#ifdef _WIN32	
	system("pause");
#else
	std::cout << "\nPress enter/return to exit . . ." << std::endl;
	getchar();
#endif
	return EXIT_SUCCESS;
}