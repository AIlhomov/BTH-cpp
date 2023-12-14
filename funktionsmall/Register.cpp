#include "Register.h"

Register::Register()
	: attendee(nullptr), nrOfAttendes(0), capacity(5)
{
	attendee = new Attendee*[capacity] {nullptr};
}

Register::~Register()
{
	for (int i = 0; i < nrOfAttendes; i++) {
		delete attendee[i];
	}
	delete[] attendee;
}

void Register::addRunner(const string& name, bool gender, int age)
{
	if (this->nrOfAttendes == this->capacity) {
		this->capacity++;
	}
	this->attendee[nrOfAttendes++] = new Runner(name, gender, age);
	
}

void Register::addElite(const string& name, bool gender, const string& clubb, int seasons)
{
	if (this->nrOfAttendes == this->capacity) this->capacity++;
	this->attendee[nrOfAttendes++] = new Elite(name, gender, clubb, seasons);
}

int Register::getNrOfAttendes() const
{
	return this->nrOfAttendes;
}

bool Register::searchAttende(const string& strName)
{
	for (int i = 0; i < nrOfAttendes; i++) {
		if (attendee[i]->getName() == strName) return true;
	}
	return false;
}

Register& Register::operator=(const Register& other)
{
	if (this != &other) {
		clearEverything(); //clears everything to zero.

		nrOfAttendes = other.nrOfAttendes;
		capacity = other.capacity;
		attendee = new Attendee * [capacity];
		for (int i = 0; i < nrOfAttendes; i++) {
			attendee[i] = other.attendee[i]->clone();
		}
	}
	return *this;
}

void Register::viewParticipants() const
{
	for (int i = 0; i < nrOfAttendes; i++) {
		cout << attendee[i]->toString() << endl;
	}
}

Register::Register(const Register& other)
{
	if (this != &other)
	{
		clearEverything();

		this->capacity = other.capacity;
		this->nrOfAttendes = other.nrOfAttendes;
		attendee = new Attendee * [capacity];

		for (int i = 0; i < nrOfAttendes; i++) {
			attendee[i] = other.attendee[i]->clone();
		}
	}
}

void Register::clearEverything()
{
	for (int i = 0; i < nrOfAttendes; i++) {
		delete attendee[i];
	}
	delete[] attendee;
	nrOfAttendes = 0;
	capacity = 5;
}
