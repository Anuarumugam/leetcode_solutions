char* reversePrefix(char* word, char ch)
{
    int left = 0;
    int right = 0;

    // Find first occurrence of ch
    while(word[right] != '\0')
    {
        if(word[right] == ch)
            break;

        right++;
    }

    // If ch is not found
    if(word[right] == '\0')
        return word;

    // Reverse prefix
    while(left < right)
    {
        char temp = word[left];
        word[left] = word[right];
        word[right] = temp;

        left++;
        right--;
    }

    return word;
}