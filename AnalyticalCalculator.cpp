#include "AnalyticalCalculator.h"
#include <iostream>
using namespace std;


AnalyticalCalculator::AnalyticalCalculator() {
	 value[10] = {0};
	 returnVal = 0;
}

AnalyticalCalculator::~AnalyticalCalculator() {
	cout << "destructor" << endl;
}