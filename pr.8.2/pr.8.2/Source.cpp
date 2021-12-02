#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)

using namespace std;

void count(char* s)
{
    unsigned int a, i;
    a = 0;     
    for (char* word = strtok(s, " ");
        word != NULL; word = strtok(NULL, " "))
        if (*word == *(word + strlen(word) - 1))
        {
            printf("%s ", word);
            a++;
        }
    printf("\n");
    cout << "Count: " << a << endl;
}

int main()
{
    char s[255];
    cout << "Enter string: ";
    gets_s(s);
    count(s);

}