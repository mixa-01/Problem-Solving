#include <bits/stdc++.h>
using namespace std;
int main()
{
int x , num = 0;
string name;
cin >> name;
sort(name.begin(),name.end());
x=name.length();
for(int i = 0; i<x; i++){
    if(name[i]!=name[i-1]){
        num++;
    }
}
if(num%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else if(num%2!=0){
    cout<< "IGNORE HIM!"<<endl;
}

    return 0;
}
