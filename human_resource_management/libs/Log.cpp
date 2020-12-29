#include "Log.h"
#include <ctime>

void Log::Write(string log){
    time_t now = time(0);
    char* dt = ctime(&now);
    ofstream f("log.txt", ios::app);
    f << dt << ": " << log << endl;
    f.close();
}