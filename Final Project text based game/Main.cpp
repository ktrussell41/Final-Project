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
			option.setaaaacDefault(false);
			stoploop = true;
			break;
		case 2:
			cout << "You started to head inland." << endl;
			option.setaaaacDefault(true);
			option.setaaaabDefault(false);
			stoploop = true;
			break;
		}
		if (switchselection >= 3 && switchselection <= 0){
			cout << "Enter a valid number. (1 or 2)" << endl;
			stoploop = false;
			continue;
		}
	} while (stoploop == false);

	
	if (option.getaaaabDefault()){
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
				option.setaaaaeDefault(false);
				game = true;
				stoploop = true;
				break;
			case 2:
				cout << "You left the key." << endl;
				option.setaaaaeDefault(true);
				key.setkabDefault(false);
				option.setaaaadDefault(false);
				game = false;
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection <= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}
	if (option.getaaaacDefault()){
		do{
			cout << "You started to head inland. You see a temple. Enter it or look around the island more?" << endl;
			cout << "1. Enter the temple." << endl;
			cout << "2. Look around the island more." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You Entered the temple." << endl;
				option.setaaaafDefault(true);
				option.setaaaagDefault(false);
				stoploop = true;
				break;
			case 2:
				cout << "You leave the temple to look around the island more." << endl;
				option.setaaaagDefault(true);
				option.setaaaafDefault(false);
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection <= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}

	if (option.getaaaadDefault()){
		do{
			cout << "You picked up the key. Continue looking on the beach or head inland?" << endl;
			cout << "1. Continue down the beach." << endl;
			cout << "2. Head inland." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You continue down the beach." << endl;
				option.setaaaafDefault(true);
				option.setaaaagDefault(false);
				stoploop = true;
				break;
			case 2:
				cout << "You start to head inland." << endl;
				option.setaaaagDefault(true);
				option.setaaaafDefault(false);
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection <= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}

	if (option.getaaaafDefault()){
		do{
			cout << "You continued down the beach and found nothing. You head inland and find a temple. Enter the temple or Look around the inland more?" << endl;
			cout << "1. Enter Temple." << endl;
			cout << "2. Look around the island more." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You enter the temple." << endl;
				option.setaaaajDefault(true);
				option.setaaaakDefault(false);
				stoploop = true;
				break;
			case 2:
				cout << "You look around the island more." << endl;
				option.setaaaakDefault(true);
				option.setaaaajDefault(false);
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection <= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}

	if (option.getaaaakDefault()){
		do{
			cout << "Keep looking around the island. Found an old hut made with, what look like poorly made bricks and a thatch roof. It has no door. Look inside the hut or go back to the temple." << endl;
			cout << "1. Look indide the hut." << endl;
			cout << "2. Go back to the temple." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You look iside the hut." << endl;
				option.setaaaalDefault(true);
				option.setaaaamDefault(false);
				stoploop = true;
				break;
			case 2:
				cout << "You head back to the temple." << endl;
				option.setaaaamDefault(true);
				option.setaaaalDefault(false);
				stoploop = true;
				break;
			}
			if (switchselection >= 3 && switchselection <= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}

	if (option.getaaaalDefault()){
		do {
			cout << "Look inside the hut. As you head into the hut you see that there are 2 skeletons in what looks like ancient armor, holding ancient weapons. Leave the hut or pick up the weapons." << endl;
			cout << "Leave the hut." << endl;
			cout << "Pick up the weapons." << endl; 
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You leave the hut." << endl;
				option.setaaaanDefault(true);
				option.setaaaaoDefault(false);
				stoploop == true;
				break;
			case 2:
				cout << "You pick up the weapons." << endl;
				option.setaaaaoDefault(true);
				option.setaaaanDefault(false);
				stoploop == true;
				break;
			}
			if (switchselection >= 3 && switchselection <= 0){
				cout << "Enter a valid number. (1 or 2)" << endl;
				stoploop = false;
				continue;
			}
		} while (stoploop == false);
	}

	if (option.getaaaanDefault){
		do{
			cout << "You grab the ancient sword by the handle. As you look lift the sword you notice the cracks in the blade. You swing it to test its weight, when you do the blade falls apart and only the hilt remains. Take the hilt or leave it." << endl;
			cout << "1. Take the hilt." << endl;
			cout << "2. Leave the hilt." << endl;
			cin >> switchselection;
			switch (switchselection){
			case 1:
				cout << "You took the hilt." << endl;
				option.setaaaapDefault(true);
				option.setaaaaqDefault(false);
				stoploop == true;
			case 2:
				option.setaaaaqDefault(true);
				option.setaaaapDefault(false);
				stoploop == false;
			}
		} while (stoploop == false);
	}

	if (option.getaaaapDefault()){
		do {
			cout << "You go back to the temple. The temple is overgrown. It's made of the same bricks as the hunt but made better. Enter the temple or go back to the boat." << endl;
			cout << "1. Enter the temple." << endl;
			cout << "2. Go back to the boat." << endl;
			switch (switchselection){
			case 1:
				cout << "You enter the temple." << endl;
				break;
			case 2:
				cout << "You went back to the boat." << endl;
				break;
			}
		} while (stoploop = false);
	}
	system("pause");
	return 0;
}