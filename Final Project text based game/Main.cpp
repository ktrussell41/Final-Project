#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
	string selection;
	bool game = false;
	
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

	

	system("pause");
	return 0;
}