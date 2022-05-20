
#include <string>
#include "RegisteredCustomer.h"
#include "CustomerClaim.h"
#include "CusComplaints.h"
#include "Reports.h"
using namespace std;

Class AccountManager : public Administrators
{
	private :
		string validation;
		CusComplaints* cuscomp[2];
		Reports* reports[2];
		CustomerClaim* cusclaim[2];
	
	public :
		AccountManager();
		AccountManager(string val , CusComplaints * cusCom ,Reports * rep   );
		string validateComplaints();
		void createReports();
		string issueClaims();
		~AccountManager();
	
};