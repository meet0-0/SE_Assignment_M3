/*Name : Meet Patel*/

/*1. WAP to print 972 to 897 using for loop*/

#include <stdio.h>
int main()
{
    int i;
    for(i=972;i>=897;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}

/*2. WAP to accept 5 numbers from user and display all numbers*/

#include <stdio.h>

int main ()
{
    int i;
    int num[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include <stdio.h>

int main ()
{
    int i;
    int num[10];
    int even=0,odd=0,sum_even=0,sum_odd=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            even++;
            sum_even+=num[i];
        }
        else
        {
            odd++;
            sum_odd+=num[i];
        }
    }
    printf("Even numbers are : %d\n",even);
    printf("Odd numbers are : %d\n",odd);
    printf("Sum of even numbers : %d\n",sum_even);
    printf("Sum of odd numbers : %d\n",sum_odd);
    return 0;
}

/*4. WAP to print table up to given numbers*/

#include <stdio.h>

int main ()
{
    int i,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}

/*5. WAP to print factorial of given number*/

#include <stdio.h>

int main ()
{
    int i,fact,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    fact=1;
    for(i=1;i<=num;i++)
    {
        fact*=i;
    }
    return 0;
}

/*6. WAP to print Fibonacci series up to given numbers*/

#include <stdio.h>

int main() 
{
    int n, a = 0, b = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) 
    {
        printf("%d, ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
    return 0;
}

/*7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746*/

#include <stdio.h>

int main ()
{
    int num, rev=0, rem;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse of the number is : %d",rev);
    return 0;
}

/*8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)*/

#include <stdio.h>

int main ()
{
    int num, rem, max = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        if (rem > max)
        {
            max = rem;
        }
        num = num / 10;
    }
    printf("Max number is : %d", max);
    return 0;
}

/*9. Write a program make a summation of given number (E.g., 1523 Ans: 11)*/

#include<stdio.h>

int main ()
{
    int num, sum = 0, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of the number is : %d", sum);
    return 0;
}

/*10.Write a program you have to make a summation of first and last Digit. (E.g.1234 Ans: 5)*/

#include<stdio.h>

int main ()
{
    int num, sum = 0, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of the number is : %d", sum);
    return 0;
}

/*11. Accept 5 names from user at run time.*/

#include<stdio.h>

int main ()
{
    int name;
    for (int i = 0; i <=5; i++)
    {
        printf("Enter name for person %d: ", i);
        scanf("%d", &name);
    }
    printf ("\n");
    return 0;
}

/*12. Program of Armstrong Number in C Using For Loop & While Loop*/

#include <stdio.h>

int main ()
{

}//doubt

/*13. Calculate the Factorial of a Given Number using while loop*/  

#include <stdio.h>

int main ()
{
    int num, fact = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        fact = fact * num;
        num = num - 1;
    }
    printf("Factorial of the number is : %d", fact);
    return 0;
}

/*14. Accept 5 numbers from user and find those numbers factorials*/

#include <stdio.h>

int main ()
{
    int num, fact = 1;
    for (int i = 1; i <=5; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%d", &num);
    }
    for (int i = 1; i <=5; i++)
    {
        while (num != 0)
        {
            printf("\nFactorial of the numbers : %d", fact);
            fact = fact * num;
            num = num - 1;
        }
    }
    return 0;
}

/*15.Calculate sum of 10 numbers using of while loop*/

#include <stdio.h>

int main ()
{
    int n, sum;
    for (int i = 1; i<=10; i++)
    {   
        printf("Enter the number %d: ", i);
        scanf("%d", &n);
    }
    sum = 0;
    while (n != 0)
    {
        sum = sum + n;
    }
    printf ("Sum = %d", sum);
}

/*16.Calculate the Sum of Natural Numbers Using the While Loop*/

#include <stdio.h>

int main ()
{
    int n, sum;
    printf("Enter the number: ");
    scanf("%d", &n);
    sum = 0;
    while (n != 0)
    {
        sum = sum + n;
    }
    printf ("Sum: %d", sum);
    return 0;
}

/*Calculate 5 numbers from user and calculate number of even and odd using of while loop*/

#include <stdio.h>

