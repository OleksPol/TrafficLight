//
// Created by aleksandr on 24.11.18.
//

#pragma once

#include "RedLight.h"
#include "GreenLight.h"
#include "TrafficLight.h"
#include <cstdio>

class YellowLight: public TrafficState {
public:
    void Handle();
    YellowLight(TrafficLight* context);
    ~YellowLight();

private:
    TrafficLight * _context;
};



