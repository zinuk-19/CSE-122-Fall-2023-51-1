#include<iostream>

using namespace std;

int main()

{
    
    string s;
    int n,cnt=0;
    cin >> n;


    for(int i=0; i<n; i++)

    {
        cin >> s;

        if(s[1] == '+')

           {

            cnt++;

           }
        
        else

           {

            cnt--;

           }
        
    }

    cout << cnt;

    return 0;
}