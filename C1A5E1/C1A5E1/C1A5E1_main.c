/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Feb 20, 2017
 * C1A5E1_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: product survey
 * description: This program prompts users for a deimal integer value
 * to rate how much they like a product. Users must provide a value
 * within the specified range. The program will take a specific number
 * of legal responses before it ends. The program will also end when 
 * a specific number of consecutive out-of-range responses have been entered.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_RESPONDENT 6
#define MIN_VALUE -5
#define MAX_VALUE 10
#define ERROR_LIMIT 2
/* number of possible response values */
#define RESPONSE_VALUES (MAX_VALUE - MIN_VALUE + 1)


int main(void)
{
    /* explain how survey works */
    printf("Enter rating in the range %d through %d, "
           "or %d out-of-range values to terminate.\n\n",
           MIN_VALUE, MAX_VALUE, ERROR_LIMIT);

    /* loop to prompt user to enter response, check response, tally response */
    int respCount, totalError = 0;
    int ratingCount[RESPONSE_VALUES] = {0};
    
    for (respCount = 0; respCount < MAX_RESPONDENT;)
    {
        printf("Respondent %d: ", respCount + 1);
        int response;
        scanf("%d", &response);
        
        /* checks response value */
        if (response < MIN_VALUE || response > MAX_VALUE)
        {
            fprintf(stderr, "Bad response: %d.\n", response);
            
            /* if total error exceeds limit */
            if (++totalError >= ERROR_LIMIT)
            {
                break;
            }
        }
        else
        {
                ++ratingCount[response - MIN_VALUE];
                ++respCount;
                totalError = 0;
        }
    }
    
    /* if total errors exceeds limit */
    if (totalError >= ERROR_LIMIT)
    {
        fprintf(stderr, "Maximum consecutive out-of-range error reached.\n"
                "Survey terminated Early.\n");
    }
    else
    {
        printf("All responses polled. Survey terminated.\n");
    }
  
    /* print response */
    printf("rating      number of responses\n"
           "------      -------------------\n");
    
    for(respCount = RESPONSE_VALUES - 1; respCount >= 0; --respCount)
    {
        printf("%3d%15d\n", MIN_VALUE + respCount, ratingCount[respCount]);
    }
    
    return EXIT_SUCCESS;
}

