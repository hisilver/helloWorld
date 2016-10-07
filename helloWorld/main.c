//
//  main.c
//  helloWorld
//
//  Created by XiangFu He on 16/9/28.
//  Copyright © 2016年 XiangFu He. All rights reserved.
//
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("please input a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(max<b)
        max=b;
        if(max<c)
            max=c;
            printf("The largest number is%d\n",max);
            return 0;
}
