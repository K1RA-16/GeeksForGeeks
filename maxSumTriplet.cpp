  #include<iostream>
#include<vector>
using namespace std;
  void sol(){

    int A[] = {2,5,3,1,4,9};
    int n = 6;
    int n1;
    int j;
    vector<int> v1;
    int sum,c=0,k;
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
       sum = A[i];//2
       for(int j=i+1;j<n;j++){//3
           k=j+1;//1
           if(A[j]>A[i])
           {sum += A[j];//5
           while(k<n){//9
               if(A[k]>A[j]){
                   sum += A[k];
                   c++;
                   if(sum > max)
                     max = sum;//16
                    sum = A[j]+A[i];//7
               }
               k++;
           }}
           c = 0;
            sum = A[i];//2
       }
    }
        // n1 = 2;
        // j = i+1;
        // sum = A[i];
       
        // c = A[i];
        // while(j < n){
            
        //     if(A[j] > c)
        //     {
        //         n1--;
        //         sum += A[j];
        //         // cout<<A[j]<<" ";
        //         c = A[j];
        //         if(n1 == 0){   
             
        //           v1.push_back(sum);
                 
                
        //             break;

        //     }
        //       // cout<<n1<<endl;
        //     }
            
        //     j++;
        // }
    
    cout<<max;
    
  }
  int main(){
      sol();
    return 0;
  }