//题目描述：

//在数组中，存在一个数，前面的数均比他小，后面的数比他大，找到该数并返回其索引

//使用二分查找，且其实仅是判断索引元素与其右元素的关系即可

class Solution{
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int left = 0, right = A.size()-1;
        while(left + 1 < right )
        {
            int mid = left + (right - left) /2 ;
            if (A[mid] < A[mid+1])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return right;
    };
