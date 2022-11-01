#pragma once
#ifndef _SORT_
#define _SORT_
#include <string>
using namespace std;
#define MAXSIZE 20
typedef string InfoType;

typedef struct RedType{
	int key;
	InfoType otherInfo;
}RedType; // record type

typedef struct Sqlist {
	RedType r[MAXSIZE + 1];
	int length;
}Sqlist;

typedef struct LinkedNode { // 单链表数据结构
	int val;
	struct LinkedNode* next;
	LinkedNode(int val) :val(val), next(nullptr) {}
}LinkedNode, *LinkedList;

// 直接插入排序 为元素确定插入位置
void InsertSort(int* arr, int size) { // 升序排列
	int temp, i, j; // temp临时变量存储当前需要找位置的元素
	for (i = 1; i < size; ++i) {
		if (arr[i] < arr[i - 1]) { // 如果当前的元素比前一个元素还小，说明这个元素要排在前一个元素之前
			temp = arr[i];
			for (j = i - 1; temp < arr[j]; --j) { // 查找是否还有比当前元素大的元素 
					arr[j + 1] = arr[j];// 如果有则往后移
			}
			arr[j + 1] = temp;
		}
	}
}

// 折半插入排序
void BinaryInsertSort(int* arr, int size) {
	
}

// 希尔排序
void ShellSort(int* arr, int size) {
	int i, j, dk, temp;
	for (dk = size / 2; dk >= 1; dk /= 2) { // 控制每次排序的步长,即在直接插入排序的基础上，使部分有序，减少移动、比较次数
		for (i = dk; i < size; ++i) {
			if (arr[i] < arr[i - dk]) {
				temp = arr[i];
				for (j = i - dk; temp < arr[j] && j >= 0; j -= dk) {
					arr[j + dk] = arr[j];
				}
				arr[j + dk] = temp;
			}
		}
	}
}

// 快速排序


// 简单选择排序


#endif // !_SORT_
