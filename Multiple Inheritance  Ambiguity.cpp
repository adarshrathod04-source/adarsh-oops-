#include <iostream>                         // Includes cout
using namespace std;                        // Uses standard namespace

class Person                                // First base class
{
public:

    void show()                             // Function named show()
    {
        cout << "Person" << endl;           // Prints Person
    }
};

class Employee                              // Second base class
{
public:

    void show()                             // Same function name
    {
        cout << "Employee" << endl;         // Prints Employee
    }
};

class Teacher : public Person, public Employee
// Teacher inherits both classes
{
};

int main()                                  // Main function
{
    Teacher obj;                            // Creates Teacher object

    obj.Person::show();                     // Calls Person's show()
    obj.Employee::show();                   // Calls Employee's show()

    return 0;                               // End program
}