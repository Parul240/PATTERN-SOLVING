PATTERN -

1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125


CODE:-

#include <iostream>

using namespace std;

int main()
{
    int n;
    int row, col;
    cout<<"Enter the input: ";
    cin>>n;
   
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        cout<<col*col*col<<" ";
        cout<<endl;
    }
    return 0;
}
