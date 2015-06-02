#pragma once
#include <iostream>

class __act
{
private:
	int i,j,k;
	int Save_Array[5];
	
public:

	void _actUp(int array[4][4]){

	// xu li cac o trong 1 cot
	for(j = 0; j <= 3; ++j){
		k = 0;
		Save_Array[0] = Save_Array[1] = Save_Array[2] = Save_Array[3] = 0;
		for( i = 0; i <= 3; ++i ){
			if(array[i][j] != 0){
		
				Save_Array[k] = array[i][j];
				++k;
				array[i][j] = 0;
				
			}
		}
	// thuc hien viec cong trong mang luu gia tri.
		for(int x = 0; x <= k; ++x){
			if(Save_Array[x] == 0){
				break;
				
			}if(Save_Array[x] == Save_Array[x+1]){
				Save_Array[x] = Save_Array[x] + Save_Array[x+1];
				for(int y = x+1; y < k-1; ++y){
					Save_Array[y] = Save_Array[y+1];
					Save_Array[y+1] = 0;
				}
			}
		}
		
	// sap xep theo thu tu
		k = 0;
		for( i = 0; i <= 3; ++i ){
			
			if(Save_Array[k] == 0){
				break;
			}else{
				array[i][j] = Save_Array[k];
				++k;
			}
		}
	}
}


void _actDow(int array[4][4]){


	// xu li cac o trong 1 cot
	for(j = 0; j <= 3; ++j){
		k = 0;
		Save_Array[0] = Save_Array[1] = Save_Array[2] = Save_Array[3] = 0;
		for( i = 3; i >= 0; --i ){
			if(array[i][j] != 0){
		
				Save_Array[k] = array[i][j];
				++k;
				array[i][j] = 0;
				
			}
		}
		
		// thuc hien viec cong trong mang luu gia tri.
		for(int x = 0; x <= k; ++x){
			if(Save_Array[x] == 0){
				break;
				
			}if(Save_Array[x] == Save_Array[x+1]){
				Save_Array[x] = Save_Array[x] + Save_Array[x+1];
				for(int y = x+1; y < k-1; ++y){
					Save_Array[y] = Save_Array[y+1];
					Save_Array[y+1] = 0;
				}
			}
		}
		
		// sap xep theo thu tu
		k = 0;
		for( i = 3; i >= 0; --i ){
			
			if(Save_Array[k] == 0){
				break;
			}else{
				array[i][j] = Save_Array[k];
				++k;
			}
		
		}
		
	}
}

void _actRight(int array[4][4]){

	// xu li cac o trong 1 cot
	for(i = 0; i <= 3; ++i){
		k = 0;
		Save_Array[0] = Save_Array[1] = Save_Array[2] = Save_Array[3] = 0;
		for( j = 3; j >= 0; --j ){
			if(array[i][j] != 0){
		
				Save_Array[k] = array[i][j];
				++k;
				array[i][j] = 0;
				
			}
		}
		
		// thuc hien viec cong trong mang luu gia tri.
		for(int x = 0; x <= k; ++x){
			if(Save_Array[x] == 0){
				break;
				
			}if(Save_Array[x] == Save_Array[x+1]){
				Save_Array[x] = Save_Array[x] + Save_Array[x+1];
				for(int y = x+1; y < k-1; ++y){
					Save_Array[y] = Save_Array[y+1];
					Save_Array[y+1] = 0;
				}
			}
		}
		
		// sap xep theo thu tu
		k = 0;
		for( j = 3; j >= 0; --j ){
			
			if(Save_Array[k] == 0){
				break;
			}else{
				array[i][j] = Save_Array[k];
				++k;
			}
			
			
		}
	}
}

void _actleft(int array[4][4]){

	// xu li cac o trong 1 cot
	for(i = 0; i <= 3; ++i){
		k = 0;
		Save_Array[0] = Save_Array[1] = Save_Array[2] = Save_Array[3] = 0;
		for( j = 0; j <= 3; ++j ){
			if(array[i][j] != 0){
		
				Save_Array[k] = array[i][j];
				++k;
				array[i][j] = 0;
				
			}
		}
		
		// thuc hien viec cong trong mang luu gia tri.
		for(int x = 0; x <= k; x++){
			if(Save_Array[x] == 0){
				break;
			}if(Save_Array[x] == Save_Array[x+1]){
				Save_Array[x] = Save_Array[x] + Save_Array[x+1];
				for(int y = x+1; y < k-1; ++y){
					Save_Array[y] = Save_Array[y+1];
					Save_Array[y+1] = 0;
				}
			}
		}
		
		// sap xep theo thu tu
		k = 0;
		for( j = 0; j <= 3; ++j ){
			
			if(Save_Array[k] == 0){
				break;
			}else{
				array[i][j] = Save_Array[k];
				++k;
			}

		}
	}
}
public:
	__act(void);
	~__act(void);
};