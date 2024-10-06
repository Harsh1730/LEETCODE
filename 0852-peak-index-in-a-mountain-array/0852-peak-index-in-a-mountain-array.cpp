class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;

        for(int i=1;i<arr.size();i++)
        {
            mid=start+(end-start)/2;
            if(arr[mid]-arr[mid-1]>0&&arr[mid]-arr[mid+1]>0)
            return mid;
            if(arr[mid]-arr[mid-1]>0&&arr[mid]-arr[mid+1]<0)
            start=mid;
            else
            end=mid;
        }
        return -1;
    }
};