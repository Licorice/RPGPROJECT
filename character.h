#ifndef CHARACTER_H
#define CHARACTER_H
using namespace std;
class MainCharacter{
			string name;
		string additionaldetails = "n/a";
		int age,strength,stamina,dexterity,intelligence,luck,charm,level,experience,statpoints;
	public:
		void setstats(string _name, int _age, int _strength, int _stamina, int _dexterity,int _intelligence,int _luck,int _charm, int _level, int _experience, int _statpoints);
};
#endif
