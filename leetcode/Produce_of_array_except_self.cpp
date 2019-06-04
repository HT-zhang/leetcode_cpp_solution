//题目描述
//返回一个数组除了，数组为该数组除了该索引本身其他位置的元素值的乘积

//思路：
// 创建两个数组，一个用来记录某元素前元素的乘积，一个用于记录某元素后元素的乘积，相乘即可得到目标数组

vector<int> Produce_Except_Self(vector<int>&nums)
{
    int n = nums.size();
    vector<int>left(n,1);
    vector<int>right(n,1);
    vector<int>res(n,1);
    for(int i = 1; i<nums.size(); i++)
    {
        left[i] *= left[i-1] * nums[i-1];
    }
    for(int j = nums.size()-2; j>=0; j--)
    {
        right[j] *= right[j+1] * nums[j];
    }
    for(int i = 0; i<nums.size(); i++)
    {
        res[i] = left[i] * right[i];
    }
    return res;
}
