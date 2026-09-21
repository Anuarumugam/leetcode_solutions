int reverseDegree(char* s) {
    int value=0;
    for(int i=0;s[i]!='\0';i++)
    {
        value=value+('z'-s[i]+1)*(i+1);
    }
    return value;
}