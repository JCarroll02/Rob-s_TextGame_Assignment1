// Rob's_TextGame_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<algorithm>
#include <String>
#include <iostream>

using namespace std;

int main()
{
    string Job;

    bool success; //is to check position is applicable using true and false

    cout << "Welcome Future Dunder Mifflin Employee!";

    do
    {
        cout << "\nWhat is your desired position? Salesman or Manager/Comedian?";

        cin >> Job; // asks what position they want and shows two different responses


        if (Job == "Manager") //Sees that player chose an applicable answer
        {
            cout << "\noh so you're trying to be a Manager" + Job;

            cout << "\nWell you'll probably do better than creed at least";

            success = true;
        }

        else if (Job == "Salesman") //Sees if the position is Salesman instead of Manager
        {
            cout << "You want to be a salesman?.. good....good (Not as good as Manager but alright)" + Job;
            success = true; // lets it know that a applicable option was chosen
        }

        else if (Job == "Accountant")
        {
            cout << "Whoa an accountant watch out for our spicy Oscar or he'll get ya!" + Job;
            success = true;
        }

        else
        {
            cout << "\nOh that's a part of Human Resources ew get out...OUT..NOW goodbye we don't need another Toby in our office!";
            success = false; //If one of the jobs is not stated it will show this statement
        }

    } while (!success); //loops until player enters one of the correct options

    {
        int PaperSold;

        cout << "How many reams of paper have you sold?: ";

        cin >> PaperSold;


        if (PaperSold >= 1000) // Checks PaperSold amount exceeds or the same as 1000
        {
            cout << "WOW!!! Nice I think we might have our Next Salesmen of the year true Managers numbers, better watch out Dwight\n";
        }

        else if (PaperSold >= 300) // else if to see if PaperSold is lower than or the same as to 300
        {
            cout << "Wow Kinda good at this keep it up!\n";
        }

        else
        {
            cout << "Ahhhh I'M GOING TO KILL MYSELF AND IT'S YOUR FAULT!!\n"; // If amount of papersold is below 300 this will show and ending the program
        }
    }
}