
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