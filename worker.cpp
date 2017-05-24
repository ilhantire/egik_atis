#include "worker.h"

void Worker::setValues(double v, double a) {
	velocity = v;
	angle = a;
}

void Worker::work() {
	float vX = velocity * cos(angle * (PI / 180));
	float vY = velocity * sin(angle * (PI / 180));
	
	if (angle == 90) {
		vX = 0;
	}
	
	cout << "--------------------------"<< endl;		
	cout << "cikis hizi (m/s):)\t" << velocity << endl;
	cout << "cikis acisi (derece)):\t" << angle << endl;
	cout << "cikis hizi X (m/s):\t" << vX << endl;
	cout << "cikis hizi Y (m/s):\t" << vY << endl;
	cout << "t cikis (s):\t" << vY / G_POWER << endl;
	cout << "t ucus (s):\t" << 2 * (vY / G_POWER) << endl;
	cout << "mesafe X (m):\t" << vX * (2 * (vY / G_POWER)) << endl;
	cout << "max yukseklik (m):\t" << (vY * (vY / G_POWER)) / 2 << endl;
	cout << endl;
	cout << "sure(s)\tx mesafe(m)\ty mesafe(m)\t"<< endl;		
	cout << "----\t-----------\t-----------\t"<< endl;		
	for (float i = 0.5; i <= 6.0; i+=0.5) {				
		cout << i << "\tX: " << vX * i << "\tY: " << vY * i - ((G_POWER * pow(i, 2)) / 2) << " \t Aci: " << 0 << endl;		
	}		
}