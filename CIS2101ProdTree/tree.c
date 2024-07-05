#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


void addProd(Product input, NodePtr * node){
	NodePtr newnode = NULL;
	newnode = malloc(sizeof(NodeType));
	
	newnode->item = input;
	
	if(node != NULL){
		for(*node; &node != NULL;){
			if(strcmp(*node->item.prodName, newnode->item.prodName) <= 0){
				if(*node->left == NULL){
					*node->left = newnode;
					*node->right = NULL;
				}
				else{
					*node = &(*node)->left;
				}
			}
			else if(strcmp(node->item.prodName, newnode->item.prodName) > 0){
				node->right = newnode;
				node->left = NULL;
			}	
		}
	}
	else{
		printf("No root detected. Inserting as root.\n");
		newnode->left = NULL;
		newnode->right = NULL;
	}
}

void deleteProd(Prod input, NodePtr * node){
	
}

void traverseBFS(NodePtr * node){
	
}

void traverseDFSin(NodePtr * node){
	
}

void traverseDFSpost(NodePtr * node){
	
}

void traverseDFSpre(NodePtr * node){
	
}

