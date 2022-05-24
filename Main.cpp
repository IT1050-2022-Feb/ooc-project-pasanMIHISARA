#include <iostream>
#include "Administrators.h"
#include "RegisteredCustomer.h"
#include "InsuranceDetails.h"
#include "AnalyticalCalculator.h"
#include "Branches.h"
#include "ContactInformation.h"
#include "Reports.h"
#include "AccountManager.h"
using namespace std;


int main()

{
 //---------IT21223594---------------
	RegisteredCustomer regCustomer;
  InsuranceDetails insDetails;
  AnalyticalCalculator cal;
  //----------------------------------

  //---------IT21223594---------------
   
	regCustomer.displayDetails;
	string claimInfo = regCustomer.fileClaims;
  cout << claimInfo << endl;

  insDetails.displayDetails();
	insDetails:InsuranceDetails("ID001", "Apex Insurance", "Life insurance", 195000.00); 

  cal.calAddition();
	cal.printResults();
  //----------------------------------
  
  //----------IT21225406---------------
  //administrators class
   Administrators a1,a2,a3;    
    a1.setaPos("a001");
    a1.displayAdminDetails();

    return 0;
  //---------IT21225406----------------
  //branches class
   branch br1 , br2;

  br1.setBranchID("ab001");
  br1.serBranchLocation("colombo");
  br1.setBranchAddress("1,silverstreet,colombo");
  br1.setBranchContact(0111241236);
  br1.displayBranchDetails();
  //---------IT21225406---------------
  a1.veryfyLogin();
  a2.veryfyLogin();

	
	//----------IT21222986---------------
	ContactInformation ci1  ;

	ci1.displayContactInformation ();
	//-----------------------------------

	//----------IT21222986---------------
	 Reports r1 ;

	r1.displayReports();
	//-----------------------------------

	//----------IT21222986---------------
	 AccountManager am1 ;

	am1.validateComplaints();
	am1.createReports();
	am1.string issueClaims();
	//-----------------------------------

  //---------IT21225574----------------
  //Event class
  Events evnt ;

  evnt.displayEvents();
  //-----------------------------------
  
  //--------IT21225574-----------------
  //Customer Complaints
CustomerComplaints Ccompl;

Ccompl.displayDetails();
//-------------------------------------

//----------IT21225574----------------
//AnalyzerDepartment
AnalyzerDepartment ADep;

ADep.createReports();
//------------------------------------

//--------IT21225574------------------
//Analyzers
Analyzers Anlyzr;

Anlyzr.analyzingReport();

//--------IT21224898------------------
//Customer Claims
customerClaims cusClaims;
  
cusClaims.displayDetails();

//--------IT21224898------------------
//System Details
systemDetails systDet;

systDet.display();

//--------IT21224898------------------
//System Support Details
systemSupportDetails ssdet;

  ssdet.displayDetails();
  ssdet.contactAdmin();