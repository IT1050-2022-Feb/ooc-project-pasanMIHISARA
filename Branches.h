#include <string>
using namespace std;

class branch
{
private:

  string branchID;
  string branchLocation;
  string branchAddress;
  int branchContact;

public:

  branch();

  void setBranchID(string branchID);
  void setBranchLocation(string branchLocation );
  void setBranchAddress(string branchAddress);
  void setBranchContact(int branchContact);

  void displayBranchDetails();
  ~branch();

};