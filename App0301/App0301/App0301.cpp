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
	cout << "Hello World";
	system("pause");
	return 0;
}

void Welcome(const string& Scrambled)
{
	cout << "Welcome to the word unscrambling game.\n";
	cout << "The scrambled word is " << Scrambled << "\n\n";
}

