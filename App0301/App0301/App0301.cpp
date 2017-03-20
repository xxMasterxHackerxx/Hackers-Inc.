
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void play(const string& aWord);
int main()
{
	cout << "Hello World";
	system("pause");
	return 0;
}
void play(const string& aWord){
	string guess, secretWord;
	do{

		cout << "Enter your guess: ";
		cin >> guess;

		if ((guess != aWord) && (guess != "quit")){
			cout << " Your are Very Very Wrong!!" << endl;
		}


	} while ((guess != aWord) && (guess != "quit"));
	if (guess == aWord){
		cout << "You are Correct!!!!!, Thanks for playing" << endl;
	}
	if (guess == "quit"){
		cout << "Thanks for playing" << endl;
	}
}
