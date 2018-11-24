//
// Created by aleksandr on 24.11.18.
//

#pragma once

#include "RedLight.h"
#include "YellowLight.h"
#include <cstdio>
#include "TrafficLight.h"

class GreenLight: public TrafficState {
public:
    GreenLight(TrafficLight* context);
    ~GreenLight();
    void Handle();

private:
    TrafficLight* _context;
};



