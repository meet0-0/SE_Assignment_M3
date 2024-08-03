/*1. Write a program to find out the max number from given array using function*/

#include <stdio.h>

int max ()
{
    int a[10],i,max=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max number is %d",max);
    return 0;
}

int main ()
{
    max();
    return 0;
}

/*2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)*/

#include <stdio.h>

int main() {
    int a, b;
    int choice;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("5) Modulus\n");
    printf("6) Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum = %d\n", a + b);
            break;
        case 2:
            printf("Difference = %d\n", a - b);
            break;
        case 3:
            printf("Product = %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Quotient = %d\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        case 5:
            if (b != 0)
                printf("Modulus = %d\n", a % b);
            else
                printf("Error! Division by zero.\n");
            break;
        case 6:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}

/*3. WAP to find reverse of string using recursion*/

#include <stdio.h>

int stringLength(char* str) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}
void reverseString(char* str, int start, int end) 
{
    if (start >= end) 
    {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = stringLength(str);
    if (str[length - 1] == '\n') 
    {
        str[length - 1] = '\0';
        length--;
    }
    reverseString(str, 0, length - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}

/*4. WAP to find factorial using recursion*/

#include <stdio.h>

int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}

/*5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/

#include <stdio.h>

void sortArray(int arr[], int n, int ascending) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (ascending ? arr[i] > arr[j] : arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    int arr1[100], arr2[100], n, i, choice;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of first array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the elements of second array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    printf("Enter 1 for ascending order and 0 for descending order: ");
    scanf("%d", &choice);
    
    sortArray(arr1, n, choice);
    sortArray(arr2, n, choice);
    
    printf("Sorted first array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    printf("Sorted second array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}

/*6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array*/

#include <stdio.h>

void sortArray(int arr[], int n, int ascending) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (ascending ? arr[i] > arr[j] : arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    int arr1[100], arr2[100], n, i, choice;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of first array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the elements of second array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    printf("Enter 1 for ascending order and 0 for descending order: ");
    scanf("%d", &choice);
    
    sortArray(arr1, n, choice);
    sortArray(arr2, n, choice);
    
    printf("Sorted first array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    printf("Sorted second array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}

/*6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array*/

#include<stdio.h>
int main()
{
    int a[3][3];
     int r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Input Elements of Array[%d][%d]: ",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    printf("\n-------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Input Elements of Array[%d][%d]: ",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    printf("\n------------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]+a[r][c]);
            
        }
        printf("\n");
    }
    printf("\n-----------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]-a[r][c]);
            
        }
        printf("\n");
    }
    printf("\n--------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }
     printf("\n------------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]*a[r][c]);
            
        }
        printf("\n");
    }
}

/*7. WAP Find out length of string without using inbuilt function*/

#include<stdio.h>

#include <stdio.h>

int main() 
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') 
    {
        length++;
    }

    if (str[length - 1] == '\n') 
    {
        length--;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}

/*8. WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
and age*/

#include<stdio.h>
int main()
{
	int i,emp_no,emp_age,emp[5];           
	char emp_name[25], emp_add[20];
	
	  for(i=0;i<5;i++)
	
     {
          printf("Enter Employee Name : \n");
          scanf("%s",&emp_name);
          
          printf("Enter Employe ID No : \n");
          scanf("%d",&emp_no);
          
          printf("Enter Employee Age : \n");
          scanf("%d",&emp_age);

          printf("Enter Employee Add : \n");
          scanf("%s",&emp_add);
        
          printf("Name : %s\n",emp_name);
          printf("ID : %d\n",emp_no);
          printf("Age : %d\n",emp_age);
          printf("Address : %s\n",emp_add);
     }
}


/*WAP to show difference between Structure and Union.*/

#include <stdio.h>
#include <string.h>

struct Structt 
{
    int intVal;
    float floatVal;
    char str[20];
};

union Unnion 
{
    int intVal;
    float floatVal;
    char str[20];
};

