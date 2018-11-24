//
// Created by aleksandr on 24.11.18.
//

#ifndef TRAFFICLIGHT_GREENLIGHT_H
#define TRAFFICLIGHT_GREENLIGHT_H
#include "RedLight.h"

class GreenLight: public TrafficState {
public:
    GreenLight(TrafficState* context);
    ~GreenLight();
    void Handle();

private:
    TrafficState* _context;
};


#endif //TRAFFICLIGHT_GREENLIGHT_H
