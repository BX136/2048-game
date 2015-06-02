#pragma once
#include "__checkTableRule.h"
#include <conio.h>
#include <iostream>

class __checkRule
{

private:
	int i,j;
	char key;
public:
int _checkWin(int array[4][4]){
	for(i = 0; i <= 3; ++i ){
		for(j = 0; j <= 3; ++j){
		
			if(array[i][j] == 2048){
				char key = _getch();
				do{
					std::cout << "\n\t\tYou win!!\n\tprest anykey to continue.!";
				}while(key == ' ');
				return 1;
			}
		}
	}
	__checkTableRule check;
	if(check._checktable(array) == 0){
		key = _getch();
		do{
			std::cout << "\n\t\tYou lose!!\n\tprest anykey to continue.!";
		}while(key == ' ');
	}
	return 0;
}

public:
	__checkRule(void);
	~__checkRule(void);
};