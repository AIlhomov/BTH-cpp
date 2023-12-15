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

void Register::viewRunners() const
{
	cout << "Runners: " << endl;

	for (int i = 0; i < nrOfAttendes; i++)
	{
		Runner* r = dynamic_cast<Runner*>(attendee[i]);
		if (r) {
			cout << r->toString() << endl;
		}
	}
}

void Register::viewElites() const
{
	cout << "Elites: " << endl;
	for (int i = 0; i < nrOfAttendes; i++)
	{
		Elite* e = dynamic_cast<Elite*>(attendee[i]);
		if (e) {
			cout << e->toString() << endl;
		}
	}
}

bool Register::removeElite(const string& name)
{
	if (nrOfAttendes == 0) return false;

	for (int i = 0; i < nrOfAttendes; i++)
	{
		Elite* e = dynamic_cast<Elite*>(attendee[i]);
		if (e) {
			Elite* temp = new Elite(name, 0, "?", 0);

			if (temp->getName() == attendee[i]->getName()) {

				delete attendee[i];
				attendee[i] = this->attendee[--nrOfAttendes];

				attendee[nrOfAttendes] = nullptr;
				delete temp;
				return true;
			}

			
		}
	}
	return false;
}

bool Register::removeRunner(const string& name)
{
	if (nrOfAttendes == 0) return false;

	for (int i = 0; i < nrOfAttendes; i++)
	{
		Runner* r = dynamic_cast<Runner*>(attendee[i]);

		if (r) {
			Runner* temp = new Runner(name, 0, 0);

			if (temp->getName() == attendee[i]->getName()) {

				delete attendee[i];

				attendee[i] = attendee[nrOfAttendes--];

				attendee[nrOfAttendes] = nullptr;

				delete temp;
				return true;
			}
		}
	}

	return false;
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
			this->attendee[i] = other.attendee[i]->clone();
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
