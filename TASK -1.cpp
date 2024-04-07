#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randomno = rand() % 100;
    int guess;
    int attemptno = 0;
    char choice;

    do
    {
        do
        {
            
                cout << "Enter your guess: " << endl;
                cin >> guess;

                if (guess > randomno)
                {
                    cout << "Too high! " << endl;
                }

                if (guess < randomno)
                {
                    cout << "Too low! " << endl;
                }

                if (guess == randomno)
                {
                    cout << "Congratulations you guessed it!" << endl;
                    break;
                }
                attemptno++;
            
            }while (attemptno < 10);
        cout << "Play Again" << endl
             << "('Y'for yes, 'N' for no): "
             << endl;
        cin >> choice;
        attemptno = 0;
        randomno = rand() % 100;

    } while ( choice != 'N');

    return 0;
}