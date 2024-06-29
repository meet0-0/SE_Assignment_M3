/*NAME : MEET PATEL*/
/*CONDITIONAL PROGRAMS*/

/*1. Write a C program to accept two integers and check whether they are equal or not*/

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two integers : ");
    scanf("%d%d",&a,&b);

    if (a==b)
    printf ("The numbers are same");
    else
    printf ("The numbers are not same");
    return 0;
}

/*2. Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/

#include <stdio.h>

int main ()
{
    int m,n;
    printf("Enter an integer : ");
    scanf("%d",&m);
    if (m>0)
    n=1;
    else if (m==0)
    n=0;
    else
    n=-1;
    printf("The value of n is %d",n);
    return 0;
}

/*3. WAP to check if the given year is a leap year or not.*/

#include <stdio.h>

int main ()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if (year%4==0)
    printf("The year is a leap year");
    else
    printf("The year is not a leap year");
    return 0;
}

/*4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/

#include <stdio.h>

int main ()
{
    int a,b;
    char choice;

    printf ("Enter value of a: ");
    scanf ("%d", &a);
    printf ("Enter value of b: ");
    scanf ("%d", &b);

    while (1)
    {
    
    printf ("\n1) Addition");
    printf ("\n2) Subtraction");
    printf ("\n3) Multiplication ");
    printf ("\n4) Division ");
    printf ("\n5) Square ");
    printf ("\n6) Cube ");
    printf ("\n7) Exit");

    printf ("\nEnter your choice:");
    scanf (" %c", &choice);

    switch (choice)
    {
        case 1: printf ("Addition = %d", a + b);
                break;
        case 2: printf ("Subtraction = %d", a - b);
                break;
        case 3: printf ("Multiplication = %d", a * b);
                break;
        case 4: printf ("Division = %d", a / b);
                break;
        case 5: printf ("Square (a) = %d \n Square (b) = %d ", a*a, b*b);
                break;
        case 6: printf ("Cube (a) = %d \n Cube (b) = %d ", a*a*a, b*b*b);
                break; 
        case 7: printf ("Exiting the code.");
                exit (0);
                break;
    default:
        printf ("Enter valid choice.");
        break;
    }

    return 0;
}
}

/*5. Check Number Is Positive or Negative*/

#include <stdio.h>

int main ()
{
    int a;
    printf ("Enter a number: ");
    scanf ("%d", &a);
    if (a > 0)
    {
        printf ("Number is positive.");
    }
    else 
    {
        print ("Number is negative. ");
    }
}

/*6. Find the Character Is Vowel or Not*/

#include <stdio.h>

