#pragma once
#include "__checkTableRule.h"
class __add2_4
{
private:
public:
__checkTableRule tablecheck;
void _add2_4(int array[4][4])
{
	int x = 0, y =0;
	if(tablecheck._checktable(array) >= 14){
		do{
			x = rand()%4;
			y = rand()%4;

		}while(array[x][y] != 0);

		array[x][y] = 2;
		
		do{
			x = rand()%4;
			y = rand()%4;

		}while(array[x][y] != 0);

		array[x][y] = 4;
	}if( tablecheck._checktable(array) < 14 && tablecheck._checktable(array) >=1 ){
		do{
			x = rand()%4;
			y = rand()%4;
		}while(array[x][y] != 0);
		array[x][y] = 2;
	}
	
	/*
	* chu y: Ham nay chi xuat mot so vao game, hay goi ham nay 2 lan
	* de xuat 2 so
	*/
}
public:
	__add2_4(void);
	~__add2_4(void);
};

