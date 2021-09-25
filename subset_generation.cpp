#include<iostream>
#include <climits>
#include <string>
using namespace std;
void subset(int n,string a){
    if (n==0){
        int k=a.length();
        if (k>1){
            
        }
        a="["+a+"]";
        cout<<a<<"\n";
    }else{subset(n-1,a);
        subset(n-1,to_string(n)+","+a);
        
    }


}
int main(){
    int n;
    cin>>n;
    string a="";
    subset(n,a);
    
}
