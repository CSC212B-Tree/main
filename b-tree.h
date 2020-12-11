#include <iostream>
#include <string>
class BTreeNode
{
    private:
        int *keys;          // This might be needed to change into an array, so each node as an array of nodes
        int numKeys;
        int m;
        BTreeNode* right;
        BTreeNode* left;
                            //Include a line that takes into consideration the children between left and right most childs


        bool leaf;
        BTreeNode **C;

    public:
        BTreeNode();        //Constructor
                            //BTreeNode(parameter) Dont know the parameter yet
        ~BTreeNode();       //Deconstructor

    friend class BTree;
};

class BTree
{
    private:
        BTreeNode *root:
        int m;

    public:
        BTree();        //Constructor, I dont believe we need a param constructor
        ~BTree();       //Deconstructor

        int Search(std::string a);
        void insert(std::string a);
        //Insert Function

         BTree(int _m)
        {  root = NULL;  m = _m; }


        void traverse()
        {  if (root != NULL) root->traverse(); }


        BTreeNode* search(int key)
        {  return (root == NULL)? NULL : root->search(key); }

};
