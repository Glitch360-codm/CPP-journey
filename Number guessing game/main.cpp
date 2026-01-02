#include <iostream>
#include <ctime>

using namespace std;
void greetings() {
	const string greet("welcome!!!");
		cout << greet;
		return ;
}

static double  Num_guesser() {
	
	return rand() % 20 + 1;
}

void Main_GameInstance() {
	string error;
	int Guess;
	  int srt_num = Num_guesser();
	  cout << "\nIN THE RANGE : 1 - 20 ";
	  while (true) {
		  cout << "\n\nplease input your guess:  ";  // chatgpt how can i make this section a like function that if is true  game instance restarts
		  if (!(cin >> Guess)) {
			  cout << "invalid input !!!";
			  cin.ignore(1000, '\n');
				  cin.clear();
				  continue;

		  }
		  if (Guess == srt_num) {
			  cout << "\n\nCongratulations, You're right!!!";
			  return;
		  }
		  if (Guess > srt_num)
		  {
			  cout << "\nNumber is too high and might not be in range ";
			 
		  }
		  else {
			  cout << "\nnumber is too low";
			 
		  }
	  }//________//
}

int main()

{
	
	greetings();
	srand(time(0));
	Main_GameInstance();
	return 0;
}