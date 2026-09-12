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

class Teacher : virtual public Person       // Virtual inheritance
{
public:

    void showTeacher()                      // Teacher function
    {
        cout << "Teacher" << endl;
    }
};

class Student : virtual public Person       // Virtual inheritance
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

    obj.showPerson();                       // Only ONE Person object
    obj.showTeacher();                      // Teacher function
    obj.showStudent();                      // Student function

    return 0;                               // End program
}