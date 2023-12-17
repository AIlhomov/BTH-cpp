#include "Elite.h"

Elite::~Elite()
{
}

Elite::Elite(const string& name, bool gender, const string& clubb, int seasons)
	: Attendee(name, gender), clubb(clubb), seasons(seasons)
{
}

string Elite::toString() const
{
	return Attendee::toString() + "\nClubb: " + this->clubb + "\nSeasons: " + to_string(this->seasons);
}

string Elite::getClubb() const
{
	return this->clubb;
}

Elite* Elite::clone() const
{
	return new Elite(*this);
}
