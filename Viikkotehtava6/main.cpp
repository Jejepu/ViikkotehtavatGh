#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    Student A("A", 30);
    Student B("B", 25);
    Student C("C", 29);
    Student D("D", 24);


    // alussa luodaan opiskelija
    studentList.push_back(A);
    studentList.push_back(B);
    studentList.push_back(C);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << " student name: " << endl;
            string name;
            cin >> name;

            cout << " student age: " << endl;
            int age;
            cin >> age;

            studentList.emplace_back(name, age); //pitäisi saada string ja int valuet syötettyä
            cout << " new student added";

                break;

        }
    case 1:
        // Tulosta StudentList vektorin kaikkien opiskelijoiden
        // nimet.
        //muokkaa studentlist tähän
        cout << " Student list: "<< endl;
        for (const auto &students : studentList){
            students.printStudentInfo();
        }
        cout << endl;

        break;

    case 2:
        // Järjestä StudentList vektorin Student oliot nimen mukaan
        // algoritmikirjaston sort funktion avulla
        // ja tulosta printStudentInfo() funktion avulla järjestetyt
        // opiskelijat
        //sama vertailu, aakkoset a< b, b>c
        {
        sort(studentList.begin(), studentList.end(),[] (Student &B,Student &A){
            return A.getName() > B.getName();
            });

        cout << endl << " Sorted by Name " << endl;
        for (auto &students: studentList){
        students.printStudentInfo();
        }
        break;
        }

    case 3:
        // Järjestä StudentList vektorin Student oliot iän mukaan
        // algoritmikirjaston sort funktion avulla
        // ja tulosta printStudentInfo() funktion avulla järjestetyt
        // opiskelijat
        {
            sort(studentList.begin(), studentList.end(),[] (Student &B,Student &A){
                return A.getAge() < B.getAge();
            });
        cout << endl << "Sorted by Age" << endl;
        for (auto &students: studentList){
            students.printStudentInfo();
        }
        break;
        }
    case 4:
        // Kysy käyttäjältä opiskelijan nimi
        // Etsi studentListan opiskelijoista algoritmikirjaston
        // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
        // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

        cout << " Search for a person " << endl;
        string etsittavanimi;
        cin >> etsittavanimi;

        auto it = find_if(studentList.begin(), studentList.end(), [&etsittavanimi](Student &S)
        {return S.getName() == etsittavanimi;
        });

        if(it != studentList.end()){
            it->printStudentInfo();
        }
        else{
            cout << "Student not found" << endl;
        }
    break;
}
}while(selection < 5);

//käy vektorin oliot läpi
//tuhoa ne delete

return 0;
}
