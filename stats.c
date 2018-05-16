/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (4)

unsigned char find_minimum(unsigned char *test);

void main() {

/*  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,

                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

*/



  unsigned char test[4] = { 97, 98, 99, 100};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here*/
  unsigned char minimo;
  char (*pos_tabla);
  pos_tabla = test;
  minimo  = find_minimum(test);
  printf("El mínimo del array es:%c\n",minimo);




}

print_statistics(char *pos_tabla){};

print_array(char *pos_tabla,int tamano){};

find_median(char *pos_tabla,int tamano,int media){};

find_mean(char *pos_tabla,int tamano, int mean){};

find_maximum(char *pos_tabla,int tamano, int max){};

unsigned char find_minimum(unsigned char *test)
{
	int i;
	unsigned char min = 255;
	for (i=0;i<SIZE;i++)
	{
		printf("test[%i]:%c\n",i,test[i]);
		if (min>test[i])
		{
			min=test[i];
			printf("min:%c\n",min);
		}
	}
	return min;
};

sort_array(char *pos_tabla,int tamano){};

/* Add other Implementation File Code Here */
