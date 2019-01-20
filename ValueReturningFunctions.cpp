// chapter9 Scott Jorgensen

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//prototypes
int getTestScores();
double calcAverage(double testScores);


int main()
{
	double testScores = 0.0;
	double average = 0.0;

	testScores = getTestScores();
	average = calcAverage(testScores);

	//display
	cout << fixed << setprecision (2);
	cout << "Average: " << average << endl;


	system("pause");
	return 0;


}

//function defs

int getTestScores()
{
	int test1 = 0;
	int test2 = 0;
	int test3 = 0;
	int testScores = 0;

	cout << "Test Score 1: ";
	cin >> test1;
	cout << "Test Score 2: ";
	cin >> test2;
	cout << "Test Score 3: ";
	cin >> test3;

	testScores = test1 + test2 + test3;
	return testScores;
}

double calcAverage(double testScores)
{
	double averageScore;
	
	averageScore = testScores / 3; 
	return averageScore;
}//end

	
