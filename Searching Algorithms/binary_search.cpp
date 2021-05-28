#include <iostream>

using namespace std;

int binarysearch(int array[], int size,int searchValue)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
       mid = (low + high) / 2;

        if(searchValue==array[mid])
        {
           return mid;
        }
        else if(searchValue > array[mid])
        {
           low = mid + 1;
        }
        else
        {
           high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[]={12,22,34,47,55,67,82,98};

    int userValue;

    cout << "Enter an integer: " << endl;
    cin >> userValue;

    int result = binarysearch(a, 8, userValue);

    if(result >= 0)
    {
       cout << "The number "<< a[result] << " was found at the element with index " << result << endl;
    }
    else
    {
        cout << "The number "<< userValue <<" was not found. "<<endl;
    }
}

