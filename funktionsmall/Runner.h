#pragma once

#include "Attendee.h"

class Runner : public Attendee{
private:
	int age;
public:
	Runner(const string& name, bool gender, int age);
	string toString() const override;
	int getAge() const;
};