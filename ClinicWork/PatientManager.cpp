#include "Header.h"
#include "PatientManager.h"

void PatientManager::loadData()
{

    std::ifstream fin;
    patient.clear();
    fin.open("PatientData.txt");
    while (!fin.eof()) {
        int id;
        std::string name;
        std::string surname;
        std::string dateOfBirth;
        std::string gender;
        std::string doctor;
        std::string diagnosis;

        fin >> id;
        fin.ignore();
        std::getline(fin, name);
        std::getline(fin, surname);
        std::getline(fin, dateOfBirth);
        std::getline(fin, gender);
        std::getline(fin, doctor);
        std::getline(fin, diagnosis);
        PatientModel patient1(id, name, surname, dateOfBirth, gender, doctor, diagnosis);
        patient.push_back(patient1);
    }
    patient.pop_back();
    fin.close();
}

void PatientManager::display() const
{
    if (patient.empty()) {
        std::cout << "\n> patient List is emty!\n";
    }
    else {
        for (int i = 0; i < patient.size(); i++) {
            patient[i].display();
        }
    }
}

void PatientManager::findDoctor() const
{
    std::string doc;
    std::cout << "\n> Please enter the name of the attending physician!: ";
    std::cin >> doc;

    std::for_each(patient.begin(), patient.end(), [doc](const PatientModel& t) {
            if (t.getDoctor() == doc) {
                t.display();
            }
        });
}

void PatientManager::findDiagnosis() const
{
    std::string diag;
    std::cout << "\n> Please indicate your diagnosis!: ";
    std::cin >> diag;
    std::for_each(patient.begin(), patient.end(), [diag](const PatientModel& t) {
        if (t.getDiagnosis() == diag) {
            t.display();
            }
        });
}
