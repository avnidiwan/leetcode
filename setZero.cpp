class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();

        vector<pair<int, int>> Zeroposition;
      
      for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(matrix.at(i).at(j)==0){
                Zeroposition.push_back({i,j});
                //j++;
            }
           // j++;
        }
      }

      for(auto i:Zeroposition){
        int x=i.first;
        int y=i.second;
        for(int k=0; k<column; k++){
            matrix.at(x).at(k)=0;
        }
        for(int k=0; k<row; k++){
            matrix.at(k).at(y)=0;
        }
      }
        
    }
};