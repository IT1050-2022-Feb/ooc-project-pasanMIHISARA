#include "RegisteredCustomer.h"
#include <iostream>
#include <string>
using namespace std;

RegisteredCustomer::RegisteredCustomer() {
	string address = "";
	int DOB = 0;
	string accountID = "";
}

RegisteredCustomer::~RegisteredCustomer() {
	cout << "RegisteredCustomer destructor called!" << endl;
}
