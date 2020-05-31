#include"mystringg.hpp"
#include<iostream>
int main() {
	char* Str =(char*) "Asde";
	MyString LOWER = "Asd";
	LOWER = Str;
	MyString POWER = "ASDE";
	MyString SHOWER = (POWER + "DOWER") + LOWER;
	std::cout << SHOWER;
	return 0;
}