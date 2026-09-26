#include <iostream>
using namespace std;

int main()
{
    int marks[10][5];

    // Enter marks
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter Marks for Student " << i + 1 << ":\n";

        for(int j = 0; j < 5; j++)
        {
            cout << "Course " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    // Display marks
    cout << "\nMarks of all students:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << ": ";

        for(int j = 0; j < 5; j++)
        {
            cout << marks[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
