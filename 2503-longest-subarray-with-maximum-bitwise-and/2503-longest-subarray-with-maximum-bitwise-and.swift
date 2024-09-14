class Solution {
    func longestSubarray(_ nums: [Int]) -> Int {
        var max_val=0;
        var freq=0;
        for num in nums{
            if(max_val<=num){
                max_val=num;
            }
        }
        var maxi=1;
        for num in nums{
            if(num==max_val){
                freq+=1;

            }else{
                maxi=max(maxi,freq);
                freq=0;
            }
        }
        maxi=max(maxi,freq);
        return maxi;
    }
}