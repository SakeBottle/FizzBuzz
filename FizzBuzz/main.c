//
//  main.c
//  FizzBuzz
//
//  Created by S Tsao on 10/08/2017.
//  Copyright © 2017 Sakebottle. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i;
    for (i = 1; i < 101; i++)
    
    {
        if ((i % 3 == 0)&&(i % 5 == 0))
        {
        printf("FizzBuzz\n");
        }
        
        else if (i % 3 == 0)
        {
        printf("Fizz\n");
        }
        
        else if (i % 5 == 0)
        {printf("Buzz\n");
        }
        else
        {printf("%d\n", i);
        }
    
    }
    return 0;
}
