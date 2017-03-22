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


int main()
{
	string someRandomWord = randomWord();
	string jumble = mixUp(someRandomWord);
	Welcome(jumble);
	Play(someRandomWord);

	system("pause");
	return 0;
}
string mixUp(const string& aWord)
{
	string jumble = aWord;
	size_t length = jumble.size();
	for (size_t i = 0; i < length; i++)
	{
		size_t randomIndex = rand() % length;
		char work = jumble[i];
		jumble[i] = jumble[randomIndex];
		jumble[randomIndex] = work;
	}
	return jumble;

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

