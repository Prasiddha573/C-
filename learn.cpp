#include <iostream>
#include <ctime>
using namespace std;
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);
int main()
{
    char player;
    char computer;
    player = getuserchoice();
    cout << "your choice: ";
    showchoice(player);
    computer = getcomputerchoice();
    cout << "computer choice: ";
    showchoice(computer);
    choosewinner(player, computer);
    return 0;
}
char getuserchoice()
{
    char player;
    cout << "Rock-Paper-Scissors game\n";
    do
    {
        cout << "Choose one of the followings\n";
        cout << "***************\n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for sicssors\n";
        cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getcomputerchoice()
{
    srand(time(nullptr));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
    return 0;
}
void showchoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "rock\n";
        break;
    case 's':
        cout << "scissors\n";
        break;
    case 'p':
        cout << "paper\n";
        break;
    }
}
void choosewinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "Its a tie\n";
        }
        else if (computer == 'p')
        {
            cout << "You loose\n";
        }
        else
        {
            cout << "you win\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            cout << "Its a win\n";
        }
        else if (computer == 'p')
        {
            cout << "Its a tie\n";
        }
        else
        {
            cout << "you lose\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            cout << "Its a lose\n";
        }
        else if (computer == 'p')
        {
            cout << "You win\n";
        }
        else
        {
            cout << "Its a tie";
        }
        break;
    }
}