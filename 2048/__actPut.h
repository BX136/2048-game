#pragma once
#include <conio.h>
class __actPut
{
public:
	int _actPut()
{
	int a;
	do
	{
		a = _getch();
		switch(a){
			
			case 119:
			case 72:
			{
				return 1;
			} //Len
			case 100:
			case 77: 
			{
				return 2;
			}//Phai
			case 115:
			case 80: 
			{
				return 3;
			} //Xuong
			case 97:
			case 75: 
			{
				return 4;
			}//Trai
			
		}
	}while(true);
}
public:

	__actPut(void);
	~__actPut(void);
};

