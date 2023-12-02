#pragma once
class PatientModel
{
    int id;
    std::string name;
    std::string surname;
    std::string dateOfBirth;
    std::string gender;
    std::string doctor;
    std::string diagnosis;
public:
    PatientModel();
    PatientModel(int id, std::string name, std::string surname, std::string dateOfBirth, std::string gender, std::string doctor, std::string diagnosis);
    int getId() const;
    std::string getName() const;
    std::string getSurName() const;
    std::string getDateOfBirth() const;
    std::string getGender() const;
    std::string getDoctor() const;
    std::string getDiagnosis() const;
    void display() const;

};

