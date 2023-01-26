#include <iostream>
#include <utility>
#include "../include/Person.h"

Person::Person(std::string rFullName, int rAge, std::string rJob) {
    fullName = std::move(rFullName);
    age = rAge;
    job = std::move(rJob);
}

bool Person::isPremiumEmployee() {
    return age >= 25 && job == "TDL";
}

std::string Person::getName() {
    return fullName;
}

std::string Person::getJob() {
    return job;
}

int Person::getAge() {
    return age;
}

void Person::printData() {
    std::cout << "Name: " + fullName + "\n"
    << "Age: " << age << "\n"
    << "Job: " + job + "\n"
    << "Is premium: " << isPremiumEmployee() << std::endl;
}

void Person::printToFile(std::ofstream &file) {
    file << "Name: " << fullName << " | "
         << " Age: " << age << " | "
         << " Job: " << job << " | "
         << " Is premium: " << isPremiumEmployee() << std::endl;
}