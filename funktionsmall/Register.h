#ifndef REGISTER_H
#define REGISTER_H

#include "Runner.h"
#include "Elite.h"

class Register {
private:
	Attendee** attendee;
	int nrOfAttendes;
	int capacity;
public:
	Register();
	~Register();
	void addRunner(const string& name, bool gender, int age);
	void addElite(const string& name, bool gender, const string& clubb, int seasons);
	int getNrOfAttendes() const;
	bool searchAttende(const string& strName);
	Register& operator=(const Register& other); //self check

	void viewParticipants() const;
	
	//kopieringskonstruktor -- dynamic_cast
	//tilldelning

	Register(const Register& other);

	void clearEverything();
};









#endif