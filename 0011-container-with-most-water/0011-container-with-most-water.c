int maxArea(int* height, int heightSize) {
   int max=0;
   int left=0;
   int right=heightSize-1;
  int mc=0;
    while(left<right)
    {
        int wc=fmin(height[left],height[right])*(right-left);
        mc=fmax(wc,mc);
        if(height[left]<height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return mc;
}
        
        
    
