#include "Serve.h"

unsigned long State=1 ;
unsigned long I=0;
unsigned long state1=0;
unsigned long state2=0;




	/*
				serve();
	digitalWrite(ServePiston,LOW);
			digitalWrite(ServeMotorCW,LOW);
digitalWrite(ServeMotorCCW,HIGH); 
		Delay1ms(1000);
	digitalWrite(ServeMotorCCW,LOW); 
	Delay1ms(100);
	digitalWrite(ServePiston,HIGH);
	Delay1ms(200);
		digitalWrite(ServeMotorCW,HIGH); 
Delay1ms(750);
			digitalWrite(ServeMotorCW,LOW);
		digitalWrite(ServeMotorCCW,LOW); 
	Delay1ms(290);
		digitalWrite(ServePiston,LOW);
	Delay1ms(200);
	servestop();
	
}*/
	/*
	switch (State)
	{
		case 1:
	    digitalWrite(ServePiston,LOW);
      digitalWrite(ServeMotorCW,HIGH); 
		  State=2;
		  Delay1ms(5);
	//	state1++;
		while(1)
		{
			if(digitalRead(saucer)==HIGH)
			{		digitalWrite(ServePiston,HIGH);
     digitalWrite(ServeMotorCW,LOW);
		digitalWrite(ServeMotorCCW,LOW);
						Delay1ms(5);
						state1++;
      break;
			}
		}
		break;
		
		case 2:
			digitalWrite(ServePiston,LOW);
      digitalWrite(ServeMotorCCW,HIGH);
		  State=1;
		  Delay1ms(5);
		//state2++;
			while(1)
		{
			if(digitalRead(saucer)==HIGH)
			{
		digitalWrite(ServePiston,HIGH);
		digitalWrite(ServeMotorCCW,LOW);
		digitalWrite(ServeMotorCW,LOW);
					Delay1ms(5);
						state2++;

      break;
			}
		}
		break;
	}*/
	/*
	switch (State)
	{
		case 1:
	    digitalWrite(ServePiston,LOW);
      digitalWrite(ServeMotorCW,HIGH); 
		  State=2;
		  Delay1ms(5);
	//	state1++;
		while(1)
		{
			if(ReadData()==LIFTall_UP)
			{		digitalWrite(ServePiston,HIGH);
     digitalWrite(ServeMotorCW,LOW);
		digitalWrite(ServeMotorCCW,LOW);
						Delay1ms(5);
						state1++;
      break;
			}
		}
		break;
		
		case 2:
			digitalWrite(ServePiston,LOW);
      digitalWrite(ServeMotorCCW,HIGH);
		  State=1;
		  Delay1ms(5);
		//state2++;
			while(1)
		{
			if(ReadData()==LIFTall_UP)
			{
		digitalWrite(ServePiston,HIGH);
		digitalWrite(ServeMotorCCW,LOW);
		digitalWrite(ServeMotorCW,LOW);
					Delay1ms(5);
						state2++;

      break;
			}
		}
		break;
	}*/
	void Serve()
{
/*	digitalWrite(ServePiston,LOW);
	Delay1ms(400);
		digitalWrite(ServePiston,HIGH);
	Delay1ms(400);
		digitalWrite(ServePiston,LOW);
	*/
	/*
	 digitalWrite(ServePiston,LOW);
      digitalWrite(ServeMotorCW,HIGH); 
		  State=2;
		  Delay1ms(5);
	//	state1++;
		while(1)
		{
			if((PA5&0x20)==0x20)
			{	
	Delay1ms(80);
				digitalWrite(ServePiston,HIGH);
     digitalWrite(ServeMotorCW,LOW);
		digitalWrite(ServeMotorCCW,LOW);
						Delay1ms(5);
				digitalWrite(ServeMotorCCW,HIGH); 
Delay1ms(650);
						digitalWrite(ServeMotorCCW,LOW);
						state1++;
				if(ReadData()==R2)
				{break;}
      break;
			}
				if(ReadData()==R2)
				{    digitalWrite(ServeMotorCW,LOW);
		digitalWrite(ServeMotorCCW,LOW);
				break;}
}*/

switch (State)
	{
		case 1:
	    digitalWrite(ServePiston,LOW);
		 Delay1ms(15);
      	PD2 &= ~0x04;
	analogWrite(Motor10,2000) ;
		  State=2;
		  Delay1ms(5);
	//	state1++;
		while(1)
		{
			if((PA5&0x20)==0x20)
			{	
				Delay1ms(55);
				digitalWrite(ServePiston,HIGH);
    MotorStop(Motor10);
						Delay1ms(5);
						state1++;
					Delay1ms(150);
		digitalWrite(ServePiston,LOW);
      break;
			}
		}
		break;
		
		case 2:
			digitalWrite(ServePiston,LOW);
		Delay1ms(15);
      	PD2 |= 0x04;
		Delay1ms(15);
	analogWrite(Motor10,2000) ;
		  State=1;
		  Delay1ms(5);
		//state2++;
			while(1)
		{
			if((PA5&0x20)==0x20)
			{
				Delay1ms(60);
		digitalWrite(ServePiston,HIGH);
		MotorStop(Motor10);
					Delay1ms(5);
						state2++;
	Delay1ms(150);
		digitalWrite(ServePiston,LOW);
      break;
			}
		}
		break;

}
/*
switch (State)
	{
		case 1:
	      digitalWrite(ServePiston,LOW);
		 Delay1ms(15);
		PD2 &= ~0x04;
	analogWrite(Motor10,8000) ;	
	  State=2;
		  Delay1ms(5);
				Delay1ms(900);
				digitalWrite(ServePiston,HIGH);
		
      MotorStop(Motor10);
						Delay1ms(5);
						state1++;
    
		
		break;
		
		case 2:
				digitalWrite(ServePiston,LOW);
	PD2 |= 0x04;
		Delay1ms(15);
	analogWrite(Motor10,8000) ;
		State=1;
		  Delay1ms(5);
				Delay1ms(1000);
		digitalWrite(ServePiston,HIGH);
      MotorStop(Motor10);
					Delay1ms(5);
					

		break;
	
}*/
	}
