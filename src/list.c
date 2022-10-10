#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}



int size(node *l){
// Excercise 3b) 
//pre: points to the first, empty element. The last element's next is NULL.
//post: returns number of counter variable equal to elements in list.
node *p = l; //node struct is defined to input of function.
int i=0;//counter variable is written, and defined as zero.
while(p->next!=NULL) //while loop runs until input node is NULL.
{

p = p->next; //next node is defined and ready to be checked
i++; //counter adds 1 every loop
}
return i;//number of elements is returned.
}



void printout(node *l) {//done
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/

    node *p = l->next;//node struct is defined to input of function.
    while (p!=NULL){
      printf("%d, ",p->data);//prints int variable "data" of node struct.
      p=p->next;//p points to next input of function, which is printed 
    }
    printf("\n");//adds a new line after values of list are printed.
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
      node *p =l->next;//node struct is defined to input of function
      int largest= p->data; //variable which finds largest int number of list is defined to first number of list.
      for(int i;p->next!=NULL;i++)//checks numbers in elements, until element=NULL, when the last elements next is NULL.
      {

      if(largest<p->data) //is number in list is greater than largest variable largest gets redefined to number in list.
      {
        largest=p->data;//largest gets redefined to number in list.
      }

      p = p->next;//points to next element, which is checked in loop.
}
    return largest; 
}

