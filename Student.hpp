//
//  Student.h
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>
#include "UnivMember.h"
using namespace std;

class Student : public UnivMember
{
public:
    Student();
    void setGPA(double grade);
    double getGPA();
    
    void setMajor(string mjr);
    string getMajor();
    
    void setYear(string classYr);
    string getYear();
    
    void inputStudent();
    void outputStudent();
private:
    double GPA;
    string year;
    string major;
};


#endif /* Student_hpp */
