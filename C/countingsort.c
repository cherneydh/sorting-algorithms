/*
 * countingsort.c
 * 
 * Copyright 2017 Daniel github: @cherneydh
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

void countingsort(int array[], int size)
{
	int largest = 1;
	int temp;
	int point;
	
	for(int i = 0; i < size; i++){
		if(array[i] > largest){
			largest = array[i];
		}	
	}	
	
	int count[largest];
	
	for(int k = 0; k < largest; k++){
		count[k]=0;
	}	
	
	for(int j = 0; j < size; j++){
		temp = array[j];
		temp--;
		count[temp]++;
	}	
	
	point = 0;
	for(int l = 0; l < largest; l++){
		if(count[l] > 0){
			while(count[l] > 0){
				array[point] = l+1;
				point++;
				count[l]--;
			}	
		}	
	}	
	
	return;
}

