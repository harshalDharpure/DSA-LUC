#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,45};

    // vector<int> arr(10,7);

    vector<int> visited(100,0);

    arr.pop_back();
    arr.push_back(16);

    for(int x:arr){
        cout<<x<<",";
    }

    return 0;
}
