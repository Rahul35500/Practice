#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {23, 1, 4, 2, 5, 19, 4, 0, 32, 45, 3};
    int n = sizeof(array) / sizeof(array[0]);
    sort(begin(array), end(array));
    int smallestValue = array[0];
    int largest = array[n - 1];
    cout << "Smallest value:" << smallestValue << endl;
    cout << "Largest value " << largest << endl;
}