class Solution {
public:
    int maxCoins(vector<int>& pilhas) {
        sort(pilhas.begin(),pilhas.end());
        int maximo = 0,n = pilhas.size();

        for(int i=0;i<n/3;++i){
            maximo += pilhas[n-i*2-2];
        }
        
        return maximo;
    }
};