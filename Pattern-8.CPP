PATTERN -

1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7


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
        cout<<col<<" ";
        cout<<endl;
    }
    return 0;
}
