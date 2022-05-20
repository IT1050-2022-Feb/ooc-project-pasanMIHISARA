#include <string>
using namespace std;

class endUser
{
protected:
  string userID;
  string FirstName;
  string NIC;
  string email;
  string UserName;
  string password;

public:

  endUser();
  endUser(string u_ID ,string f_Name ,string nic, string e_mail ,string U_name  ,string pass);

  string veryfyLogin();

  ~endUser();
  

   
}