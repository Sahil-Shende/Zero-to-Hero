/*
  author:jignesh1604
  link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/prateek-and-his-friends/
 */
 
 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long int n, q, i,k,f=0;
        cin >> n>>k;
        long long int a[n],c[n+1];
        
        cin>>a[0];
        c[0]=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            c[i]=c[i-1]+a[i];
        }

            for (i = n - 1; i >=0; i--) {
                for (int j = 0; j <= i; j++) {
                    if ((c[i] - c[j]) == k||c[n-1]==k||c[0]==k) {
                        cout << "YES\n";
                        f = 1;
                        goto y;
                    }
                }
            }
            y:
            if (f == 0)
                cout << "NO\n";

    }
    return 0;
}
