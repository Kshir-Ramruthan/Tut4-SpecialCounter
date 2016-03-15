#include "SpecialCounter.h"

//Default Constructor
SpecialCounter::SpecialCounter()
{
	begin = 0;
	end = 255;
}

//Default Destructor
SpecialCounter::~SpecialCounter()
{
}

//Set Methods
void SpecialCounter::start(int start)
{
	begin = start;
}

void SpecialCounter::stop(int stop)
{
	end = stop;
}

//Increment and Decrement methods
void SpecialCounter::stepInc(int stepSize)
{
	if (counter <= (end - stepSize))
		counter = counter + stepSize;
}

void SpecialCounter::stepDec(int stepSize)
{
	if (counter >= (begin + stepSize))
		counter = counter - stepSize;
}

int& SpecialCounter::operator++(void)
{
	if (counter < end)
		counter ++;
}

int SpecialCounter::operator++(int)
{
	int temp = counter;
	if (counter < end)
	{
		++temp;
	}
	return temp;
}

int& SpecialCounter::operator--(void)
{
	if (counter > begin)
		counter--;
}

int SpecialCounter::operator--(int)
{
	int temp = counter;
	if (counter >begin)
	{
		--temp;
	}
	return temp;
}