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

void OptionRunning::runaaaacOption(){
	option.setaaaacDefault(true);
	option.setaaaabDefault(false);
	game = false;
}

void OptionRunning::runaaaadOption(){
	option.setaaaadDefault(true);
	key.setkabDefault(true);
	option.setaaaaeDefault(false);
}

void OptionRunning::runaaaaeOption(){
	option.setaaaaeDefault(true);
	key.setkabDefault(false);
	option.setaaaadDefault(false);
}

void OptionRunning::runaaaajOption(){
	option.setaaaajDefault(true);
	option.setaaaakDefault(false);
}

void OptionRunning::runaaaakOption(){
	option.setaaaakDefault(true);
	option.setaaaajDefault(false);
}

void OptionRunning::runaaaafOption(){
	option.setaaaafDefault(true);
	option.setaaaagDefault(false);
}

void OptionRunning::runaaaagOption(){
	option.setaaaagDefault(true);
	option.setaaaafDefault(false);
}