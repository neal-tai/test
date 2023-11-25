int averageValue(int* nums, int numsSize) {
    int total = 0, count= 0;
    for(int i= 0; i< numsSize; i++){
        if( !(nums[i]%2) && !(nums[i]%3))
        {
            total += nums[i];
            count++;
        }
    }
    if (count == 0)
        return 0;
    else
        return total/count;
}
