#include <iostream>
#include <vector>
using namespace std;
//setting the character size of our trie data structure
 const int CHAR_SIZE=26;
 // creating the nodes for our trie
  struct TrieNode{

    bool isLeaf;
    //the vector represents the children in the trie node
    vector<TrieNode*> children;
    TrieNode(){
        isLeaf=false;
        // the resize function dynamically allocates memory based on the character size 
        children.resize(CHAR_SIZE,nullptr);
    }
  };
  // the class that implements the trie data structure
  class Trie{
// a pointer variable that represents the root node of the trie
TrieNode* root;
public:
// the constructor that creates the trienode  when the trie class gets called

Trie(){
    root=new TrieNode();

}
// the method in the trie data structure that lets it possible to add a word to the trie
void insert(const string& word);
// the method looks for a word in the trie
bool search(const string& word);
// implementing the insert function it takes in the word and inserts it into the tree node vector
void Trie::insert(const string& word){
  // the pointer variable in the treenode struct is created and it is assigned to the root variable in the trie class
  TrieNode*current=root;
    // we loop through every character in the word 
  for (char ch:word){
    
int index=ch-'a';

if (current->children[index]==nullptr){
  current->children[index]=new TrieNode();
}
current=current->children[index];
  }

}

  };