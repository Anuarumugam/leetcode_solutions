int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int sum = 0;
    int count = 0;

    // First window
    for (int i = 0; i < k; i++) {
        sum = sum + arr[i];
    }

    if (sum >= k * threshold) {
        count++;
    }

    // Slide the window
    for (int i = k; i < arrSize; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum >= k * threshold) {
            count++;
        }
    }

    return count;
}