#include "Car_s.h"
#include <iostream>
using namespace std;


Car::Car(const char * s, const char * s2, int w, int ms, int v)
{
	model = new char[strlen(s) + 1];
	strcpy_s(model, strlen(s) + 1,s);
	color = new char[strlen(s2) + 1];
	strcpy_s(color , strlen(s2) + 1, s2);
	weight = w;
	maxspeed = ms;
	volume = v;
}
void Car::info()
{
	cout << "model of car: " << model << endl;
	cout << "color: " << color << endl;
	cout << "weight: " << weight << endl;
	cout << "MaxSpeed: " << maxspeed << endl;
	cout << "volume: " << volume << endl;
}
void Car::start()
{
	cout << model << " has been started run\n";
}