int main ()
{
    char ch;

    printf ("Enter a single character: ");
    scanf ("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf ("The character is a vowel");
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf ("The character is a vowel");
    else 
        printf ("The character is consonant");
    return 0;
}

/*7. Accept marks from user and check pass or fail*/

#include <stdio.h>

int main ()
{
    int marks;
    printf ("Enter your marks: ");
    scanf ("%d", &marks);

    if (marks < 40)
    printf ("Grade = Fail");
    else 
    printf ("Grade = Pass");
    return 0;
}

/*8. WAP to accept the height of a person in centimeters and categorize the person according to their height.*/

#include <stdio.h>

int main ()
{
    int height;
    printf ("Enter your height in centimeters: ");
    scanf ("%d", &height);
    if (height < 150)
    printf ("You are short");
    else if (height >= 150 && height < 160)
    printf ("You are average");
    else if (height >= 160 && height < 170)
    printf ("You are tall");
    else if (height >= 170 && height < 180)
    printf ("You are very tall");
    else if (height >= 180 && height < 190)
    printf ("You are very very tall");
    else if (height >= 190 && height < 200)
    printf ("Basketball player or what");
    else if (height >= 200 && height < 210)
    printf ("Bro is lebron james fr");
    return 0;
}

/*9. C Program to Check Uppercase or Lowercase or Digit or Special Character*/

#include <stdio.h>
int main ()
{
    char ch;
    printf ("Enter a character: ");
    scanf ("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    printf ("Lowercase");
    else if (ch >= 'A' && ch <= 'Z')
    printf ("Uppercase");
    else if (ch >= '0' && ch <= '9')
    printf ("Digit");
    else
    printf ("Special Character");
    return 0;
}

/*10.WAP to check whether a number is negative, positive or zero.*/

#include <stdio.h>

int main ()
{
    int num;
    printf ("Enter a number: ");
    scanf ("%d", &num);
    if (num < 0)
    printf ("Negative");
    else if (num > 0)
    printf ("Positive");
    else
    printf ("Zero");
    return 0;
}

/*11.WAP to find number is even or odd using ternary operator*/

#include <stdio.h>

int main ()
{
    int num;
    printf ("Enter a number: ");
    scanf ("%d", &num);
    printf ("The number is %s", num % 2 == 0 ? "Even" : "Odd");
    return 0;
}

/*12.WAP to find maximum number among 3 numbers using ternary operator*/

#include <stdio.h>

int main ()
{
    int a, b, c;
    printf ("Enter three numbers: ");
    scanf ("%d%d%d", &a, &b, &c);
    printf ("The maximum number is %d", a > b ? (a > c ? a : c):(b > c ? b : c));
    return 0;
}

/*13.WAP to find minimum number among 3 numbers using ternary operator*/
#include <stdio.h>

int main ()
{
    int a, b, c;
    printf ("Enter three numbers: ");
    scanf ("%d%d%d", &a, &b, &c);
    printf ("The minimum number is %d", a < b ? (a < c ? a : c):(b < c ? b : c));
    return 0;
}

/*14.WAP to find the largest of three numbers.*/

#include <stdio.h>

int main ()
{
    int a, b, c;
    printf ("Enter three numbers: ");
    scanf ("%d%d%d", &a, &b, &c);
    printf ("The largest number is %d", a > b ? (a > c ? a : c):(b > c ? b : c));
    return 0;
}

/*15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include <stdio.h>

void grade ()
{
    int m, p, c, t1, t2;
    printf ("Enter marks in Maths: ");
    scanf ("%d", &m);
    printf ("Enter marks in Physics: ");
    scanf ("%d", &p);
    printf ("Enter marks in Chemistry: ");
    scanf ("%d", &c);
    t1 = m + p + c;
    t2 = m + p;
    if (t1 >= 190 || t2 >= 140)
    {
        printf ("The candidate is eligible.\n");
    }
    else
    {
        printf ("The candidate is not eligible.\n");
    }
}
int main ()
{
    grade ();
    return 0;
}

/*16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include <stdio.h>

int main ()
{
    float t;
    printf ("Enter temperature in centigrade: ");
    scanf ("%f", &t);
    if (t < 0)
    {
        printf ("Freezing weather.\n");
    }
    else if (t >= 0 && t <= 10)
    {
        printf ("Very Cold weather.\n");
    }
    else if (t > 10 && t <= 20)
    {
        printf ("Cold weather.\n");
    }
    else if (t > 20 && t <= 30)
    {
        printf ("Normal in Temp.\n");
    }
    else if (t > 30 && t <= 40)
    {
        printf ("Its Hot.\n");
    }
    else
    {
        printf ("Its Very Hot.\n");
    }
    return 0;
}

/*17.Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include <stdio.h>

int main ()
{
    int a1, a2, a3, total;

    printf ("Enter 3 angles for traingle: ");
    scanf ("%d %d %d", &a1, &a2, &a3);
    total = a1 + a2 + a3;
    if (total == 180)
    printf ("Triangle can be formed.");
    else 
    printf ("Triangle can not be formed.");
    return 0;
}

/*18.Write a C program to calculate profit and loss on a transaction.*/

#include <stdio.h>

int main ()
{
    int sp, ap;
    printf ("Enter Actual price of product: ");
    scanf ("%d", &ap);
    printf ("Enter selling price of product: ");
    scanf ("%d", &sp);
    if (sp > ap)
    printf ("Profit: %d", sp - ap);
    else
    printf ("Loss: %d", ap - sp);
    return 0;
}

/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit                                        21. Charge/unit
22. upto 350                                    23. @1.20
24. 350 and above but less than 600             25. @1.50
26. 600 and above but less than 800             27. @1.80
28. 800 and above                               29. @2.00*/

#include <stdio.h>

int main ()
{
    int id, unit;
    float charge, total;
    printf ("Enter customer ID: ");
    scanf ("%d", &id);
    printf ("Enter unit consumed: ");
    scanf ("%d", &unit);
    if (unit <= 350)
    charge = unit * 1.20;
    else if (unit > 350 && unit <= 600)
    charge = unit * 1.50;
    else if (unit > 600 && unit <= 800)
    charge = unit * 1.80;
    else
    charge = unit * 2.00;
    total = charge + 100;
    printf ("Customer ID: %d\n", id);
    printf ("Total charge: %.2f\n", total);
    return 0;
}

/*20. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the
minimum bill should be of Rs. 256/-*/

#include<stdio.h>

int main ()
{
    int bill, total;
    float surcharge, charge;
    printf ("Enter bill: ");
    scanf ("%d", &bill);
    if (bill > 800)
    surcharge = bill * 0.18;
    else if (bill <256)
    surcharge = 0;
    else
    surcharge = bill * 0.18;
    charge = bill + surcharge;
    printf ("Total charge: %.2f\n", charge);
    return 0;
}

/*21. Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include<stdio.h>

int main ()
{
    int month, days;
    printf ("Enter month number: ");
    scanf ("%d", &month);
    if (month==1)
    days = 31;
    else if (month==2)
    days = 28;
    else if (month==3)
    days = 31;
    else if (month==4)
    days = 30;
    else if (month==5)
    days = 31;
    else if (month==6)
    days = 30;
    else if (month==7)
    days = 31;
    else if (month==8)
    days = 31;
    else if (month==9)
    days = 30;
    else if (month==10)
    days = 31;
    else if (month==11)
    days = 30;
    else if (month==12)
    days = 31;
    else
    printf ("Invalid month number\n");

    printf ("Number of days: %d", days);
    return 0;
}

/*32.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include <stdio.h>

int main()
{
    int basic_salary, gross_salary;
    float hra, da;
    printf ("Enter basic salary: ");
    scanf ("%d", &basic_salary);
    if (basic_salary <= 10000)
    {
        hra = 0.2 * basic_salary;
        da = 0.8 * basic_salary;
    }
    else if (basic_salary <=20000)
    {
        hra = 0.25 * basic_salary;
        da = 0.9 * basic_salary;
    }
    else
    {
        hra = 0.3 * basic_salary;
        da = 0.95 * basic_salary;
    }
    gross_salary = hra + da;
    printf ("Gross salary: %d", gross_salary);
}

/*33. WAP to input the week number and print week day.*/

#include <stdio.h>
int main ()
{
    int wnum;
    char wday;
    printf ("Enter week number: ");
    scanf ("%d", &wnum);
    if (wnum <=54)
    {
        printf ("Week Number: %d", wnum);
    }
    else
    {
        printf ("Invalid week number.");
    }

    printf ("Enter week day: ");
    scanf ("%s", &wday);

    printf ("Week day = %s", wday);
}

/*34. Accept month number and display month name*/

#include <stdio.h>

int main ()
{
    int mnth;
    char mnth_name[20];
    printf ("Enter month number: ");
    scanf ("%d", &mnth);
    if (mnth == 1)
    printf ("January");
    else if (mnth == 2)
    printf ("February");
    else if (mnth == 3)
    printf ("March");
    else if (mnth == 4)
    printf ("April");
    else if (mnth == 5)
    printf ("May");
    else if (mnth == 6)
    printf ("June");
    else if (mnth == 7)
    printf ("July");
    else if (mnth == 8)
    printf ("August");
    else if (mnth == 9)
    printf ("September");
    else if (mnth == 10)
    printf ("October");
    else if (mnth == 11)
    printf ("November");
    else if (mnth == 12)
    printf ("December");
    else
    printf ("Invalid month number.");
}

/*35.Accept the input month number and print number of days in that month.*/

#include <stdio.h>

int main ()
{
    int month;
    printf ("Enter month number: ");
    scanf ("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    printf ("31 days");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    printf ("30 days");
    else if (month == 2)
    printf ("28 days");
    else
    printf ("Invalid month number.");
}

/*36.Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include <stdio.h>

int main() 
{
    float units, bill = 0, surcharge;

    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    if (units <= 50)
        bill = units * 0.50;
    else if (units <= 150)
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    else if (units <= 250) 
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    else 
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    surcharge = bill * 0.20;
    bill += surcharge;
    printf("Total electricity bill: Rs. %.2f\n", bill);
    return 0;
}

/*37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case*/

#include <stdio.h>

int main ()
{
    char day;
    printf("Enter day: ");
    scanf("%c", &day);
    switch (day)
    {
        case 'M':
        case 'm':
        printf("Monday");
        break;
        case 'T':
        case 't':
        printf("Tuesday");
        break;
        case 'W':
        case 'w':
        printf("Wednesday");
        break;
        case 'TH':
        case 'th':
        printf("Thursday");
        break;
        case 'F':
        case 'f':
        printf("Friday");
        break;
        case 'S':
        case 's':
        printf("Saturday");
        break;
        case 'U':
        case 'u':
        printf("Sunday");
        break;
        default:
        printf("Invalid day");
    }
        char ch;
        printf("Enter a character: ");
        scanf("%c", &ch);
        switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Vowel");
        break;
        default:
        printf("Consonant");
    }
        return 0;
}