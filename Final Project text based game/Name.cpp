#include"Name.h"

Name::Name(){
	name = "Unknown";
}
void Name::setName(string value){
	name = value;
}
string Name::getName(){
	return name;
}