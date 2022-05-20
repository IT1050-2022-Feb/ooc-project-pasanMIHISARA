#include<string>
using namespace std;

class CusComplaints
{
private:
  string C_id;
  string C_ComplainID;
  string C_email;
  string C_complaints;
  int C_compldate;

public:
  CusComplaints();
  void displayDetails();
  ~CusComplaints();
};
