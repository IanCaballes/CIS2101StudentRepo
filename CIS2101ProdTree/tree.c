#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


void addProd(Product input, NodePtr * node){
	NodePtr newnode = NULL;
	NodePtr trav;
	trav = *node;
	newnode = malloc(sizeof(NodeType));
	
	newnode->item = input;
	newnode->left = NULL;
    newnode->right = NULL;
    
    if (*node == NULL) {
    	printf("No root detected. Inserting as root.\n");
        *node = newnode;
        return;
    }
    
	for(trav; trav != NULL;){
		if(strcmp(input.prodName, trav->item.prodName) <= 0){
			trav = trav->left;
		}
		else{
			trav = trav->right;
		}	
	}

	if(strcmp(input.prodName, newnode->item.prodName) <= 0){
		trav = trav->left;
	}
	else{
		trav = trav->right;
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

