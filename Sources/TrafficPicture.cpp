//
// Created by aleksandr on 24.11.18.
//

#include "../Headers/TrafficPicture.h"

void TrafficPicture::drawTrafficLight(int rect, char *textColor) {
    const int right = rect;
    const int left = rect;

    if(right != left) {
        cout << "left and right must be the same int value";
        return;
    }

    for(int a = 0; a < right + 1; a++) {
        cout << textColor << "**";
    }
    cout << endl;
    for(int x = 0; x < right; x++) {
        cout << textColor << "*";
        for (int i = 0; i < left; i++) {
            cout << textColor << "  ";
        }
        cout << textColor << "*\n";
    }
    for(int a = 0; a < right + 1; a++) {
        cout << textColor << "**";
    }
    cout << endl;

}

