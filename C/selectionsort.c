/*
 * selectionsort.c
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

void selectionsort(int array[], int size){
	int lowest;
	int hold;
	
	for(int i = 0; i < size-1; i++){
		lowest = array[i];
		for(int j = i+1; j < size; j++){
			if(array[j] < lowest){
				hold = j;
				lowest = array[j];
			}	
		}

		if(array[i] != lowest){
			array[hold] = array[i];
			array[i] = lowest;
		}
	}			
}
