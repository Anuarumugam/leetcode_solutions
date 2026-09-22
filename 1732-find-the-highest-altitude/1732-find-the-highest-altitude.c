int largestAltitude(int* gain, int gainSize) {
    int altitude=0;
    int maxaltitude=0;
    for(int i=0;i<gainSize;i++)
    {
        altitude=altitude+gain[i];
    if(altitude>maxaltitude)
    {maxaltitude=altitude;
    }
}return maxaltitude;
}