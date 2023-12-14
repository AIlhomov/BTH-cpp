#include "Runner.h"

string Runner::toString() const
{
	return Attendee::toString() + "Age: " + to_string(this->age);
}

int Runner::getAge() const
{
	return this->age;
}
