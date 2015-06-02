#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
class __table
{
public:
void _drawTable(int array[4][4])
{
	//Hamm ke bang
	for(int i=0 ; i<4; i++)
	{
		//In ra duong ke doc va in ra ki tu rong^~
		for(int j=0; j<4; j++)
		{
			if(array[i][j] == 0){
				cout  << "    .    " ;
			}else{
				if(array[i][j] < 9){
					cout << "    "<< array[i][j] << "    " ;
				}if(array[i][j] < 65 && array[i][j] > 10){
					cout << "    "<< array[i][j] << "   " ;
				}if(array[i][j] < 515 && array[i][j] > 100){
					cout << "    "<< array[i][j] << "  " ;
				}if(array[i][j] < 2200 && array[i][j] > 1000){
					cout << "    "<< array[i][j] << " " ;
				}

			}
		}
		
		cout << endl << endl << endl << endl << endl;
	}
}
public:
	__table(void);
	~__table(void);
};

