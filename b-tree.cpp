#include "b-tree.h"

BTreeNode::BTreeNode(){
                //Set ->data to input
    this->left = nullptr;
    this->right = nullptr
                //set other middle children to null
}

BTreeNode::~BTreeNode(){
                //I dont believe anything is needed here as of right now -John
}

BTree::BTree(){
    this->root = nullptr;
}

BTreeNode::~BTree(){
                 //This is where the destroy function should be (optional)
}

