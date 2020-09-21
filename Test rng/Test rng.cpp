#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int option = 0;
	vector <int> highscores[5];
	do
	{
		system("cls");
		cout << "Guess the number!\n What difficoulty would you like to try?\n";
		cout << "1. Easy: 1-10";
		if (highscores[0].size())
		{
			cout << "(Highscore: ";

			for (int i= 0; i< highscores[0].size(); i++)
			{
				cout <<highscores[0][i] << ", ";
			}
			cout << ")";
		}
		cout << "\n2. Medium: 1-100";
		if (highscores[1].size())
		{
			cout << "(Highscore: ";

			for (int i = 0; i < highscores[1].size(); i++)
			{
				cout << highscores[1][i] << ", ";
			}
			cout << ")";
		}
		cout << "\n3. Hard: 1-1000";
		if (highscores[2].size())
		{
			cout << "(Highscore: ";

			for (int i = 0; i < highscores[2].size(); i++)
			{
				cout << highscores[2][i] << ", ";
			}
			cout << ")";
		}
		cout << "\n4. Impossible: 1-10000 with 5 attempts";
		cout << "\n5. Exit\n";
		cin >> option;
		switch (option)
		{
			case 1: {
				int number = 0;
				int guess = 0;
				int attempt = 0;
				srand(time(0));
				number = rand() % 10 + 1;
				cout << "Guess the number!" << "\n\n";
				cout << "Enter a guess between 1 - 10" << endl;
				do
				{
					attempt++;
					cout << "Attempt number " << attempt << ":";
					cin >> guess;
					if (guess > number)
						cout << "Too high, try again!" << endl;
					else if (guess < number)
						cout << "Too low, try again!" << endl;
					else
						cout << "\nYour guess is correct!\nYou got it on your " << attempt << ". attempt!\n\n";

				} while (guess != number);

				if (highscores[0].size() < 5)
				{
					highscores[0].push_back(attempt);
					sort(highscores[0].begin(), highscores[0].end());
				}
				else
				{
					highscores[0].push_back(attempt);
					sort(highscores[0].begin(), highscores[0].end());
					highscores[0].resize(5);
				}
			}
			break;
			case 2: {
				int number = 0;
				int guess = 0;
				int attempt = 0;
				srand(time(0));
				number = rand() % 100 + 1;
				cout << "Guess the number!" << "\n\n";
				cout << "Enter a guess between 1 - 100" << endl;
				do
				{
					attempt++;
					cout << "Attempt number " << attempt << ":";
					cin >> guess;
					if (guess > number)
						cout << "Too high, try again!" << endl;
					else if (guess < number)
						cout << "Too low, try again!" << endl;
					else
						cout << "\nYour guess is correct!\nYou got it on your " << attempt << ". attempt!\n\n";

				} while (guess != number);

				if (highscores[1].size() < 5)
				{
					highscores[1].push_back(attempt);
					sort(highscores[1].begin(), highscores[1].end());
				}
				else
				{
					highscores[1].push_back(attempt);
					sort(highscores[1].begin(), highscores[1].end());
					highscores[1].resize(5);
				}
			}
				break;
			case 3: {
				int number = 0;
				int guess = 0;
				int attempt = 0;
				srand(time(0));
				number = rand() % 1000 + 1;
				cout << "Guess the number!" << "\n\n";
				cout << "Enter a guess between 1 - 1000" << endl;
				do
				{
					attempt++;
					cout << "Attempt number " << attempt << ":";
					cin >> guess;
					if (guess > number)
						cout << "Too high, try again!" << endl;
					else if (guess < number)
						cout << "Too low, try again!" << endl;
					else
						cout << "\nYour guess is correct!\nYou got it on your " << attempt << ". attempt!\n\n";

				} while (guess != number);

				if (highscores[2].size() < 5)
				{
					highscores[2].push_back(attempt);
					sort(highscores[2].begin(), highscores[2].end());
				}
				else
				{
					highscores[2].push_back(attempt);
					sort(highscores[2].begin(), highscores[2].end());
					highscores[2].resize(5);
				}
			}
				break;
			case 4: {
				int number = 0;
				int guess = 0;
				int attempt = 0;
				srand(time(0));
				number = rand() % 10000 + 1;
				cout << "Guess the number!" << "\n\n";
				cout << "Enter a guess between 1 - 10000" << endl;
				if (attempt < 5)
				{
					do
					{
						attempt++;
						cout << "Attempt number " << attempt << ":";
						cin >> guess;


						if (guess > number)
							cout << "Too high, try again!" << endl;
						else if (guess < number)
							cout << "Too low, try again!" << endl;
						else
							cout << "\nYour guess is correct!\nYou got it on your " << attempt << ". attempt!\n\n";
					} while (attempt < 5);

				}		
			cout << "\n\nTold you its impossible...\n\n";
			system("pause");
			}
				break;
			case 5:
			default:
					cout << "Good bye!";
			}
			cout << "\n\n";
	} while (option < 5 && option >= 1);




	return 0;
}
