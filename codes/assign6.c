#include<stdio.h>
//Lets denote the outcomes ud=sing random variables 
//X=0 implies occurence of event E,X=1 implies occurence of event F
//Given
//P(X=0)=a(say)
int main(){
    float a=(float)3/5;
//P(X=1)b(say)
float b=(float)3/10;
//P(X=0,X=1)=c(say)
 float c=(float)1/5;
//verifying whether they are independent or not
if (a*b==c) {
    printf("The events E, F are independent");
}
else 
    printf("The events E, F are not independent");
return 0;
}
