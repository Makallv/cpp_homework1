#include <fstream>

class Person
{
private:
    std::string fullName;
    int age;
    std::string job;

    bool isPremiumEmployee();
public:
    Person(std::string rFullName, int rAge, std::string rJob);

    std::string getName();
    int getAge();
    std::string getJob();

    void printData();

    void printToFile(std::ofstream &file);

};
