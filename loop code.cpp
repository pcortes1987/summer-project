#include <iostream>
using namespace std;

int main()
{
	int match = 0;
	char again = 'Y';
	char post1 = 'Y';
	int post2 = 0;
	int post3 = 0;
	int courseID = 0;



	while (again == 'y' || again == 'Y')

	{

		//enter user & pass
		cout << "\nEnter username and password: ";
		cin >> match;


		if (match == 18)


			while (post1 == 'y' || post1 == 'Y')
			{
				cout << "\nPost-Login Options: \n 1. Register Course \n 2. Drop course \n 3. Calculate Semester Grades \n 4. Calculate Semester GPA \n 5. View Semester Courses \n 6. Log Out" << endl;
				cout << "\nChoose an option: ";
				cin >> post2;

				if (post2 == 1)
				{

					cout << "\nEnter Course ID: ";
					cin >> courseID;

					if (courseID == 1)
						cout << "\nSuccesfully registered course." << endl;

					else
						cout << "Invalid Course ID." << endl;

				}

				else if (post2 == 2)
				{

					cout << "\nEnter Course ID: ";
					cin >> courseID;

					if (courseID == 1)
						cout << "\nSuccesfully dropped course." << endl;

					else
						cout << "Invalid Course ID." << endl;

				}


				else if (post2 == 3)
					cout << "\nCalculating Semester Grades.." << endl;

				else if (post2 == 4)
					cout << "\nCalculating Semester GPA.." << endl;

				else if (post2 == 5)
				{
					cout << "\nSemester course options: \n 1. View Roster From Course \n 2. View Exam Scores From Course \n 3. Return to Post-login Options" << endl;
					cout << "\nChoose an option: ";
					cin >> post3;

					if (post3 == 1)
					{

						cout << "\nEnter Course ID: ";
						cin >> courseID;
						cout << "Outputting Course Roster.." << endl;

					}

					else if (post3 == 2)
					{
						cout << "\nEnter Course ID: ";
						cin >> courseID;
						cout << "Outputting Exam Scores From Course.." << endl;
					}

					else if (post3 == 3)
					{
						cout << "Returning to Post-Login screen.." << endl;
					}

					else
						cout << "Invalid Option." << endl;

				}

				else if (post2 == 6)
				{
					cout << "\nLogging out.." << endl;
					post1 = 'n';
				}

				else
					cout << "\nInvalid Option." << endl;
				//previously code for else was post1 = 'n'; 









			}
		else
			cout << "Invalid username or password." << endl;

		cout << "\nReload Program (y/n)? ";
		post1 = 'y';
		cin >> again; //change control variable
	} //end while loop
	cout << "\nEnd of program." << endl;

	return 0;
}

