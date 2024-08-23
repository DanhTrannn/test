#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool binarysearch(int n, int a[], int x){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x){
            return true;
        }
        else if (x < a[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    if(binarysearch,n,4){
        cout << "YES";
    }else{
        cout << "NO";
    }
}