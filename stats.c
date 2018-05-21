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

unsigned char find_median(unsigned char *test,int tamano);

unsigned char find_mean(unsigned char *test,int tamano);

unsigned char find_maximum(unsigned char *test,int tamano);

print_statistics(char *pos_tabla);

void print_array(unsigned char *test,int tamano);

void sort_array(unsigned char *test,int tamano);

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
  median = find_median(test,sizeof(test));
  printf("El minimo del array es:%u\n",(int)minimo);
  printf("El maximo del array es:%u\n",(int)maximum);
  printf("La media del array es:%u\n",mean);
  printf("La mediana del array es:%u\n",median);
  sort_array(test,sizeof(test));

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
}

unsigned char find_maximum(unsigned char *test, int tamano)
{
	int i;
	unsigned char maximum = 0;
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
	unsigned char mean = 0;
	float sum = 0; 
	for (i=0;i<tamano;i++)
	{
		sum = sum + test[i];
	}
	mean = sum/tamano;
	return mean;
}

unsigned char find_median(unsigned char *test,int tamano)
{
	int i;
	unsigned char median = 0;
	sort_array(test,tamano);
	median = test[(tamano/2)-1];
	return median;
}

void sort_array(unsigned char *test,int tamano)
{
	unsigned char aux = 0;
	int i;
	int j;
	for (i=0;i<tamano;i++)
	{
		for(j=0;j<tamano;j++)
		{
			if (test[i]>test[j])
			{
				aux=test[i];
				test[i]=test[j];
				test[j]=aux;
			}
		}
	}	
}

void print_array(unsigned char *test, int tamano)
{
	int i;
	for(i=0;i<tamano;i++)
	{
		printf("Test[%u]:%u\n",i,(int)test[i]);
	}

}
