char* removeOuterParentheses(char* s) {
    int count = 0;
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(') {
            if (count > 0) {
                s[j++] = s[i];
            }
            count++;
        }

        else {
            count--;

            if (count > 0) {
                s[j++] = s[i];
            }
        }
    }

    s[j] = '\0';

    return s;
}