int main() 
{
    struct Structt st;
    st.intVal = 42;
    st.floatVal = 3.14;
    strcpy(st.str, "Hello");  

    printf("Structure values:\n");
    printf("intVal: %d\n", st.intVal);
    printf("floatVal: %f\n", st.floatVal);
    printf("str: %s\n", st.str);

    union Unnion u;
    u.intVal = 42;
    printf("\nUnion values after setting intVal:\n");
    printf("intVal: %d\n", u.intVal);

    u.floatVal = 3.14;
    printf("floatVal: %f\n", u.floatVal);

    strcpy(u.str, "Hello");
    printf("str: %s\n", u.str);

    printf("\nSize of structure: %lu bytes\n", sizeof(st));
    printf("Size of union: %lu bytes\n", sizeof(u));

    return 0;
}



/*10.WAP to perform Palindrome number using for loop and function*/

#include <stdio.h>

int pal(int n) 
{
    int rev = 0;
    int og = n;

    while (n != 0) 
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return og == rev;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (pal(num)) 
    {
        printf("%d is a palindrome number.\n", num);
    } else 
    {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}

/*11.WAP to accept 5 numbers from user and display in reverse order using for
loop and array*/

#include <stdio.h>

int main() 
{
    int numbers[5];
    printf ("Enter 5 numbers:");
    for (int i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nNumbers in reverse order:\n");
    for (int i = 4; i >= 0; i--) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

/*12.WAP to accept 5 students name and store it in array*/

#include<stdio.h>

char name ()
{
    char name[5];
    printf("Enter 5 names: ");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i+1);
        scanf("%s", &name[i]);
    }
}

int main ()
{
    name();
    return 0;
}

/*13.WAP to accept 5 numbers from user and check entered number is even or odd using of array*/

#include <stdio.h>

int main() 
{
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            printf("Number %d (%d) is even.\n", i + 1, numbers[i]);
        } else 
        {
            printf("Number %d (%d) is odd.\n", i + 1, numbers[i]);
        }
    }

    return 0;
}

/*14.Perform 2D matrix array*/

#include <stdio.h>


int main() 
{
    int matrix[3][3];
    int i, j;

    printf("Enter elements of matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*15.Store 5 numbers in array and sort it in ascending order*/

#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) 
    {
        for (j = 0; j < n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() 
{
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    bubbleSort(numbers, 5);
    printf("Sorted numbers in ascending order:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

/*16.Accept 5 numbers from user and perform sum of array*/

#include <stdio.h>

int main() 
{
    int i, sum = 0, numbers[5];
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        sum += numbers[i];
    }
    printf("The sum of the entered numbers is: %d\n", sum);
    return 0;
}

/*17.WAP to show difference between Structure and Union.*/

//Structure

#include <stdio.h>
#include <string.h>
struct MyStruct 
{
    int intValue;
    float floatValue;
    char strValue[20];
};

int main() 
{
    struct MyStruct s;
    s.intValue = 10;
    s.floatValue = 20.5;
    strcpy(s.strValue, "Hello");

    printf("Structure values:\n");
    printf("intValue: %d\n", s.intValue);
    printf("floatValue: %.2f\n", s.floatValue);
    printf("strValue: %s\n", s.strValue);
    printf("Size of structure: %lu bytes\n", sizeof(s));
    return 0;
}

//Union

#include <stdio.h>
#include <string.h>

union MyUnion 
{
    int intValue;
    float floatValue;
    char strValue[20];
};

int main() 
{
    union MyUnion u;
    u.intValue = 10;
    printf("Union values after assigning intValue:\n");
    printf("intValue: %d\n", u.intValue);

    u.floatValue = 20.5;
    printf("Union values after assigning floatValue:\n");
    printf("floatValue: %.2f\n", u.floatValue);
    printf("intValue (corrupted): %d\n", u.intValue); 

    strcpy(u.strValue, "Hello");
    printf("Union values after assigning strValue:\n");
    printf("strValue: %s\n", u.strValue);
    printf("floatValue (corrupted): %.2f\n", u.floatValue); 
    printf("intValue (corrupted): %d\n", u.intValue); 

    printf("Size of union: %lu bytes\n", sizeof(u));
    return 0;
}
