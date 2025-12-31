#include <iostream>

using namespace std;



void greetings() {
	cout << "welcome to basiczzz calculator \n\n\n";
}



void MainInstance() {

	double  Num1, Num2;
	char OP;
	 
	
	cout << "\n\enter NUMBER: ";
	cin >> Num1;
	cout << "\nchoose desired operator (+,-,/,*): ";
	cin >> OP;
	cout << "\nenter FINAL NUMBER: ";
	cin >> Num2;

	switch (OP)
	{
	case '+':
		cout << "\nans = " <<  Num1 + Num2 << "\n\n";
		break;
	case '-':
		cout << "\nans = " << Num1 - Num2 << "\n\n";
		break;
	case '*':
		cout << "\nans = " << Num1 * Num2 << "\n\n";
		break;
	case '/':
		cout << "\nans = " << Num1 / Num2 << "\n\n";
		break;
	default:
		cout << "Invalid Operator\n\n";
	}
	
		cout << "\nWould you like to calculate again?\n \n";
		cout << "Y || N\n\n";
		return ;

	}
   






		int main()
			

		{
			char choice;
			greetings();
			
			
			do
			{
				MainInstance();
				cin >> choice;
			

			} while (choice == 'y'||choice == 'Y');

		}

	