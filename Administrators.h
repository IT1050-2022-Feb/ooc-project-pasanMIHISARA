
#include "endUser.h"
#include <string>
using namespace std;

class Administrators : public endUser{

  private:
    string aPos;
    SystemSupportDetails* SystemSupportDetail[3];
    Events* Event[2];

  public:  
    Administrators();
    void setaPos(string pus);
    void displayAdminDetails();
    ~Administrators();
};


   
