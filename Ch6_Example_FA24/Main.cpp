#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	cout << "Number Guessing Game" << endl;
	cout << "Guess a number between 1 and 100" << endl;
	cout << "You have 3 chances to guess the number" << endl;
	int tryCount = 0;

	srand(time(NULL));		// Seed the random number generator
	int number = rand() % 100 + 1;
	int guess = 0;

	while (tryCount < 3)
	{
		cout << "Enter your guess: ";
		cin >> guess;
		tryCount++;

		if (guess == number)
		{
			cout << "Congratulations! You guessed the number!" << endl;
			break;
		}
		else if (guess < number)
		{
			cout << "Your guess is too low" << endl;
		}
		else
		{
			cout << "Your guess is too high" << endl;
		}

		if (tryCount == 3)
		{
			cout << "Sorry, you have used all your chances" << endl;
			cout << "The number was: " << number << endl;
		}
		else
		{
			cout << "You have " << 3 - tryCount << " chances left" << endl;
		}
	}

	return 0;
}