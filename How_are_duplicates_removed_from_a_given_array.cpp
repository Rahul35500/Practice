#include <iostream>
using namespace std;
#include <unordered_map>
#include <map>
int main()
{
    int array[] = {2, 1, 4, 2, 4, 1, 5, 1};
    int n = sizeof(array) / sizeof(array[0]);
    map<int, int> maps;
    for (int i = 0; i < n; i++)
    {
        if (maps.find(array[i]) != maps.end())
            ;
        else
        {
            maps[array[i]] = i;
        }
    }

    cout << "New array without duplicate value : ";
    for (auto &t : maps)
        cout << t.first << " ";
}
