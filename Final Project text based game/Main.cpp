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
	OptionStorage option;
	
	do{
		cout << "Start game" << endl;
		cout << "Instructions" << endl;
		getline(cin,selection);
		if (selection == "Instructions"){
			cout << "When making your decision make sure to input a valid number. There will be only two(2) options so the only valid numbers should be 1 and 2." << endl;
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

	do{
		cout << "You wake up stranded on an island. Walk along the beach or head inland?" << endl;
		cout << "1. Walk along the beach. " << endl;
		cout << "2. Head inland. " << endl;
		cin >> switchselection;
		switch (switchselection){
		case 1:
			cout << "You walked along the beach." << endl;
			option.setaaaabDefault(true);
			game = true;
			break;
		case 2:
			cout << "You started to head inland." << endl;
			option.setaaaacDefault(true);
			game = false;
			break;
		}
	} while (switchselection = 0);

	if (game = true){
		do{
			cout << "You walk along the beach and find a small rusted key. Pick it up or leave it?" << endl;
			cout << "1. Pick it up." << endl;
			cout << "2. Leave it." << endl;
		} while (switchselection = 0);
	}


	system("pause");
	return 0;
}