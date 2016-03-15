#pragma once
class SpecialCounter
{
private:
	int counter;
	int begin;
	int end;
	int inc;
	int dec;

public:
	SpecialCounter();
	~SpecialCounter();
	void start(int start);
	void stop(int stop);
	void stepInc(int stepSize);
	void stepDec(int stepSize);
};

