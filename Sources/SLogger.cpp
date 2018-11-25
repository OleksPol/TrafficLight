//
// Created by aleksandr on 24.11.18.
//

#include "../Headers/SLogger.h"
#include"../Headers/Utilities.h"




const string SLogger::m_sFileName = "Log.txt";
SLogger* SLogger::m_pThis = NULL;
ofstream SLogger::m_Logfile;
SLogger::SLogger(){

}

int _vscprintf (const char * format, va_list pargs) {
    int retval;
    va_list argcopy;
    va_copy(argcopy, pargs);
    retval = vsnprintf(NULL, 0, format, argcopy);
    va_end(argcopy);
    return retval;
}

void SLogger::Log(const string &sMessage) {
    m_Logfile <<  Util::CurrentDateTime() << ":\t";
    m_Logfile << sMessage << "\n";
}

void SLogger::Log(const char *format, ...) {
    char* sMessage = NULL;
    int nLength = 0;
    va_list args;
    va_start(args, format);
    nLength = _vscprintf(format, args) + 1;
    sMessage = new char[nLength];
    vsnprintf(sMessage, nLength, format, args);
    m_Logfile << Util::CurrentDateTime() << ":\t";
    m_Logfile << sMessage << "\n";
    va_end(args);

    delete [] sMessage;
}

SLogger &SLogger::operator<<(const string &sMessage) {
    m_Logfile << "\n" << Util::CurrentDateTime() << ":\t";
    m_Logfile << sMessage << "\n";
    return *this;
}

SLogger *SLogger::GetLogger() {
    if (m_pThis == NULL){
        m_pThis = new SLogger();
        m_Logfile.open(m_sFileName.c_str(), ios::out | ios::app);
    }
    return m_pThis;
}


