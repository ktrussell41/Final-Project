#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<iomanip>
#include "OptionStorage.h"
#include "KeyStore.h"
#include "WeaponStore.h"

using namespace std;

int main(){
	string selection;
	int switchselection = 0;
	bool game = false;
	int firstoption = 0;
	OptionStorage option;
	
	do{
		cout << "Start game" << endl;
		cout << "Instructions" << endl;
		getline(cin,selection);
		if (selection == "Instructions"){
			cout << "When making your decision make sure to capitalize the first letter and make sure everything is spelt right." << endl;
		} 
		else{
			game = true;
		} 

	} while (game = false); 


	cout << "Continue to game? Yes or No?" << endl;
	cin >> selection;
	if (selection == "No"){
		system("pause");
		return 0;
	}

	cout << "You wake up stranded on an island. Walk along the beach or head inland?" << endl;
	cout << "1. Walk along the beach. " << endl;
	cout << "2. Head inland. " << endl;
	cin >> switchselection;
	switch (firstoption){
	case 1:
		cout << "You walked along the beach." << endl;
		option.setaaaabDefault(true);
		break;
	case 2:
		cout << "You started to head inland." << endl;
		option.setaaaacDefault(true);
		break;
	}
	

	system("pause");
	return 0;
}