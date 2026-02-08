#include<iostream>
using namespace std;
bool isPalindrome(int x) {
        if(x<0)return false;
        int rev=0;
        int y=x;

        while(x>0){
            int digit=x%10;
            rev=(rev*10)+digit;
            x=x/10;
        }
        return(y==rev);
    }
    int main(){
        int x;
        cin >> x;

       if(isPalindrome(x)){
       cout << "palindrome";
       }
       else{
        cout << "not palindrome";
       }
       return 0;
    }
