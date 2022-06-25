#include<iostream>
using namespace  std;


class TrieNode{
    public:
       char data;
      TrieNode* children[26];
       bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }

};

class Trie{
    public:
    TrieNode* root;
    Trie() {
        root=new TrieNode('\0');
    }
    
    void insertUtill(TrieNode* root,string word){
        if(word.length()==0){
           root->isTerminal=true;
           return;
        }
        int index=word[0]-'A';
        TrieNode* Child;
        if(root->children[index]!=NULL){
            Child=root->children[index];

        }   else{
            Child=new TrieNode(word[0]);
            root->children[index]=Child;
        }
        insertUtill(root, word.substr(1));
    }
    void insertWord(string word){
           insertUtill( root, word);
    }
    bool searchUtill(TrieNode* root,string word){
        if(word.length()==0){
          return root->isTerminal;
           return;
        } int index=word[0]-'A';
        TrieNode* Child;
        if(root->children[index]!=NULL){
            Child=root->children[index];

        } else{
            return false;
        }
        return searchUtill(root, word.substr(1));
    }
    bool search(string word) {
       return searchUtill(root,word);
    }
      bool prefixUtill(TrieNode* root,string word){
        if(word.length()==0){
          return true;
           return;
        } int index=word[0]-'A';
        TrieNode* Child;
        if(root->children[index]!=NULL){
            Child=root->children[index];

        } else{
            return false;
        }
        return prefixUtill(root, word.substr(1));
    }
    
    bool startsWith(string prefix) {
        return prefixUtill(root,prefix);
    }
    

};
int main(){



    return 0;
}