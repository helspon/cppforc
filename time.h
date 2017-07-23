#ifndef __TIME_H__
#define __TIME_H__

class Time {
private:
  int Hour;
  int Minute;
public:
  Time();
  ~Time();
  void set(int, int);
  void display();
};

#endif //#ifndef __TIME_H__
