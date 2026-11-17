/*
 * Experiment 05: String Operations in C
 * Author: Rudra Pratap
 * Description: Calculates the length of a string and extracts a substring
 *              using character array manipulation and index arithmetic.
 */

#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
    char input_string[MAX_LEN];
    int start_index, sub_length;
    int str_length = 0;

    printf("Enter a String: ");
    if (fgets(input_string, MAX_LEN, stdin) == NULL)
    {
        return 1;
    }

    /* Compute length up to newline or null terminator */
    while (input_string[str_length] != '\0' && input_string[str_length] != '\n')
    {
        str_length++;
    }

    printf("Length of string: %d\n", str_length);

    printf("Enter starting position (0-based): ");
    if (scanf("%d", &start_index) != 1)
    {
        return 1;
    }

    printf("Enter number of characters: ");
    if (scanf("%d", &sub_length) != 1)
    {
        return 1;
    }

    printf("Substring: ");
    for (int i = start_index; i < start_index + sub_length && i < str_length; i++)
    {
        putchar(input_string[i]);
    }
    putchar('\n');

    return 0;
}
