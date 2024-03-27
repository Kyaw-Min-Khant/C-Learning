// #include <stdio.h>
// int main(){

//   int age=20;
//   char grade='A';
//   char name[]="Kyaw";
//   float gpa=2.3;
//   printf("My name is %s \n",name);
//   printf("My age is %d \n",age);
//   printf("My grade is %c \n",grade);
//   printf("My gpa is %f \n",gpa);
//   return 0;
// }
//format Specifiers
// #include <stdio.h>
// int main(){
// float item1=1.45;
// float item2=2.50;
// float item3=4.00;

// printf("Apple is $%-8.2f \n",item1);
// printf("Orange is $%8.2f \n",item2);
// printf("Banana is $%-8.2f \n",item3);
// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     int age;
//     char name[25];
//     printf("What's your name\n");
//     fgets(name,25,stdin);
//     name[strlen(name)-1]="\0";
//     printf("How old are you?\n");
//     scanf("%d",&age);
//     printf("Your name is %s,How are you?\n",name);
//     printf("You are %d years old",age);
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main(){
//     double A=sqrt(9);
//     double B=pow(2,5);
//     int C=round(3.45);
//     int D=ceil(3.25);
//     int E=floor(3.99);
//     double F=fabs(100);
//     double G=log(5);
//     double H=sin(45);
//     double I=tan(45);
//     double J=cos(45);
//     printf("%lf\n",G);
//     printf("%lf\n",H);
//     printf("%lf\n",I);
//     printf("%lf\n",J);

//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main(){
    const double PI=3.14154;
    double radius;
    double circumference;
    double area;
    printf("Enter your radius : ");
    scanf("%lf", &radius);
    circumference=2 * PI* radius;

    printf("\n Your circumference is %lf",circumference);
}