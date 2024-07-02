#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, size;
    cin>>size;
    cin>>n;
    set <int> s ;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int i=0;
    int cnt=0;
    for (int now : s){
        if (now-size>=0&&cnt==0){
            cnt++;
            size=now;
            i++;
        }
        else if(now-size>=3||now==size){
            cnt++;
            size=now;
            i++;
        }
        else
            i++;
    }
    cout<<cnt<<endl;
    return 0;
}