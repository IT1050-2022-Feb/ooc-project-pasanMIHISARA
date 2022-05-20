#include <string>
#include <iostream>
#include<Enduser.h>
using namespace std;

endUser::endUser()
{
     userID ="";
     FirstName="";
     NIC="";
     email="";
     UserName="";
     password="";

}


endUser::endUser(string u_ID ,string f_Name ,string nic, string e_mail ,string U_name  ,string pass)
{
     userID = u_ID;
     FirstName= f_Name;
     NIC = nic;
     email=e_mail;
     UserName= U_name;
     password= pass;
}



endUser::~endUser()
{

}
