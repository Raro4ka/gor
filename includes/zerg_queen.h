// Раньше королева зергов позволяла совершенно
// бесконтрольно плодится малышам зерглингам.
// Но после того, как веспена на её родной планете
// стало меньше, она решила ввести учёт роджаемости.
// Известно, что на тот момент популяция зерлингов
// насчитывала ровно 888 особей. Доведите их количество
// до 900, отображая появление каждого нового
// зерглинга на экране. Для этого, используя цикл for
// выведите на экран строчку "There are X zerlings at
// the moment" заменив X на соответствующее число.

#ifndef EX1_ZERG_QUEEN_H
#define EX1_ZERG_QUEEN_H

#include <iostream>
#include <unistd.h>

inline void zerg_population()
{
    for (int zergs = 888; zergs < 901; ++zergs)
    {
        sleep(1);
    std::cout << "There are " << zergs << " zerlings at the moment\n";
    }
}

#endif // EX1_ZERG_QUEEN_H
