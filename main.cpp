#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

float row_sistem(int RN, float PS)
{
    if (RN >= 3)
    {
        PS += 0.5;
    }
    return PS;
}

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    int rn = 0;
    int noex;
    char opt;
    float score = 0;
    float plus_score = 1;

    cout << "Suma = +, resta = -, y multiplicacion = *" << endl;
    cin >> (opt);

    cout << "Cuantos ejercicios quiere resolver: 5, 10, 15, 20" << endl;
    cin >> (noex);

    for (int i = 0; i < noex; i++)
    {
        int num1 = 1 + rand() % 101;
        int num2 = 1 + rand() % 101;
        int numb1 = 1 + rand() % 13;
        int numb2 = 1 + rand() % 13;
        int p_answer;
        int answer;

        switch (opt)
        {
        case '+':
            cout << num1 << " " << num2 << endl;
            answer = num1 + num2;
            cin >> p_answer;
            cout << answer << " ";
            if (p_answer == answer) {
                score += plus_score;
                cout << "| +" << plus_score << "pts" << endl;
                rn++;
                plus_score = row_sistem(rn, plus_score);
            }
            else {
                cout << "| 0 pts" << endl;
                rn = 0;
                plus_score = 1;
            }
            break;
        case '-':
            cout << num1 << " " << num2 << endl;
            answer = num1 - num2;
            cin >> p_answer;
            cout << answer << " ";
            if (p_answer == answer) {
                score += plus_score;
                cout << "| +" << plus_score << "pts" << endl;
                rn++;
                plus_score = row_sistem(rn, plus_score);
            }
            else {
                cout << "| 0 pts" << endl;
                rn = 0;
                plus_score = 1;
            }
            break;
        case '*':
            cout << numb1 << " " << numb2 << endl;
            answer = numb1 * numb2;
            cin >> ("%i \n", p_answer);
            cout << answer << " ";
            if (p_answer == answer) {
                score += plus_score;
                cout << "| +" << plus_score << "pts" << endl;
                rn++;
                plus_score = row_sistem(rn, plus_score);
            }
            else {
                cout << "| 0 pts" << endl;
                rn = 0;
                plus_score = 1;
            }
            break;
        default:
            cout << "Ingrece un operador valido" << endl;
            break;
        }
    }

    cout << "Final score: " << score << endl;

    int finish;
    cin >> finish;

    return 0;
}