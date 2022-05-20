#include<iostream>
#include<string>
include"CustomerClaims.h"
using namespace std;

Registeredcustomer::Registeredcustomer()
{
    strcpy(address, "");
    strcpy(DOB, "");
    strcpy(accountId, "");
}

void Registeredcustomer::displayDetails()
{
    cout << address << endl;
    cout << DOB << endl;
    cout << accountId << endl;
}

string Registeredcustomer::fileClaims()
{

}

customerClaim::customerClaim()
{
     strcpy(claimType, "");
    strcpy(purpose, "");
    strcpy(amountOfClaim, "");
    strcpy(dateOfClaim, "")
}

float customerClaim::calculateInsuranceClaim()
{

}