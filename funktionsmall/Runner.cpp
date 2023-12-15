#include "Runner.h"

Runner::~Runner()
{
}

Runner::Runner(const string& name, bool gender, int age)
	: Attendee(name, gender), age(age)
{
}

string Runner::toString() const
{
	return Attendee::toString() + "\nAge: " + to_string(this->age);
}

int Runner::getAge() const
{
	return this->age;
}

Runner* Runner::clone() const
{
	return new Runner(*this);
}
