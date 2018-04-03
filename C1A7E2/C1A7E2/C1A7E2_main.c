/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Mar 6, 2017
 * C1A7E2_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: compute food calories
 * description: This program prompts user for name, weight, and caloric content of
 * food items. The program has already input records for apple and salad. These two
 * records and the user-entered food information will be output in a table.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define LUNCH_ITEMS 5
#define ELEMENT_TO_BE_INTIALIZED 2
#define BUFFER_SIZE 128

void *SafeMalloc(size_t size);

int main(void)
{
    /* definition of structure Food and its members */
    struct Food
    {
        char *name;
        int weight, calories;
        
    /* declare the first two elements of the array */
    } lunch[LUNCH_ITEMS] = {{"apple", 4, 100}, {"salad", 2, 80}};
    
    /* starting at the second element, prompt for user input */
    for (int array_element = ELEMENT_TO_BE_INTIALIZED; array_element < LUNCH_ITEMS; ++array_element)
    {
        /* temporary buffer for food name */
        char tmp_foodname[BUFFER_SIZE];
        printf("Enter name, weight, and calories of a food separated by space: ");
        
        /* read in user input; don't read newline character from food name */
        scanf("%127s %d %d", tmp_foodname, &(lunch[array_element].weight), &(lunch[array_element].calories));
        
        /* allocate memory for name; amount determined by size of tmp_foodname */
        lunch[array_element].name = (char *)SafeMalloc(sizeof(tmp_foodname));
        
        /* if memory successfully allocated, copy characters from tmp_foodname to name */
        memcpy(lunch[array_element].name, tmp_foodname, strlen(tmp_foodname) + 1);
    }
    
    /* print a table to display food, weight, calories */
    printf("food           weight      calories\n");
    for (int array_element = 0; array_element < LUNCH_ITEMS; ++array_element)
    {
        printf("%-12s %8d %13d\n", lunch[array_element].name, lunch[array_element].weight,
               lunch[array_element].calories);
    }
    
    /* free memory space from array_elements for which memory space has been allocated */
    for (int array_element = ELEMENT_TO_BE_INTIALIZED; array_element < LUNCH_ITEMS; ++array_element)
    {
        free(lunch[array_element].name);
    }
    return 0;
}

/* function from note 8.6 that reduces clutter when handling error during memory allocation */
void *SafeMalloc(size_t size)
{
    void *vp;
    /* test for allocation failure */
    if ((vp = malloc(size)) == NULL)
    {
        /* output error message and exit if memory allocation fails */
        fputs("Out of memory\n", stderr);
        exit(EXIT_FAILURE);
    }
    return(vp);
}
