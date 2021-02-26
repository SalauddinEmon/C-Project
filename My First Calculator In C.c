// Calculator example using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define KEY "Enter the calculator Operation you want to do"

void add();
void subtraction();
void multiplication();
void division();
void display();

int main()
{
    int X=1;
    char Calc_oprn;


    display();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': add();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;


            case 'd': display();
                      break;


            case 'q': exit(0);
                      break;

            case 'c': system("cls");
                      display();
                      break;

            default : system("cls");

    printf("\n________ Wrong option ________\n\n");

                      display();
        }
    }
}


void display()
{

    printf("\n                       Welcome to Mini Calculator");
    printf("\n                     ------------------------------ \n\n");

    printf("              1. q => Quit.\n ");
    printf("             2. d => New Display.\n ");
    printf("             3. c => Clear Display.\n\n ");
    printf("             # Display available options : \n\n");

    printf("                    * Enter + => Addition \n");
    printf("                    * Enter - => Subtraction \n");
    printf("                    * Enter * => Multiplication \n");
    printf("                    * Enter / => Division");
     printf("\n          ----------------------------------------------------- \n");

}

void add()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a, b;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    printf("\n%d - %d = %d\n", a, b, a - b);
}

void multiplication()
{
    int a, b;
    printf("\nEnter num1 : ");
    scanf("%d", &a);
    printf("Enter num2 : ");
    scanf("%d", &b);
   printf("\n%d * %d = %d\n", a, b, a * b);
}

void division()
{
    int a, b;
    double d;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers = %.3lf\n",d);
}

