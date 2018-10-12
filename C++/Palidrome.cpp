#include <iostream>
using namespace std;



bool pal(int);

bool pal(int num)
{
    int div = 1;
    while (num / div >= 10)
        div = div * 10;
    
    while(num != 0)
    {
        int first = num / div;
        int last = num % 10;
        
        if (first != last)
            return false;
        
        num = (num % div) / 10;
        
        div = div / 100;
    }
    return true;
}

int main()
{
    int num;
    
    cout << "enter a number";
    cin >> num;
    
    pal(num) ? cout << "it is a palindrome": cout << "it is not a palindrome";
    
    return 0;
    
    // palindrome of integer with space 
    
    //cout << "\nPlease enter a number";
    //cin >> num;
    //b = num;
    //rev=0
    //while( num > 0)
    //{
    //rem = num % 10;
    // rev = (rev * 10) + rem;
   // num= num / 10;
   
    //}
   
    //if( b == rev){
    //cout << "\nit is a palindrome" << endl;
   // }
   // else{
   // cout << "\nit is not a palindrome" << endl;
   // }
   
}
