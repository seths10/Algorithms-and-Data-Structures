#include <iostream>

using namespace std;

int linear_search(int search[],int SIZE, int searchValue)
{
    for(int count=0;count<SIZE;count++)
    {
        if (search[count] == searchValue)
        {
            cout<<"Your number is at index "<< count<<endl;
        }
    }
    return -1;
}

int main()
{
    int number;
    const int SIZE = 10;
    int numbers[SIZE] = {1,8,67,2,4,1,5,6,3,7};

    cout<<"Enter the number you are searching for "<<endl;
    cin>>number;

    linear_search(numbers,10, number);
}




