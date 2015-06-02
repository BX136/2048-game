#pragma once
#include <conio.h>
#include <iostream>
class __checkTableRule
{
private:
	int SumCell ;
	int i, j;
public:
int _checkTableRule(int array[4][4]){
	
	for(i = 0; i <= 3; ++i){
		for(j = 0; j <=2; ++j){
			if(array[i][j] == array[i+1][j]){
				return 1;
			}
		}
	}
	for(j = 0; j <= 3; ++j){
		for(i = 0; i <= 2; ++i){
			if(array[i][j] == array[i][j+1]){
				return 1;
			}
		}
	}
	return 0;
}

int _checktable(int array[4][4]){
	SumCell = 0;
	for(i=0; i<4; ++i){
	
		for(j=0; j<4; ++j){
			// tim so o con trong
			if(array[i][j] == 0){
			
				SumCell +=1;
			}
		}
	}
	return SumCell;
}

public:
	__checkTableRule(void);
	~__checkTableRule(void);
};