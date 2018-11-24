//
// Created by aleksandr on 24.11.18.
//

#ifndef TRAFFICLIGHT_REDLIGHT_H
#define TRAFFICLIGHT_REDLIGHT_H
#include "TrafficState.h"

class RedLight: public TrafficState {
public:
    void Handle();
    RedLight(TrafficState* context);
    ~RedLight();

private:
    TrafficState* _context;
};


#endif //TRAFFICLIGHT_REDLIGHT_H
