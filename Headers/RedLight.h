//
// Created by aleksandr on 24.11.18.
//

#pragma once

#include "TrafficState.h"
#include "TrafficLight.h"
#include "YellowLight.h"
#include "GreenLight.h"
#include <cstdio>
class RedLight: public TrafficState {
public:
    void Handle();
    RedLight(TrafficLight* context);
    ~RedLight();

private:
    TrafficLight* _context;
};



