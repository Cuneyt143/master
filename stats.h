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
 * @file stats.h 
 * @brief 
 *
 * <Add Extended Description Here>
 *
 * @author Cuneyt Kepildek
 * @date   Nov 15 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array.
 *
 * This function prints the statistics of an array including minimum, maximum, mean, and 
 * median.
 */
 void print_statistics(void);

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 */
 void print_array(void);
 
 /**
 * @brief Given an array of data and a length, returns the median value
 * 
 * @param unsigned char  A pointer to an n-element data array
 * @param unsigned int   An as the size of the array
 * @return   An result from the function
 */
 unsigned char find_median(unsigned char *A, unsigned int An);

  /**
 * @brief Given an array of data and a length, returns the mean
 * 
 * @param unsigned char  A pointer to an n-element data array
 * @param unsigned int   An as the size of the array
 * @return   An result from the function
 */
 unsigned char find_mean(unsigned char *A, unsigned int An);
 
   /**
 * @brief  Given an array of data and a length, returns the maximum
 * 
 * @param unsigned char  A pointer to an n-element data array
 * @param unsigned int   An as the size of the array
 * @return   An result from the function
 */
 unsigned char find_maximum(unsigned char *A, unsigned int An);
 
    /**
 * @brief  Given an array of data and a length, returns the minimum
 * 
 * @param unsigned char  A pointer to an n-element data array
 * @param unsigned int   An as the size of the array
 * @return   An result from the function
 */
 unsigned char find_minimum(unsigned char *A, unsigned int An);
 
    /**
 * @brief  Given an array of data and a length, sorts the array from largest to smallest.   
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the 
 * smallest value.)
 * 
 * @param unsigned char  A pointer to an n-element data array
 * @return   A result from the function
 */
 unsigned char sort_array(unsigned char *A);
#endif /* __STATS_H__ */
