// leetcode �ǲ߭p�e �j�����w �b haystack ��� needle
// 28 Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //
        //
        // i:0 sad

        // i:1 sad

        // i:2 sad

        int H =haystack.length(), N = needle.length();
        for(int i = 0; i <= H - N; i++){
            if(haystack.substr(i ,N) == needle) return i;
        }
        return -1;
    }
};
