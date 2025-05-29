#include <iostream>
using namespace std;

int main()
{
    int i;
    string questions[] = {"1.What year was C++ created?",
                          "2.Who invented c++?,",
                          "3.What is the predecessor of c++?",
                          "4.Is the earth flat?"};
    string options[][4] = {{"A.1969", "B.1965", "C.1985", "D.1989"},
                           {"A.Guido Van Rossen", "B.Bjarne Sturrpo ", "C.John Carmec", "D.Mark Zukerberg"},
                           {"A.C", "B.C+", "C.C++", "D.B++"},
                           {"A.Yes", "B.No", "C.Sometimes", "D.What?"}};

    char answerkey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (i = 0; i < size; i++)
    {
        cout << "***************\n";
        cout << questions[i] << endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << endl;
        }
        cin >> guess;
        guess = toupper(guess);
        if (guess == answerkey[i])
        {
            cout << "correct\n";
            score++;
        }
        else
        {
            cout << "Wrong\n";
            cout << "Answer: " << answerkey[i] << endl;
        }
    }
    cout << "***************\n";
    cout << "Your score is: " << score << "\n";
    cout << "***************\n";
    return 0;
}