// https://leetcode.com/problems/queue-reconstruction-by-height
class Solution {
public:
    static bool compara(vector<int>& a, vector<int>& b){ //Comparação para função de ordenação
        if(a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& pessoas) {   
        sort(pessoas.begin(), pessoas.end(), compara);  //Ordenando de acordo com a função de ordenação
        vector<vector<int>> resposta;                   //armazena o resultado final
        for(auto pessoa : pessoas){
            resposta.insert(resposta.begin()+pessoa[1], pessoa);   //Inserindo o elemento na posição desejada
        }
        return resposta;
    }
};