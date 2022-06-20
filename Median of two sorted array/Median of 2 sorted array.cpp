class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i=0,j=0;
        double ans;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        if(i!=nums1.size()){
            while(i!=nums1.size()){
                v.push_back(nums1[i]);
                i++;
            }
        }
        if(j!=nums2.size()){
            while(j!=nums2.size()){
                v.push_back(nums2[j]);
                j++;
            }
        }
        if((nums1.size()+nums2.size())%2==0){
            int index=(nums1.size()+nums2.size())/2;
            ans=(v[index]+v[index-1])/2.0;
        }
        else{
            ans=v[v.size()/2];
        }
        return ans;
    }
};
