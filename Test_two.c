1] Which of the following is a keyword in C?
Ans. = d) printf


2] What is the output of the following code?
int x = 3;
int y = x++;
printf("%d %d\n", x, y);
Ans. = c) 4 3



3] What is the size of the int data type in C on a 32-bit system?
Ans. = b) 4 bytes



4] Which of the following is the correct syntax to declare a pointer in C?
Ans. = d) int ptr*;

5] What will be the output of the following code?
int a = 10;
int b = 20;
int c = a + b;
printf("%d\n", c);
Ans.= c) 30


6] Which of the following is a valid format specifier for printing a float in C?
Ans.=  b) %f


7] Write a while loop that prints numbers from 1 to 5.
Ans. =
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

8] What is the output of the following code?
int arr[] = {1, 2, 3, 4, 5};
printf("%d\n", arr[3]);
Ans. = d) 4


9] How can you define a constant variable in C?
Ans. = a) const int x = 10;

10] Write a function in C that takes an integer and returns its square.
Ans. =
#include <stdio.h>
int main()
{
    int number = 40;
    int result = number * number;
    printf("The square of %d is %d\n", number, result);
    return 0;
}

11] Explain the difference between malloc and calloc in C.
Ans. = 
// 1 = malloc (memory allocation)
// Syntax: void* malloc(size_t size);
// allocates a certain amount of memory(measured in bytes) and gives back a pointer to the block 's start. The allocated memory' s initial contents are uninitialised, meaning they contain garbage values

// 2 = alloc(contiguous allocation)
// Syntax : void *calloc(size_t num, size_t size);
// Memory is allocated for an array of n elements, each of size n, and all of the memory is initialised to zero.
// Makes sure the pointer is returned once the memory has been initialised to zero.


12] What will be the output of the following code?
int a = 5, b = 10;
if (a < b && b > 5)
{
    printf("True\n");
}
else
{
    printf("False\n");
}
Ans. = a) True


13] Write a C program to find the smallest element in an array of integers.
Ans. =
#include <stdio.h>
int findSmall(int arr[], int size)
{
    int mini = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int main()
{
    int array[] = {10, 20, 5, 25, 6, 30};
    int size = sizeof(array) / sizeof(array[0]);

    int smallest = findSmall(array, size);
    printf("The small element is %d\n", smallest);

    return 0;
}

14] What is the purpose of the break statement in C?
Ans. = b) To exit from a loop or switch-case statement


15] Write a C program that uses a for loop to calculate the sum of the first 10 natural
numbers.
Ans. =
#include <stdio.h>
int main() {
    int sum = 0; 
    for (int i = 1; i <= 10; i++) {
        sum += i;  
    }
      printf("Sum: %d\n", sum);
    return 0;
}



16] Explain how typedef is used in C with an example.
Ans. =
// In C programming, the typedef keyword is used to give already-existing variables in the program some meaningful new names.
// Syntex: typedef existing_type new_type_name;
#include <stdio.h>
typedef int Integer;
int main() {
    Integer num1 = 10;
    Integer num2 = 20;
    Integer sum = num1 + num2;
    printf("The total of %d and %d is %d\n", num1, num2, sum);
    return 0;
}

17] What will be the output of the following code?
int x = 10;
if (x != 10) {
printf("Not 10\n");
} else {
printf("Equal to 10\n");
}
Ans. = b) Equal to 10


18] Write a C program to check if a given number is even or odd using the modulo
operator.
Ans. =
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }
    return 0;
}


19] Explain what a pointer to a pointer is in C and give an example.
Ans. =
#include <stdio.h>

int main() {
    int value = 42;            
    int *ptr = &value;         
    printf("Value: %d\n", value);
    printf("Value via ptr: %d\n", *ptr);
       return 0;
}


20 Write a C program that uses a recursive function to calculate the Fibonacci sequence
up to n terms.
Ans. =
