#include <iostream>
#include <vector>
#include<unordered_set>
#include<unordered_map>
#include<set>
#include<map>
#include<climits>
#include <queue>
#include <stack>
#include <chrono>
#include<string>
using namespace std;

bool operator<(const pair<int,int> &a, pair<int,int> &b)
{
  return a.first < b.first;
}

  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };


  class Solution {
  public:
      vector<string> split(string s,string delim){
          vector<string> res;
          if(s.size()==0){return res;}
          size_t start=0;
          size_t index=s.find_first_of(delim,start);
          while(index!=string::npos){
              res.push_back(s.substr(start,index-start));
              start=index+delim.size();
              index=s.find_first_of(delim,start);
          }

          if(index-start>0){
              res.push_back(s.substr(start,index-start));
          }
          return res;
      }

  };


int main(){
    Solution s;
    string str="dir1\n_dir2\n_dir3\n__pic.jpeg\n__pic.jpeg\ndir4\ndir5\n_pic5.png\n_dir6\n__pic7.png";
    vector<string> res=s.split(str,"\n");
    for(string e:res){
        cout<<e<<" ";
    }
    return 0;
}
