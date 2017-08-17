/*
 * quicksort.c
 * 
 * Copyright 2017 daniel <daniel@newmaker>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include "bogosort.c"

int ARRAY_SIZE = 10;
void srand(unsigned int __seed);
time_t time(time_t* timer);

//Change this initialization to whatever sort you are using to test.
void bogosort(int array[],int size);


int main(){
	//Making sure it is random each execution
	srand(time(NULL));
	int array[ARRAY_SIZE];
	
	//Initializing the array with random values
	for(int p = 0; p < ARRAY_SIZE; p++){
		array[p] = rand() % 100;
	}	
	
	//Interchangable with whatever sort you are using
	bogosort(array,ARRAY_SIZE);
	
	//Prints out the sorted array
	for(int i = 0; i < ARRAY_SIZE; i++){
		printf("%d, ", array[i]);
	}	
	
	return 0;
}
