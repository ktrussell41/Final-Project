#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<iomanip>
#include "OptionStorage.h"
#include "KeyStore.h"
#include "WeaponStore.h"
#include "OptionRunning.h"

using namespace std;

int main(){
	string selection;
	int switchselection = 0;
	bool game = false;
	bool stoploop = false;
	OptionStorage option;
	KeyStore key;
	OptionRunning runOption;
	
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
			runOption.runaaaabOption();
			stoploop = true;
			break;
		case 2:
			cout << "You started to head inland." << endl;
			runOption.runaaaacOption();
			stoploop = true;
			break;
		}
		if (switchselection >= 3 && switchselection >= 0){
			cout << "Enter a valid number. (1 or 2)" << endl;
			stoploop = false;
			continue;
		}
	} while (stoploop == false);

	
	if (runOption.getgameDefault() == true){
		do{
			cout << "You walk along the beach and find a small rusted key. Pick it up or leave it?" << endl;
			cout << "1. Pick it up." << endl;
			cout << "2. Leave it." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You picked up the key." << endl;
				runOption.runaaaadOption();
				stoploop = true;
				break;
			case 2:
				cout << "You left the key." << endl;
				runOption.runaaaaeOption();
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection >= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
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
				runOption.runaaaajOption();
				stoploop = true;
				break;
			case 2:
				cout << "You leave the temple to look around the island more." << endl;
				runOption.runaaaakOption();
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection >= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
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
				runOption.runaaaafOption();
				stoploop = true;
				break;
			case 2:
				cout << "You start to head inland." << endl;
				runOption.runaaaagOption();
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection >= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}

	if (option.getaaaafDefault() == true){
		do{
			cout << "You continued down the beach and found nothing. You head inland and find a temple. Enter the temple or Look around the inland more?" << endl;
			cout << "1. Enter Temple." << endl;
			cout << "2. Look around the island more." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You enter the temple." << endl;
				runOption.runaaaajOption();
				stoploop = true;
				break;
			case 2:
				cout << "You look around the island more." << endl;
				runOption.runaaaakOption();
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection >= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}

	system("pause");
	return 0;
}