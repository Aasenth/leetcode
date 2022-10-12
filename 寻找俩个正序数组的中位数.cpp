//归并排序
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
            if(nums1[i]<nums2[j]) nums3.push_back(nums1[i++]);
            else nums3.push_back(nums2[j++]);
        while(i<nums1.size()) nums3.push_back(nums1[i++]);
        while(j<nums2.size()) nums3.push_back(nums2[j++]);
        int res=nums3.size();
        if(nums3.size()%2==0) 
        {
            double mid=double (nums3[res/2]+nums3[res/2-1])/2;
            return mid;
        }
        else  return nums3[res/2];

    }
};
