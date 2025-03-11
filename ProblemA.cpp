//question link: https://codeforces.com/contest/2074/problem/A
//submission link: https://codeforces.com/contest/2074/submission/310160202
//problem A: DRAW SQUARE
//CODE->
#include<bits/stdc++.h>
using namespace std;
int rows;
int cols = 4;
int main()
{
    cin>>rows;
    vector<vector<int>> vec(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> vec[i][j];
        }
    }
    for(int i = 0;i<rows;i++){
        if(abs(vec[i][0])==abs(vec[i][1])&&abs(vec[i][1]) ==abs(vec[i][2])&&abs(vec[i][2]) ==abs(vec[i][3]))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
