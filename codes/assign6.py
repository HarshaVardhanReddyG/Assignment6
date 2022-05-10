#Lets denote the outcomes ud=sing random variables 
# X=0 implies occurence of event E,X=1 implies occurence of event F
#Given
#P(X=0)=a(say)
a=3/5
#P(X=1)b(say)
b=3/10
#P(X=0,X=1)=c(say)
c=1/5
#verifying whether they are independent or not
if(a*b==c) :
    print("The events E, F are independent")
else :
    print("The events E, F are not independent")
