/// week01-4a.cpp �ϥ�C++�y���g
#include <iostream> ///�ϥ�C�y���~��
using namespace std;
int main()
{
    int a,b;
   cin >> a >> b;�ϥ�C�y���o�R�W��g
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0) ans+= i;
        }
        cout << ans;
    }
