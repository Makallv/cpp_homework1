#include <fstream>

class Person
{
private:
    std::string full_name;
    int age;
    std::string job;

    bool isPremiumEmployee();
public:
    Person(std::string r_full_name, int r_age, std::string r_job);

    std::string getName();
    int getAge();
    std::string getJob();

    void printData();

    void printToFile(std::ofstream &file);

};
