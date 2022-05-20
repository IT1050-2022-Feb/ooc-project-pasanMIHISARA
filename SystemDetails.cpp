#include<iostream>
#include<cstring>
#include"SystemDetails.h"
using namespace std;

systemDetails::systemDetails()
{
    strcpy(vision, "");
    strcpy(mission, "");
    strcpy(information, "");
}

void systemDetails::display()
{
    cout << vision << endl;
    cout << mission << endl;
    cout << information << endl;
}

systemDetails::~systemDetails()
{
    
}