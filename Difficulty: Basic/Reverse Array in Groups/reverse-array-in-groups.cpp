class Solution {
  public:
    void rev(vector<int> &arr, int st,int end){
        while(st<end){
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
        return;
    }
    void reverseInGroups(vector<int> &arr, int k) {
        int n=arr.size();
        int m=n;
        int i=0;
        while(n>0){
            if(k>n){
            rev(arr,i,m-1);
            break;
            }
            rev(arr,i,i+k-1);
            i+=k;
            n-=k;
        }
        return;
        
    }
};
