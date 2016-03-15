#pragma once
class SpecialCounter
{
private:
	int counter;
	int begin;
	int end;

public:
	SpecialCounter();
	~SpecialCounter();
	void start(int start);
	void stop(int stop);
	void stepInc(int stepSize);
	void stepDec(int stepSize);
	int& operator++(void);
	int operator++(int);
	int& operator--(void);
	int operator--(int);
};

