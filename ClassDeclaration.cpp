#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
	string name;
	int age{};
	double avg{};

	void getAvg()
	{
		cout << avg << endl;
	}

	void DisplayDetails()
	{
		cout << "Player Name: " << name << endl;
		cout << "Player Age: " << age << endl;
		cout << "Player Avg: " << avg << endl << "Thank You!!" << endl;
	}

};