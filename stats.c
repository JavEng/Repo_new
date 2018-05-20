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
#define SIZE (40)

unsigned char find_minimum(unsigned char *test, int tamano);

print_statistics(char *pos_tabla);

print_array(char *pos_tabla,int tamano);

unsigned char find_median(unsigned char *test,int tamano);

unsigned char find_mean(unsigned char *test,int tamano);

unsigned char find_maximum(unsigned char *test,int tamano);

sort_array(char *pos_tabla,int tamano){};

void main() {

unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,

                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here*/
  unsigned char minimo;
  unsigned char maximum;
  unsigned char mean;
  unsigned char median;

  //char (*pos_tabla);
  //pos_tabla = test;
  minimo  = find_minimum(test,sizeof(test));
  maximum = find_maximum(test,sizeof(test));
  mean =  find_mean(test,sizeof(test));
  printf("El minimo del array es:%u\n",(int)minimo);
  printf("El maximo del array es:%u\n",(int)maximum);
  printf("La media del array es:%u\n",(int)mean);





}

unsigned char find_minimum(unsigned char *test,int tamano)
{
	int i;
	unsigned char min = 255;
	
	for (i=0;i<tamano;i++)
	{
		if (min>test[i])
		{
			min=test[i];
		}
	}
	return min;
};

unsigned char find_maximum(unsigned char *test, int tamano)
{
	int i;
	int maximum = 0;
	for (i=0;i<tamano;i++)
	{
		if (test[i]>maximum)
		{
			maximum = test[i];
		}
	}
	return maximum;
}

unsigned char find_mean(unsigned char *test,int tamano)
{
	int i;
	int mean = 0;
	float sum = 0; 
	for (i=0;i<tamano;i++)
	{
		sum = sum + test[i];
	}
	mean = sum/sizeof(test);
	return mean;
}

/* Add other Implementation File Code Here */
