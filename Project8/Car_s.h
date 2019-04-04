
#define Car_s


 class Car
{
 private:
	 char *model;
	 char *color;
	 int weight;
	 int maxspeed;
	 int volume;
 public:
	 Car(const char *s, const char *s2, int w, int ms, int v);

	 void info();

	 void start();

	 ~Car() {
		 delete model;
		 delete color;
	 };


};





