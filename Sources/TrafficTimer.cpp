//
// Created by aleksandr on 24.11.18.
//

#include "TrafficTimer.h"
#include <ncurses.h>
#include <stdlib.h>

void TrafficTimer::sleep(int seconds) {

    while(seconds > 0) {
        usleep(100000);
        if (kbhit()) {
        char firstKey = getch();
        if(firstKey == 'p' || firstKey 'P') {
                while (true) {
                    char secondKey = getch();
                    if (secondKey == 's' || secondKey == 'S')
                        break;
                    if (secondKey == 'e' || secondKey == 'E') {
                        exit(0);
                        system("cls");
                    }
                }
            }
            if(firstKey == 'e' || firstKey == 'E') {
                exit(0);
                system("cls");
            }
        }
        seconds = seconds - 100;
    }

}