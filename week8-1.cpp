#include <stdio.h>
class Solution{
public:       //grid[i][j]
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(),MN=M*N;
        vector<int> a(MN); //C++���}�C, �j�p�OM*N
        for(int i=0; i<M;i++) {//����i
            for(int j=0; j<N; j++){ //�k��j
                int k = i*N+j; //���Ӫ��}�C��J a[]
                a[k]=grid[i][j];//���Ӫ��}�C ��Ja[k]
            }
        } //�e��,��grid[i][j]����Ʃ�J²�檺�}�Ca[k]
        sort(a.begin(), a.end());//�Ʀr�p��j�Ʀn
        int mid=a[MN/2]; //��������(�C�ӤH�n���������Ʀr����)
        int ans=0; //�j��e��ans�O0
        for(int k=0; k<MN; k++){
            int diff = abs(mid-a[k]); // �{�b�o�j�������h��?
            if(diff%x !=0) return-1;//���Ӥp��������㰣�A�|����
            ans += diff/x;
        }//�j��̭��⵪��
        return ans;//�j��᭱���׮��ӥ�
    }
}
