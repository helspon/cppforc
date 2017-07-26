#include "time.h"

int main(void)
{
  Time myTime, anotherTime;

  myTime.set(10, 30);
  myTime.display();

  return 0;
}
