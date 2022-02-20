#include <bits/stdc++.h>
using namespace std;

/* Binomial Coefficient using RECURSIVE FUNCTION 
   Time complexity - O(n^2) */

int binomialCoeff_Recur(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;

    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}

/* Binomial Coefficient using RECURSIVE FUNCTION 
   Time complexity - O(r) */

int binomialCoeff_Pascal(int n, int k)
{
    int res = 1;
 
    if (k > n - k)
        k = n - k;
 
    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}

int main()
{
    int n, k;

    cout << "Enter Value of n\n";
    cin >> n;
    cout << "Enter Value of k\n";
    cin >> k;

    cout << "Value of C using Recusrion(" << n << ", " << k << ") is "
         << binomialCoeff_Recur(n, k);
  
    cout << "Value of C using Pascal's Traingle(" << n << ", " << k << ") is "
         << binomialCoeff_Pascal(n, k);
  
    return 0;
}
