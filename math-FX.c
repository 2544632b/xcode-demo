//
//  math-FX.c
//  math_FX
//
//  Created by snapper on 2019/5/1.
//  Copyright © 2019 8848. All rights reserved.
//

#include <stdio.h>
#include <math.h>

// f(x) = sig(x) = sigx = sig(pi/4) e.g.
// sigx = ax+1 a->R & a!=0 e.g.
//usage: single(a,x);
//printf("a,x,y");

int single(int a,int x) {
    
    int y = a*x+1;
    printf("%d,%d,%d",a,x,y);
    return y;
    return 0;
}

int sig(int a,int x) {
    
    int y = a*x+1;
    printf("%d,%d,%d",a,x,y);
    return y;
    return 0;
}
