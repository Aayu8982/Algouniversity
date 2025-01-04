#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int result = add(x, y);
    cout<< x << " + " << y << " = " << result << endl;
    return 0;
}