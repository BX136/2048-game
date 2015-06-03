#pragma once
#include "__add2_4.h"
#include "__checkRule.h"
#include "__actPut.h"
#include "__table.h"
#include "__act.h"
#include <iostream>
#include <windows.h>
class __controlCenter
{
public:
	int diem[1];
public:
	
	void _playGame(int array[4][4]){
	diem[0] = 0;
	int i = 0;
	__add2_4 add;
	add._add2_4(array);
	__table draw;
	draw._drawTable(array);
	__checkTableRule table;
	__checkRule Rule;

	do{
		__actPut act;
		int Step = act._actPut();
		system("cls");
		if(Step == 1 || Step == 2 || Step ==3 || Step == 4 ){
			system("cls");
			_Control(Step, array, diem);
		}
		add._add2_4(array);
		draw._drawTable(array);
		
		std::cout << "move: " << i;
		i++;
		std::cout << "\nscore:" << diem[0];  
	}while(table._checktable(array) != 0 || table._checkTableRule(array) != 0);
	Rule._checkWin(array);
}

private:
	void _Control(int Step, int array[4][4], int diem[1]){

	switch(Step){
		case 1: 
		{	
			__act up;
			up._actUp(array, diem);
			break;
		}
		case 2: 
		{	__act Right;
			Right._actRight(array, diem);
			break;
		}
		case 3: 
		{	
			__act Dow;
			Dow._actDow(array, diem);
			break;
		}	
		case 4: 
		{	
			__act Left;
			Left._actleft(array, diem);
			break;
		}
	}

}

public:
	__controlCenter(void);
	~__controlCenter(void);
};

