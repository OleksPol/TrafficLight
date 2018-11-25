//
// Created by aleksandr on 24.11.18.
//

#pragma once

#include <iostream>
#include <string>
#include <ctime>

namespace Util {
    const std::string CurrentDateTime() {
        time_t now = time(NULL);
        struct tm tstruct;
        char buf[80];
        localtime_r(&now, &tstruct);
        strftime(buf, sizeof(buf), "%T-%m-%d.%X", &tstruct);
        return buf;
    }
}

