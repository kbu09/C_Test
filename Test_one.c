1] What is a token in C?
Ans = a) The smallest individual unit in a program


2] Identify the valid C identifier from the following:
Ans = c) abc_123


3] Which of the following is a correct usage of the && operator in C?
Ans = a) if (a && b)


4] What will be the output of the following code?
Ans =  a) Greater


5] What is the purpose of the return statement in a function?
Ans = c) To send a value back to the calling function


6] What will be the value of x after executing the following code?
int x = 10;
x += 5 * 2;
Ans =  b) 20


7] Consider the following code snippet. What will be the output?
int a = 10, b = 20;
if (a > b)
    printf("a is greater\n");
else if (a == b)
    printf("a is equal to b\n");
else
    printf("b is greater\n");
ANS =  c) b is greater


8] Write a for loop that prints all even numbers from 2 to 10.
Ans =
int main()
{
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d\n    ", i);
    }
    return 0;
}

9] What is the output of the following code?
char str[] = "Hello";
printf("%c\n", str[1]);
Ans = b) e  (Index start from 0)


10] Write a function in C that takes an array of integers and its size
as input and returns the sum of all elements in the array.  
ANS =
#include <stdio.h>
int totaoarr(int arr[], int size)
{
    int plus = 0;

    for (int i = 0; i < size; i++)
    {
        plus += arr[i];
    }
    return plus;
}
int main()
{
    int arr[] = {10, 15, 25, 30, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total = totaoarr(arr, size);
    printf("The sum of the array elements is: %d\n", total);
    return 0;
}

11] Explain the difference between ++x and x++ in C with an example.
ANS =
#include <stdio.h>
int main()
{
    int x = 5;
    int a, b;

    a = ++x;
    printf("(++x): %d\n", a);

    x = 5;
    b = x++;
    printf("(x++): %d\n", b);

    printf("Value of x : %d\n", x);
    return 0;
}

12] Consider the following code snippet. What will be the output?
int x = 5;
int y = (x == 5) ? 10 : 20;
printf("%d\n", y);
ANS = b) 10



13] Write a program in C that reverses a given string without using
any built-in functions.

ANS =
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

14] What is a recursive function? Write a C program to calculate the
factorial of a number using recursion.
ANS =
#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
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
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}

15] Consider the following code snippet. What will be the value of
result after execution?
int arr[] = {1, 2, 3, 4, 5};
int result = 0;
for (int i = 0; i < 5; i++)
{
    result += arr[i];
}
ANS = b) 15



16] Write a C program to find the largest element in an array of
integers.
ANS =
#include <stdio.h>
int largenum(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[] = {10, 20, 40, 60, 30, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = largenum(arr, size);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

17] Create a function in C that checks if a given string is a
palindrome.

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

18] Write a C program to implement a simple calculator using
switch-case statements that performs addition, subtraction,
multiplication, and division.
ANS =
#include <stdio.h>
int main() {
    char total;
    float num1, num2, result;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an total (+, -, *, /): ");
    scanf(" %c", &total); 
    printf("Enter second number: ");
    scanf("%f", &num2);

        switch (total) {
        case '+':
result = num1 + num2;
printf("Result: %f\n", result);
break;
case '-':
result = num1 - num2;
printf("Result: %f\n", result);
break;
case '*':
result = num1 * num2;
printf("Result: %f\n", result);
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

19] Develop a C program that reverses the digits of an integer number
entered by the user.
ANS =
#include <stdio.h>
int main()
{
    int number, reversedNumber = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0)
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number = number / 10;
    }
    printf("Reversed Number: %d\n", reversedNumber);
    return 0;
}

20] Write a C program that uses a recursive function to find the
Greatest Common Divisor (GCD)
of two numbers.Ans =
#include <stdio.h>
    int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}
int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
