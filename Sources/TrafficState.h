//
// Created by aleksandr on 24.11.18.
//

#ifndef TRAFFICLIGHT_TRAFFICSTATE_H
#define TRAFFICLIGHT_TRAFFICSTATE_H


class TrafficState {
public:
    virtual ~TrafficState();
    virtual void Handle();
};


#endif //TRAFFICLIGHT_TRAFFICSTATE_H
