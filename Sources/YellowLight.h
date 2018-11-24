//
// Created by aleksandr on 24.11.18.
//

#ifndef TRAFFICLIGHT_YELLOWLIGHT_H
#define TRAFFICLIGHT_YELLOWLIGHT_H
#include "RedLight.h"

class YellowLight: public TrafficState {
    void Handle();
    YellowLight(TrafficState* context);
    ~YellowLight();

private:
    TrafficState * _context;
};


#endif //TRAFFICLIGHT_YELLOWLIGHT_H
