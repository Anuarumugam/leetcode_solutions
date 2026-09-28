int calPoints(char** operations, int operationsSize) {
    int stack[1000];
    int top = -1;
    int sum = 0;

    for (int i = 0; i < operationsSize; i++) {

        if (strcmp(operations[i], "+") == 0) {
            int score = stack[top] + stack[top - 1];
            stack[++top] = score;
            sum += score;
        }

        else if (strcmp(operations[i], "D") == 0) {
            int score = stack[top] * 2;
            stack[++top] = score;
            sum += score;
        }

        else if (strcmp(operations[i], "C") == 0) {
            sum -= stack[top];
            top--;
        }

        else {
            int score = atoi(operations[i]);
            stack[++top] = score;
            sum += score;
        }
    }

    return sum;
}