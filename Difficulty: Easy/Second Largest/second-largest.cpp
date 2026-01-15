class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=0 ;
        int second_largest=0;
        
        for(int i=0;i<arr.size();i++){
        if (arr[i]>largest){
            second_largest=largest;//jisme dalna hoga usko left m rkhenge
            largest=arr[i];
        }
        else if(arr[i] > second_largest && arr[i] < largest){
        second_largest=arr[i];
        //if nums[i]>largest;
        //then move lrgest value to second_largest and nums[i] to largest
        //if nums[i]> second largest and smaller than largest then make it second largarest
        
        }
        }
        if(second_largest==0){
            return -1;
        }
    return second_largest;
    
    }
};