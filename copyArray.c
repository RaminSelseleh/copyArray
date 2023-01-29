#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Change this constant to 1 to fill source array
// with random values.
#define RAND_ARR 1

#define SRC_SIZE 10

int main()
{
    // Declare source array
    int source[SRC_SIZE];
    
    // Fill array with random values or constant values
    if (RAND_ARR == 1)
    {
        // Seed random number generator
        srandom(time(NULL));
        
        // Fill array with random values
        for (int i = 0; i < SRC_SIZE; i++)
            source[i] = random() % 20 - 10;
    }
    else
    {
        // Fill array with constant values
        source[0] = 9;
        source[1] = 2;
        source[2] = 0;
        source[3] = -4;
        source[4] = 0;
        source[5] = 21;
        source[6] = -92;
        source[7] = 1;
        source[8] = 10;
        source[9] = 2;
    }
    
    // ADD YOUR CODE BELOW HERE
    
    // What to do:
    //   Determine the number of positive and number of negative
    //     values.
    int posLength = 0;
    int negLength = 0;

    for (int i =0; i < SRC_SIZE; i++) {
        if (source[i] > 0) {
            posLength++;
        }
        if (source[i] < 0) {
            negLength++;
        }
        
    }
    //   Declare the pos and neg arrays, sized correctly.
    int pos[posLength], p = 0;
    int neg[negLength], n = 0;
    //   Copy the values out of the source array into the pos or neg
    //      array, as appropriate.
    for (int i = 0; i < SRC_SIZE; i++) {
        if (source[i] > 0) {
            pos[p] = source[i];
            p++;
        }
        if (source[i] < 0) {
            neg[n] = source[i];
            n++;
        }
    }
    // You'll need to replace these two lines with some code to
    //    determine the correct values.
    

    
    // YOUR CODE ABOVE HERE
    
    // Display the contents of the pos array
    printf("pos: ");
    for (int i = 0; i < posLength; i++)
    {
        printf("%d ", pos[i]);
    }
    printf("\n");
    
    // TODO: Display contents of the neg array
    printf("neg: ");
    for (int i = 0; i < negLength; i++) {
        printf("%d ", neg[i]);
    }
    printf("\n");


}
