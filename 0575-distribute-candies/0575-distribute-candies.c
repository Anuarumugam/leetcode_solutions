int distributeCandies(int* candyType, int candyTypeSize) {
    
    int count[200001] = {0};
    int different = 0;

    for(int i = 0; i < candyTypeSize; i++)
    {
        int index = candyType[i] + 100000;

        if(count[index] == 0)
        {
            count[index] = 1;
            different++;
        }
    }

    int half = candyTypeSize / 2;

    if(different < half)
    {
        return different;
    }
    else
    {
        return half;
    }

}