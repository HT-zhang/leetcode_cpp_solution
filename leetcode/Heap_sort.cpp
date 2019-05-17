//关于堆排序的完整实现 

#include <isostream>
#include <vector>

using namespace std;

void swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Heap_build(vector<int>a, int root, int len)
{
    int lchild = 2 * root + 1;
    if (lchild < len)
    {
        int flag = lchild;
        int right = lchild + 1;
        if (rchild < length)
        {
            if(a[rchild] > a[flag])
            {
                flag = rchild;
            }
        }
        if(a[root] < a[flag])
        {
            swap(a[root], a[flag]);
            Heap_build(a, flag, len)
         }
     }
 }



void Heap_sort(vector<int>&a, int len)
{
    for(int i = len/2-1; i>0; i--）
    {
        Heap_build(a, i, len);
    }
    for(int j = len-1; j>0; j--)
    {
          swap(a[0], a[j]);
          Heap_build(a, 0, j)
    }
}

int main()
{
    vector<int>a({1,0,34, 8,5,9,6,3,0,2,7});
    Heap_sort(a, a.size());
    for(int i = 0; i<a.size(); i++)
    {
        cout << a[i] << "\t"
    }
    return 0;
}
