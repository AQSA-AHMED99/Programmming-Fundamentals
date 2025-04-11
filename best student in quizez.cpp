#include <iostream>
#include <iomanip>
using namespace std;
const int numStudents = 2;
const int numQuizzes = 3;
int main() {

    int quizMarks[numStudents][numQuizzes];
    for (int i = 0; i < numStudents; ++i) 
	{
   cout << "Enter quiz marks for student " << i + 1 << " (3 quizzes): ";
    for (int j = 0; j < numQuizzes; ++j) 
	{
    cin >> quizMarks[i][j];
        }
    }
    int highestTotal = 0;
    int highestStudent = 0;

    for (int i = 0; i < numStudents; ++i) 
	{
        int total = 0;
        for (int j = 0; j < numQuizzes; ++j) 
		{
            total += quizMarks[i][j];
        }

        if (total > highestTotal)
		 {
            highestTotal = total;
            highestStudent = i;
        }
    }
cout << "\nStudent with the highest total marks across all quizzes:\n";
cout << "Student ID: " << highestStudent + 1 << std::endl;
cout << "Total Marks: " << highestTotal << std::endl;
return 0;
}





