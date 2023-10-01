PATTERN -

1 4 9 16 25 36
1 4 9 16 25 36
1 4 9 16 25 36
1 4 9 16 25 36
1 4 9 16 25 36
1 4 9 16 25 36

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
        cout<<col*col<<" ";
        cout<<endl;
    }
    return 0;
}
