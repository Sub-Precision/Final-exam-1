//
// Created by Henok on 10/12/2022.
//

#ifndef HW3_BST_H
#define HW3_BST_H

#include <algorithm>
#include <iostream>
#include <algorithm>
#include <vector>

#include "Exceptions.h"

using namespace std;

// BinarySearchTree class
//
// CONSTRUCTION: zero parameter
//
// ******************PUBLIC OPERATIONS*********************
// void _insert( x )       --> Insert x
// void _remove( x )       --> Remove x
// bool _contains( x )     --> Return true if x is present
// Comparable FindMin( )  --> Return smallest item
// Comparable FindMax( )  --> Return largest item
// boolean IsEmpty( )     --> Return true if empty; else false
// void Clear( )      --> Remove all items
// void _printTreeInorder( )      --> Print tree in sorted order
// ******************ERRORS********************************
// Throws UnderflowException as warranted


template <typename Comparable>
class BinarySearchTree
{
public:
    BinarySearchTree( ) : _root{nullptr }
    {
    }

    /**
     * Copy constructor
     */
    BinarySearchTree( const BinarySearchTree & rhs ) : _root{nullptr }
    {
        _root = _clone(rhs._root);
    }

    /**
     * Move constructor
     */
    BinarySearchTree( BinarySearchTree && rhs )  noexcept : _root{rhs._root }
    {
        rhs._root = nullptr;
    }

    /**
     * Destructor for the tree
     */
    ~BinarySearchTree( )
    {
        Clear();
    }

    /**
     * Copy assignment
     */
    BinarySearchTree & operator=( const BinarySearchTree & rhs )
    {
        BinarySearchTree copy = rhs;
        std::swap( *this, copy );
        return *this;
    }

    /**
     * Move assignment
     */
    BinarySearchTree & operator=( BinarySearchTree && rhs )
    {
        std::swap(_root, rhs._root );
        return *this;
    }


    /**
     * Find the smallest item in the tree.
     * Throw UnderflowException if empty.
     */
    const Comparable & FindMin( ) const
    {
        if(IsEmpty() )
            throw UnderflowException{ };
        return _findMin(_root)->element;
    }

    /**
     * Find the largest item in the tree.
     * Throw UnderflowException if empty.
     */
    const Comparable & FindMax( ) const
    {
        if(IsEmpty() )
            throw UnderflowException{ };

        return _findMax(_root)->element;
    }

    int Height() {
        return _height(_root);
    }

    int Depth(const Comparable& element){
        cout<<"Depth of node "<<element<<" = ";
        return _depth(_root, element);
    }

    /**
     * Returns true if x is found in the tree.
     */
    bool Contains(const Comparable & x ) const
    {
        return _contains(x, _root);
    }
    Comparable Find(const Comparable& x) const 
    {
        return _find(x, _root);
    }
//    void PartialContains(string partial) const
//    {
//        _partialContains(partial, _root)
//    }

    /**
     * Test if the tree is logically empty.
     * Return true if empty, false otherwise.
     */
    bool IsEmpty( ) const
    {
        return _root == nullptr;
    }

    /**
     * Print the tree contents in sorted order.
     */
    void PrintTree(ostream & out = cout) const
    {
        if(IsEmpty() )
            out << "Empty tree" << endl;

        else {
            cout<<"Root: "<<_root->element<<endl;//Only inorder is enough to print the output in the sorted order
            //cout<<"In-Order: ";
            _printTreeInorder(_root, out);
            cout<<endl;
            //cout<<"Pre-Order: ";
            //_printTreePreOrder(_root, out);
            //cout<<endl;
            //cout<<"Post-Order: ";
            //_printTreePostOrder(_root, out);
            //cout<<endl;
        }

        out<<endl;
    }

    /**
     * Make the tree logically empty.
     */
    void Clear( )
    {
        _makeEmpty(_root);
    }

    /**
     * Insert x into the tree; duplicates are ignored.
     */
    void Insert(Comparable & x )
    {
        _insert(x, _root);
    }

