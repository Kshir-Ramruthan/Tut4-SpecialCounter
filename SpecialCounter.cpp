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