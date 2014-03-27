#include <string>
#include "character.h"
 using namespace std;
//class MainCharacter{
//	public:

		void MainCharacter::setstats(string _name, int _age, int _strength, int _stamina, int _dexterity,int _intelligence,int _luck,int _charm, int _level, int _experience, int _statpoints){
			name=_name;
			age=_age;
			strength=_strength;
			stamina=_stamina;
			dexterity=_dexterity;
			intelligence=_intelligence;
			luck=_luck;
			charm=_charm;
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
