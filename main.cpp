#include <bits/stdc++.h>
using namespace std;

vector<int> functio(int m, vector<int> arr)
{
    vector<int> a{}; 
    for(int i=0;i<arr.size();i++)
    {
        int r=arr[i];
        int d=m-r;
        for(int j=i+1;j<arr.size();j++)
        {
            if(d==arr[j])
            {
               a.push_back(i+1);
               a.push_back(j+1);
            }
        }
           
    }
    return a;

}



int main()
{
    int m=4;
    vector<int> e;
    vector<int> arr{1,4,5,3,2};
    e=functio(m,arr);
    for(int i=0;i<int(e.size());i++)
        cout<<e[i];
    return 0;
       
    
}