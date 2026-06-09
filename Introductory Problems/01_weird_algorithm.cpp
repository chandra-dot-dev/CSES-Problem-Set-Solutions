#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long n;
    cin>>n;
    if(n==1) cout<<1;
   
     while(n!=1){
        cout<<n<<" ";
        if(n%2==1){
            n*=3;
            n+=1;
            cout<<n<<" ";
        }
        if(n%2==0){
            n/=2;
            
        }
        
        
        if(n==1){
            cout<<n<<" ";
            break;
        }
 
    
   }
   return 0;
}