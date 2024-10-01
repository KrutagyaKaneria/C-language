
// 1. Hello World Program
//  Write a program to print "Hello, World!" on the screen.

// #include <stdio.h>
// int main () {
// 	printf ("Hello, World!") ;
// 	return 0 ;
// }

//2. Sum of Two Numbers
//Write a program to find the sum of two numbers the user enters.

// #include <stdio.h> 
// int main () {
// 	float num1 ;
// 	float num2 ;
// 	printf ("Enter the Number 1 : ") ;
// 	scanf ("%f" , &num1) ;
// 	printf ("Enter the Number 2 : ") ;
// 	scanf ("%f" , &num2) ;
// 	printf ("%f" , num1+num2 ) ; 
// 	return 0 ;
// } 

////3. Largest of Two Numbers
//   Write a program to find the largest of two numbers.

// #include <stdio.h> 
// int main () {
// 	float num1 ;
// 	float num2 ;
// 	printf ("Enter the Number 1 : ") ;
// 	scanf ("%f" , &num1) ;
// 	printf ("Enter the Number 2 : ") ;
// 	scanf ("%f" , &num2) ;
// 	if (num1 > num2) {
// 		printf ("%f is the Largest number." , num1) ;
// 	}
// 	else if (num2 > num1) {
// 		printf ("%f is the Largest number." , num2) ;
// 	}
// 	else {
// 		printf ("%f is the Largest number." , num1) ;
// 	}
// 	return 0 ;
// }

//4. Even or Odd
//   Write a program to check whether a given number is even or odd.

// #include <stdio.h>
// int main () {
// 	int num =10;
// 	// printf ("Enter the Number : ") ;
// 	// scanf ("%d" , &num) ;
// 	if (num % 2 == 0) {
// 		printf ("%d is a Even Number." , num) ;
// 	}
// 	else {
// 		printf ("%d is a Odd Number." , num) ;
// 	}
// 	return 0 ;
// }

// //5. Factorial of a Number
// //   Write a program to calculate the factorial of a given number.

// #include <stdio.h>
// int main () {
// 	int num = 3 ;
// 	int i ;
// 	int factorial = 1 ;
// 	for (i = 1 ; i <= num ; i++) {
// 		factorial = factorial * i ;
// 	}
// 	printf ("%d" , factorial) ;
// 	return 0 ;
// }

// //6. Reverse a Number
// // Write a program to reverse a given integer using inbuild function.
// #include <stdio.h>
// #include <string.h>
// int main () {
// 	int num = 123 ;
// 	char str[4] ; 
// 	sprintf(str , "%d" , num) ; 
// 	int i ;
// 	for (i = (strlen(str) - 1) ; i >= 0 ; i--) {
// 		printf ("%c" , str[i]) ;
// 	}
// 	return 0 ;
// }

// //6(ii) Reverse a Number
// // Write a program to reverse a given integer using inbuild function.

// #include <stdio.h>
// int main() {
//    int num=123;
//    int reversed=0;
//    while(num!=0){
//        reversed=reversed*10+num%10;
//        num=(num-num%10)/10;
//    }
//    printf("%d",reversed);
//    return 0;
// }

// 7. Palindrome Check
// Write a program to check whether a given number is a palindrome.

// #include <stdio.h>
// int main() {
//     int num=153;
//     int reversed=0;
//     while(num!=0){ 
//         reversed=reversed*10+num%10;
//         num=num/10;
//     }
//     if(num==reversed){
//     printf("not a palindrome");
//     }
//     else{
//         printf("palindrome");
//     }
//     return 0;
// }

// 7(ii) Palindrome Check
// Write a program to check whether a given number is a palindrome.
// #include <stdio.h>
// int main(){
// char data[] = "abbba";
//     int len = sizeof(data);
//     char copy[len];
//     strcpy(copy, data);
//     for(int i=0; i<len/2; i++){
//         char temp = data[i];
//         data[i] = data[len-2-i];
//         data[len-2-i] = temp;
//     }

//    printf("%d\n", !(strcmp(data, copy)));
//    return 0;
// }


// //8. Sum of Digits
// //   Write a program to find the sum of digits of a given number.

