#include <iostream>
#include <vector>
#include "include/Person.h"
#include <string>

int main() {

    std::ifstream infile{"../in.txt"};

    if (!infile){
        std::cerr << "Error: Could not open file, or file is non existent" << std::endl;
        return 1;
    }

    int n;
    infile >> n;

    std::string fullName;
    int age;
    std::string job;

    std::vector<Person> personVector;

    for (int i = 0; i < n; ++i) {

        std::cout << "Please enter the persons" << i + 1 << " name ";
        std::cin >> std::ws;
        (void)std::getline(std::cin, fullName);

        std::cout << "Please enter the persons" << i + 1 << " age ";
        std::cin >> age;

        std::cout << "Please enter the persons" << i + 1 << " job title ";
        std::cin >> job;

        Person person(fullName, age, job);
        personVector.push_back(person);

    }

    std::ofstream outfile("../out.txt");
    if (!outfile){
        std::cerr << "Error: out.txt couldn't be open" << std::endl;
        return 1;
    }

    auto i = 0;
    for (auto & x : personVector){
        std::cout << "Person " << i << std::endl;
        x.printData();
        x.printToFile(outfile);
        i++;
    }

    return 0;
}
