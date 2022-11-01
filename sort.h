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

typedef struct LinkedNode { // ���������ݽṹ
	int val;
	struct LinkedNode* next;
	LinkedNode(int val) :val(val), next(nullptr) {}
}LinkedNode, *LinkedList;

// ֱ�Ӳ������� ΪԪ��ȷ������λ��
void InsertSort(int* arr, int size) { // ��������
	int temp, i, j; // temp��ʱ�����洢��ǰ��Ҫ��λ�õ�Ԫ��
	for (i = 1; i < size; ++i) {
		if (arr[i] < arr[i - 1]) { // �����ǰ��Ԫ�ر�ǰһ��Ԫ�ػ�С��˵�����Ԫ��Ҫ����ǰһ��Ԫ��֮ǰ
			temp = arr[i];
			for (j = i - 1; temp < arr[j]; --j) { // �����Ƿ��бȵ�ǰԪ�ش��Ԫ�� 
					arr[j + 1] = arr[j];// �������������
			}
			arr[j + 1] = temp;
		}
	}
}

// �۰��������
void BinaryInsertSort(int* arr, int size) {
	
}

// ϣ������
void ShellSort(int* arr, int size) {
	int i, j, dk, temp;
	for (dk = size / 2; dk >= 1; dk /= 2) { // ����ÿ������Ĳ���,����ֱ�Ӳ�������Ļ����ϣ�ʹ�������򣬼����ƶ����Ƚϴ���
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

// ��������


// ��ѡ������


#endif // !_SORT_
