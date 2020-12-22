
/**
 * File: stats.h 
 * 
 * The information in this file is meant as a learning tool for myself.
 *
 *
 * Author: Cuneyt Kepildek
 * Date: Nov 15 2020
 *
 * Description: A simple C-Programming example that exhibits a handful of basic c
 *              features to show how to calculate some statistics on an array:
 *                 -Mean
 *                 -Median
 *                 -Maximum
 *                 -Minimum
 *                 -Sort of an array
 *
 */

#ifndef __STATS_H__
#define __STATS_H__
 

/**
 * Function: print_statistics 
 * Prints the statistics of an array.
 *
 * This function prints the statistics of an array including minimum, maximum, mean, and 
 * median.
 * 
 * Parameters:
 *    unsigned char median
 *    unsigned char mean
 *    unsigned char maximum
 *    unsigned char minimum
 * 
 */
 void print_statistics(unsigned char median,unsigned char mean,unsigned char maximum,unsigned char minimum);


/**
 *  Function: void print_array
 *  Given an array of data and a length, prints the array to the screen.
 *
 *  Parameters:
 *     unsigned char array[]
 *     unsigned int An
 *  
 */
 void print_array(unsigned char array[], unsigned int An);
 
 /**
 *  Function: find_median
 *  Given an array of data and a length, returns the median value
 * 
 *  Parameters:
 *      unsigned char  A pointer to an n-element data array
 *      unsigned int   An as the size of the array
 *  Return:   
 *      Median of the numbers provided.
 *
 */
 unsigned char find_median(unsigned char *ptr, unsigned int An);

  /**
 *  Function: find_mean(
 *  Given an array of data and a length, returns the mean
 * 
 *  Parameters:
 *    unsigned char  A pointer to an n-element data array
 *    unsigned int   An as the size of the array
 *  Return:
 *    Mean of the numbers provided.
 */
 unsigned char find_mean(unsigned char *ptr, unsigned int An);
 
   /**
 *   Function: find_maximum   
 *   Given an array of data and a length, returns the maximum
 * 
 *   Parameters:
 *    unsigned char  A pointer to an n-element data array
 *    unsigned int   An as the size of the array
 *  Retuns:
 *    Maximum of the numbers provided.
 */
 unsigned char find_maximum(unsigned char *ptr, unsigned int An);
 
 /**
 *   Function: find_minimum
 *   Given an array of data and a length, returns the minimum
 *  Parameters:
 *    unsigned char *ptr
 *    unsigned int An
 *  Return:
 *    Minimum of the numbers provided.   
 */
 unsigned char find_minimum(unsigned char *ptr, unsigned int An);
 
 /**
 *   Function: sort_array
 *   Given an array of data and a length, sorts the array from largest to smallest.   
 * (The zeroth Element should be the largest value, and the last element (n-1) should be  
 * the smallest value.)
 *  
 *  Parameters: 
 *     unsigned char array[]
 *     unsigned int An
 */
 void sort_array(unsigned char array[], unsigned int An);
#endif /* __STATS_H__ */
