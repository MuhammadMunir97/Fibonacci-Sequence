//=========================================================//
/*
Course      : Programming Fundamentals III (C++) COSC 2336
Name        : Muhammad S Munir
Assignment  : Lab Assiggnment 3
Chapter		: N/A
Page		: N/A
Title       : Factorial Fibonacci Overflow Detection
*/
//==========================================================//

#include "CalculationClass.cpp"



int main()
{
	CalculationClass <uint32_t> calculate32Obj;
	CalculationClass <uint64_t> calculate64Obj;

	cout.imbue(locale(""));
	
	cout << "32 bit Factorial Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate32Obj.CalculateTimeFactorial();
	cout << endl;
	cout << "32 bit Factorial recursive Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate32Obj.CalculateTimeFactorialRecursiveFunc();
	cout << endl;

	cout << "64 bit Factorial Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate64Obj.CalculateTimeFactorial();
	cout << endl;
	cout << "64 bit Factorial recursive Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate64Obj.CalculateTimeFactorialRecursiveFunc();
	cout << endl;

	system("pause");
	system("cls");

	cout << "32 bit Fibonacci Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate32Obj.CalculateTimeFibonnaciFunc();
	cout << endl;
	cout << "32 bit Fibonacci recursive Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate32Obj.CalculateTimeFibonnaciRecursiveFunc();

	system("pause");
	system("cls");
	
	cout << "64 bit Fibonacci Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate64Obj.CalculateTimeFibonnaciFunc();
	cout << endl;
	cout << "64 bit Fibonacci recursive Loop" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
	calculate64Obj.CalculateTimeFibonnaciRecursiveFunc();

	system("pause");
	system("cls");

	return 0;
}