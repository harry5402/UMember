//
//  Schedule.cpp
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#include "Schedule.hpp"
#include <iostream>
#include "Student.hpp"
#include <vector>
#include "UnivMember.h"
#include "Course.hpp"

Schedule::Schedule()
{
    Course c1, c2, c3, c4, c5;
    courseList = {c1, c2, c3, c4, c5};
}

void Schedule::createSchedule()
{
    int i = 0;
    do
    {
        cout << "Input Course " << (i+1) << ":";
        courseList.at(i).inputCourse();
    } while (i < 5);
}

void Schedule::displaySchedule()
{
    int i = 0;
    do
    {
        cout << "Course " << (i+1) << ": ";
        cout << courseList.at(i).getCName() << endl;
        cout << "Starts: " << courseList.at(i).getSTime() << endl;
        cout << "Ends: " << courseList.at(i).getETime() << endl;
        cout << "Weekdays: " << courseList.at(i).getDay1() << " and " << courseList.at(i).getDay2() << endl;
        i++;
        
    }while (i < 5);
}
