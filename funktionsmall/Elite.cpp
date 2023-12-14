#include "Elite.h"

string Elite::toString() const
{
	return Attendee::toString() + "Clubb: " + this->clubb + "\nSeasons: " + to_string(this->seasons);
}

string Elite::getClubb() const
{
	return this->clubb;
}
