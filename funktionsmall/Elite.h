#pragma once

#include "Attendee.h"


class Elite : public Attendee{
private:
	string clubb;
	int seasons;
public:
	string toString() const override;
	
	string getClubb() const;
};