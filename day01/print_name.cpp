#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void print (){
    if (cnt ==1) return ;
    cout <<"striver";
    cnt ++;
    print ();
}
int main (){
    print ();
    return 0;
}
