//STUDENT NAME: MEET PATEL


/*1. Display This Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address*/

#include<stdio.h>

int main ()
{
    printf ("Name: Meet Patel");
    printf ("Birth date: 27th October, 2005");
    printf ("Age: 18");
    printf ("Address: A-201, Shantiniketan Flats, Opp. HBK School.");
    return 0;
}

/*2. Write a program to make Simple calculator */

#include <stdio.h>

int main ()
{
    int a, b, choice;

    printf ("Enter value of 'a': ");
    scanf ("%d", &a);
    printf ("Enter value of 'b': ");
    scanf ("%d", &b);

    printf ("1) Addition.");
    printf ("2) Subtraction.");
    printf ("3) Multiplication.");
    printf ("4) Division.");
    printf ("5) Modulus.");

    printf ("Enter your choice: ");
    scanf ("%d", &choice);
    switch (choice)
    {
    case 1: printf ("Sum: %d", a+b);
    case 2: printf ("Difference: %d",a-b);
    case 3: printf ("Product: %d",a*b);
    case 4: printf ("Quotient: %d",a/b);
    case 5: printf ("Modulus: %d",a%b);
        break;
    
    default: printf("Wrong choice. Try again.");
        break;
    }
}

/*3. WAP to Find Area And Circumference of Circle*/

#include <stdio.h>

int main ()
{
    int r, a, c;

    printf("Enter Radius of circle: ");
    scanf ("%d", &r);

    a = 3.14*r*r;
    c = 2*3.14*r;

    printf ("Area of circle: %d", a);
    printf ("Circumference of circle: %d", c);
    return 0;
}

/*4. Find Area of Square formula : a = a^2*/

#include <stdio.h>

int main ()
{
    int i, a;
    printf("Enter side of square: ");
    scanf ("%d", &i);
    a = i * i;
    printf("Area of square: %d", a);
    return 0;
}

/*5. Find Area of Cube formula : a = 6a^2*/

#include <stdio.h>

int main ()
{
    int i, a;
    printf("Enter side of square: ");
    scanf ("%d", &i);
    a = 6*i*i;
    printf("Area of cube: %d", a);
    return 0;
}

/*6. Find area of Triangle Formula : A = 1/2 × b × h*/

#include <stdio.h>

int main ()
{
    int b, h, a;
    printf("Enter base of triangle: ");
    scanf ("%d", &b);
    printf("Enter height of triangle: ");
    scanf ("%d", &h);
    a = 0.5*b*h;
    printf("Area of triangle: %d", a);
    return 0;
}

/*7. Find area of Rectangle Formula : A=w*l*/

#include <stdio.h>

