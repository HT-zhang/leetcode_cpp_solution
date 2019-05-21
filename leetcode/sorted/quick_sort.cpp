//快排参考链接
//理论：http://developer.51cto.com/art/201403/430986.htm
//代码： https://blog.csdn.net/kenden23/article/details/14643823

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>&nums, int low, int up)
{
	int pivot = nums[up];
	int i = low -1;
	for(int j = low; j<up; j++)
	{
		if(nums[j] <= pivot)
		{
			i++;
			swap(nums[i], nums[j]);
		}
	}
	swap(nums[i+1], nums[up]);
	return i;
}

void quick_sort(vector<int>&nums, int low, int up)
{
	if (low < up)
	{
		int mid = partition(nums, low ,up);
		quick_sort(nums, low, mid);
		quick_sort(nums, mid+1, up);
	}
}

int main(int argc, char const *argv[])
{
	
	vector<int> nums({1,0,34, 8,5,9,6,3,0,2,7});
	quick_sort(nums, 0, nums.size()-1);
	for(int i = 0; i<nums.size(); i++)
	{
		cout << nums[i] << "\t";
	}
	return 0;
}
