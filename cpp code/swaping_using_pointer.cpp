 #include<iostream>
 using namespace std;

 void swappointer(int *x,int *y){
     int temp=*x;
     *x=*y;
     *y=temp;
 }
 int main(){
     int A=34;
     int B=22;
     swap(A,B);
     cout<<"the new value of A is "<<A<<"value of b is"<<B;
     return 0;
 }