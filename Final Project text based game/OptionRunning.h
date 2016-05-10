#pragma once
#include "OptionRunning.h"
#include "OptionStorage.h"
#include "KeyStore.h"
#include "WeaponStore.h"

using namespace std;

class OptionRunning{
private:
	int switchselection = 0;
	bool game = false;
	bool stoploop = false;
	OptionStorage option;
	KeyStore key;
public:
	void setgameDefault(bool value);
	bool getgameDefault();

	void runaaaabOption();

};