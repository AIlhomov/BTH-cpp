#include "Register.h"

Register::Register()
	: attendee(nullptr), nrOfAttendes(0), capacity(5)
{
}

Register::~Register()
{
	delete attendee;
}

void Register::addRunner(const string& name, bool gender, int age)
{
	attendee = new Runner(name, gender, age);
}

void Register::addElite(const string& name, bool gender, const string& clubb, int seasons)
{
	attendee = new Elite(name, gender, clubb, seasons);
}

int Register::getNrOfAttendes() const
{
	return this->nrOfAttendes;
}
