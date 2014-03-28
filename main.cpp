	#include <iostream>
	#include <windows.h>
	#include <string>
	
	#include "generalfunctions.h"
	#include "menu.h"
	#include "character.h"
	//#include "initFighting.h"
	//#include "rngOccurances.h"
	//#include "character.h"
	//#include "inventory.h"
	using namespace std;
	
	
	
	int main(int argc, char** argv) {
		Information();//Infoshit
		if(!start()){//If the start menu returns 0, it exits, aka if you choose quit.
		return 0;
	}
	cout<<"Starting...\n";//Character creation
	CharacterCreation();
	}
