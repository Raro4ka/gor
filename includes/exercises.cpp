#include "exercises.h"

void wrong_exercise_number()
{
    std::cout << "Wrong exercise number.\n";
}

void choose_exercise()
{
    std::cout << "Please choose number of exercise (any number from 1 to 4): ";
    int exercise_number = 0;
    std::cin >> exercise_number;
    switch (exercise_number)
    {
    case ZERG_QUEEN:
        zerg_population();
        break;

    case PIRATE_BAR:
        choose_drink();
        break;

    case DRAGONS_CASTLE:
        show_number_of_dragons();
        break;

    case ARREAT_SUMMIT:
        show_arreat_summit_game_result();
        break;

    case UNKNOWN:
        wrong_exercise_number();
        break;
        
    default:
        // do nothing
        break;
    }    
}
