/*1. Write a program in C to find the length of a string without using library
functions.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Length of the string is: %d", i);
    return 0;
}

/*2. Write a program in C to separate individual characters from a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
    }
}

/*3. Write a program in C to print individual characters of a string in reverse order*/

#include <stdio.h>
int main()
{
    int a, b;
    char str[10];

    printf("Enter a string : ");
    scanf("%s", &str[10]);
    while (str[b] != 0)
    {
        b++;
    }
    for (a = b; a >= 0; a--)
    {
        printf("%c", str[a]);
    }
}

/*4.Write a program in C to count the total number of words in a string.*/
#include <stdio.h>
int main()
{
    int i, n;
    char str[30];

    printf("\n\n\t Enter a String : ");
    scanf("%s", &str[30]);
    for (i = 0; str[i] != 0; i++)
    {
        n++;
    }
    printf("Total words: %d", n);
}

/*5.Write a program in C to compare two strings without using string library functions*/
#include <stdio.h>
int main()
{
    int i;
    char s1[30], s2[30];

    printf("Enter 1st number: ");
    scanf("%s", s1);
    printf("Enter 2nd number: ");
    scanf("%s", s2);

    if (s1[i] % s2[i] == 0)
        printf("Equal Strings");
    else
        printf("Unequal Strings");
}

/*6.Write a program in C to count the total number of alphabets, digits and special characters in a string. */
#include <stdio.h>
int main()
{
    int i, a, b, c;
    char str[20];

    printf("Enter a number : ");
    scanf("%s", &str[i]);

    for (i = 0; str[i] != 0; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            a++;
        else if (str[i] >= '0' && str[i] <= '9')
            b++;
        else
            c++;
    }
    printf("Total Number of Alphabets : %d", a);
    printf("Total Number of Digits : %d", b);
    printf("Total Number of Characters : %d", c);
}

/*7. Write a program in C to copy one string to another string. */
#include <stdio.h>
int main()
{
    int i;
    char str1[70], str2[70];

    printf("Enter 1st string:");
    scanf("%s", &str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("2nd String: %s", str2);
}

/*8.Write a program in C to count the total number of vowels or consonants in a string. */

#include <stdio.h>

main()
{
    int i, vow = 0, con = 0;
    char str[30];

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
            vow++;
        else if (str[i] == 'e' || str[i] == 'E')
            vow++;
        else if (str[i] == 'i' || str[i] == 'I')
            vow++;
        else if (str[i] == 'o' || str[i] == 'O')
            vow++;
        else if (str[i] == 'u' || str[i] == 'U')
            vow++;
        else
            con++;
    }
    printf("Vowels: %d", vow);

    printf("Consonants: %d", con);
}

/*9.Write a program in C to find the maximum number of characters in a string.*/

#include <stdio.h>

int main()
{
    int i, max = 0;
    char str[20];

    printf("Enter a String : ");
    scanf("%s", &str);

    for (i = 0; str[i] != 0; i++)
        max++;

    printf("Max Number of Characters: %d", max);
}

/*10. Write a program in C to extract a substring from a given string */
#include <stdio.h>
int main()
{
    int p = 5, l = 3;
    char str[40], sub[40];

    printf("Enter a string:");
    scanf("%s", &str[40]);

    strncpy(sub, str + p, l);
    sub[l] = '\0';

    printf("Extract A Substring : %s", sub);
}

/*11. Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa. */

#include <stdio.h>
#include <string.h>
int main()
{

    char str[20];

    printf("Enter a string: ");
    scanf("%s", &str);

    printf("Replace Lowercase Characters Uppercase: %s", strupr(str));
}

/*12.Write a program in C to find the number of times a given word 'is' appears in
the given string.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWordOccurrences(char *str, const char *word)
{
    int count = 0;
    char *pos = str;
    int wordLen = strlen(word);

    while ((pos = strstr(pos, word)) != NULL)
    {
        if ((pos == str || !isalpha(*(pos - 1))) && (!isalpha(*(pos + wordLen))))
        {
            count++;
        }
        pos += wordLen;
    }
    return count;
}

int main()
{
    char str[1000];
    const char *word = "is";

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    size_t length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
    int occurrences = countWordOccurrences(str, word);
    printf("The word '%s' appears %d times in the given string.\n", word, occurrences);
    return 0;
}

/*13.Write a program in C to remove characters from a string except alphabets.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, e;
    char str[20];

    printf("Enter a String : ");
    scanf("%s", &str);

    for (i = 0; str[i] != 0;)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            for (e = i; str[e] != 0; e++)
            {
                str[e] = str[e + 1];
            }
        }
        else
        {
            i++;
        }
    }
    printf("String after removing non-alphabetic characters: %s", str);
}

/*14.Write a program in C to combine two strings manually*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20], str2[20];
	
	printf("Enter a string 1: ");
	scanf("%s",&str1);
	printf("Enter a string 2: ");
	scanf("%s",&str2);
	
	printf("Combine two strings: %s",strcat(str1,str2));
} 

/*15. Write a program in C to find the largest and smallest words in a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLargestAndSmallestWords(char *str, char *largest, char *smallest)
{
    int maxLen = 0, minLen = 500;
    char *word;

    word = strtok(str, " ,\n");
    while (word != NULL)
    {
        int len = strlen(word);
        if (len > maxLen)
        {
            maxLen = len;
            strcpy(largest, word);
        }
        if (len < minLen)
        {
            minLen = len;
            strcpy(smallest, word);
        }
        word = strtok(NULL, " ,\n");
    }
}

int main()
{
    char str[500];
    char largest[500];
    char smallest[500];

    printf("Enter a string: ");
    fgets(str, 500, stdin);

    size_t length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
    largest[0] = '\0';
    smallest[0] = '\0';

    findLargestAndSmallestWords(str, largest, smallest);

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}
