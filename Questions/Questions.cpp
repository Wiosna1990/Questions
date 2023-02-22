#include <iostream>
using namespace std;

int main()
{
	string questions[] =
	{ "1.He is also known as the father of the Internet:  ",
	"2.Who invented the World Wide Web (WWW)? ",
	"3.When was the first workable prototype of the Internet? ",
	"4.What was the network that became the basis of the Internet ? " };

	string options[][4] =
	{ { "A. Ray Tomlinson", "B. John Louis Uru", "C. Alan M.Turing", "D. Vint Cerf" },
	{ "A. Vint Cerf","B. Tim Berners - Lee","C. Robert Kahn","D. JC R Licklider" },
	{ "A. 1960's","B. 1970's","C. 1980's","D. 1990's" },
	{ "A. DARPA","B. ARPA","C. ARPANET","D. TCP / IP" } };

	char answerKey[] = { 'D', 'B', 'A', 'C' };
	int size = sizeof(questions) / sizeof(questions[0]);
	int size2 = sizeof(options) / sizeof(options[0]);
	char quess;

	int score = 0;
	for (int i = 0; i < size; i++)
	{


		cout << questions[i] << endl;
		for (int j = 0; j < size2; j++) {

			cout << options[i][j] << endl;


		}
		cin >> quess;
		quess = toupper(quess);
		if (quess == answerKey[i])
		{
			cout << "Correct! " << endl;
			score++;
		}
		else
		{
			cout << "Incorrect! " << endl;
		}
	}
	cout << "Your score is: " << (score / 4) * 100 << "%";
}
