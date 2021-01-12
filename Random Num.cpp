

#include <iostream>
#include <iomanip>

using namespace std;


int guessingGame() {
    int num, guess, z;
    string play = "Y";
    int count = 1;
    bool menu = true;
    cout << "Enter the numbers that you want the range to between, starting from 1: ";
    cin >> num;
    srand(time(NULL));
    int randomNum = 1 + rand() % num; //random num from 1 to num
    cout << "Enter your guess Number: ";
    cin >> guess;

    // while(true)
    // {
    while (play == "Y") {
        if (guess == randomNum)
        {
            cout << "You are correct! The number was " << randomNum << " Good Game!" << endl;
            play = "N";
            // guessingGame();
        }
        else if (guess > randomNum)
        {
            cout << "Incorrect! Your number is too high. Try again! " << endl;
            count++;
            cin >> guess;
        }
        else if (guess < randomNum)
        {
            cout << "Incorrect! Your number is too low. Try again! " << endl;
            count++;
            cin >> guess;
        }
    }

    return count;
}

int main()
{
    string name;
    int input, result;
    bool game = true;
    cout << "What is your Name?: ";
    cin >> name;
    cout << "Welome " << name << " to the guessing number game!" << endl;


    while (game == true)
    {
        cout << "1.  play the game " << endl;
        cout << "2. results from game " << endl;
        cout << "3. if you want to quit " << endl;
        cin >> input;
        switch (input)
        {
        case 1:
        {
            result = guessingGame();
            break;
        }
        case 2:
        {

            cout << "It has taken you " << result << " to get the correct answer" << endl;
            game = true;
            break;
        }
        case 3:
        {
            cout << "Thank you for Playing!" << endl;
            game = false;
            break;
        }

        }

    }
    return 0;
}



