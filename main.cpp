#include "declarations.hpp"

int main()
{
    fundamentalInterfaceComponents();
    srand(static_cast<unsigned int>(time(NULL))); 

    int rn = 0;          
    int noex;            
    char opt;            
    float score = 0;     
    float plus_score = 1;

    gotoxy(28, 2); cout << "Select operation: sum (+), sub (-), mult (*)" << endl;
    gotoxy(28, 4); cin >> opt;

    if (!is_valid_operator(opt))
    {
        cout << "Operador no válido. Intente de nuevo." << endl;
        return 1;
    }

    gotoxy(28, 5); cout << "How many exercises? (Opt: 5, 10, 15, 20)" << endl;
    gotoxy(28, 6); cin >> noex;

    if (!is_valid_exercise_count(noex))
    {
        cout << "Número de ejercicios no válido. Intente de nuevo." << endl;
        return 1;
    }

    for (int i = 0; i < noex; i++)
    {
        if (!handle_operation(opt, rn, plus_score, score))
        {
            cout << "Error al procesar la operación. Intente de nuevo." << endl;
            return 1;
        }
    }

    cout << "Puntaje final: " << score << " pts" << endl;

    return 0;
}