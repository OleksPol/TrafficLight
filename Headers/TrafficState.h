//
// Created by aleksandr on 24.11.18.
//

#pragma once


class TrafficState {
public:
    virtual ~TrafficState();
    virtual void Handle() = 0;
};


