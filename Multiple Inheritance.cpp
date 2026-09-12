#include <iostream>                         // Includes cout
using namespace std;                        // Uses standard namespace

class Person                                // First base class
{
public:

    void personInfo()                       // Person function
    {
        cout << "Person information" << endl;
    }
};

class Employee                              // Second base class
{
public:

    void employeeInfo()                     // Employee function
    {
        cout << "Employee information" << endl;
    }
};

class Teacher : public Person, public Employee
// Teacher inherits from TWO classes
{
public:

    void teacherInfo()                      // Teacher function
    {
        cout << "Teacher information" << endl;
    }
};

int main()                                  // Main function
{
    Teacher t;                              // Creates Teacher object

    t.personInfo();                         // Calls Person function
    t.employeeInfo();                       // Calls Employee function
    t.teacherInfo();                        // Calls Teacher function

    return 0;                               // End program
}