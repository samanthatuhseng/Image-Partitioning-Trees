/*
*  File:        ptree-private.h
*  Description: Private functions for the PTree class
*  Date:        2022-03-06 03:30
*
*               DECLARE YOUR PTREE PRIVATE MEMBER FUNCTIONS HERE
*/

#ifndef _PTREE_PRIVATE_H_
#define _PTREE_PRIVATE_H_

/////////////////////////////////////////////////
// DEFINE YOUR PRIVATE MEMBER FUNCTIONS HERE
//
// Just write the function signatures.
//
// Example:
//
// Node* MyHelperFunction(int arg_a, bool arg_b);
//
/////////////////////////////////////////////////

void drawPNG(Node* node, PNG& png) const;

HSLAPixel averageColor(PNG& im, pair<unsigned int, unsigned int> ul, unsigned int w, unsigned int h);

Node* copyNode(Node* node);

void Clear(Node* subroot);

int subSize(Node* subroot) const;

int subLeaves(Node* subroot) const;

void pruner(Node* node, double tolerance);

bool prunable(Node* original, Node* node, double tolerance);

void flipHorizontal(Node* node);

void flipVertical(Node* node);

#endif