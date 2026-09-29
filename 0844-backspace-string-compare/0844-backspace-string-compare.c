#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool backspaceCompare(char* s, char* t) {

    char stack1[201];
    char stack2[201];

    int top1 = -1;
    int top2 = -1;

    // Process s
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '#')
        {
            if(top1 >= 0)
                top1--;
        }
        else
        {
            stack1[++top1] = s[i];
        }
    }

    // Process t
    for(int i = 0; t[i] != '\0'; i++)
    {
        if(t[i] == '#')
        {
            if(top2 >= 0)
                top2--;
        }
        else
        {
            stack2[++top2] = t[i];
        }
    }

    // Compare
    if(top1 != top2)
        return false;

    for(int i = 0; i <= top1; i++)
    {
        if(stack1[i] != stack2[i])
            return false;
    }

    return true;
}