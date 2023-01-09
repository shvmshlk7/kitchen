#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,temp=0;
        cin>>x>>y;
        if(x>y)
        {
            temp=x-y;
            cout<<temp<<endl;
        }
        else
        {
            temp=y-x;
            cout<<temp<<endl;
        }
        
        
    }
	// your code goes here
	return 0;
}
