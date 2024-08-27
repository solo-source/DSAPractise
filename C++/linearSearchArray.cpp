//Program to implement linear search in arrays.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 20, 3, 40, 50, 33, 45, 32, 69, 78, 100};
    int search_element;
    bool flag = false;

    cout << "Enter the element to be searched: " << endl;
    cin >> search_element;


    //sizeof() function give the any type in the form of total no of bytes
    //that the type occupies in the memory. Thus sizeof(arr) gives output 44
    //as there are 11 int values in the array that occupies a total of 44 bytes(4 bytes each).
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if (arr[i] == search_element)
        {
            flag = true;
            cout << search_element << " found at the " << i + 1 << "th place and at " << i << "th index in the array." << endl;
            break;
        }
    }

    if (!flag)
        cout << "Element not found in the array.";

    return 0;
}