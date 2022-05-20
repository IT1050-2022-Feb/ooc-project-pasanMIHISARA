#include<iostream>
#include<cstring>
using namespace std;

class systemDetails
{
    private:
        string vision;
        string mission;
        string information;
    public:
       systemDetails();
       systemDetails(string vis, string mis, string info);
       void display();
       ~systemDetails();
};