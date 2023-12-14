#pragma once

#include "Attendee.h"


class Elite : public Attendee{
private:
	string clubb;
	int seasons;
public:
	virtual ~Elite();
	Elite(const string& name, bool gender, const string& clubb, int seasons);

	string toString() const override;
	
	string getClubb() const;
	Elite* clone() const override;
};