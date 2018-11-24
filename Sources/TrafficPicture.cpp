//
// Created by aleksandr on 24.11.18.
//

#include "../Headers/TrafficPicture.h"

void TrafficPicture::drawTrafficLight(int rect, char *textColor) {
    const int width = rect;
    const int height = rect;

    for (int y = width; y >= -width; y -= 2)  {
        for (int x = -height; x <= height; x++)  {
            cout<<  textColor << "@";
            cout << " ";

        }
        cout << "\n";
    }
}

