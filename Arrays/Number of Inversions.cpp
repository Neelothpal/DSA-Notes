//There is an integer array ‘A’ of size ‘N’.
//Number of inversions in an array can be defined as the number of pairs of ‘i’, ‘j’ such that ‘i’ < ‘j’ and ‘A[i]’ > ‘A[j]’.
//You must return the number of inversions in the array.

int merge(vector<int> &arr,int low,int mid,int high){
  int left = low; 
  int right = mid+1;
  int cnt=0;
  vector<int> temp;
  while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      cnt += ((mid - left) + 1);
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
  for(int i=0; i<temp.size(); i++){
    arr[low]=temp[i];
    low++;
  }
  return cnt;
}

int mergeSort(vector<int> &arr,int low,int high){
  int cnt=0;
  if(low>=high) return cnt;
  int mid =(low+high)/2;
  cnt+= mergeSort(arr,low,mid);
  cnt+= mergeSort(arr,mid+1,high);
  cnt+= merge(arr, low, mid, high);
  return cnt;
}

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
  return mergeSort(a, 0, n-1);
}
