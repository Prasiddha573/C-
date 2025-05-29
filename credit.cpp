#include <iostream>
using namespace std;
int getdigit(const int number);
int sumodddigit(const string cardnumber);
int sumevendigit(const string cardnumber);

int main()
{
    string cardnumber;
    int result = 0;
    cout << "Enter a credit card number:";
    cin >> cardnumber;
    result = sumevendigit(cardnumber) + sumodddigit(cardnumber);
    if (result % 10 == 0)
    {
        cout << "Your credit card is valid.";
    }
    else
    {
        cout << "Card number is not valid.";
    }
    return 0;
}
int getdigit(const int number)
{
    return number % 10 + number / 10 % 10; // 18
}
int sumodddigit(const string cardnumber)
{
    int sum = 0;
    for (int i = cardnumber.size() - 1; i >= 0; i = i - 2)
    {
        sum = sum + (cardnumber[i] - '0');
    }
    return sum;
}
int sumevendigit(const string cardnumber)
{
    int sum = 0;
    for (int i = cardnumber.size() - 2; i >= 0; i = i - 2)
    {
        sum = sum + getdigit((cardnumber[i] - '0') * 2);
    }
    return sum;
}