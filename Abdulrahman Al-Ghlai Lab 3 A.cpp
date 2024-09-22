// Abdulrahman Al-Ghlai w2029025
// Lab Assignment 3 Part A Random Number lab
// June 25, 2023

// C++ code for Lab 3 Part A:

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFile; // Use ifstream instead of fstream for input-only operations
    myFile.open("Random.txt");

    if (myFile.is_open())
    {
        int number;
        int count = 0;
        int sum = 0;

        while (myFile >> number) {
            cout << number << endl;
            count++;
            sum += number;
        }

        myFile.close();

        if (count > 0) {
            double average = (sum) / count;
            cout << "Number of numbers: " << count << endl;
            cout << "Sum of numbers: " << sum << endl;
            cout << "Average of numbers: " << average << endl;
        } else {
            cout << "The file is empty." << endl;
        }
    }
    else {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}
