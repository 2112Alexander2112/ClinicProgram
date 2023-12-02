// ClinicWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Header.h"
#include "Menu.h"
#include "PatientManager.h"

int main()
{
	std::string appName = "Clinic St.Pavlov";
	std::vector<std::string> menuItem = {
		"Display all patient",
		"Referring patients to doctors",
		"Diagnosis of patients",
		"Finish program"
	};

	auto menu = std::make_unique<Menu>(appName, menuItem);
	auto patientList = std::make_unique<PatientManager>();
	patientList->loadData();
	bool stop = false;
	do {
		menu->displayAppName();
		menu->displayMenuItems();
		switch (menu->choiceProgram()) {
		case 1:
			patientList->display();
			break;
		case 2:
			patientList->findDoctor();
			break;
		case 3:
			patientList->findDiagnosis();
			break;
		case 4:
			stop = true;
			break;
		}
		if (stop == true) {
			break;
		}
	} while (menu->allowProgram());
}


