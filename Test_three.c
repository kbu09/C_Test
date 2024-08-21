1] Write a C program to check whether a number is prime or not.
Ans. =
#include <stdio.h>
int main()

{
    int i, num, p = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            p++;
            break;
        }
    }
    if (p == 0 && num != 1)
    {
        printf("%d Prime number", num);
    }
    else
    {
        printf("%d is not a Prime number", num);
    }
    return 0;
}

2] Implement a C program that reads a string from the user and counts the number of vowels and
consonants in it.
anc.=
#include <stdio.h>
    int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            switch (ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                consonants++;
            }
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            switch (ch)
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels++;
                break;
            default:
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

3] Write a C program to calculate the sum of the digits of an integer number entered by the user.
ans.=
#include <stdio.h>
    int main()
{
    int number, digit, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("Sum of the digits: %d\n", sum);
    return 0;
}

4] Develop a C program that finds the transpose of a given matrix.
Ans =
#include <stdio.h>
int main()
{
    int rows, cols;
    int matrix[10][10], transpose[10][10];
    int i, j;

    // Input the dimensions of the matrix
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the transpose of the matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output the transpose
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < cols; i++)
    { // Notice the switch of rows and cols
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

5] Write a C program to merge two sorted arrays into a single sorted array.
Ans=
#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int size1, size2, i = 0, j = 0, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < size1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array:\n");
    for (i = 0; i < size2; i++)
        scanf("%d", &arr2[i]);
    i = 0;
    j = 0;
    k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    while (i < size1)
        merged[k++] = arr1[i++];
    while (j < size2)
        merged[k++] = arr2[j++];

    printf("Merged array:\n");
    for (i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}

6] Create a C program that calculates the sum and average of elements in an array.
Ans. =
#include <stdio.h>
int main()
{
    float sum = 0, avg;
    int i, n = 5;
    float a[100] = {10, 20, 30, 40, 50};

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    avg = sum / n;

    printf("Total Sum is %.2f\n", sum);
    printf("Average is arr %.2f", avg);

    return 0;
}

7] Develop a C program that checks whether a given string is a palindrome without using built-in
functions.
Ans =
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str))
    {
        printf("\"%s\" is a palindrome.\n", str);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    return 0;
}

8] Write a C program to find the second largest element in an array of integers.
Ans =
#include <stdio.h>
int main()
{
    int size;
    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    if (size < 2)
    {
        printf("Array must have at least two elements.\n");
        return 1;
    }
    int arr[size]; // Variable length array
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int first, second;
    first = second = arr[0];
    // Find the largest and second largest elements
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    // Print the result
    if (first == second)
    {
        printf("There is no distinct second largest element.\n");
    }
    else
    {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}

9] Implement a C program that multiplies two matrices.
Ans =
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    // Input dimensions for the matrices
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

10] Write a C program to count the frequency of each character in a given string.
Ans =
#include <stdio.h>
int main()
{
    char str[100];
    int freq[128] = {0};
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    printf("Character frequencies:\n");
    for (i = 0; i < 128; i++)
    {
        if (freq[i] > 0)
        {
            printf("'%c': %d\n", i, freq[i]);
        }
    }

    return 0;
}

11] Create a C program that reads an array of integers from the user and removes duplicate
elements from the array.
Ans =
#include <stdio.h>
int main()
{
    int arr[100], uarr[100];
    int size, i, j, k;
    int Unque_1;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements in the array
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    k = 0;
    for (i = 0; i < size; i++)
    {
        Unque_1 = 1;
        for (j = 0; j < k; j++)
        {
            if (arr[i] == uarr[j])
            {
                Unque_1 = 0;
                break;
            }
        }
        if (Unque_1)
        {
            uarr[k] = arr[i];
            k++;
        }
    }

    // Display the array without duplicates
    printf("Array after removing duplicates: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", uarr[i]);
    }
    printf("\n");

    return 0;
}

12] Write a C program to find the factorial of a number using both iterative and recursive
approaches.
Ans =
#include <stdio.h>
int factorialIterative(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int factorialRecursive(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorialRecursive(n - 1);
    }
}
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    printf("Factorial iterative of %d is: %d\n", number, factorialIterative(number));
    printf("Factorial recursive of %d is: %d\n", number, factorialRecursive(number));

    return 0;
}

13] Create a C program that implements a basic calculator using functions for addition,
subtraction, multiplication, and division.
Ans =
#include <stdio.h>
    int main()
{
    char total;
    float num1, num2, result;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an total (+, -, *, /): ");
    scanf(" %c", &total);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (total)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2f\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2f\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2f\n", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result: %f\n", result);

        break;
    default:
        printf("Invalid operator.\n");
        break;
    }

    return 0;
}

14] Write a C program to reverse the words in a given sentence without using any library
functions.
#include <stdio.h>
int main()
{
    char str[100];
    int length = 0, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }
    str[length] = '\0';
    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed String: %s\n", str);

    return 0;
}

16] Write a C program to convert a given string to lowercase without using built-in functions.
Ans =
#include <stdio.h>
    void toLowerCase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
    toLowerCase(str);
    printf("Lowercase string:\n%s\n", str);
    return 0;
}

17] Develop a C program that takes a string as input and removes all white spaces.
Ans=
#include <stdio.h>
int main()
    char str[100];
int i = 0, j = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
while (str[i] != '\0')
{
    if (str[i] != ' ')
    {
        str[j++] = str[i];
    }
    i++;
}
str[j] = '\0';
printf("String without white spaces:\n%s\n", str);
return 0;
}

18] Create a C program that checks if a given year is a leap year.
Ans. =
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 != 0 || year % 400 == 0)
        {
            printf("%d is a leap year.\n", year);
        }
        else
        {
            printf("%d is not a leap year.\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

19] Write a C program to find the length of a string without using any built-in functions.
Ans. =
#include <stdio.h>
int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string:");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of string: %d", length);
    return 0;
}

20] Implement a C program that converts temperature from Celsius to Fahrenheit using the
formula F = (C × 9/5) + 32.
ans.=
#include <stdio.h>
    int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
