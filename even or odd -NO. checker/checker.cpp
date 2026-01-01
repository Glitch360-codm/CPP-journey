#include <iostream>
#include <cctype>


using namespace std;
void greetings() {
    cout << "~~# welcome to the || even : odd || number checker #~~ ";
}

void checker() {


    int number;
    
    
    cout << "\n\n\nINPUT DESIRED NUMBER :  \n\n";

    if (!(cin >> number))
    {
        cout << "invalid value\n\n";
        cin.clear();
        cin.ignore(1000, '\n');
        return;

    }

    
    if (number % 2 == 0)
    {
        cout << "\n\nnumber is even\n";
    }

    else if (number % 2 == 1)
    {
        cout << "\n\nnumber is odd\n";
    }

    
    

}

int main() {
    char choice;
    greetings();
    do {
       
        checker();
        
        cout << "would you like to use the checker again?\n\n\n   Y || N \n    ";
        cin >> choice;
        choice = tolower(choice);
        
    } while (choice == 'y');

    cout << "good bye !!!";
    return 0;
}
