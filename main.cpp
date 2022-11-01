#include <iostream>
#include "sort.h"

int main() {
	int arr[] = { 8,4,2,7,3,4,9,10,23,76 }; // 建立数组
	int size = sizeof(arr) / sizeof(int);
	LinkedList linkedList = new LinkedNode(0);
	LinkedNode* p = linkedList;
	for (int i = 0; i < size; ++i) { // 建单链表
		p->next = new LinkedNode(arr[i]);
		p = p->next;
	}
	// ---------------------------------------------
	//InsertSort(arr, size);
	ShellSort(arr, size);
	printf("length = %d\n", size);
	for (int i = 0; i < size; ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}