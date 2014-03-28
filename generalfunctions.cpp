	#include <iostream>
	#include <windows.h>
	#include <string>
	#include "generalfunctions.h"
using namespace std;
void Information(){//Information and shit
		int _REVISION = 3;
	
	SetConsoleTitle("Billy's Adventure - The Game");
	cout<<"Program started successfully.\n";
	cout<<"Revision: "<<_REVISION<<endl;
	cout<<"Made by: Licorice.\n";
}
void print(string in){//Print function
	for(int i=0;i<in.size();i++){
		cout<<in[i];
		Sleep(30);
	}
}

