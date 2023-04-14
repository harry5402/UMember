//
//  UnivMember.cpp
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#include <stdio.h>
#include <iostream>
#include "UnivMember.h"
using namespace std;

UnivMember::UnivMember()
{
    fName = "____";
    lName = "____";
}
void UnivMember::setFName(string nameF)
{
    fName = nameF;
}
void UnivMember::setLName(string nameL)
{
    lName = nameL;
}
string UnivMember::getFName()
{
    return fName;
}
string UnivMember::getLName()
{
    return lName;
}
void UnivMember::displayUMember()
{
    cout << "University Member: " << endl;
    cout << lName << ", " << fName << endl;
}
void UnivMember::inputUMember()
{
    cout << "Enter First Name: ";
    cin >> fName;
    cout << "Enter Last Name: ";
    cin >> lName;
}


