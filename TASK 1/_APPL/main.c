#include "APP_Config.h"

void toggle_led1();
void toggle_led2();
void toggle_led3();

int main() {
	Port_Init(pins);
	GI_voidEnable();

	Task_Creat(0,100,toggle_led1);
	Task_Creat(1,200,toggle_led2);
	Task_Creat(2,300,toggle_led3);

	Task_Creat(4,0,NULL);

	Scheduler_Start();

    while (1)
    {

    }
}


void toggle_led1() {
    Dio_FlipChannel(PB_0);
}

void toggle_led2() {
    Dio_FlipChannel(PB_1);
}

void toggle_led3() {
    Dio_FlipChannel(PB_2);
}
