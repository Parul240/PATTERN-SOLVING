PATTERN -

1 1 1 1 1 1
2 2 2 2 2 2
3 3 3 3 3 3 
4 4 4 4 4 4
5 5 5 5 5 5
6 6 6 6 6 6


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
        cout<<row<<" ";
        cout<<endl;
    }
    return 0;
}
