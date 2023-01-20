#include <iostream>
#include <utility>
#include "../include/Person.h"

Person::Person(std::string r_full_name, int r_age, std::string r_job) {
    full_name = std::move(r_full_name);
    age = r_age;
    job = std::move(r_job);
}

bool Person::isPremiumEmployee() {
    return age >= 25 && job == "TDL";
}

std::string Person::getName() {
    return full_name;
}

std::string Person::getJob() {
    return job;
}

int Person::getAge() {
    return age;
}

void Person::printData() {
    std::cout << "Name: " + full_name +"\n"
    << "Age: " << age << "\n"
    << "Job: " + job + "\n"
    << "Is premium: " << isPremiumEmployee() << std::endl;
}

void Person::printToFile(std::ofstream &file) {
    file << "Name: " << full_name << " | "
         << " Age: " << age << " | "
         << " Job: " << job << " | "
         << " Is premium: " << isPremiumEmployee() << std::endl;
}