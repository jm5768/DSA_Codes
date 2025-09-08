// Recursive C program to compute atoi()
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

// Recursive function to compute atoi()
int myAtoiRecursive(char* str, int n)
{
    // If str is NULL or str contains non-numeric
    // characters then return 0 as the number is not
    // valid
    int count = 0, check;
    // loop to count the no. of alphabets in str
    for (int i = 0; i <= strlen(str); ++i) {

        // check if str[i] is an alphabet
        check = isalpha(str[i]);

        // increment count if str[i] is an alphabet
        if (check)
            ++count;
    }
    if (count != 0) {
        return 0;
    }
  
    // Base case (Only one digit)
    if (n == 1)
        return *str - '0';

    // If more than 1 digits, recur for (n-1), multiply
    // result with 10 and add last digit
    return (10 * myAtoiRecursive(str, n - 1) + str[n - 1]
            - '0');
}

// Driver Program
int main(void)
{
    char str[] = "112";
    int n = strlen(str);
    printf("%d", myAtoiRecursive(str, n));
    return 0;
}
