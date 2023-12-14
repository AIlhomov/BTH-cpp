#pragma once

#include "Attendee.h"

class Runner : public Attendee{
private:
	int age;
public:
	string toString() const override;
	int getAge() const;
};