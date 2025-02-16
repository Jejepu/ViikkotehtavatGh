#include "student.h"
#include <iostream>

using namespace std;

Student::Student(string n, int a)
{
    name = n;
    age = a;
}

void Student::setAge(int newA)
{

    age = newA;
}

void Student::setName(string newN)
{
    cout << " student name: " << endl;
    string name;
    cin >> name;

    name = newN;
}

string Student::getName()
{
    return name;
}

int Student::getAge()
{
    return age;
}



void Student::printStudentInfo() const{
    cout << " student name:  " << name << "  student age:  " << age << endl;
}
