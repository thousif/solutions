#include </Users/zomato/headers/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,k,input,count(0);
        cin>>n>>k;
        vector <int> s;
        for(int i=0;i<n;i++) {
           cin >> input;
           s.push_back(input);    
        }
        std::sort(s.begin(), s.end(), greater<int>());
        for (int i=0; i<s.size(); i++) {
            if(s[i] >= s[k-1]){
               count++;
            }    
        }
        cout << count;
    }
}
