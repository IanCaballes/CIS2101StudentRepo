#ifndef tree
#include <stdbool.h>

typedef struct{
	int day, month, year;
} Date;

typedef struct{
	char prodName[20];
	float prodPrice;
	int prodQty;
	Date expDate;
} Product;

typedef struct node{
	Product item;
	struct node *left, *right;
} NodeType, *NodePtr;

void initialize(NodePtr *node);
void addProd(Product input, NodePtr *node);
void deleteProd(Product input, NodePtr *node);
void traverseBFS(NodePtr *node);
void traverseDFSin(NodePtr *node);
void traverseDFSpost(NodePtr *node);
void traverseDFSpre(NodePtr *node);

#endif
