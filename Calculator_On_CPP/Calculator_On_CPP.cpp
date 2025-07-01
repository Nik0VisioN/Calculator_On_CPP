#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, result;
	char arifmetic;

	cout << fixed << setprecision(4); 

	while (1)
	{
		cout << "Enter first number:" << endl;


		a = 0;
		b = 0;
		result = 0;

		cin >> a >> arifmetic >> b;

		switch (arifmetic)
		{
		case '+':
			result = a + b;
			cout << "Result: " << result << endl;
			break;
		case '-':
			result = a - b;
			cout << "Result: " << result << endl;
			break;
		case '*':
			result = a * b;
			cout << "Result: " << result << endl;
			break;
		case '/':
			if (b != 0)
			{
				result = a / b;
				cout << "Result: " << result << endl;
			}
			else
			{
				cout << "Error: Division by zero!" << endl;
			}
			break;
		
		default:
		cout << "Error: Invalid operator!" << endl;
		continue; // Skip to the next iteration if the operator is invalid
		}

		cout << endl << a << arifmetic << b << " = " << result << endl << " -------------------------------- " << endl;
	}
	return 0;
}
