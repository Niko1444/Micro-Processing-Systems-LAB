#ifndef __SOFTWARE_TIMER_H_
#define __SOFTWARE_TIMER_H_

void setTimer0 (int duration);
void setTimer1 (int duration);
void setTimer2 (int duration);
void timer_run();
int getTimer0Flag();
int getTimer1Flag();
int getTimer2Flag();

#endif /* INC_SOFTWARE_TIMER_H_ */
