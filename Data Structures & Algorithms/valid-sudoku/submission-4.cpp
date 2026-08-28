class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i < board.size(); i++){
            set<char> elementsI;
            set<char> elementsJ;
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] != '.'){
                    if(elementsI.empty()){
                        elementsI.insert(board[i][j]);
                    }else{
                        auto it = elementsI.find(board[i][j]);
                        if(it != elementsI.end()){
                            cout<<"Returning false I";
                            return false;
                        }else{
                            elementsI.insert(board[i][j]);
                        }
                    }
                }
                if(board[j][i] != '.'){
                    if(elementsJ.empty()){
                        elementsJ.insert(board[j][i]);
                    }else{
                        auto it = elementsJ.find(board[j][i]);
                        if(it != elementsJ.end()){
                            cout<<"Returning false J";
                            return false;
                        }else{
                            elementsJ.insert(board[j][i]);
                        }
                    }
                }
            }
            
            printSet(elementsI);
            printSet(elementsJ);
        }
        for(int i = 0; i < board.size(); i += 3) {
            for(int j = 0; j < board.size(); j += 3) {
                set<char> elements;
                for(int row = i; row < i + 3; row++) {
                    for(int col = j; col < j + 3; col++) {
                        if(board[row][col] != '.'){
                            if(elements.empty()){
                                elements.insert(board[row][col]);
                            }else{
                                auto it = elements.find(board[row][col]);
                                if(it != elements.end()){
                                    cout<<"Returning false J";
                                    return false;
                                }else{
                                    elements.insert(board[row][col]);
                                }
                            }
                        }
                    }
                }

            }
        }
        return true;
    }
    void printSet(set<char>& sets){
        cout<<endl;
        for(char s : sets){
            cout<<s<<" ,";
        }
        cout<<endl;
    }
};
