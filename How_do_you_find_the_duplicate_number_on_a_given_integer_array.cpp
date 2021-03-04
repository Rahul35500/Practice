#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {3, 1, 4, 5, 1, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> maps;
    for (int i = 0; i < n; i++)
    {
        if (maps.find(arr[i]) != maps.end())
        {
            cout << "duplcate value are " << arr[i] << endl;
        }
        else
        {
            maps[arr[i]] = i;
        }
    }
}