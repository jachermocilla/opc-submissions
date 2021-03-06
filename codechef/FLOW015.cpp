/**
 * vim: set cindent:
 * author: jachermocilla@gmail.com
 * url: https://www.codechef.com/status/FLOW015,jachermocilla 
*/

#include <iostream>
#include <sstream>

using namespace std;

#define ull unsigned long long


int main(){
    ull n,i,j,k;
    ull T,N,M;
    ull y,d,m,dow;
    char
        days[7][10]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};

    cin >> T;

    for (i=0;i<T;i++){
        cin >> y;
        d=1;
        m=1;
        dow=(d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7  ;
        cout << days[dow] << endl;
    }

    return 0;
}
