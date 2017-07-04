#include "Poles.h"

long desired_pos1=0;
long desired_pos2=0;
long desired_pos3=0;

long current_pos1=0;
long current_pos2=0;
long current_pos3=0;

long pos1=0;
long pos2=0;
long pos3=0;


void Pole( long desired_pos1)   // 
{
	pos1=desired_pos1 - current_pos1 ;
		Mlifter1counter=0;
if(pos1<0)
	{
	pos1=abs(pos1);
		digitalWrite(Motor1,HIGH);    // if negative change direction
	}
		while(1)
{
PID_ML1_REV(pos1);
	Delay1ms(2);
			if(Mlifter1counter>=pos1)
		{MotorStop(Motor1);}
		if(Mlifter1counter>=pos1 )
		{liftersStop();
		break;}
}
	current_pos1=pos1;
}



void Pole1( long desired_pos1, long desired_pos2, long desired_pos3,int SERVEPWM)   // 
{
	pos1=desired_pos1 - current_pos1 ;
	pos2=desired_pos2 - current_pos2 ;
	pos3=desired_pos3 - current_pos3 ;
	
	Mlifter1counter=0;
	Mlifter2counter=0;
	Mlifter3counter=0;
	
	if(pos1<0||pos2<0||pos3<0)
	{
	pos1=abs(pos1);
	pos2=abs(pos2);
	pos3=abs(pos3);
		digitalWrite(Motor1,HIGH);    // if negative change direction
		digitalWrite(Motor2,HIGH);
		digitalWrite(Motor3,HIGH);
	}
	while(1)
{
PID_ML1_REV(pos1);
PID_ML2_REV(pos2);
PID_ML3_REV(pos3);
			if(Mlifter1counter>=pos1)
		{MotorStop(Motor1);}
			if(Mlifter2counter>=pos2)
		{MotorStop(Motor2);}
			if(Mlifter3counter>=pos3)
		{MotorStop(Motor3);}
		if(Mlifter1counter>=pos1 &&Mlifter2counter>=pos2 && Mlifter3counter>=pos3)
		{liftersStop();
		break;}
	if(ReadData()==R2)
	{liftersStop();
	break;}
	if (ReadData()==0x23)
	{liftersStop();
	break;}
}
	analogWrite(Motor9,SERVEPWM);  // change to PID_MServe_RPM 
	Serve();
	current_pos1=pos1;
	current_pos2=pos2;
	current_pos3=pos3;
	delayUs(20000);
}
	
	
void Pole2( long desired_pos1, long desired_pos2, long desired_pos3,int SERVEPWM)
{
pos1=desired_pos1 - current_pos1 ;
	pos2=desired_pos2 - current_pos2 ;
	pos3=desired_pos3 - current_pos3 ;
	
	Mlifter1counter=0;
	Mlifter2counter=0;
	Mlifter3counter=0;
	
	if(pos1<0||pos2<0||pos3<0)
	{
	pos1=abs(pos1);
	pos2=abs(pos2);
	pos3=abs(pos3);
		digitalWrite(Motor1,HIGH);    // if negative change direction
		digitalWrite(Motor2,HIGH);
		digitalWrite(Motor3,HIGH);
	}
	while(1)
	{
PID_ML1_REV(pos1);
PID_ML2_REV(pos2);
PID_ML3_REV(pos3);
			if(Mlifter1counter>=pos1)
		{MotorStop(Motor1);}
			if(Mlifter2counter>=pos2)
		{MotorStop(Motor2);}
			if(Mlifter3counter>=pos3)
		{MotorStop(Motor3);}
		if(Mlifter1counter>=pos1 &&Mlifter2counter>=pos2 && Mlifter3counter>=pos3)
		{liftersStop();
		break;}
	if(ReadData()==R2)
	{liftersStop();
	break;}
	if (ReadData()==0x23)
	{liftersStop();
	break;}
	}
	analogWrite(Motor9,SERVEPWM);  // change to PID_MServe_RPM 
	Serve();
	current_pos1=pos1;
	current_pos2=pos2;
	current_pos3=pos3;
	delayUs(20000);
}
	
	
void Pole3( long desired_pos1, long desired_pos2, long desired_pos3,int SERVEPWM)
{
pos1=desired_pos1 - current_pos1 ;
	pos2=desired_pos2 - current_pos2 ;
	pos3=desired_pos3 - current_pos3 ;
	
	Mlifter1counter=0;
	Mlifter2counter=0;
	Mlifter3counter=0;
	
	if(pos1<0||pos2<0||pos3<0)
	{
	pos1=abs(pos1);
	pos2=abs(pos2);
	pos3=abs(pos3);
		digitalWrite(Motor1,HIGH);    // if negative change direction
		digitalWrite(Motor2,HIGH);
		digitalWrite(Motor3,HIGH);
	}
	while(1)
	{
PID_ML1_REV(pos1);
PID_ML2_REV(pos2);
PID_ML3_REV(pos3);
			if(Mlifter1counter>=pos1)
		{MotorStop(Motor1);}
			if(Mlifter2counter>=pos2)
		{MotorStop(Motor2);}
			if(Mlifter3counter>=pos3)
		{MotorStop(Motor3);}
		if(Mlifter1counter>=pos1 &&Mlifter2counter>=pos2 && Mlifter3counter>=pos3)
		{liftersStop();
		break;}
	if(ReadData()==R2)
	{liftersStop();
	break;}
	if (ReadData()==0x23)
	{liftersStop();
	break;}
	}
	analogWrite(Motor9,SERVEPWM);  // change to PID_MServe_RPM 
	Serve();
	current_pos1=pos1;
	current_pos2=pos2;
	current_pos3=pos3;
	delayUs(20000);
}
	