// #include <stdio.h>
// #include <string.h>
// int main () {
// 	int num = 154 ;
// 	int sum = 0 ;
// 	char str[4] ;
// 	sprintf (str , "%d" , num) ;
// 	int i ;
// 	for (i = 0 ; i < strlen(str) ; i++ ) {
// 		sum = sum + (str[i] - '0') ;
// 	}
// 	printf ("%d" , sum) ;
// 	return 0 ;
// }

// //8(ii). Sum of Digits
// //   Write a program to find the sum of digits of a given number.
// #include <stdio.h>
// int main(){
//     int num=12;
//     int sum=0;
//     while(num!=0){
//         sum=sum+num%10;
//         num=num/10;
//     }
//     printf("%d",sum);
//     return 0;
// }


// //9. Prime Number Check
// //Write a program to check whether a given number is prime.
// #include <stdio.h>
// int main(){
//     int num;
//     printf("enter value") ;
//     scanf("%d",&num);
//     int cnt=0;
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             cnt++;
//         }
//     }
// if(cnt>0){
//     printf("no it is not a prime number");
// }
// else{
//     printf("ys it is a prime number");
// }
// return 0;
// }

// //10. Fibonacci Sequence
// //Write a program to print the Fibonacci sequence up to a given number of terms.
// int main(){
//     int num=5;
//     int a=0;
//     int b=1;
//     printf("%d",a);
//     printf("%d",b);
//     for(int i=1;i<num;i++){
//         int c=a+b;
//         printf("%d \n",c);
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// 11. Swapping Two Numbers
// Write a program to swap two numbers without using a third variable.
// #include <stdio.h>
// int main() {
//    int a = 2, b = 5;
//    a = a + b;  
//    b = a - b;  
//    a = a - b; 
//    printf("After swapping: a = %d, b = %d\n", a, b);
//    return 0;
// }

// 12. Swap Two Numbers Using Third Variable
// Write a program to swap two numbers using a third variable.
// #include <stdio.h>
// int main(){
//     int a=2;
//     int b=5;
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("%d,%d",a,b);
// }

// 13. Leap Year Check
// Write a program to check whether a given year is a leap year
// #include <stdio.h>
// int main(){
//     int year;
//     printf("write year");
//     scanf("%d",&year);
//     if((year%4==0 && year%100!=0) || year%400==0){
//         printf("yes this is a leap year");
//     }
//     else{
//         printf("not a leap year");
//     }
// }

// 14. Simple Calculator
// Write a program to create a simple calculator that can add, subtract, multiply, and divide two numbers.
// #include <stdio.h>
// int main(){
//     int a;
// 	float b;
// 	printf("b=");
// 	scanf("%f ",&b);
// 	printf("a=");
// 	scanf("%d ",&a);
	
// 	float sum=a+b;
// 	float min=a-b;
// 	float div=a/b;
// 	float mul=a*b;
	
	
// 	printf("%.1f \n",sum);
// 	printf("%.1f\n",min);
// 	printf("%.1f\n",div);
// 	printf("%.1f",mul);
// 	return 0;
// }


// 15. Sum of Array Elements
// Write a program to find the sum of all elements in an array.
// #include <stdio.h>
// int main(){
//     int arr1[3]={1,2,3};
//     int length =sizeof(arr1)/sizeof(arr1[0]);
//     int sum=0;
//     for(int i=0;i<length;i++){
//         sum=sum+arr1[i];
//     }
//     printf("%d",sum);
//     return 0;

// }

// 16. Largest Element in an Array
// Write a program to find the largest element in an array.
// #include <stdio.h>
// int main(){
//     int arr[3]={1,2,3};
//     int length = sizeof(arr)/sizeof(arr[0]);
//     int max;
//     for(int i=0;i<=length;i++){
//         for(int j=0;j<=length;j++){
//             if(arr[i]>arr[j]){
//                 max=arr[i];
//             }
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

// 17. String Length
// Write a program to find the length of a string without using the built-in strlen function.
// #include <stdio.h>
// int main () {
// 	char str[] = "krutagya" ;
// 	int i ;
// 	int length ;
// 	for (i = 0 ; str[i] != 0 ; i++ ) {
// 		length = length + 1 ; 
// 	}
// 	printf ("%d" , length) ;
// 	return 0 ;
// }


// 18. String Reverse
// Write a program to reverse a string.
// int main(){
//     char str[]="krutagya";
//     int num = 0 ;
//     for(int j = 0 ; str[j] != '\0' ; j++) {
//         num = num + 1 ;
//     }
//     for(int i= num-1 ;i>=0;i--){
//         printf("%c",str[i]);
//     }
//     return 0;
// }

