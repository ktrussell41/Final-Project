#include "OptionRunning.h"
#include "OptionStorage.h"
#include "KeyStore.h"
#include "WeaponStore.h"
using namespace std;

void OptionRunning::setgameDefault(bool value){
	game = value;
}
bool OptionRunning::getgameDefault(){
	return game;
}

void OptionRunning::runaaaabOption(){
	option.setaaaabDefault(true);
	option.setaaaacDefault(false);
	game = true;
	
}