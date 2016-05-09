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
	bool stoploop = false;
	OptionStorage option;
	KeyStore key;
	
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
			stoploop = true;
			break;
		case 2:
			cout << "You started to head inland." << endl;
			option.setaaaacDefault(true);
			game = false;
			stoploop = true;
			break;
		}
		if (switchselection >= 3 && switchselection >= 0){
			cout << "Enter a valid number. (1 or 2)" << endl;
			continue;
		}
	} while (stoploop == false);

	if (game == true){
		do{
			cout << "You walk along the beach and find a small rusted key. Pick it up or leave it?" << endl;
			cout << "1. Pick it up." << endl;
			cout << "2. Leave it." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You picked up the key." << endl;
				option.setaaaadDefault(true);
				key.setkabDefault(true);
				stoploop = true;
				break;
			case 2:
				cout << "You left the key." << endl;
				option.setaaaaeDefault(true);
				key.setkabDefault(false);
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection >= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				continue;
			}
		} while (stoploop == false);
	}
	else{
		do{
			cout << "You started to head inland. You see a temple. Enter it or look around the island more?" << endl;
			cout << "1. Enter the temple." << endl;
			cout << "2. Look around the island more." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You Entered the temple." << endl;
				option.setaaaajDefault(true);
				stoploop = true;
				break;
			case 2:
				cout << "You leave the temple to look around the island more." << endl;
				option.setaaaakDefault(true);
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection >= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				continue;
			}
		} while (stoploop == false);
	}

	if (option.getaaaadDefault() == true){
		do{
			cout << "You picked up the key. Continue looking on the beach or head inland?" << endl;
			cout << "1. Continue down the beach." << endl;
			cout << "2. Head inland." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You continue down the beach." << endl;
				option.setaaaafDefault(true);
				stoploop = true;
				break;
			case 2:
				cout << "You start to head inland." << endl;
				option.setaaaagDefault(true);
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection >= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				continue;
			}
		} while (stoploop == false);
	}


	system("pause");
	return 0;
}