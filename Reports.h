#include <string>
using namespace std;

class Reports {
private:
  string Rid;
  string Rname;
  string RcreatedDate;
  string Rauthors;

public:
  Reports();
  Reports(string name, string date, string authors); // overloaded
  void displayReports();
  ~Reports();
};