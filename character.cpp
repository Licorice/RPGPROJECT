#include <string>
#include <iostream>
#include "character.h"
#include "generalfunctions.h"
 using namespace std;

		//Sets all variables for the main character.
		void MainCharacter::setstats(string _name, int _age, int _strength, int _stamina, int _dexterity,int _intelligence,int _luck,int _charm, int _level, int _experience, int _statpoints){
			name=_name;
			age=_age;
			strength=_strength;
			stamina=_stamina;
			dexterity=_dexterity;
			intelligence=_intelligence;
			luck=_luck;
			charm=_charm;
			level=_level;
			experience=_experience;
		}
		void MainCharacter::displayStats(){
	cout<<"Strength: "<<strength<<endl;
	cout<<"Stamina: "<<stamina<<endl;
	cout<<"Dexterity: "<<dexterity<<endl;
	cout<<"Intelligence: "<<intelligence<<endl;
	cout<<"Charisma: "<<charm<<endl;
	cout<<"Luck: "<<luck<<endl;
		}
		//Allocate points for the object
		void MainCharacter::AllocateStatPoints(int _statpoints){
			int input;
			while (_statpoints){
			cout<<"SP:"<<_statpoints<<endl;
			print("Write the amount of each stat you want to add, if you do not want to add any to an attribute, write '0'.\n");

			if(_statpoints){//If you have statpoints
			cout<<"Strength: ";
			cin>>input;
			}if(input <= _statpoints){//If you have enough statpoints
				strength=strength+input;//Add them
				_statpoints=_statpoints-input;//Remove them
			}			if(_statpoints>0){//repeat
			cout<<"Stamina: ";
			cin>>input;
			}if(input <= _statpoints){
				stamina=stamina+input;
				_statpoints=_statpoints-input;
			}			if(_statpoints>0){
			cout<<"Dexterity: ";
			cin>>input;
			}if(input <= _statpoints){
				dexterity=dexterity+input;
				_statpoints=_statpoints-input;
			}			if(_statpoints>0){
			cout<<"Intelligence: ";
			cin>>input;
			}if(input <= _statpoints){
				intelligence=intelligence+input;
				_statpoints=_statpoints-input;
			}			if(_statpoints>0){
			cout<<"Charisma: ";
			cin>>input;
			}if(input <= _statpoints){
				charm=charm+input;
				_statpoints=_statpoints-input;
			}			if(_statpoints>0){
			cout<<"Luck: ";
			cin>>input;
			}if(input <= _statpoints){
				luck=luck+input;
				_statpoints=_statpoints-input;
			}
			cout<<"You have "<<_statpoints<<" points left.\n";
		}
		}
		
//};
class Human{
	public:
		string name;
		string additionaldetails = "n/a";
		int age,strength,stamina,dexterity,intelligence,luck,charm;
		void setstats(string _name, int _age, int _strength, int _stamina, int _dexterity,int _intelligence,int _luck,int _charm){
			name=_name;
			age=_age;
			strength=_strength;
			stamina=_stamina;
			dexterity=_dexterity;
			intelligence=_intelligence;
			luck=_luck;
			charm=_charm;
		}
		
};
