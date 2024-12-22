#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t;
cin >> t;
for(int i=0;i<t;i++){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1;

    cin >> x2 >> y2;

    cin >> x3 >> y3;

    cin >> x4 >> y4;

    int r = x3-x1;
    int s = y3-y1;
    int z = r*r - s*s;
    cout << r << s << z;
    float d = sqrt(z);

    cout << d << endl;

}
return 0;
}
