1. Find the largest number among the three numbers.
#include <stdio.h>
int main(){
    int num1=10;
    int num2=20;
    int num3=30;
    if (num1 > num2 && num1 > num3) {
        printf("num1 is largest\n");
    }
    else if (num2 > num1 && num2 > num3) {
        printf("num2 is largest\n");
    }
    else {
        printf("num3 is largest\n");
    }

    return 0;
}


2. Write a Program to check whether a number is prime or not.
#include <stdio.h>
int main(){
   int number;
   printf("enter number");
   scanf("%d",&number);
   int cnt=0;
   for(int i=2;i<number;i++){
       if(number%i==0){
           cnt++;
       }
   }
   if(cnt>0){
       printf("it is not a prime number");
   }
   else{
       printf("it is a prime number");
   }
}

3. Write a C program to calculate Compound Interest.



4. Write a Program in C to Swap the values of two variables without using any extra variable.
#include <stdio.h>
int main(){
    int a;
    printf("inter number one");
    scanf("%d",&a);
    int b;
    printf("inter number second");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n",a);
    printf("%d",b);
    
}


5. Write a Program to Replace all 0’s with 1’s in a Number.

6. Write a Program to convert the binary number into a decimal number.

7.  Write a Program to check if the year is a leap year or not.
#include <stdio.h>
int main(){
    int year=2008;
    if((year%4==0 && year%100!=0) || year%400==0){
        printf("it is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
}

8. Write a program to Factorial of a Number.
#include <stdio.h>
int main(){
    int num=5;
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}

--- using recursion

#include <stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num=5;
    printf("%d",factorial(num));
    return 0;
}

9. Write a Program to Check if a number is an Armstrong number or not.

12. Check whether a number is a palindrome.
#include <stdio.h>
int main() {
    int num=153;
    int reversed=0;
    while(num!=0){ 
        reversed=reversed*10+num%10;
        num=num/10;
    }
    if(num==reversed){
    printf("not a palindrome");
    }
    else{
        printf("palindrome");
    }
    return 0;
}
13. Write a C Program to check if two numbers are equal without using the bitwise operator. 
#include <stdio.h>
int main(){
    int num1=10;
    int num2=10;
    if(!(num1 ^ num2)){
        printf("it is equal");
    }
    else{
        printf("it is not equal");
    }
}



14. Write a  C program to find the GCD of two numbers.
#include <stdio.h>
int main(){
    int num1=98;
    int num2=56;
    int gcd;
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("%d",gcd);
}
15. Write a  C program to find the LCM of two numbers.
#include <stdio.h>
int main(){
    int num1=12;
    int num2=9;
    int gcd;
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
int lcm=num1*num2/gcd;
printf("%d",lcm);
}
18. Write a Program to find the area of a circle.
#include <stdio.h>
#include <math.h>
int main() {
    int radius=2;
    float PI=3.14;
    float area =PI * pow(radius,2);
    printf("%.2f",area);
}



22. Write a program to reverse an Array.
#include <stdio.h>

int main() {
    int arr[]={ 1, 2, 3, 4, 5, 6, 7, 8 };
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=len-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}

23. Write a program to check the repeating elements in C.
#include <stdio.h>
int main() {
    int arr[]={ 1, 3, 4, 1, 2, 3, 5, 5 };
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
}

24. Write a Program to print the Maximum and Minimum elements in an array.
#include <stdio.h>
int main() {
    int arr[]={ 15, 14, 35, 2, 11, 83 };
    int len=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("max:""%d\n",max);
    printf("min:""%d",min);
}