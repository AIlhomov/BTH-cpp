#pragma once

#include "Attendee.h"

class Runner : public Attendee{
private:
	int age;
public:
	virtual ~Runner();
	Runner(const string& name, bool gender, int age);
	string toString() const override;
	int getAge() const;
	Runner* clone() const override;
};