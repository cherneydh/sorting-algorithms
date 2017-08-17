/*
 * bogosort.c
 * DOES NOT WORK WITH NEGATIVE NUMBERS
 * 
 * Copyright 2017 Daniel @cherneydh
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY W ARRANTY; without even the implied warranty of
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

void srand(unsigned int __seed);

void bogosort(int array[], int ARRAY_SIZE)
{
	int randomized[ARRAY_SIZE];
	int random;
	int attempts = 0;
	
	//Initializing the array values all to -1
	for(int k = 0; k<ARRAY_SIZE; k++){
		randomized[k] = -1;
	}	
	
	while(1==1){
		printf("Attempt Number %d\n", attempts);
		attempts++;
	
		//Check if in order
		for(int i = 0; i < ARRAY_SIZE; i++){
			if(array[i] < array[i+1]){
				continue;
			}else if(i+1 == ARRAY_SIZE){
				return;
			}else{ 
				i = 1000;
			}
		}
		//Reset randomized	
		for(int k = 0; k < ARRAY_SIZE; k++){
			randomized[k] = -1;
		}	
		//Regenerate array randomly
		for(int j = 0; j < ARRAY_SIZE; j++){
			random = rand() % ARRAY_SIZE;
			if(randomized[random] == -1){
				randomized[random] = array[j]; 
			}else{
				j--;
			}
		}
		//Set array equal to randomized
		for(int b = 0; b < ARRAY_SIZE; b++){
			array[b] = randomized[b];
		}				
	
	}	

}

