//
//  Course.cpp
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#include "Course.hpp"
#include "Student.hpp"
#include "UnivMember.h"
#include "Schedule.hpp"
#include <iostream>
using namespace std;


Course::Course()
{
    courseName = "_____";
    startTime = 0;
    endTime = 0;
    weekday1 = "_____";
    weekday2 = "_____";
}

void Course::inputCourse() 
{
    cout << "Input Course: " << endl;
    cout << "Name: ";
    getline(cin, courseName);
    cout << "Start Time: ";
    cin >> startTime;
    cout << "End Time: ";
    cin >> endTime;
    cout << "Weekdays: ";
    cin >> weekday1 >> weekday2;
}

string Course::getCName()
{
    return courseName;
}

int Course::getSTime()
{
    return startTime;
}

int Course::getETime()
{
    return endTime;
}

string Course::getDay1()
{
    return weekday1;
}

string Course::getDay2()
{
    return weekday2;
}
