#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <list>

using namespace std;

int main()
{
	int num1;
	int num2;
	int max = 0;
	int min = 0;
	int cap = 0;
	int subVal = 0;
	int result = 0;
	int pushVal = 0;
	int i = 0;
	list<int> ansList = {};


	cout << "Enter positive integer value for number 1: ";
	cin >> num1;

	cout << "Enter positive integer value for number 2: ";
	cin >> num2;

	max = (num1 > num2) ? num1 : num2;
	min = (num1 > num2) ? num2 : num1;

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	cout << endl;
	cout << endl;
	
	cout << "============Doubling table============" << endl;

	for (i; cap < max; i++)
	{
		result = pow(2, i) * min;
		pushVal = i;
		cap += pow(2, i);
		cout << "2^" << i << " X " << min << " = " << result << endl;
	}

	i = 0;
	cap = 0;
	
	cout << endl;
	cout << endl;

	while (max != 0)
	{


		for (i; cap < max; i++)
		{
			
			result = pow(2, i) * min;
			pushVal = i;
			cap += pow(2, i);
			
		}
		
		ansList.push_back(pushVal);
		max -= pow(2, pushVal);
		i = 0;
		cap = 0;
	}
	
	
	for (int i : ansList) {
		cout << pow(2, i) << " X " << min << " = " << pow(2, i) * min << '\n';
	}

	cout << endl;
	int smallTotal = 0;
	int bigTotal = 0;
	for (int i : ansList) {
		smallTotal += pow(2, i);
		bigTotal += pow(2, i) * min;
	}

	cout << "Sum of the essential powers of two: " << smallTotal << endl;
	cout << "Sum of the essential powers of two multiplied by " << min << ": " << bigTotal;
	cout << endl;
	cout << endl;
	

	cout << endl;
	return 0;
}