    /**
     * Insert x into the tree; duplicates are ignored.
     */
    void Insert(Comparable && x )
    {
        _insert(std::move(x), _root);
    }

    /**
     * Remove x from the tree. Nothing is done if x is not found.
     */
    void Remove(const Comparable & x )
    {
        _remove(x, _root);
    }

    vector<Comparable> getAllNodes()
    {
        vector<Comparable> list;
        return _getAllNodes(list, _root);
    }

    void Modify(const Comparable & x, const Comparable & y )
    {
        _modify(x, y, _root);
    }

private:
    struct BinaryNode
    {
        Comparable element;
        BinaryNode *left;
        BinaryNode *right;

        BinaryNode( const Comparable & theElement, BinaryNode *lt, BinaryNode *rt )
                : element{ theElement }, left{ lt }, right{ rt } { }

        BinaryNode( Comparable && theElement, BinaryNode *lt, BinaryNode *rt )
                : element{ std::move( theElement ) }, left{ lt }, right{ rt } { }
    };

    BinaryNode *_root;


    vector<Comparable> _getAllNodes(vector<Comparable> list,BinaryNode* t) const//Find fucntion to search for an element
    {
        if (t == nullptr)
            return list;
        else {

            list.push_back(t->element);
            list = _getAllNodes(list, t->left);
            list = _getAllNodes(list, t->right);

        }
        return list;

    }

    /**
     * Internal method to _insert into a subtree.
     * x is the item to _insert.
     * t is the node that roots the subtree.
     * Set the new _root of the subtree.
     */
    void _insert(const Comparable & x, BinaryNode * & t )
    {
        if( t == nullptr )
            t = new BinaryNode{ x, nullptr, nullptr };
        else if( x < t->element )
            _insert(x, t->left);
        else if( t->element < x )
            _insert(x, t->right);
        else
            ;  // Duplicate; do nothing
    }

    /**
     * Internal method to test if an item is in a subtree.
     * x is item to search for.
     * t is the node that roots the subtree.
     */
    bool _contains(const Comparable & x, BinaryNode *t ) const
    {
        if( t == nullptr )
            return false;
        else if( x < t->element )
            return _contains(x, t->left);
        else if( t->element < x )
            return _contains(x, t->right);
        else
            return true;    // Match
    }
    Comparable _find(const Comparable& x, BinaryNode* t) const//Find fucntion to search for an element
    {
        if (t == nullptr)
            return Comparable("");
        else if (x < t->element)
            return _find(x, t->left);
        else if (t->element < x)
            return _find(x, t->right);
        else
            return t->element;   
    }
//
//    void _partialSearch(string partial, BinaryNode* t) const//Find fucntion to search for an element
//    {
//        if (t == nullptr)
//            return;
//        else {
//            if t.getName
//            return _find(x, t->left);
//            return _find(x, t->right);
//        }
//
//    }

    /**
     * Internal method to make subtree empty.
     */
    void _makeEmpty(BinaryNode* & t )
    {
        if( t != nullptr )
        {
            _makeEmpty(t->left);
            _makeEmpty(t->right);
            delete t;
        }
        t = nullptr;
    }

    /**
     * Internal method to _insert into a subtree.
     * x is the item to _insert.
     * t is the node that roots the subtree.
     * Set the new _root of the subtree.
     */
    void _insert(Comparable && x, BinaryNode * & t )
    {
        if( t == nullptr )
            t = new BinaryNode{ std::move( x ), nullptr, nullptr };
        else if(static_cast<const error_code>(x) < t->element )
            _insert(std::move(x), t->left);
        else if( t->element < x )
            _insert(std::move(x), t->right);
        else
            ;  // Duplicate; do nothing
    }

