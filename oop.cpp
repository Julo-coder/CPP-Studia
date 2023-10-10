#include <iostream>
using namespace std;

class Employee {
    private:
        string Name;
        string Company;
        int Age;
    public:
        void Greeting(){
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
        }
        Employee(string name, string company, int age) {
            Name = name;
            Company = company;
            Age = age;
        }
};


int main(){
    int number;
    Employee emp1 = Employee("Julek", "Politechnika", 20);
    // emp1.Name = "Julek";
    // emp1.Company = "Politechnika";
    // emp1.Age = 20;
    emp1.Greeting();
    
    Employee emp2 = Employee("Agnieszka", "Multikino", 25);
    // emp2.Name = "Agnieszka";
    // emp2.Company = "UAM";
    // emp2.Age = 25; 
    emp2.Greeting();
    
    return 0;
}
