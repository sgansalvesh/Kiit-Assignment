#include<stdio.h>  
 int main(void)    
{    
int i=0;
while(i=0){
int a , t ;      
//Taking the Inputs 
printf("Enter a five digit number");      
scanf("%d",&a);
t = a ;

//Checking the number is five digit or not 
int r , sum = 0 , count = 0 ;
while (a != 0) {      //The while loop to check if its 5 digit or not
    r = a % 10;
    count++ ;
    a = a/10;
}
if (count == 5)       //The if else to continue with the processing if its a five digit number
{
   while (t != 0) {   // Again a while loop to take the sum of the five digits of the number
    r = t % 10;
    sum = sum + r ;
    t = t/10; }
    printf("The sum of the numbers is %d" , sum); //Printing the sum 
    i=1;
}

}

}   
