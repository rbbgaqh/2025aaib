///week11-2.cpp
///�禡�ŧi
#include <stdio.h>

int addnum(int a,int b)
{
    printf("�{�b�i�J addnum() �禡��, a:%d", a, b);
    int x;
    x=a+b;
    printf("��Ƭۥ[��,�o��ƭ�%d�Nreturn�^��\n", x);
    return x;
}

int main()
{

    int ans=addnum(10, 30);
    printf("%d", ans);
}
