// App0301.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	cout << "Hello World";
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
