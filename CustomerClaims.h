#include<iostream>
#include<cstring>
using namespace std;

class Registeredcustomer
{
    private:
        string address;
        int DOB;
        string accountId;
    public:
        Registeredcustomer();
        Registeredcustomer(string add, int dob, string accId);
        void displayDetails();
        string fileClaims();
};

class customerClaim
{
    private:
        string claimType;
        string purpose;
        float amountOfClaim;
        int dateOfClaim

    public:
        customerClaim();
        customerClaim(string cl_type, string pur, float aoc, int do_claim);
        float calculateInsuranceClaim();
        void displayClaimDetails();
        ~customerClaim();
};
