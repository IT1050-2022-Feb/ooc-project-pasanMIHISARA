
class AnalyticalCalculator {

private:
	float value[10];
	float returnVal;
public:
	AnalyticalCalculator();
	AnalyticalCalculator(float val[10], float retVal);

	float calAddition();
	float calSubtraction();
	float calMulti();
	float calDivision();
	float calPercentage();
	float calModulus();
	void printResults();

	~AnalyticalCalculator();
};
