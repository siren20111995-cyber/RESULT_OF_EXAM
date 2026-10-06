#include <iostream>
using namespace  std;

#include "exam.h"

enum res
{
	PASSED,
	FAILED
};


const char* showResult[] = { "Passed!", "Failed." };

 res resultCheck(int score)
{
	if (score >= 50 && score <= 100)
	{
		return PASSED;
	}
	else
	{
		 return FAILED;
	}
}

void show()
{
	int num = 0;
	cout << "How many students? " << flush;
	cin >> num;

	int* score = new int[num];

	cout << "Students exam's result: " << flush;

	for (int i = 0; i < num; i++)
	{
		
		while (true)
		{
			int input = 0;

			cin >> input;
			if (input >= 0 && input <= 100)
			{
				score[i] = input;
				break;
			}
			cout << "Invalid score." << endl;

		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << ". " << score[i] << "  " << showResult[resultCheck(score[i])] << endl;
	}
}





