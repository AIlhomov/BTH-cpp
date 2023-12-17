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
	//assignment operator (modified)
	Register& operator=(const Register& other); //self check

	//view all runners and elites
	void viewParticipants() const;
	//view only runners or elites
	void viewRunners() const;
	void viewElites() const;


	//remove by given name
	bool removeElite(const string& name);
	bool removeRunner(const string& name);


	//kopieringskonstruktor -- dynamic_cast
	//tilldelning
	// 
	//copy constructor
	Register(const Register& other);

	//DRY CODE
	void clearEverything();
};









#endif