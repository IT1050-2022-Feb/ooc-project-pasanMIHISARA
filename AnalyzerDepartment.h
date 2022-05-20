#include<iostream>
#include<string>
using namespace std;

class AnalyzerDept
{
	private:
		string DepartmentType;
		
		Analyzers* analyzers[3];
		
	public:
		void analyzingReport();
		~AnalyzerDept();
		
}
