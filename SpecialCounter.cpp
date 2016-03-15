#include "SpecialCounter.h"

//Default Constructor
SpecialCounter::SpecialCounter()
{
	begin = 0;
	end = 255;
	counter = 0;
}//End

//Default Destructor
SpecialCounter::~SpecialCounter()
{
}//End

//Set Methods
void SpecialCounter::start(int start)
{
	begin = start;
	if (counter < start)
		counter = start;
}//End

void SpecialCounter::stop(int stop)
{
	end = stop;
	if (counter > stop)
		counter = stop;
}//End

//Increment and Decrement methods
void SpecialCounter::stepInc(int stepSize)
{
	if (counter <= (end - stepSize))
		counter = counter + stepSize;
}//End

void SpecialCounter::stepDec(int stepSize)
{
	if (counter >= (begin + stepSize))
		counter = counter - stepSize;
}//End

int& SpecialCounter::operator++(void)
{
	if (counter < end)
		counter ++;
	return counter;
}//End

int SpecialCounter::operator++(int)
{
	int temp = counter;
	if (counter < end)
	{
		++temp;
	}
	return temp;
}//End

int& SpecialCounter::operator--(void)
{
	if (counter > begin)
		counter--;
	return counter;
}//End

int SpecialCounter::operator--(int)
{
	int temp = counter;
	if (counter >begin)
	{
		--temp;
	}
	return temp;
}//End

int SpecialCounter::value(void)
{
	return counter;
}