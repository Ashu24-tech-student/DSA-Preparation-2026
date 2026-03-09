#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,5,6,3,8};
    int n = 5;

    int maxVal = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }

    cout << "The maximum element: " << maxVal << endl;

    return 0;
}
