#include "time.h"
#include "debug.h"
#include <iostream>

using namespace std;

Time::Time() {
  DEBUG << "[DEBUG] Time ctor" << endl;
}

Time::~Time() {
  DEBUG << "[DEBUG] Time dtor" << endl;
}

void Time::set(int hour, int minute) {
  DEBUG << "[DEBUG] Time::set(int, int)" << endl;
  Hour = hour;
  Minute = minute;
}

void Time::display() {
  DEBUG << "[DEBUG] Time::display()" << endl;
  cout << "Time: " << Hour << ':' << Minute << endl;
}
