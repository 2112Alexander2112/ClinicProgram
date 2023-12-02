#pragma once
#include "PatientModel.h"

class PatientManager
{
	std::vector<PatientModel> patient;
public:
	void loadData();
	void display() const;
	void findDoctor() const;
	void findDiagnosis() const;
};

