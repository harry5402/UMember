//
//  UnivMember.h
//  UMember
//
//  Created by Harry Lesak on 4/13/23.
//

#ifndef UnivMember_h
#define UnivMember_h

using namespace std;

class UnivMember
{
public:
    UnivMember();
    void setFName(string nameF);
    void setLName(string nameL);
    string getFName();
    string getLName();
    void inputUMember();
    void displayUMember();
private:
    string lName;
    string fName;
};






#endif /* UnivMember_h */