void Pole4( long desired_pos1, long desired_pos2, long desired_pos3,int SERVEPWM)
{
pos1=desired_pos1 - current_pos1 ;
	pos2=desired_pos2 - current_pos2 ;
	pos3=desired_pos3 - current_pos3 ;
	
	Mlifter1counter=0;
	Mlifter2counter=0;
	Mlifter3counter=0;
	
	if(pos1<0||pos2<0||pos3<0)
	{
	pos1=abs(pos1);
	pos2=abs(pos2);
	pos3=abs(pos3);
		digitalWrite(Motor1,HIGH);    // if negative change direction
		digitalWrite(Motor2,HIGH);
		digitalWrite(Motor3,HIGH);
	}
	while(1)
	{
PID_ML1_REV(pos1);
PID_ML2_REV(pos2);
PID_ML3_REV(pos3);
			if(Mlifter1counter>=pos1)
		{MotorStop(Motor1);}
			if(Mlifter2counter>=pos2)
		{MotorStop(Motor2);}
			if(Mlifter3counter>=pos3)
		{MotorStop(Motor3);}
		if(Mlifter1counter>=pos1 &&Mlifter2counter>=pos2 && Mlifter3counter>=pos3)
		{liftersStop();
		break;}
	if(ReadData()==R2)
	{liftersStop();
	break;}
	if (ReadData()==0x23)
	{liftersStop();
	break;}
	}
	analogWrite(Motor9,SERVEPWM);  // change to PID_MServe_RPM 
	Serve();
	current_pos1=pos1;
	current_pos2=pos2;
	current_pos3=pos3;
	delayUs(20000);
}
	
void Pole5( long desired_pos1, long desired_pos2, long desired_pos3,int SERVEPWM)
{
	pos1=desired_pos1 - current_pos1 ;
	pos2=desired_pos2 - current_pos2 ;
	pos3=desired_pos3 - current_pos3 ;
	
	Mlifter1counter=0;
	Mlifter2counter=0;
	Mlifter3counter=0;
	
	if(pos1<0||pos2<0||pos3<0)
	{
	pos1=abs(pos1);
	pos2=abs(pos2);
	pos3=abs(pos3);
		digitalWrite(Motor1,HIGH);    // if negative change direction
		digitalWrite(Motor2,HIGH);
		digitalWrite(Motor3,HIGH);
	}
	while(1)
	{
PID_ML1_REV(pos1);
PID_ML2_REV(pos2);
PID_ML3_REV(pos3);
			if(Mlifter1counter>=pos1)
		{MotorStop(Motor1);}
			if(Mlifter2counter>=pos2)
		{MotorStop(Motor2);}
			if(Mlifter3counter>=pos3)
		{MotorStop(Motor3);}
		if(Mlifter1counter>=pos1 &&Mlifter2counter>=pos2 && Mlifter3counter>=pos3)
		{liftersStop();
		break;}
	if(ReadData()==R2)
	{liftersStop();
	break;}
	if (ReadData()==0x23)
	{liftersStop();
	break;}
	}
	analogWrite(Motor9,SERVEPWM);  // change to PID_MServe_RPM 
	Serve();
	current_pos1=pos1;
	current_pos2=pos2;
	current_pos3=pos3;
	delayUs(20000);
}