// 19. GCD of Two Numbers
// Write a program to find the greatest common divisor (GCD) of two numbers
// int main(){
//     int n1;
//     int n2;
//     int i;
//     int gcd;
//     scanf("%d",&n1);
//     scanf("%d",&n2);
//     for(int i=1;i<=n1 && i<=n2;i++){
//         if(n1%i==0 && n2%i==0)
//         gcd=i;
//     }
// printf("gcd of %d and %d is %d\n",n1,n2,gcd);
// return 0;
// }

// 20. LCM of Two Numbers
// Write a program to find the least common multiple (LCM) of two numbers.
// int main(){
//     int num;
//     scanf("%d",&num);
//     int num_two;
//     scanf("%d",&num_two);
//     int i;
//     for(i=0;i<30;i++){
//         int a=num_two*i;
//         int b=a%num==0;
//         if(a&&b!=0){
//             printf("%d\n",a);
//         }
//     }
//     return 0;
// }


// 21. ASCII Value of a Character
// Write a program to find and print the ASCII value of a character.
// #include <stdio.h>
// int main() {  
//    char c='a';
//     printf("%d",c);
//    return 0;
// }

// 22. Convert Celsius to Fahrenheit
// Write a program to convert temperature from Celsius to Fahrenheit.
// #include <stdio.h> 
// int main () {
// 	float cel = 19 ;
// 	float fer = (cel * 9/5 ) + 32 ;
// 	printf ("%.1f" , fer) ;
// 	return 0 ;
// }

// 23. Convert Fahrenheit to Celsius
// Write a program to convert temperature from Fahrenheit to Celsius.
// #include <stdio.h>
// int main(){
//     float fahrenheit=55;
//     float celsius;
//     celsius = (fahrenheit - 32) * 5 / 9;
//     printf("%.1f",celsius);
// }

// 24. Sum of First N Natural Numbers
// Write a program to calculate the sum of the first N natural numbers.
// #include <stdio.h>
// int main() {
//     int N;
//     int sum;
//     printf("Enter a positive integer N: ");
//     scanf("%d", &N);
//     sum = N * (N + 1) / 2;
//     printf("%d.\n", N, sum);
//     if (N < 1) {
//         printf("Please enter a positive integer greater than 0.");
//     }
// }   

// 25. Check Vowel or Consonant
// Write a program to check whether a given character is a vowel or consonant.
// #include <stdio.h>
// int main(){
//     char sen = 'c';
//     if(sen=='a' || sen=='e' || sen=='i' || sen=='o' || sen=='u'){
//         printf("it  is a vowel");
//     }
//     else{
//         printf("it is not a vowel");
//     }
//    return 0; 
// }

// 26. Check Alphabet, Digit, or Special Character
// Write a program to check whether a character is an alphabet, digit, or special character.
// #include <stdio.h>
// int  main(){
//     char chara= '$';
//     if((chara>=65 && chara<=90) || (chara>=97 && chara<=122)){
//         printf("it is alphabet");
//     }
//     else if(chara>=48 && chara<=57){
//         printf("digits");
//     }
//     else{
//         printf("it is a special character");
//     }
//     return 0;
// }

// 27. Count the Number of Digits in an Integer
// Write a program to count the number of digits in a given integer.
// #include <stdio.h>
// int main(){
//     int num=1234;
//     char str[num];
//     sprintf(str,"%d",num);
//     int digits=0;
//     for(int i=0;str[i]!='\0';i++){
//         digits=digits+1;
//     }
//     printf("%d",digits);
//     return 0;
// }

// 28. Reverse a String
// Write a program to reverse a given string.
// #include <stdio.h>
// int main(){
//     char str[]="krutagya";
//     for(int i=(strlen(str)-1);i>=0;i--){
//         printf("%c",str[i]);
//     }
//     return 0;
// }

