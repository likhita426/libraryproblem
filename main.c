/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int d,p;
    printf("Enter the number of days");
    scanf("%d %d",&d,&p);
    if(d<=10){
        printf("No due!");
    }
    else{
        int b=d-10;
        int a=p*b;
        printf("%d",a);
    }
}

