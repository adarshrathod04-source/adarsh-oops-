#include <iostream>                         // Includes cout
using namespace std;                        // Uses standard namespace

class Person                                // Common base class
{
public:

    void showPerson()                       // Person function
    {
        cout << "Person" << endl;
    }
};

class Teacher : public Person               // Teacher inherits Person
{
public:

    void showTeacher()                      // Teacher function
    {
        cout << "Teacher" << endl;
    }
};

class Student : public Person               // Student also inherits Person
{
public:

    void showStudent()                      // Student function
    {
        cout << "Student" << endl;
    }
};

class School : public Teacher, public Student
// School inherits Teacher and Student
{
};

int main()                                  // Main function
{
    School obj;                             // Creates School object

    obj.showTeacher();                      // Calls Teacher function
    obj.showStudent();                      // Calls Student function

    // obj.showPerson();                    // ERROR: ambiguous

    return 0;                               // End program
}