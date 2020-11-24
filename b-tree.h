#include <iostream>

class BTreeNode
{
    private:
        int *keys;
        int numKeys;
        int m;
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

        //Search Function
        //Insert Function

         BTree(int _m)
        {  root = NULL;  m = _m; }


        void traverse()
        {  if (root != NULL) root->traverse(); }


        BTreeNode* search(int key)
        {  return (root == NULL)? NULL : root->search(key); }

};