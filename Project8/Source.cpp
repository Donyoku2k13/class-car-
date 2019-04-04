#include <iostream>
#include "Car_s.h"
using namespace std;

class time_
{
private:
	int *h;
	int *m;
	int *s;
public:
	time_(int a = 0, int b = 0, int c=0) {
		h = new int(a);
		m = new int(b);
		s = new int(c);
	}
	~time_() {
		delete h;
		delete m;
		delete s;
	}
	void addhour(int a ) {
		if (a>=23)
		{
			a = 0;
		}
		*h = a;
	}
	
	void addminute(int a) {
		if (a > 58) {
			a = 0;
		}
		*m = a;
	}
	void addseconds(int a) {
		if (a>58)
		{
			a= 0;
			
		}
		*s = a;
	}

	int get_h() { return *h; };
	int get_m() { return *m; };
	int get_s() { return *s; };
};




//void main() {
//	time_ t(15, 25, 3);
//	cout << t.get_h();
//
//
//	system("pause");
//}
int main()
{
	Car c("BMW", "Black", 350, 240, 52);
	c.info();
	c.start();
	c.~Car();

	system("pause");
}

