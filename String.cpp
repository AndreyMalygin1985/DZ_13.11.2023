#include "String.h"
#include<iostream>
using namespace std;

char* String::createName(char const* name) {
	//cout << "String::createName" << endl;
	char* temp = new char[strlen(name) + 1];
	strcpy_s(temp, strlen(name) + 1, name);
	return temp;
}

String::String(int length) {
	//cout << "Конструктор класса String по умолчанию" << endl;
	str = new char[length + 1];
	str[0] = '\0';
	length = 0;
}

String::String(const char* s) {
	//cout << "Конструктор класса (const char)" << endl;
	str = new char[length + 1];
	int i;
	for (i = 0; i < length && s[i] != '\0'; i++) {
		str[i] = s[i];
	}
	str[i] = '\0';
	length = i - 1;
}

String::String(const String& copy) {
	//cout << "Конструктор Копирования класса String" << endl;
	if (this->str != nullptr) {
		delete[] str;
	}
	length = strlen(copy.str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		this->str[i] = copy.str[i];
	}
	this->str[length] = '\0';
}