// 29. Check the Alphabetic Order of Two Strings
// Write a program to check whether two strings are in alphabetic order.
// #include <stdio.h> 
// #include <string.h>
// int main() {
// char str[] = "Dhruvil" ;
// char str1[] = "hello" ;
// int i ;
// int num = 0 ;
// for (i = 0 ; i < (strlen(str)-1) ; i++ ) {
// 	if (str[i]<str[i+1]) {
// 		num = num ;
// 	}
// 	else {
// 		num ++ ;
// 	}
// }
// if (num > 0) {
//    printf ("Not in a Alphabetic Order \n") ;
// }
// else {
//    printf ("In a Alphabetic Order \n") ;
// }
// int j ;
// int num1 ;
// for (j = 0 ; j < (strlen(str1)-1) ; j++ ) {
// 	if (str1[j] < str1[j+1]) {
// 		num1 = num1 ;
// 	}
// 	else {
// 		num1 ++ ;
// 	}
// }
// if (num1 > 0) {
//    printf ("Not in a Alphabetic Order \n") ;
// }
// else {
//    printf ("In a Alphabetic Order \n") ;
// }
// return 0 ;
// }

// 30. Calculate the Power of a Number
// Write a program to calculate the power of a number using a loop.
// #include <stdio.h>
// int main () {
// 	int num ;
// 	printf ("Enter the Number : ");
// 	scanf ("%d" , &num) ;
// 	int power ;
// 	printf ("Enter the Power : ") ;
// 	scanf ("%d" , &power) ;
// 	int valuePower = 1 ;
// 	int i ;
// 	for (i = 1 ; i <= power ; i++) {
// 		valuePower = valuePower*num;
// 	}
// 	printf ("%d" , valuePower) ;
// 	return 0 ;
// }


// 31. Print All Prime Numbers Between Two Numbers
// Write a program to print all prime numbers between two given numbers.
// #include <stdio.h>
// int main () {
// 	int num1 = 10 ;
// 	int num2 = 29 ;
// 	int i ;
// 	int num = 0 ;
// 	for ((i = num1+1) ; i < num2 ; i++) {
// 		num = 0 ;
// 		int j ;
// 		for (j = 2 ; j < i ; j++ ) {
// 			if (i%j == 0) {
// 				num = num + 1 ;
// 			}
// 			else {
// 				num = num ;
// 			}
// 		}if (num == 0) {
// 				printf ("%d \n" , i) ;
// 			}
// 	}
// 	return 0 ;
// }

// 32. Check Armstrong Number
// Write a program to check whether a given number is an Armstrong number.
// #include <stdio.h>
// int main () {
// 	int num = 153 ;
// 	int num1 = 1 ;
// 	int sum = 0 ;
// 	char str[10] ; 
// 	sprintf (str , "%d" , num);
// 	int i ;
// 	for (i = 0 ; i < strlen(str) ; i++ ) {
// 		int j ;
// 		num1 = 1 ;
// 		for (j = 1 ; j <= strlen(str) ; j++ ) {
// 			num1 = str[i] * num1 ;
// 		}
// 		sum = sum + num1 ;
// 	}
// 	if (sum == num) {
// 		printf ("It is a Armstrong Number") ;
// 	}
// 	else {
// 		printf ("It is not a Armstrog Number") ;
// 	}
// 	return 0 ;
// }

// 33. Calculate the Average of Numbers in an Array
// Write a program to calculate the average of all the numbers in an array.
// #include <stdio.h>
// int main(){
//    int arr[7]={1,2,3,4,5,6,7};
//  int len=sizeof(arr)/sizeof(arr[0]);
//  int sum=0;
//    for(int i=0;i<len;i++){
//        sum=sum+arr[i];
//    }
//    int average=sum/len;
//    printf("%d",average);
//    return 0;
// }

// 34. Find the Second Largest Number in an Array
// Write a program to find the second-largest number in an array.
// int main() {
//     int arr[] = {12, 35, 1, 10, 34, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int largest = arr[0];
//     int second_largest = -1;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > second_largest && arr[i] < largest) {
//             second_largest = arr[i];
//         }
//     }
//     if (second_largest == -1) {
//         printf("There is no second largest element.\n");
//     } else {
//         printf("The second largest element is %d.\n", second_largest);
//     }
//     return 0;
// }

// 35. Check If a Number is a Perfect Square
// Write a program to check if a given number is a perfect square. A perfect square is an integer that is the square of an integer. For example, 9 is a perfect square since it equals 3² and can be written as 3 × 3.
// #include <stdio.h>
// #include <math.h>
// int main(){
//    int square=81;
//    int a=sqrt(square);
//    if(a*a==square){
//       printf("it is a perfect square");
//  }
//    else{
//        printf("it is not a perfect square");
//     }
// }
