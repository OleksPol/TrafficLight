//
// Created by aleksandr on 24.11.18.
//

#include <cstdlib>
#include "../Headers/YellowLight.h"
#include "../Headers/TrafficPicture.h"
#include "../Headers/GreenLight.h"
#include "../Headers/RedLight.h"

void RedLight::Handle() {
    system("cls");
    TrafficPicture::drawTrafficLight(5, "\033[1;31m");
    TrafficPicture::drawTrafficLight(5, "\033[0m");
    TrafficPicture::drawTrafficLight(5, "\033[0m");
}

RedLight::RedLight(TrafficLight *context): _context(context) { };

RedLight::~RedLight() {

}