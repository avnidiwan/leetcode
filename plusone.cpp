#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       int lstd=digits[n-1]; 
       int count=0;   
       if(lstd<9){
        digits[n-1]++;
       }
       else if(lstd==9){
       int i=n-1;
       while(i>=0) {  
        if(digits[i]<9){
            digits[i]++;
            break;
        } 
        if(digits[i]==9){
        digits[i]=0;    
        --i;
        count++;
        }  
       }
       if(count==n)
       digits.insert(digits.begin(),1);
       }
       
        return digits;
    }
};
int main(){
   Solution s;
   vector<int> digits={9,9,9,9};
   vector<int>result=s.plusOne(digits);
   for(auto i:result){
    cout<<i<<" ";
   }
}