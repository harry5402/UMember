//
//  Course.hpp
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include <iostream>
#include "Student.hpp"
#include "UnivMember.h"
#include "Schedule.hpp"
using namespace std;

class Course
{
    friend class Schedule;
public:
    Course();
    void inputCourse();
    string getCName();
    int getSTime();
    int getETime();
    string getDay1();
    string getDay2();
    
private:
    string courseName;
    int CRN;
    int startTime, endTime;
    string weekday1;
    string weekday2;
};

#endif /* Course_hpp */
