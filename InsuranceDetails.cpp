#include "InsuranceDetails.h"
#include <iostream>
#include <string>
using namespace std;

InsuranceDetails::InsuranceDetails() {

	insuranceID = "";
	insuranceName = "";
	insuranceType = "";
	insuranceCost = 0.00;
}

InsuranceDetails::~InsuranceDetails() {

	cout << "Destructor called!" << endl;
}
