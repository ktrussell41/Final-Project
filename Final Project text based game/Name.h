#pragma once

#include<string>

using namespace std;

class Name{
private:
	string name;
public:
	Name();
	void setName(string value);
	string getName();
};