class Solution {
public:
    vector<int> find(vector<int>& arr, int x) {
        int l = 0, r = arr.size() - 1;
        int first=-1,last=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==x) {
                first=mid;
                r=mid-1;
            }
            else if(arr[mid]<x)
                l=mid+1;
            else
                r=mid-1;
        }
        l=0;
        r=arr.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==x){
                last=mid;
                l=mid+1;
            }
            else if(arr[mid]<x)
                l=mid+1;
            else
                r=mid-1;
        }
        return {first, last};
    }
};
