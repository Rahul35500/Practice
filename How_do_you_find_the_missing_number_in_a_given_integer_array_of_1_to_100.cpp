#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {1, 23, 12, 45, 122, 134, 43};
    int n = sizeof(array) / sizeof(array[0]);
    sort(begin(array), end(array));
    int j = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (i == array[j])
        {
            cout << "Present number in the array are " << array[j] << endl;
            j++;
        }
        else
        {
            if (i == 0)
            {
                continue;
            }
            cout << "Missing number of the array are " << i << endl;
        }
    }
    cout << "-------------------------------" << endl;
    cout << "Some number are out of range of 100 " << endl;
    for (int k = j; k < n; k++)
    {
        cout << "Higher number " << array[k] << endl;
    }
}