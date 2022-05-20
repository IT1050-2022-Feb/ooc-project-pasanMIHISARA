#include <string>
using namespace std;

class InsuranceDetails {

private:
	string insuranceID;
	string insuranceName;
	string insuranceType;
	float insuranceCost;
public:
	InsuranceDetails();
	InsuranceDetails(string id, string name, string type, float cost);

	void displayDetails();

	~InsuranceDetails();
};