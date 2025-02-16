#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
public:
    Student(string n, int a);
    void setAge(int newA);
    void setName(string newN);
    string getName();
    int getAge();
    void printStudentInfo() const;
private:
    string name;
    int age;
};

#endif // STUDENT_H