int main ()
{
    int l, b, a;
    printf("Enter length of rectangle: ");
    scanf ("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf ("%d", &b);
    a = l*b;
    printf("Area of rectangle: %d", a);
    return 0;
}

/*8. Find perimeter of Rectangle formula : C = 2(l+b)*/

#include <stdio.h>

int main ()
{
    int l, b, p;
    printf("Enter length of rectangle: ");
    scanf ("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf ("%d", &b);
    p = 2*(l+b);
    printf("Perimeter of rectangle: %d", p);
    return 0;
}
/*9. Find imeter of Triangle formula : triangle = a + b + c*/

#include <stdio.h>

int main ()
{
    int c, b, a, p;
    printf("Enter 1st side of triangle: ");
    scanf ("%d", &a);
    printf("Enter 2nd side of triangle: ");
    scanf ("%d", &b);
    printf("Enter 3rd side of triangle: ");
    scanf ("%d", &c);
    p = a + b + c;
    printf("Perimeter of triangle: %d", p);
    return 0;
}
/*10.find the area of a rectangular prism formula : A=2(wl+hl+hw)*/

#include <stdio.h>

int main ()
{
    int h, b, l, a;
    printf("Enter length of rectangle: ");
    scanf ("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf ("%d", &b);
    printf("Enter height of rectangle: ");
    scanf ("%d", &h);
    a = 2*(l*b + b*h + h*l);
    printf("Perimeter of triangle: %d", a);
    return 0;
}
/*11.Find circumference of square formula : C = 4 * a*/

#include <stdio.h>

int main ()
{
    int i, c;
    printf("Enter side of square: ");
    scanf ("%d", &i);
    c = 4*i;
    printf("Area of square: %d", c);
    return 0;
}

/*12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include<stdio.h>

int main ()
{
    int i;
    printf("Enter number of students: ");
    scanf("%d", &i);
    printf("Number of apples required: %d", 5*i);
    return 0;
}
/*13.Find character value from ascii*/

#include <stdio.h>

int main() 
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("ASCII value: %d\n",c);
    return 0;
}
/*14.Find ascii value of given number*/

#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d\n", ch, (int)ch);
    return 0;
}

/*15.Convert school’s name in abbreviated form*/

#include <stdio.h>

int main() 
{
    char name[50];
    char abbreviation[10];
    int i = 0, j = 0;

    printf("Enter the school's name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0') 
    {
        if (i == 0 || (name[i-1] == ' ' && name[i] != ' ')) 
        {
            abbreviation[j++] = (name[i] >= 'a' && name[i] <= 'z') ? name[i] - 'a' + 'A' : name[i];
        }
        i++;
    }
    abbreviation[j] = '\0';
    printf("Abbreviation: %s\n", abbreviation);
    return 0;
}

/*16.Convert country’s name in abbreviated form*/
//doubt

/*Calculate person’s insurance premium based on salary*/

#include<stdio.h>

void premium()
{
    float salary, premium;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    if(salary <= 10000)
    {
        premium = salary * 0.05;
    }
    else if(salary > 10000 && salary <= 20000)
    {
        premium = salary * 0.07;
    }
    else if(salary > 20000 && salary <= 50000)
    {
        premium = salary * 0.10;
    }
    printf("Insurance Premium: %.2f\n", premium);
}

int main()
{
    premium();
    return 0;
}

/*18.Calculate person’s Annual salary*/

#include <stdio.h>

int main()
{
    float salary, total;
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);
    total = salary * 12;
    printf("Annual Salary: %.2f\n", total);
    return 0;
}

/*19. Calculate compound interest*/

#include <stdio.h>

int main ()
{
    float principal, rate, time, ci, amount;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period(in months): ");
    scanf("%f", &time);
    amount = principal * (1 + rate/100);
    ci = amount - principal;
    printf("Compound Interest: %.2f\n", ci);
    return 0;
}

/*20.Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/

#include<stdio.h>

int main()
{
    float salary, prem, loan, total;
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);
    loan = salary*0.1;
    prem = salary*0.1;
    total = salary - loan - prem;
    printf("Annual Salary: %.2f\n", total);
    return 0;
}

/*21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/

#include <stdio.h>// with 3rd variable

int main ()
{
    int a, b, temp;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf ("Enter 2nd number: ");
    scanf ("%d", &b);
    temp = a;
    a = b;
    b = temp;

    printf ("Number after swap: a = %d and b = %d", a, b);
    return 0;
}

#include <stdio.h>//without 3rd variable

int main ()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf ("%d", &a);
    printf ("Enter 2nd number: ");
    scanf ("%d", &b);
    
    a = a + b;
    b = a - b; 
    a = a - b; 
    
    printf("After swapping: a = %d and b = %d", a, b); 
    return 0;
}

/*22.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

#include <stdio.h>

int main ()
{
    int i, p, r, t;
    float amount, ci;
    printf ("Enter principle amount: ");
    scanf ("%d", &p);
    printf ("Enter rate of interest: ");
    scanf ("%d", &r);
    printf ("Enter time period: ");
    scanf ("%d", &t);
    amount = p*(1+(r/100))*t;
    ci = amount - p;
    printf ("Compound Interest: %d", ci);
}

/*WAP to calculate swap 2 numbers with using of multiplication and division.*/

#include <stdio.h>

int main() 
{
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    a = a * b;
    b = a / b;
    a = a / b;

    printf("Swapped numbers: a = %d, b = %d\n", a, b);
    
    return 0;
}

/*24.Accept 5 employees name and salary and count average and total salary */

#include <stdio.h>

int main ()
{
    char name [5];
    float salary [5];
    float total, average;
    total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf ("Enter employee name: ");
        scanf ("%s", &name[i]);
        printf ("Enter salary: ");
        scanf ("%f", &salary[i]);
        total = total + salary[i];
    }
    average = total / 5;
    printf ("Total salary: %f\n", total);
    printf ("Average salary: %f\n", average);
    return 0;
}

