//
// Created by aleksandr on 24.11.18.
//
#pragma once

#include <iostream>
#include <fstream>
#include <cstdarg>
#include <string>
using namespace std;

class SLogger {
public:
    void Log(const string &sMessage);
    void Log(const char* format, ...);
    SLogger& operator<<(const string &sMessage);
    static SLogger* GetLogger();
private:
    SLogger();
    SLogger(const SLogger&);;
    SLogger& operator=(const SLogger&);;
    static const string m_sFileName;
    static SLogger* m_pThis;
    static ofstream m_Logfile;
};



