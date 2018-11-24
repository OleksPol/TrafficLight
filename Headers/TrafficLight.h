//
// Created by aleksandr on 24.11.18.
//

#pragma once
#include "TrafficState.h"

class TrafficLight {
public:
    TrafficLight();
    void setState(TrafficState* state);
    void Handle();

private:
    TrafficState* _state;
};


