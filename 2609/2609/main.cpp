//
//  main.cpp
//  2609
//
//  Created by 김진호 on 2022/01/19.
//

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl << lcm(n1, n2);
}
