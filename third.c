//switch ko dekh lena abhi skipping v lenghty
// nested if sitn
/*#include <stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d", &num);
    if (num>0){
        printf("POSITIVE \n");
        if(num%2==0){
            printf("even \n");
        }
            else{
                printf("odd \n");
            }
        }  else{
        printf("NEGATIVE \n");

    } return 0;
}*/
/*#include <stdio.h>
int main(){
    int mark;
    printf("enter marks");
    scanf("%d", &mark);
    if (mark<30){
        printf("C");
    
    }
    else if (mark>=30 && mark<70){
        printf("B");
    }
    else if (mark>=70 && mark<90){
        printf("A");
    }
    else{
        printf("A+");
    }  return 0 ;
}*/
//loop control
/*#include <stdio.h>
int main(){
    for(int i=1; i<=5; i=i+1){
        printf("hello \n");
    }return 0;
}*/
/*#include <stdio.h> //increment  //EK BAAR WHILE AND DO WHILE KO DEKH LENA
int main(){
    int i=1;
    printf("%d", i++);
    printf("%d", i);
    printf("%d", ++i);
    printf("%d", i);
}*/
/*#include <stdio.h>
void printhello();//function declaration
int main(){//program execution
    printhello();//function call
    return 0;
}
void printhello(){//function definition
    printf("hello \n");
}*/
/*#include <stdio.h>
void printhello();//function declaration
void printgoodbye();
int main(){//program execution
    printhello();//function call
    printgoodbye();
    return 0;
}
void printhello(){//function definition
    printf("hello \n");
}
void printgoodbye(){
    printf("byeeee");
}*/
/*#include <stdio.h>
#include <math.h>
int main()
{   
    float x1,x2,y1,y2,d;
    printf("enter x1: ");
    scanf("%f",&x1);
    printf("enter x2: ");
    scanf("%f",&x2);
    printf("enter y1: ");
    scanf("%f",&y1);
    printf("enter y2: ");
    scanf("%f",&y2);
    d= (float)(sqrt((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
    printf("the distance is: %f \n",d);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int y;
    printf("enter a year: ");
    scanf("%d",&y);
    if(y%4==0 & y%100!=0 || y%400==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
}*/
#include <stdio.h> 
int main() { 
    int a, b;
     printf("Enter two integers: "); 
     scanf("%d %d", &a, &b);
      printf("Arithmetic:\n"); 
      printf("Addition = %d\n", a + b);
    
      printf("Relational:\n"); 
      printf("a > b = %d\n", a > b); 
      printf("a < b = %d\n", a < b); 
      printf("a == b = %d\n", a == b); 
      printf("Logical:\n"); 
      printf("a && b = %d\n", a && b);
      printf("a || b = %d\n", a || b); 
      printf("!a = %d\n", !a);
    
      printf("Bitwise:\n"); 
      printf("a & b = %d\n", a & b); 
      printf("a | b = %d\n", a | b); 
      printf("a ^ b = %d\n", a ^ b); 
      return 0;
     }