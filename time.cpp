#include "time.h"
#include <iostream>

using namespace std;

Time::Time() {
}

Time::~Time() {
}

void Time::set(int hour, int minute) {
  Hour = hour;
  Minute = minute;
}

void Time::display() {
  cout << "Time: " << Hour << ':' << Minute << endl;
}
