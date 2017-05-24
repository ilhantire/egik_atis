#include "worker.h"

using namespace std;

int main() {
	Worker w;

	double velocity = 0;
	double angle = 0;	
	char command = 'h';
	
	do {
		cout << endl;
		cout << endl;
		
		cout << "=> m/s cinsinden hiz giriniz: ";
		cin >> velocity;
		cout << "=> derece cinsinden aci giriniz: ";
		cin >> angle;		
		
		cout << endl;
		
		w.setValues(velocity, angle);
		w.work();		
		
		cout << endl;
		cout << endl;
		cout << "programi kapatmak istermisiniz e/h: ";
		cin >> command;		
		
	} while (command == 'h');

}	