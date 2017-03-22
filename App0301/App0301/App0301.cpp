<< << << < HEAD
	// App0301.cpp : Defines the entry point for the console application.
	//

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void Welcome(const string& Scrambled);
string GenerateWord();
string Scramble(const string& SecretWord);
void Play(const string& Scrambled);



== == == =
// App0301.cpp : Defines the entry point for the console application.
//


int main()
{
	string someRandomWord = randomWord();
	string jumble = mixUp(someRandomWord);
	welcomePlayer(jumble);
	play(someRandomWord);

	system("pause");
	return 0;
}

string randomWord()
{
	const int NUM_WORDS = 5;
	const string SECRET_WORDS[NUM_WORDS] = {
		"edgelord", "cpu", "hack", "dank", "thelegend"
	};
	srand(time(NULL));
	int ran = rand() % NUM_WORDS;
	string secretWord = SECRET_WORDS[ran];
	return secretWord;
}

void Welcome(const string& Scrambled)
{
	cout << "Welcome to the word unscrambling game.\n";
	cout << "The scrambled word is " << Scrambled << "\n\n";
}

