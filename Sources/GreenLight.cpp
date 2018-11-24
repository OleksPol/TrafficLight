//
// Created by aleksandr on 24.11.18.
//

#include <cstdlib>
#include "../Headers/YellowLight.h"
#include "../Headers/TrafficPicture.h"
#include "../Headers/GreenLight.h"
#include "../Headers/RedLight.h"
#include "../Headers/TrafficTimer.h"

void GreenLight::Handle() {
    system("cls");
    TrafficPicture::drawTrafficLight(5, "\033[0m");
    TrafficPicture::drawTrafficLight(5, "\033[0m");
    TrafficPicture::drawTrafficLight(5, "\033[1;32m");
}

GreenLight::GreenLight(TrafficLight *context): _context(context) {};


GreenLight::~GreenLight() {

}