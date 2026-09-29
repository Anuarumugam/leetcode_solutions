int countStudents(int* students, int studentsSize,
                  int* sandwiches, int sandwichesSize) {

    int count[2] = {0, 0};

    // Count student preferences
    for(int i = 0; i < studentsSize; i++)
    {
        count[students[i]]++;
    }

    // Check each sandwich
    for(int i = 0; i < sandwichesSize; i++)
    {
        int type = sandwiches[i];

        if(count[type] == 0)
        {
            return studentsSize - i;
        }

        count[type]--;
    }

    return 0;
}