#include <safeint.h>
#include <chrono>
#include <limits>
#include <locale>
#include <iostream>
#include <iomanip>
#include <string>

#include "CalculationClass.h"

using namespace std;
using namespace msl::utilities;
using namespace chrono;

/*
notes:
You have to define the tempelate class before 
each of your functions.
Also we need to add angled brackets with the 
paramater type.
example 
template <class T>
T calc<T>::Fact(){};
also while in main we need to specify what t is
example
className <int> bo;
*/

template <class UNSIGNEDINTEGER>
void CalculationClass<UNSIGNEDINTEGER>::CalculateTimeFactorial()
{
	auto timeStart = steady_clock::now();
	UNSIGNEDINTEGER Init = 1, Final = 1;
	for (Init; SafeMultiply<UNSIGNEDINTEGER, UNSIGNEDINTEGER>(Final, Init, Final); Init++)
	{
		cout << setw(3) << Init << setw(30) << Final << endl;
	};
	auto timeElapsed = duration_cast<nanoseconds> (steady_clock::now() - timeStart);

	cout << endl;
	cout << "Unsigned overflow at : " << setw(15) << Init << endl;
	cout << "Time Elapsed :         " << setw(15) << timeElapsed.count() << endl;
};

template <class UNSIGNEDINTEGER>
void CalculationClass<UNSIGNEDINTEGER>::FactorialRecursiveFunc(UNSIGNEDINTEGER & Init, UNSIGNEDINTEGER Final)
{
	if (SafeMultiply<UNSIGNEDINTEGER, UNSIGNEDINTEGER>(Final, Init, Final))
	{
		cout << setw(3) << Init << setw(30) << Final << endl, Init++;
		FactorialRecursiveFunc(Init, Final);
	}
	return;
};

template <class UNSIGNEDINTEGER>
void CalculationClass<UNSIGNEDINTEGER>::CalculateTimeFactorialRecursiveFunc()
{
	auto timeStart = steady_clock::now();
	UNSIGNEDINTEGER Init = 1;
	FactorialRecursiveFunc(Init, 1);

	auto timeElapsed = duration_cast<nanoseconds> (steady_clock::now() - timeStart);

	cout << endl;
	cout << "Unsigned overflow at : " << setw(15) << Init << endl;
	cout << "Time Elapsed :         " << setw(15) << timeElapsed.count() << endl;
};

template <class UNSIGNEDINTEGER>
void CalculationClass<UNSIGNEDINTEGER>::CalculateTimeFibonnaciFunc()
{
	UNSIGNEDINTEGER Init = 0, FibSum = 0, FibSumMinus1 = 0, FibSumMinus2 = 1;
	auto timeStart = steady_clock::now();

	cout << setw(3) << Init  << setw(30) << FibSumMinus1 << endl;
	cout << setw(3) << ++Init  << setw(30) << FibSumMinus2 << endl;
	
	for (++Init; SafeAdd<UNSIGNEDINTEGER, UNSIGNEDINTEGER>(FibSumMinus2, FibSumMinus1, FibSum);++Init)
	{
		cout << setw(3) << Init << setw(30) << FibSum << endl;
		FibSumMinus1 = FibSumMinus2;
		FibSumMinus2 = FibSum;
	};

	auto timeElapsed = duration_cast<nanoseconds> (steady_clock::now() - timeStart);

	cout << endl;
	cout << "Unsigned OverFlow at : " << setw(35) << Init << endl;
	cout << "Time Elapsed :         " << setw(35) << timeElapsed.count() << endl;


};

template <class UNSIGNEDINTEGER>
void CalculationClass<UNSIGNEDINTEGER>::FibonnaciRecursiveFunc(UNSIGNEDINTEGER & Init, UNSIGNEDINTEGER FibSumMinus2, UNSIGNEDINTEGER FibSumMinus1, UNSIGNEDINTEGER FibSum)
{
	if (SafeAdd<UNSIGNEDINTEGER, UNSIGNEDINTEGER>(FibSumMinus2, FibSumMinus1, FibSum))
	{
		cout << setw(3) << Init << setw(30) << FibSum << endl;
		FibonnaciRecursiveFunc(++Init, FibSumMinus1, FibSum, FibSum);
	};
	return;
};

template <class UNSIGNEDINTEGER>
void CalculationClass<UNSIGNEDINTEGER>::CalculateTimeFibonnaciRecursiveFunc()
{
	UNSIGNEDINTEGER Init = 0,  FibSumMinus1 = 1, FibSumMinus2 = 0;
	auto timeStart = steady_clock::now();

	cout << setw(3) << Init  << setw(30) << FibSumMinus2 << endl;
	cout << setw(3) << ++Init  << setw(30) << FibSumMinus1 << endl;
	++Init;

	UNSIGNEDINTEGER FibSum = 0;
	FibonnaciRecursiveFunc(Init, FibSumMinus2, FibSumMinus1, FibSum);

	auto timeElapsed = duration_cast<nanoseconds> (steady_clock::now() - timeStart);

	cout << endl;
	cout << "Unsigned OverFlow at : " << setw(35) << Init << endl;
	cout << "Time Elapsed :         " << setw(35) << timeElapsed.count() << endl;
};