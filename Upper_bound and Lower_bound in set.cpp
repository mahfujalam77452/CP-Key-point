#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    cout<<*s.lower_bound(4)<<endl;
    s.erase(s.lower_bound(4));
    cout<<*s.lower_bound(4)<<endl;
    s.erase(s.lower_bound(4));
    cout<<*s.lower_bound(4)<<endl;
    if(s.lower_bound(8)==s.end())cout<<"YEs\n";
    
    return 0;
}
