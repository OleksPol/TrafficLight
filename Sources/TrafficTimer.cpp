//
// Created by aleksandr on 24.11.18.
//

#include "../Headers/TrafficTimer.h"
#include <ncurses.h>
#include <cstdlib>
#include <ctime>

void TrafficTimer::sleep(int seconds) {

    while(seconds > 0) {
        sleep(100);
        char firstKey = getch();
        if(firstKey == 'p' || firstKey == 'P') {
            while(true) {
                char secondKey = getch();
                if (secondKey == 's' || secondKey == 'S')
                    break;
                if (secondKey == 'e' || secondKey == 'E'){
                    exit(0);
                    system("cls");
                }
            }
        }
        if (firstKey == 'e' || firstKey == 'E') {
            exit(0);
            system("cls");
        }
    }
    seconds = seconds -100;
}