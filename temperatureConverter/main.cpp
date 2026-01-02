#include <iostream>

using namespace std;



void greetings() {
	
	cout << "welcome to TEMPERATURE CONVERTER\n\n\n";
	
}



void  celsiusInstance() {
	int x;
	cin >> x;
	int CI_result;
	CI_result = x * 1.8 + 32;
	cout << x << "°C in farenheit is " << CI_result << "F\n\n";

}


void fahrenheitInstance() {
	int y;
	cin >> y;
	int FI_result;
	FI_result = y - 32 * 5 / 9;

	cout << y << "°F in Celsius is " << FI_result << "C\n\n";
}





int main()


{
	greetings();
	int CI_result;
	int FI_result;
	 while (true){
		 int choice;
	cout << "ENTER  0.  to Exit\n";
	cout << "ENTER  1.  to convert from celsius to fahrenheit\n";
	cout << "ENTER  2.  to convert from fahrenheit to celsius\n\n";
	cout << "Enter choice (0, 1, 2)\n\n               ";
	
	if (!(cin >> choice)) {
		cout << " invalid input, Enter an integer(Number):    \n\n";
		cin.ignore(1000, '\n');
		cin.clear();
		continue;
	}
	if (choice == 1) {
		cout << "Please enter temperature in Celsius (integer only):   \n\n";
		celsiusInstance();
	}
	else if  (choice == 2) {
		cout << "Please enter temperature in Fahrenheit (integer only):   \n\n";
		fahrenheitInstance();
	}
	else if (choice == 0) {
		break;
	}
	else {
		cout << " invalid input, Enter 1 or 2\n\n ";
		continue;
		
	}
	
	}
	 return 0;
}


