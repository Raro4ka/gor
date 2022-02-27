#ifndef EXERCISES_H
#define EXERCISES_H

#include <iostream>

#include "arreat_summit.h"
#include "dragons.h"
#include "pirate_bar.h"
#include "zerg_queen.h"

enum Exercise
{
    UNKNOWN = 0,

    ZERG_QUEEN = 1,
    PIRATE_BAR = 2,
    DRAGONS_CASTLE = 3,
    ARREAT_SUMMIT = 4
};

void wrong_exercise_number();
inline void choose_exercise();

#endif // EXERCISES_H
