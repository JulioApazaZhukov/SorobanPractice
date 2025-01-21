float row_sistem(int RN, float PS)
{
    if (RN >= 3)
    {
        PS += 0.5;
    }
    return PS;
}

bool handle_operation(char opt, int &rn, float &plus_score, float &score)
{
    int num1 = 1 + rand() % 1001;
    int num2 = 1 + rand() % 1001;
    int numb1 = 1 + rand() % 100;
    int numb2 = 1 + rand() % 10;
    int p_answer;               
    int answer;                 

    switch (opt)
    {
    case '+':
        gotoxy(28, 8); cout << num1 << " + " << num2 << " = ";
        answer = num1 + num2;
        break;
    case '-': 
        gotoxy(28, 8); cout << num1 << " - " << num2 << " = ";
        answer = num1 - num2;
        break;
    case '*': 
        gotoxy(28, 8); cout << numb1 << " * " << numb2 << " = ";
        answer = numb1 * numb2;
        break;
    default:
        return false; 
    }

    cin >> p_answer;

    if (p_answer == answer)
    {
        score += plus_score;
        gotoxy(28, 10); cout << "Correct! | +" << plus_score << " pts" << endl;
        rn++; 
        plus_score = row_sistem(rn, plus_score);
        gotoxy(28, 18); system("Pause");
    }
    else
    {
        gotoxy(28, 10); cout << "Incorrect, the correct answer is: " << answer << endl;
        rn = 0;         
        plus_score = 1; 
        gotoxy(28, 18); system("Pause");
    }

    system("cls");
    appearance();
    border(0, 0, 99, 29);

    return true;
}

bool is_valid_operator(char opt)
{
    return (opt == '+' || opt == '-' || opt == '*');
}

bool is_valid_exercise_count(int noex)
{
    return (noex == 5 || noex == 10 || noex == 15 || noex == 20);
}