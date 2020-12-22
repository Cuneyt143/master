
/**
 * File: stats.c 
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



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
#define NULL (0)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char median;
  unsigned char mean;
  unsigned char minimum;
  unsigned char maximum;
  //unsigned char s_array[SIZE];
  /* Statistics and Printing Functions Go Here */
  
  //s_array = sort_array(test);
  median = find_median(test , SIZE);
  mean = find_mean(test, SIZE);
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  print_array(test, SIZE);
  sort_array(test,SIZE);
  print_statistics(median,mean,maximum,minimum);
  
}

/* Add other Implementation File Code Here */
unsigned char find_median(unsigned char *ptr, unsigned int An){
  int i;
  unsigned char median;
  if ( ptr == NULL){
    return 0;
  }
  
  if( An <= 0 ){
    An = 1;
  } 
  An = An/2;
  ptr = ptr + An;
  median = *ptr;
  return (median); 
}

void sort_array(unsigned char array[], unsigned int An){
  int i,j,temp,min;
  
  for(i = 0;i < An;i++){   
    for(j = 0;j < An;j++){
      if(array[i]<array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
  }
  }
  printf("\nSort_array:\n ");
  for(i=An-1;i>=0;i--)
    printf("%d  ",array[i]);
}

unsigned char find_maximum(unsigned char *ptr, unsigned int An){
   int i;
   unsigned char max;
   max=*ptr;
   for(i = 0;i < An;i++){  
   ptr++;
   if(*ptr > max)
      max = *ptr;
   }

 return(max);
}

unsigned char find_minimum(unsigned char *ptr, unsigned int An){
   int i;
   unsigned char min;
   min=*ptr;
   for(i = 0;i < An-1;i++){
   
   ptr++;
   if(*ptr < min)
      min = *ptr;
   }

   return(min);
}

unsigned char find_mean(unsigned char *ptr, unsigned int An){
   int i;
   int sum;
   unsigned char mean;
   for(i = 0;i < An;i++){
      sum += *ptr;
      ptr++; 
   }
   mean = (float)sum / An;
   return(mean);
}

void print_array(unsigned char array[], unsigned int An){
   int i;
   printf("\nPrint_array: \n");
   for(i=0;i<An;i++)
   printf("%d  ",array[i]);
}

void print_statistics(unsigned char median,unsigned char mean,unsigned char maximum,unsigned char minimum){
   
  printf("\nMedian = %d ", median);
  printf("\nMaximum = %d ", maximum);
  printf("\nMinimum = %d ", minimum);
  printf("\nMean = %d ", mean);

}




















