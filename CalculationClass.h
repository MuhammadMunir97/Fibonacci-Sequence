#pragma once
#include <safeint.h>
#include <chrono>
#include <limits>
#include <locale>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
using namespace msl::utilities;
using namespace chrono;

template <class UNSIGNEDINTEGER> class CalculationClass
{
public:
	void CalculateTimeFactorial();
	void FactorialRecursiveFunc(UNSIGNEDINTEGER & Init, UNSIGNEDINTEGER Final);
	void CalculateTimeFactorialRecursiveFunc();
	void CalculateTimeFibonnaciFunc();
	void FibonnaciRecursiveFunc(UNSIGNEDINTEGER & Init, UNSIGNEDINTEGER FibSumMinus2, UNSIGNEDINTEGER FibSumMinus1, UNSIGNEDINTEGER FibSum);
	void CalculateTimeFibonnaciRecursiveFunc();

};


