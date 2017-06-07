#include "linkedListFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveNums[5]={42,57,61,3,-8};


  LinkedList *list = arrayToLinkedList(fiveNums,5);
  assertEquals( "[42]->[57]->[61]->[3]->[-8]->null", 
		linkedListToString(list),
		"linkedListToString(list)");
  
  assertEquals( 5, 
		countListElements(list),
		"countLinkedList(list)");
  freeLinkedList(list);
  
  int empty[0]={};
  LinkedList *emptyList = arrayToLinkedList(empty,0);
  assertEquals( 0, 
		countListElements(emptyList),
		"countLinkedList(emptyList)");
   
  freeLinkedList(emptyList);

  int singleton[]={12};
  LinkedList *singletonList = arrayToLinkedList(singleton,1);
  assertEquals( 1, 
		countListElements(singletonList),
		"countLinkedList(singleton)");

  freeLinkedList(singletonList);
  
  return 0;
}
