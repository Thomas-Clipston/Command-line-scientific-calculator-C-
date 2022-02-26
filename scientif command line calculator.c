#include <stdio.h>
#include <math.h>
#include <float.h>
#include <ctype.h>
#include <stdlib.h>

int main (void){
char num1[17];
char num2[17];
double num11 = 0;
double num22 = 0;
double sum;
char sighn;
char sighn2;

char check;
char val[17];
double a = 0;
double b = 0;
double c = 0;
double d = 0;
double e = 0;
double val2;

printf("Hello, please choose one of the following options. B(Binary operations), U (Unary operations), A(Advanced), V(varible), X(Exit)\n");
scanf(" %c", &sighn);
do
{
if (sighn == 'X' || sighn == 'x'){return(0);}
if(sighn == 'B' || sighn == 'b')
{
printf("Please enter the first number you want to apply an operation to.\n");
scanf(" %s", num1);
while(isalpha(num1[0])){
    printf("ERROR, please enter the first number you want to apply an operation to.\n");
    scanf(" %s", num1);}
num11 = atof(num1);

sighn2 = ' ';
while(sighn2 != '+'&& sighn2 != '-'&& sighn2 != '/'&& sighn2 != '*'&& sighn2 != '^'){
printf("please, choose one of the following operations. *(mutiplication), /(devision), +(addition), -(subtraction), ^(exponet)\n");
scanf(" %c", &sighn2);}

printf("Please enter the second number you want to apply an operation to.\n");
scanf(" %s", num2);
while(isalpha(num2[0])){
    printf("ERROR, please enter the second number you want to apply an operation to.\n");
    scanf(" %s", num2);}
num22 = atof(num2);
if(sighn2 == '/')
{ 
while (num22 == 0)
{
printf("Please enter the second number you want to apply an operation to.\n");
scanf(" %lf", &num22);
}}
if (sighn2 == '^')
{ sum = pow(num11,num22);}
else if (sighn2 == '-')
{ sum = num11-num22;}
else if (sighn2 == '+')
{ sum = num11+num22;}
else if (sighn2 == '*')
{ sum = num11*num22;}
else if (sighn2 == '/')
{ sum = num11/num22;}
if((sum >= 1000000000000 || sum <= -1000000000000) )
{printf("Overflow/underflow\n");}
else{printf("= %.2f\n", sum);}


}


if (sighn == 'U' || sighn == 'u'){
sighn2 = ' ';
while(sighn2 != 'S'&& sighn2 != 'L'&& sighn2 != 'E'&& sighn2 != 'C'&& sighn2 != 'F'){
printf("S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) ,F (for floor)\n");
scanf(" %c", &sighn2);}

if (sighn2 == 'S')
{ num11 = -1;
while (num11 < 0){
printf("Please enter a number greater then zero\n");
scanf(" %s", num1);
while(isalpha(num1[0])){scanf(" %s", num1);}
num11 = atof(num1);
}
sum = sqrt(num11);}

else if (sighn2 == 'L')
{num11 = -1;
while (num11 <= 0){
printf("Please enter a number greater then zero\n");
scanf(" %s", num1);
while(isalpha(num1[0])){scanf(" %s", num1);}
num11 = atof(num1);
}
 sum = log(num11);
}
else if (sighn2 == 'E')
{ 
   printf("Please enter a number greater then zero\n");
scanf(" %s", num1);
while(isalpha(num1[0])){scanf(" %s", num1);}
num11 = atof(num1);
    sum = exp(num11);
}

else if (sighn2 == 'F')
{ printf("Please enter a number you want to find the floor of\n");
scanf(" %s", num1);
while(isalpha(num1[0])){scanf(" %s", num1);}
num11 = atof(num1);
sum = floor (num11);}

else if (sighn2 == 'C')
{ printf("Please enter a number you want to find the ceiling of\n");
scanf(" %s", num1);
while(isalpha(num1[0])){scanf(" %s", num1);}
num11 = atof(num1);
sum = ceil (num11);}


if((sum >= 1000000000000 || sum <= -1000000000000) )
{printf("Overflow/underflow\n");}
else{printf("= %.2f\n", sum);}
}
//end of Unary operations************************************************************************************


if (sighn == 'V' || sighn == 'v')
{
puts("please enter a varible below from a-e");
scanf(" %c", &check);
while(check != 'a' && check != 'b' && check != 'c' && check != 'd' && check != 'e'){
puts("please enter a varible below from a-e");
scanf(" %c", &check);
}
puts("please enter a value for you varible");
scanf(" %s", val);
while(isalpha(val[0])){
    printf("ERROR, please enter the value of your varible\n");
    scanf(" %s", val);}
val2 = atof(val);

if(check == 'a'){ a = val2;}
if(check == 'b'){ b = val2;}
if(check == 'c'){ c = val2;}
if(check == 'd'){ d = val2;}
if(check == 'e'){ e = val2;}
printf("You set %c to %.2f\n", check, val2);
}
//end of varible declaration************************************************************************************


char sighn3;
if(sighn == 'a' || sighn == 'A'){
while(sighn3 != 'X' && sighn3 != 'x'){

printf("Hello, please choose one of the following options. B(Binary operations), U (Unary operations), X(Exit)\n");
scanf(" %c", &sighn3);

    
if(sighn3 == 'B' || sighn3 == 'b')
{
printf("Please enter the first number you want to apply an operation to.\n");
scanf(" %s", num1);
while(isalpha(num1[0]) && num1[0] != 'a' && num1[0] != 'c' && num1[0] != 'b' &&  num1[0] != 'd' && num1[0] != 'e' ){
    printf("ERROR, please enter the first number you want to apply an operation to.\n");
    scanf(" %s", num1);}
   switch (num1[0])
    {
    case 'a':
        num11 = a;
        break;
    case 'b':
        num11 = b;
        break;
        case 'c':
        num11 = c;
        break;
        case 'd':
        num11 = d;
        break;
        case 'e':
        num11 = e;
        break;
    default:
 num11 = atof(num1);
        break;
    }


sighn2 = ' ';
while(sighn2 != '+'&& sighn2 != '-'&& sighn2 != '/'&& sighn2 != '*'&& sighn2 != '^'){
printf("please, choose one of the following operations. *(mutiplication), /(devision), +(addition), -(subtraction), ^(exponet)\n");
scanf(" %c", &sighn2);}

printf("Please enter the second number you want to apply an operation to.\n");
scanf(" %s", num2);

while(isalpha(num2[0]) && num2[0] != 'a' && num2[0] != 'c' && num2[0] != 'b' &&  num2[0] != 'd' && num2[0] != 'e' ){
    printf("ERROR, please enter the second number you want to apply an operation to.\n");
    scanf(" %s", num2);}
    switch (num2[0])
    {
    case 'a':
        num22 = a;
        break;
    case 'b':
        num22 = b;
        break;
        case 'c':
        num22 = c;
        break;
        case 'd':
        num22 = d;
        break;
        case 'e':
        num22 = e;
        break;
    default:
 num22 = atof(num2);
        break;
    }
if(sighn2 == '/')
{ 
while (num22 == 0)
{
printf("Please enter the second number you want to apply an operation to.\n");
scanf(" %lf", &num22);
}}
if (sighn2 == '^')
{ sum = pow(num11,num22);}
else if (sighn2 == '-')
{ sum = num11-num22;}
else if (sighn2 == '+')
{ sum = num11+num22;}
else if (sighn2 == '*')
{ sum = num11*num22;}
else if (sighn2 == '/')
{ sum = num11/num22;}
if((sum >= 1000000000000 || sum <= -1000000000000) )
{printf("Overflow/underflow\n");}
else{printf("= %.2f\n", sum);}


}


if (sighn3 == 'U' || sighn3 == 'u'){
sighn2 = ' ';
while(sighn2 != 'S'&& sighn2 != 'L'&& sighn2 != 'E'&& sighn2 != 'C'&& sighn2 != 'F'){
printf("S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) ,F (for floor)\n");
scanf(" %c", &sighn2);}

if (sighn2 == 'S')
{ num11 = -1;
while (num11 < 0){
printf("Please enter a number or varible greater then zero\n");
scanf(" %s", num1);
while(isalpha(num1[0]) && num1[0] != 'a' && num1[0] != 'c' && num1[0] != 'b' &&  num1[0] != 'd' && num1[0] != 'e' ){
    printf("ERROR, Please enter a number or varible greater then zero\n");
    scanf(" %s", num1);}
   switch (num1[0])
    {
    case 'a':
        num11 = a;
        break;
    case 'b':
        num11 = b;
        break;
        case 'c':
        num11 = c;
        break;
        case 'd':
        num11 = d;
        break;
        case 'e':
        num11 = e;
        break;
    default:
 num11 = atof(num1);
        break;
    }
sum = sqrt(num11);}}

else if (sighn2 == 'L')
{num11 = -1;
while (num11 <= 0){
printf("Please enter a number or varible greater then zero\n");
scanf(" %s", num1);
while(isalpha(num1[0]) && num1[0] != 'a' && num1[0] != 'c' && num1[0] != 'b' &&  num1[0] != 'd' && num1[0] != 'e' ){
    printf("ERROR, Please enter a number or varible greater then zero\n");
    scanf(" %s", num1);}
   switch (num1[0])
    {
    case 'a':
        num11 = a;
        break;
    case 'b':
        num11 = b;
        break;
        case 'c':
        num11 = c;
        break;
        case 'd':
        num11 = d;
        break;
        case 'e':
        num11 = e;
        break;
    default:
 num11 = atof(num1);
        break;
    }

}
 sum = log(num11);
}
else if (sighn2 == 'E')
{ 
   printf("Please enter a number or varible greater then zero\n");
scanf(" %s", num1);
while(isalpha(num1[0]) && num1[0] != 'a' && num1[0] != 'c' && num1[0] != 'b' &&  num1[0] != 'd' && num1[0] != 'e' ){
    printf("ERROR, Please enter a number or varible greater then zero\n");
    scanf(" %s", num1);}
   switch (num1[0])
    {
    case 'a':
        num11 = a;
        break;
    case 'b':
        num11 = b;
        break;
        case 'c':
        num11 = c;
        break;
        case 'd':
        num11 = d;
        break;
        case 'e':
        num11 = e;
        break;
    default:
 num11 = atof(num1);
        break;
    }

    sum = exp(num11);
}

else if (sighn2 == 'F')
{ printf("Please enter a number or varible you want to find the floor of\n");
scanf(" %s", num1);
while(isalpha(num1[0]) && num1[0] != 'a' && num1[0] != 'c' && num1[0] != 'b' &&  num1[0] != 'd' && num1[0] != 'e' ){
    printf("ERROR, Please enter a number or varible you want to find the floor of\n");
    scanf(" %s", num1);}
   switch (num1[0])
    {
    case 'a':
        num11 = a;
        break;
    case 'b':
        num11 = b;
        break;
        case 'c':
        num11 = c;
        break;
        case 'd':
        num11 = d;
        break;
        case 'e':
        num11 = e;
        break;
    default:
 num11 = atof(num1);
        break;
    }

sum = floor (num11);}

else if (sighn2 == 'C')
{ printf("Please enter a number or varible you want to find the ceiling of\n");
scanf(" %s", num1);
while(isalpha(num1[0]) && num1[0] != 'a' && num1[0] != 'c' && num1[0] != 'b' &&  num1[0] != 'd' && num1[0] != 'e' ){
    printf("Please enter a number or varible you want to find the ceiling of\n");
    scanf(" %s", num1);}
   switch (num1[0])
    {
    case 'a':
        num11 = a;
        break;
    case 'b':
        num11 = b;
        break;
        case 'c':
        num11 = c;
        break;
        case 'd':
        num11 = d;
        break;
        case 'e':
        num11 = e;
        break;
    default:
 num11 = atof(num1);
        break;
    }

sum = ceil (num11);}

if((sum >= 1000000000000 || sum <= -1000000000000) )
{printf("Overflow/underflow\n");}
else{printf("= %.2f\n", sum);}
}
}
}
sighn3 = ' ';


printf("Hello, please choose one of the following options. B(Binary operations), U (Unary operations), A(Advanced), V(varible), X(Exit)\n");
scanf(" %c", &sighn);

}while(sighn != 'X'&& sighn != 'x');//end of main loop



}


