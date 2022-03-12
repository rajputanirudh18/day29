class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> m;

    for(int i = 0; i < nums2.size(); i++)
    {
        int nxtgreater = -1;
        for(int j=i+1; j<nums2.size(); j++)
        {
            if(nums2[i] < nums2[j]){
                nxtgreater = nums2[j];
                break;
            }
        }
        m[nums2[i]] = nxtgreater;
    }
    vector<int> v;
    for(int i = 0; i < nums1.size(); i++)
    {
        v.push_back(m[nums1[i]]);
    }
    return v;
}
};