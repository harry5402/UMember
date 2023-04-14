//
//  main.cpp
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#include <iostream>
#include <vector>
#include "UnivMember.h"
#include "student.hpp"
#include "Course.hpp"
#include "Schedule.hpp"


using namespace std;

int main()
{
    Student st1;
    st1.inputUMember();
    st1.inputStudent();
    Schedule st1Sch;
    st1Sch.createSchedule();
    
    cout << "Printing info" << endl;
    st1.displayUMember();
    st1.outputStudent();
    st1Sch.displaySchedule();
    
    return 0;
}
