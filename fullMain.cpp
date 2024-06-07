#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int playerScore = 0;
    int computerScore = 0;
    char choice;

    while (true)
    {
        do{
            cout << "Enter 'R' for Rock, 'P' for Paper, or 'S' for Scissors (or 'Q' to quit): ";
            cin >> choice;
            choice = toupper(choice);
        }while(choice!='R'&&choice!='S'&&choice!='P'&&choice!='Q');

        if (choice == 'Q')
        {
            break;
        }

        int  comCh = rand() % 3;
        char computerChoice;
        switch(comCh)
        {
        case 0:
            computerChoice='R';
            break;
        case 1:
            computerChoice='P';
            break;
        case 2:
            computerChoice='S';
            break;
        }

        int result = 0;
        if (choice == computerChoice)
        {
            result = 0;
        }
        else if ((choice == 'R' && computerChoice == 'S') ||
                 (choice == 'P' && computerChoice == 'R') ||
                 (choice == 'S' && computerChoice == 'P'))
        {
            result = 1;
            playerScore++;
        }
        else
        {
            result = -1;
            computerScore++;
        }

        cout << "You chose: " << choice << endl;
        cout << "Computer chose: " << computerChoice << endl;

        switch (result)
        {
        case 0:
            cout << "It's a tie!" << endl;
            break;
        case 1:
            cout << "You win!" << endl;
            break;
        case -1:
            cout << "You lose!" << endl;
            break;
        }

        cout << "Your score: " << playerScore << ", Computer score: " << computerScore << endl << endl;
    }

    cout << "\nThanks for playing!" << endl;

    return 0;
}