int main ()
{
    int n, en, on;
    for (int i = 0; i <=4; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &n);
    }
    en = 0;
    on = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            en = en + 1;
        }
        else
        {
            on = on + 1;
        }
    }
    printf ("Even: %d", en);
    printf ("Odd: %d", on);
    return 0;
}

/*18.Write a C Program to Print the Multiplication Table of N*/

#include <stdio.h>

int main ()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}

/*19. Patterns:
1)
1
10
101
1010
10101
*/

#include <stdio.h>

int main() 
{
    int num = 1;

    for (int i = 1; i <= 5; i++) 
    {
        printf("%d\n", num);
        num = num * 10 + 1;
    }
    return 0;
}


/*
A
BC
DEF
GHIJ
KLMNO*/ 

#include <stdio.h>

int main ()
{
    char ch = 'A';
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch = ch + 1;
        }
        printf("\n");
    }
    return 0;
}

/*
     *
    ***
   *****
  *******
 *********
*/

#include <stdio.h>

int main() 
{
    int n = 5;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
*
**
***
****
*****
******
*****
****
***
**
*
*/
#include <stdio.h>

int main() 
{
    int n = 6;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

int main ()
{
    int num = 1;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
    return 0;
}

/*
A
A B
A B C
A B C D
A B C D E
*/

#include <stdio.h>

int main() 
{
    int i, j;
    char alphabet = 'A';

    for (i = 1; i <= 5; i++) 
    {
        alphabet = 'A';
        for (j = 1; j <= i; j++) 
        {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }
    return 0;
}

/*
1   2  3  4  5  6  7  8  9 10
36 37 38 39 40 41 42 43 44 11
35 64 65 66 67 68 69 70 45 12
34 63 84 85 86 87 88 71 46 13
33 62 83 96 97 98 89 72 47 14
32 61 82 95 100 99 90 73 48 15
31 60 81 94 93 92 91 74 49 16
30 59 80 79 78 77 76 75 50 17
29 58 57 56 55 54 53 52 51 18
28 27 26 25 24 23 22 21 20 19
*/
//doubt
#include <stdio.h>

int main ()
{

}
//

/*20. WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50*/

#include <stdio.h>

int main() 
{
    int i, j;
    for (i = 0; i < 5; i++) 
    {
        for (j = i * 10 + 1; j <= (i + 1) * 10; j++) 
        {
            printf("%02d ", j);
        }
        printf("\n");
    }
    return 0;
}

/*22. Accept 3 numbers from user using while loop and check each numbers
palindrome*/

#include <stdio.h>

int main ()
{
    int i = 0, num, temp, rev = 0, rem;
    while (i < 3)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        temp = num;
        rev = 0;
        while (num > 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if (temp == rev)
            printf("%d is a palindrome number.\n", temp);
        else
            printf("%d is not a palindrome number.\n", temp);
        i++;
    }
    return 0;
}

/*23. C Program to Reverse a Number Using FOR Loop*/

#include <stdio.h>

int main ()
{
    int i = 0, num, temp, rev = 0, rem;
    while (i < 3)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        temp = num;
        rev = 0;
        for (i = 0; num > 0; i++)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if (temp == rev)
        printf("%d is a palindrome number.\n", temp);
        else
        printf("%d is not a palindrome number.\n", temp);
        i++;
    }
    return 0;
}

//Series Program//
/*24. 1 + 2 + 3 + 4 + 5 + ... + n*/

#include <stdio.h>

int main ()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    sum += i;
    printf("Sum of the series = %d\n", sum);
    return 0;
}

/*25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)*/

#include <stdio.h>

int main ()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    sum += i*i;
    printf("Sum of the series = %d\n", sum);
    return 0;
}

/*26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)*/

#include <stdio.h>

int main ()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    sum += i+1;
    printf("Sum of the series = %d\n", sum);
    return 0;
}
/*27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n*/

#include <stdio.h>

int main() 
{
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        double term = (double)i / (i + 1);
        if (i % 2 == 0) 
        {
            sum -= term; 
        } 
        else 
        {
            sum += term;
        }
    }
    printf("The sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}

/*28. 1 2 3 6 9 18 27 54*/
//Doubt