//
//  Student.cpp
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#include "Student.hpp"
#include <iostream>

using namespace std;

Student::Student()
{
    GPA = 0;
    year = "____";
    major = "____";
}

void Student::setGPA(double grade)
{
    GPA = grade;
}

void Student::setYear(string classYr)
{
    year = classYr;
}

void Student::setMajor(string mjr)
{
    major = mjr;
}

double Student::getGPA()
{
    return GPA;
}

string Student::getYear()
{
    return year;
}

string Student::getMajor()
{
    return major;
}

void Student::inputStudent()
{
    cout << "Enter the Student's GPA, Year, and Major: ";
    cin >> GPA >> year >> major;
}

void Student::outputStudent()
{
    cout << "Student info:" << endl;
    cout << "GPA: " << GPA << endl;
    cout << "Major: " << major << endl;
    cout << "Year: " << year << endl;
}

