#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> &A, int B) {


        int c = B*2;
    int arr[c];
    int n1 = A.size();
    int k=0;
    for(int i=n1-B;i<n1;i++){
        arr[k] = A[i];
        k++; 
    }
    for(int i=0;i<B;i++){
        arr[k] = A[i];
        k++;
    }
    int d[B+1],x=0;
    for(int i=0;i<=B;i++){
        for(int j=i;j<i+B;j++){
            x = x + arr[j];
        }
        d[i] = x;
        x=0;
    }
 
    int max = INT_MIN;
    for(int i=0;i<=B;i++){
        if(d[i]>max)
        max = d[i];
    }
    cout<<max;
 }
 int main(){
     vector<int> A;
     int input;
     int t=5;
 while (t--)
 {cin >> input;
    A.push_back(input);
    }   int b;
    cin>>b;
    solve(A,b);
    return 0;
 }