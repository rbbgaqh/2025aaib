///week11-1.cpp
///先把SOIT107_Advance_009_c_c++的鷹架
#include <stdio.h>
int main()
{
    printf("請輸入 1422: ");
    int n;
    scanf("%d",&n);

    int ans=0;
    while(n>0){
            printf("現在出剝來的皮:%d\n",n%10);
            if(n%10 > ans) ans=n%10;
            n=n/10;
    }
    printf("找到最大的皮，是: %d\n",ans);
}
