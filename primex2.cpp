#include<bits/stdc++.h>
using namespace std;
int st[100005]; // 0= prime

void seive(){
    int i,j;
    st[1]=1;  // 1 is not prime
   // for(int i=4; i<=100000; i+= 2) st[i] = 1;

    for(int i=2; i*i <= 100000; i++)
      if(st[i]==0)
        for(j=2*i; j<=100000; j+=i) st[j]=1;

}

int main(){


    // seive();

    // for(int i=1; i<=30; i++){
                                                                    //check which is jprime
    //     cout<<i<<" "<<st[i]<<endl;

    // }


    int n, j, i;
    cin>>n;

    //for

}
