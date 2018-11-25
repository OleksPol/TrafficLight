//
// Created by aleksandr on 24.11.18.
//

#include <cstdlib>
#include "../Headers/YellowLight.h"
#include "../Headers/TrafficPicture.h"
#include "../Headers/GreenLight.h"
#include "../Headers/RedLight.h"
#include "../Headers/TrafficTimer.h"
#include "../Headers/SLogger.h"

void YellowLight::Handle() {
    SLogger::GetLogger()->Log("waiting for preview");
    system("clear");
    TrafficPicture::drawTrafficLight(5, (char*)"\033[0m");
    TrafficPicture::drawTrafficLight(5, (char*)"\033[1;31m");
    TrafficPicture::drawTrafficLight(5, (char*)"\033[0m");

}

YellowLight::YellowLight(TrafficLight *context): _context(context) {}

YellowLight::~YellowLight() {

}