/*25.Accept 5 expense from user and find average of expense*/

#include <stdio.h>
int main()
{
    float expense[5];
    float total, average;
    total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter expense %d: ", i+1);
        scanf("%f", &expense[i]);
        total = total + expense[i];
    }
    average = total / 5;
    printf("Total expense: %f\n", total);
    printf("Average expense: %f\n", average);
    return 0;
}

/*26.Convert temperature Fahrenheit to Celsius*/

#include <stdio.h>

int main ()
{
    int f, c;
    printf ("Enter temperature in Fahrenheit: ");
    scanf ("%d", &f);

    c = (f - 32) * 5 / 9;
    printf ("Temperature in Celsius: %d\n", c);
    return 0;
}

/*27.Convert days into months*/

#include <stdio.h>

int main () 
{
    int days, m30, m29, m31;
    
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    if (days % 30 == 0) 
    {
        m30 = days / 30;
        printf("Number of months (30 days each): %d\n", m30);
    } 
    else if (days % 29 == 0) 
    {
        m29 = days / 29;
        printf("Number of months (29 days each): %d\n", m29);
    } 
    else if (days % 31 == 0) 
    {
        m31 = days / 31;
        printf("Number of months (31 days each): %d\n", m31);
    } 
    else 
    {
        printf("The number of days does not fit perfectly into a month of 29, 30, or 31 days.\n");
    }
    return 0;
}

/*28.Convert years into days and months*/

#include <stdio.h>

int main() {
    int years, days, months;

    printf("Enter number of years: ");
    scanf("%d", &years);

    days = years * 365;
    months = years * 12;

    printf("%d years is equivalent to %d days and %d months.\n", years, days, months);

    return 0;
}

/*29.Convert minutes into seconds and hours*/

#include <stdio.h>

int main ()
{
    int min, sec, hr;
    printf ("Enter number of minutes: ");
    scanf ("%d", &min);

    sec = min*60;
    hr = min/60;

    printf (" %d minutes = %d hrs and %d secs", min, hr, sec);
    return 0;
}

/*30. WAP to convert years into days and days into years*/

#include <stdio.h>

int main ()
{
    int choice, days, years;
    printf ("Enter your choice: \n 1. Convert years into days \n 2. Convert days into years \n");
    scanf ("%d", &choice);
    switch (choice)
    {
        case 1: printf ("Enter number of years: ");
                scanf ("%d", &years);
                days = years*365;
                printf (" %d years = %d days", years, days);
                break;
        case 2:
        printf ("Enter number of days: ");
        scanf ("%d", &days);
        years = days/365;
        printf (" %d days = %d years", days, years);
        break;
    }
    return 0;
}

/*31. Convert kilometers into meters*/

#include <stdio.h>

int main ()
{
    float km, m;
    printf ("Enter number of kilometers: ");
    scanf ("%f", &km);
    m = km*1000;
    printf (" %f kilometers = %f meters", km, m);
    return 0;
}

/*32. Accept 2 numbers and find out its sum check it size*/

#include <stdio.h>

int main ()
{
    int a, b, sum;
    printf ("Enter 2 numbers: ");
    scanf ("%d %d", &a, &b);
    sum = a+b;
    if (sum > 100)
    printf ("Sum is greater than 100");
    else
    printf ("Sum is less than 100");
    return 0;
}

/*33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)*/

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("First three powers of %d are:\n", n);
    printf("%d^1 = %d\n", n, n);
    printf("%d^2 = %d\n", n, n * n);
    printf("%d^3 = %d\n", n, n * n * n);

    return 0;
}
