#include <string>
using namespace std;

class Event
{
private:
  int event_date;
  string event_type;

public:
  Event();
  void displayDetails();
  ~Event(); 
}