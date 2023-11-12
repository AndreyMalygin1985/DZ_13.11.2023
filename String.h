#pragma once
#include<iostream>
using namespace std;

class String
{
	char* str;
	int length;
public:

	char* createName(char const* name);
	String(const char*);
	String(int length);
	String(const String& copy);

	~String() {
		//cout << "Деструктор строкового класса" << endl;
		delete[] str;
	}

	void show() {
		cout << str << endl;
	}

	String& setString(const char* string) {
		//cout << "setString" << endl;
		delete[] this->str;
		this->str = createName(string);
		return *this;
	}
};

