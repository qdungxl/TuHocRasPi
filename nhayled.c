#include <wiringPi.h>
int main(void)
{
	wiringPiSetupGpio();
	pinMode(17,OUTPUT);
	while(1)
	{
		digitalWrite(17,HIGH);
		delay(500);
		digitalWrite(17,LOW);
		delay(500);
	}
	return 0;
}
