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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief  A function that fins the minimum value of
 * an array.
 *
 * This function takes as an input an unsigned char 
 * pointer to an nelement data array and compare every position,in order to find the minimum

 * @param unsigned char *test which contains the info to be treated.
 * @param int tamano specifies the size of the char array
 *
 * @return min an unsigned char that contains the minimum value
 */

unsigned char find_minimum(unsigned char *test, int tamano);

/**
 * @brief  A function that fins the median value of
 * an array.
 *
 * This function takes as an input an unsigned char 
 * pointer to an n-element data array and compare every position,in order to find the median

 * @param unsigned char *test which contains the info to be treated.
 * @param int tamano specifies the size of the char array
 *
 * @return median an unsigned char that contains the median value
 */

unsigned char find_median(unsigned char *test,int tamano);

/**
 * @brief  A function that fins the mean value of
 * an array.
 *
 * This function takes as an input an unsigned char 
 * pointer to an nelement data array and compare every position,in order to find the mean

 * @param unsigned char *test which contains the info to be treated.
 * @param int tamano specifies the size of the char array
 *
 * @return mean an unsigned char that contains the mean value
 */

unsigned char find_mean(unsigned char *test,int tamano);

/**
 * @brief  A function that fins the maximum value of
 * an array.
 *
 * This function takes as an input an unsigned char 
 * pointer to an nelement data array and compare every position,in order to find the maximum

 * @param unsigned char *test which contains the info to be treated.
 * @param int tamano specifies the size of the char array
 *
 * @return maximum an unsigned char that contains the maximum value
 */

unsigned char find_maximum(unsigned char *test,int tamano);

/**
 * @brief  A function that prints the statistics of
 * an array including minimum, maximum, mean, and median.
 *
 * This function takes as an input an unsigned char 
 * pointer to an nelement data array. The function calls to
 * find_minimum,find_maximum,find_mean,find_median and prints 
 * what this funstions are returning

 * @param unsigned char *test which contains the info to be treated.
 * @param int tamano specifies the size of the char array
 */

void print_statistics(unsigned char *test,int tamano);

/**
 * @brief  A function that prints the 
 * an array.
 *
 * This function takes as an input an unsigned char 
 * pointer to an nelement data array and print it.

 * @param unsigned char *test which contains the info to be treated.
 * @param int tamano specifies the size of the char array
 */

void print_array(unsigned char *test,int tamano);

/**
 * @brief  A function that sorts the array from the largest to smallest value.
 *
 * This function takes as an input an unsigned char 
 * pointer to an nelement data array.

 * @param unsigned char *test which contains the info to be treated.
 * @param int tamano specifies the size of the char array
 */

void sort_array(unsigned char *test,int tamano);



#endif /* __STATS_H__ */
