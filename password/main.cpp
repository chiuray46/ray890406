#include "passtitle.h"
#include <iostream>
int main()
{
    string a ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string b ="DOJKZCTMYPAWHUQNBVGSRFXLIEdojkzctmypawhuqnbvgsrfxlie";
    string c,d;
    int A=0;
    cin >> c;
    int cc = c.length();
    for (int i=0;i <= cc;i++){
        for (int n=0; n <= 52;n++){
            if (c[i]==a[n]){
                A = n;

            }
        }

        cout << b[A];
        A=0;
    }

return 0;
}
