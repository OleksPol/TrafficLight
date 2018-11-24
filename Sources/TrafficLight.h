//
// Created by aleksandr on 24.11.18.
//

#ifndef TRAFFICLIGHT_TRAFFICLIGHT_H
#define TRAFFICLIGHT_TRAFFICLIGHT_H
#include "TrafficState.h"

class TrafficLight {
public:
    TrafficLight();
    void setState(TrafficState* state);
    void Handle();

private:
    TrafficState* _state;
};


#endif //TRAFFICLIGHT_TRAFFICLIGHT_H
