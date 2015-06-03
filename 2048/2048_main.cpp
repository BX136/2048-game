#include <iostream>
#include <conio.h>
#include <windows.h>
#include "__controlCenter.h"


using namespace std;

int main(void){
playAgain:
	system("cls");
	int array[4][4] =
	{
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};
	__controlCenter play;
	play._playGame(array);
	cout << "\n\tYou want to play again!!\n\t(Y/N)";
	char key;
	do{
		key = _getch();
		if(key == 'Y' || key == 'y'){
			system("cls");
			goto playAgain;
		}if(key == 'N' || key == 'n'){
			break;
		}
	}while(key != 'Y' || key != 'y' || key != 'N' || key != 'n');
	cout << "\n";
	system("cls");
}