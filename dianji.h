//遥控壁障小车，电机驱动模块
#include <reg52.h>
#define uchar unsigned char 
#define uint unsigned int

sbit in1=P1^0;
sbit in2=P1^1;
sbit in3=P1^2;
sbit in4=P1^3;
sbit ena=P1^6;
sbit enb=P1^7;

void delay_ms(unsigned int ms)                        // 延时子程序
{    
  unsigned int a,b; 
  for(a=ms;a>0;a--)
  for(b=123;b>0;b--);
}

void go_forward()
{
	ena=1;
	enb=1;
	in1=0;
	in2=1;	
	in4=0;
	in3=1;

}

void go_back()
{
	ena=1;
	enb=1;
	in1=1;
	in2=0;	
	in4=1;
	in3=0;
}

void turn_left()
{
	ena=1;
	enb=0;
	in1=0;
	in2=1;	
	in4=0;
	in3=1;
	delay_ms(200); 
}

void turn_right()
{
	ena=0;
	enb=1;
	in1=0;
	in2=1;	
	in4=0;
	in3=1;
	delay_ms(200);
}
void stop()
{
	ena=0;
	enb=0;
}
/*========Copyright for DengJiXiang========*/