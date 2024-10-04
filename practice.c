
// ####Function
1)
int num = 10;
void name() {
  printf("%d\n", num);
}

int main() {
int num=20;
printf("%d\n",num);
name();
}

2)
int num = 10;
void name() {
int num=30;
  // We can use x here
  printf("%d\n", num);
}

int main() {
int num=20;
printf("%d\n",num);
name();
}

note1-int main me agar num ki value hai or print vaha hi karai hai to phelle vo lacal ki valuve lega or sab agar garreb hai to hi global ki value mani jayegi
note2-agar num ko hamne int se declare keya hai global me tofir kahi bhi local me ham dusre datatype se declare nahikar sakte 

void one() {
  printf("one");
}
int two() {
printf("two");
return 3.1;
}
float three() {
printf("three");
return 3.1;
}
char four() {
printf("foue");
return 'c';
}


int main() {
one();
two();
three();
four();
}

note1-as per datatype hamko return ke age vali value change karni hai
note2-jo return me value likh rahe hai agar vo wale datatype me convert ho sakta hai to convert hoke ans dega but string kesime convert nahi hhota to vo nahi accpect krta

// ####struture
#include <stdio.h>
struct user_data{
    int one;
    float two;
    char three;
};
int main(){
    struct user_data d1;
    d1.one=1;
    printf("%d",d1.one);
    return 0;
}


note1-different types of data types ki value ko grp kar sakte ho alag alag instant se create kar sakte hai and ham . ki madat se call kar sakte hai

#Enums 

enum Level {
  LOW = 5,
  MEDIUM,
  HIGH
};
  
int main() {
  enum Level myVar = MEDIUM;
  printf("%d", myVar);
  
  return 0;
}

note1-mostly constant store karne ke lleye use karte hai jaha by default value 0 thi agae series bdegi ya first innput ke  baad


file*var :-to create a file
var=fopen("path","r"); :- to open that file
char str[200]; :-read kara huva kisi variable me store karne ke leye
f(gets,size(200),var); :- it will read and store in var file
fclose() :-file close thai jase
a=append
w=write
r=read
& :-adress madese
* :- pointer ye file location me save hogi




#include <stdio.h>
int main(){
    // double first=5555.55; "%lf"
    // int secound=5;  "%d"
    // float third=5.5;  "%f"
    // long long four=5555555.5;  "%lf"
    // printf("%d",sizeof(first));
    // printf("%d",sizeof(secound));
    // printf("%d",sizeof(third));
    // printf("%d",sizeof(four));
    // unsigned int num=20;
    // printf("%u",num);
}

note1- int-4(6-7 digits) double-8(15 digits) long-8(15 digits) float-4(6-7 digits) 
note2- un-signed - 0 se + value store kar sakte hai(0 to 256 digits ) 
       signed - - se + value store kar sakte hai(-128 to 127 digits)
note3-%i for-    
      %F for-
note4-rightshift leftshift & | ^
note5-ternaray operater , short hand if
 
function add(int num){
  static int total;
  total=total+num;
  returnn total;
}
int main(){
  add(3)
  add(4)
  add(5)
}
note6-static int total   static likhne ke baad total ki valu vo hi rahegi
before static 0+3
              3+4
              7+5
after static 0+3
             0+4
             0+5

1)strcture:
example:- strct name{
int num;  4bits
float two; 8 bits
char c;  1bits
total-: 4+8+1=13bits


2)union:
example:- union name{
int num;  4bits
float two; 8 bits
char c;  1bits
total-: max bits hoga vo total storage hogi means 8 bits
