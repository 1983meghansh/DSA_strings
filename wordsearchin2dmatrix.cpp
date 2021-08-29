#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(vector<vector<char>>& board,int i,int j,string word,int count)
    {
        if(count==word.size())
            return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size() || board[i][j]!=word[count])
            return false;
        char temp=board[i][j];
        board[i][j]=' ';
        bool found=dfs(board,i+1,j,word,count+1) || dfs(board,i-1,j,word,count+1) || dfs(board,i,j+1,word,count+1) || dfs(board,i,j-1,word,count+1);
        board[i][j]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(word[0]==board[i][j] && dfs(board,i,j,word,0))
                    return true;
            }
        }
        return false;
    }
};