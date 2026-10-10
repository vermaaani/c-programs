/*#include <stdio.h>
int main()
{
    printf("hello");
    return 0;
} */


/*#include <stdio.h>
int main(){
    printf("hello world \n");
    printf("hello work ");
    return 0;

}
*/
/*#include <stdio.h>
int main(){
    int i=10;
    float j=10.5;
    char k = 'a';
    printf("%d, %f,%c ", i,j,k);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int age = 18;
    printf("age is %d", age);
    return 0;

}*/
/*#include <stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    printf("age is %d",age);/first output is because i forgot to write age here/
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int s;
    printf("enter side:");
    scanf("%d",&s);
    printf("area of sq is %d", s*s);
    return 0;
}*/
/*#include <stdio.h>
#include <math.h>
int main(){
    int b ,c ;
    b = c = 2;
    int power = pow(b,c);
    printf("power is %d", power);
    return 0;

}*/
//MODULAR OPERATOR % ONLY WORKS ON INTEGER
/*#include <stdio.h>
int main(){
    int a=4 , b=8;
    float c=2.5 , d=4.5;
    printf("%d \n", a+b);
    printf("%f \n", c*a);
    printf("%f \n", c+d);
    return 0;

}*/
// for changing data type
/*#include <stdio.h>
int main(){
    int a = (int) 1.99999;
    printf("%d", a);
    return 0;
}*/
//false and true statements && and || or
/*#include <stdio.h>
int main(){
    int issunday = 0 ;
    int issnowing =1 ;
    printf("%d", issunday || issnowing);
    return 0;

}*/
/*#include <stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d", &age);
    if( age > 18){
        printf("adult \n");

    }
    else {
        printf("not adult");
// curly braces ifelse onlu necessary when multiple printf
    }
    return 0;
}*/
// tenary use
#include <stdio.h>
int main(){
    int a;
    printf("enter age");
    scanf("%d", &a);
    a>=18 ? printf("adult") : printf("not adult");
    return 0;
}//only one printf allow use semi colon at the end only or it will stop mid