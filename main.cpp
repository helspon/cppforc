#include "time.h"

int main(void)
{
  Time myTime;

  myTime.set(10, 30);
  myTime.display();

  myTime.set(5, 10);
  myTime.display();

  return 0;
}
