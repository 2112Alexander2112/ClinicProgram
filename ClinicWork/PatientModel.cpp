#include "Header.h"
#include "PatientModel.h"

PatientModel::PatientModel()
	: id(0), name("---"), surname("---"), dateOfBirth("---"), gender("---"), doctor("---"), diagnosis("---")
{
}

PatientModel::PatientModel(int id, std::string name, std::string surname, std::string dateOfBirth, std::string gender, std::string doctor, std::string diagnosis)
	: id(id), name(name), surname(surname), dateOfBirth(dateOfBirth), gender(gender), doctor(doctor), diagnosis(diagnosis)
{
}

int PatientModel::getId() const
{
	return id;
}

std::string PatientModel::getName() const
{
	return name;
}

std::string PatientModel::getSurName() const
{
	return surname;
}

std::string PatientModel::getDateOfBirth() const
{
	return dateOfBirth;
}

std::string PatientModel::getGender() const
{
	return gender;
}

std::string PatientModel::getDoctor() const
{
	return doctor;
}

std::string PatientModel::getDiagnosis() const
{
	return diagnosis;
}

void PatientModel::display() const
{
	std::cout << id;
	std::cout << std::setw(15) << name;
	std::cout << std::setw(15) << surname;
	std::cout << std::setw(15) << dateOfBirth;
	std::cout << std::setw(15) << gender;
	std::cout << std::setw(15) << doctor;
	std::cout << std::setw(15) << diagnosis;
	std::cout << std::endl;


}
