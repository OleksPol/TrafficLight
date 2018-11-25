//
// Created by aleksandr on 24.11.18.
//

#include "../Headers/TrafficLight.h"
#include "../Headers/RedLight.h"
#include "../Headers/SLogger.h"
#include <cstddef>

TrafficLight::TrafficLight() {
    SLogger::GetLogger()->Log("firstlog!");
    _state = new RedLight(this);
}

void TrafficLight::setState(TrafficState *state) {
    if(_state != NULL)
        delete _state;
        _state = state;
}

void TrafficLight::Handle() {
    _state->Handle();
}
