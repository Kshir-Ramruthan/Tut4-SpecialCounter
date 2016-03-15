#include "SpecialCounter.h"
#include<iostream>

using namespace std;

//Main method
int main()
{
	SpecialCounter count;
	++count;
	cout << "Counts value is: " << count.value() << endl;
	--count;
	cout << "Counts value is: " << count.value() << endl;
	count.stepInc(3);
	cout << "Counts value is: " << count.value() << endl;
	count.stepDec(2);
	cout << "Counts value is: " << count.value() << endl;
	count.start(20);
	cout << "Counts value is: " << count.value() << endl;
	count.stop(200);
	cout << "Counts value is: " << count.value() << endl;

	return 1;
}