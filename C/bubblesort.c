/*
 * quicksort.c
 * 
 * Copyright 2017 Daniel @cherneydh
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

void bubblesort(int array[],int size){
	//Double for loop to "change" array size
	for(int j = 0; j < size; j++){	
		for(int i = j+1; i < size; i++){
			if(array[j]>array[i]){
				//Swapping the two values
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}	
		}
	}	
}	
