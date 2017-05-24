#ifndef 	WORKER_H
#define 	WORKER_H

#define G_POWER 9.81
#define PI 3.14159265358979323846264338327950

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

class Worker {
	private:
	double velocity;
	double angle;
	public:
	void setValues(double v, double a);
	void work();
};

#endif