#pragma once

#include <iostream>
#include <string>

using namespace std;


class Attendee {
private:
	string name;
	bool gender;
public:
	Attendee(string name, bool gender);
	Attendee();

	virtual bool contains(string str) const;
	virtual string toString() const = 0;

	string getName() const;
	/*void setName(const string& name);
	void setGender(bool gender);*/
};