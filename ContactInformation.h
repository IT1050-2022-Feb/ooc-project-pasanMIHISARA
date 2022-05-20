#include <string>
using namespace std;

class ContactInformation {
private:
  int CIpNo;
  string CIaddress;
  string CIemail;

public:
  ContactInformation();
  ContactInformation(int number, string address, string email); // overloaded
  void displayContactInformation();
  ~ContactInformation();
};