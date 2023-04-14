//
//  Schedule.hpp
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#ifndef Schedule_hpp
#define Schedule_hpp

#include <stdio.h>
#include <iostream>
#include "Student.hpp"
#include <vector>
#include "UnivMember.h"
#include "Course.hpp"
using namespace std;


class Schedule
{
    friend class Course;
public:
    Schedule();
    void createSchedule();
    void displaySchedule();
    
private:
    vector<Course> courseList;
};

#endif /* Schedule_hpp */
