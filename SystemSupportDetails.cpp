#include <iostream>
#include <cstring>
#include "SystemSupportDetails.h"
using namespace std;

SystemSupportDetails::SystemSupportDetails()
{
    strcpy(adminId, "");
    strcpy(adminName, "");
    strcpy(adminEmail,"");
}

void SystemSupportDetails::displayDetails()
{
    cout << adminId << endl;
    cout << adminName << endl;
    cout << adminEmail << endl;
}

void SystemSupportDetails::contactAdmin()
{

}

SystemSupportDetails::~SystemSupportDetails()
{
    
}