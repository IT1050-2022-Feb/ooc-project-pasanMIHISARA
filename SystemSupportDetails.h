#include <iostream>
#include <cstring>
using namespace std;

class systemsSupportDetails
{
    private:
        char adminId[10];
        char adminName[20];
        char adminEmail[40];
    public:
        systemsSupportDetails();
        void displayDetails;
        void contactAdmin();
        ~systemsSupportDetails();
};