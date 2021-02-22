#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include "student.h"
using namespace std;

class BinarySearchTree
{
private:
    struct tree_node
    {
        tree_node* left;
        tree_node* right;
        //treeType data;
        Student data;

    };
    tree_node* root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    bool isEmpty() const { return root == NULL; }
    void print_inorder();
    void inorder(tree_node*);
    void insert(Student);
};
 void fillTree(BinarySearchTree* b);