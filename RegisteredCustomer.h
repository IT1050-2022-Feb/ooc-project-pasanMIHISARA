#include <string>
#include "EndUser.h"
#include "CusComplains.h"
#include "InsuranceDetails.h"
#include "Branches.h"
#include "ContactInformation.h"
#include "SystemDetails.h"
using namespace std;

class RegisteredCustomer : public EndUsers
{
private:
	string address;
	int DOB;
	string accountID;

	CusComplains* complain;
	InsuranceDetails* insDet;
	Branches* branch;
	ContactInformation* Cinfo;
	SystemDetails* SDetails;


public:
	RegisteredCustomer();
	RegisteredCustomer(string address, int dob, string accID, CusComplain* cmpl, InsuranceDetails* insdtl, Branches* pBranch, ContactInformation* PCinfo, SystemDetails* PSDetails);

	void displayDetails();
	string fileClaims(string accountID ,CustomerClaim* claim[3] );

	~RegisteredCustomer();
};

