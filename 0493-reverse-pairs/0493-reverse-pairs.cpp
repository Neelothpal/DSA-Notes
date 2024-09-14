class Solution {
public:
    
    void merge(vector<int> &arr,int low,int mid,int high){
        int left = low; 
        int right = mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
            }
            else{
            temp.push_back(arr[right]);
            right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low; i<=high; i++){
            arr[i]=temp[i-low];
        }
    }

    int countpairs(vector<int> &arr, int low, int mid, int high){
        int count =0;
        int right = mid+1;
        for(int i =low; i<mid+1; i++){
            while(right<=high && arr[i]>2*(double)arr[right]){
                right++;
            }
            count += right-(mid+1);
        }
        return count;
    }

    int mergeSort(vector<int> &arr,int low,int high){
        int cnt =0;
        if(low>=high) return cnt;
        int mid =(low+high)/2;
        cnt+=mergeSort(arr,low,mid);
        cnt+=mergeSort(arr,mid+1,high);
        cnt+=countpairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }  
};