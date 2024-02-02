#include "std_lib_facilities.h"
#include "cannonball.h"
#include "utilities.h"

void testDeviation(double compareOperand, double toOperand, double maxError, string name) {
	if ((abs(compareOperand) - toOperand) <= maxError) {
		cout <<name << "is valid" << endl;
	}
	else {
		cout << name << "is not valid" << endl;
	}
}

int main() {

	cout << randomWithLimits(1,100)  << endl;
	testDeviation(posY(0, 25, 2.5), 31.84, 0.001, "velY(25, 2.5)");
	
	vector<double> vekotor = getVelocityVector(27.5, 15.64);
	for (double i: vekotor) {
		cout << i << endl;
	}

	double test = getDistanceTraveled(13.8728, 7.22175);
	cout << test;
    return 0;
}
