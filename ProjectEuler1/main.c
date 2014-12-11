//
//  main.c
//  ProjectEuler2
//
//  Created by Deep Prasad on 2014-12-10.
//  Copyright (c) 2014 Deep Prasad. All rights reserved.
//

#include <stdio.h>
int fibbo(n)
{
    if (fibbo(n)<=1){
        return 1;
        }
    else
        return fibbo(n-1)+fibbo(n-2);
    
}

int main(int argc, const char * argv[]) {
    int sum=0;
    int i=0;
    int fibval=0;
    while(fibval <=4000000)
    {
        fibval=fibbo(i);
        if(fibval%2==0)
        {
            sum+=fibval;
        }
        i++;
    }
    printf("sum: %d",sum);
}