    /**
     * Internal method to _remove from a subtree.
     * x is the item to _remove.
     * t is the node that roots the subtree.
     * Set the new _root of the subtree.
     */
    void _remove(const Comparable & x, BinaryNode * & t )
    {
        if( t == nullptr )
            return;   // Item not found; do nothing
        if( x < t->element )
            _remove(x, t->left);
        else if( t->element < x )
            _remove(x, t->right);
        else if( t->left != nullptr && t->right != nullptr ) // Two children
        {
            t->element = _findMin(t->right)->element;
            _remove(t->element, t->right);
        }
        else
        {
            BinaryNode *oldNode = t;
            t = ( t->left != nullptr ) ? t->left : t->right;
            cout << "The entry has been removed." << endl;
            delete oldNode;
        }
    }


    void _modify(const Comparable & x, const Comparable & y, BinaryNode * & t )
    {
        if( t == nullptr )
            return;   // Item not found; do nothing
        if( x < t->element )
            _modify(x, y, t->left);
        else if( t->element < x )
            _modify(x, y,t->right);
        else{
            t->element = y;
        }
    }

    /**
     * Internal method to _clone subtree.
     */
    BinaryNode * _clone(BinaryNode *t ) const
    {
        if( t == nullptr )
            return nullptr;
        else
            return new BinaryNode{t->element, _clone(t->left), _clone(t->right) };
    }


    /**
    Add the following methods to the BinarySearchTree class.
	Add an implementation of _findMax and _findMin private methods
    to find the maximum and minimum items of the tree respectively.
	Implement pre-order, post-order and in-order traversal private methods.
    Call each method in the public interface called PrintTree.
	Write a method that computes the height of the tree.
	Write a method the computes the depth of a given node.
	Inside main, construct the following tree and demonstrate each method.
    **/

    /**
     * Internal method to GetHashValue the smallest item in a subtree t.
     * Return node containing the smallest item.
     */
    BinaryNode * _findMin(BinaryNode *t ) const
    {
        //if the node is empty, end
        if(t == nullptr){
            return nullptr;
        }
        //if the left-most node is empty return the last node in the sequence
        if (t->left == nullptr)
            return t;
        //find the value of the left-most node
        return _findMin(t->left);
    }

    /**
     * Internal method to GetHashValue the largest item in a subtree t.
     * Return node containing the largest item.
     */
    BinaryNode * _findMax(BinaryNode *t ) const
    {
        //if the node is empty, end
        if(t == nullptr){
            return nullptr;
        }
        //if the right-most node is empty return the last node in the sequence
        if (t->right == nullptr)
            return t;
        //find the value of the right-most node (this will always be the max in a BST.)
        return _findMax(t->right);
    }



    /**
     * Internal method to print a subtree rooted at t in sorted order.
     */
    void _printTreeInorder(BinaryNode *t, ostream & out ) const
    {
        //if the node is empty, end
        if (t == NULL)
            return;
        //move to left of tree
        _printTreeInorder(t->left, cout);
        //print out the value of t
        cout << t->element << " ";
        //move to the right of the tree
        _printTreeInorder(t->right, cout);

    }

    void _printTreePostOrder(BinaryNode *t, ostream& out) const{
        //If the node is empty end
        if (t == NULL)
            return;

        //use recursion on the left subtree
        _printTreePostOrder(t->left, cout);

        //use recursion on the right subtree
        _printTreePostOrder(t->right, cout);

        //print out the value of t
        cout << t->element << " ";

    }

    void _printTreePreOrder(BinaryNode *t, ostream& out) const{
        //If the node is empty end
        if (t == NULL)
            return;
        //print out the value of t
        cout << t->element << " ";
        //use recursion on the left subtree
        _printTreePreOrder(t->left, cout);
        //use resursion on the right subtree
        _printTreePreOrder(t->right, cout);
    }


    int _height(BinaryNode* t) {

        int h = 0;
        if (t == NULL)
            return 0;
        //check height of left nodes
        int left = _height(t->left);
        //check height of right nodes
        int right = _height(t->right);
        //if the height is more on the left
        if (left > right)
            //use left value plus one
            h = left + 1;
            //ifi the height is more on the right
        else
            //use right value plus one
            h = right + 1;

        return h;
    }
};

#endif //HW3_BST_H
