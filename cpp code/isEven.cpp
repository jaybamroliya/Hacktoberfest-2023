#include <iostream>
using namespace std;

bool checkEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    bool isEven = checkEven(n);

    if (isEven){
        cout<<n<<" is a Even number"<<endl;

    }
    else{
        cout<<n<<" is odd number"<<endl;    }
}


//second method is using bit 
//if and operation between n and 1 is 0 then even else odd

boo checkEven(int n ){
    if(n&1==0){
        return true;
    }
    else{
        return false;
    }
}