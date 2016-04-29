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
	bool game = false;
	bool aaaab = false;
	
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

	cout << "You wake up stranded in a rowboat with two islands in view. Sail to the island" << endl << "on the right or the left?" << endl;
	switch (aaaab){
	default:
		cout << "Please input a valid number." << endl;

	}
		

	system("pause");
	return 0;
}