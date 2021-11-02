//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "arrayqueue.h"
//
//ArrayQueue* createArrayQueue(int maxElementCount) {
//	ArrayQueue* pReturn = NULL;
//	int i = 0;
//
//	if (maxElementCount > 0) {
//		pReturn = (ArrayQueue*)malloc(sizeof(ArrayQueue));
//		if (pReturn != NULL) {
//			memset(pReturn, 0, sizeof(ArrayQueue));
//			pReturn->maxElementCount = maxElementCount;
//			pReturn->front = -1;
//			pReturn->rear = -1;
//		}
//		else {
//			printf("Memory Error for createArrayQueue()\n");
//			return NULL;
//		}
//	}
//	else {
//		printf("Error. Under flow for Queue\n");
//		return NULL;
//	}
//	pReturn->pElement = (ArrayQueueNode*)malloc(sizeof(ArrayQueueNode) * maxElementCount);
//	if (pReturn->pElement != NULL) {
//		memset(pReturn->pElement, 0l, sizeof(ArrayQueueNode) * maxElementCount);
//	}
//	else {
//		printf("Memory Error2 for createArrayQueue()\n");
//		free(pReturn);
//		return NULL;
//	}
//	return pReturn;
//}
//
//int enqueueAQ(ArrayQueue* pQueue, ArrayQueueNode element) {
//	int ret = FALSE;
//	int i = 0;
//
//	if (pQueue != NULL) {
//		if (isArrayQueueFull(pQueue) == FALSE) {
//			pQueue->rear++;
//			pQueue->pElement[pQueue->rear] = element;
//			pQueue->currentElementCout++;
//			ret = TRUE;
//		}
//		else {
//			printf("Stack is Full\n");
//		}
//	}
//}
//
//ArrayQueueNode* dequeueAQ(ArrayQueue* pQueue) {
//	ArrayQueueNode* pReturn = NULL;
//	if (pQueue != NULL) {
//		if (isArrayQueueEmpty(pQueue) == FALSE) {
//			pReturn = (ArrayQueueNode*)malloc(sizeof(ArrayQueueNode));
//			if (pReturn != NULL) {
//				pQueue->front++;
//				pReturn->element = pQueue->pElement[pQueue->front].element;
//				pQueue->currentElementCout--;
//			}
//			else {
//				printf("Memory Error for dequeueAQ()\n");
//			}
//		}
//	}
//
//	return pReturn;
//}
//
//ArrayQueueNode* peekAQ(ArrayQueue* pQueue) {
//	ArrayQueueNode* pReturn = NULL;
//	if (pQueue != NULL) {
//		if (isArrayQueueEmpty(pQueue) == FALSE) {
//			pReturn = &(pQueue->pElement[pQueue->front + 1]);
//		}
//	}
//
//	return pReturn;
//}
//
//void deleteArrayQueue(ArrayQueue* pQueue) {
//	if (pQueue != NULL) {
//		if (pQueue->pElement != NULL) {
//			free(pQueue->pElement);
//		}
//		free(pQueue);
//	}
//}
//
//int isArrayQueueFull(ArrayQueue* pQueue) {
//	int ret = FALSE;
//	if (pQueue != NULL) {
//		if (pQueue->currentElementCout == pQueue->maxElementCount || pQueue->rear == pQueue->maxElementCount - 1) {
//			ret = TRUE;
//		}
//	}
//
//	return ret;
//}
//
//int isArrayQueueEmpty(ArrayQueue* pQueue) {
//	int ret = FALSE;
//	if (pQueue != NULL) {
//		if (pQueue->currentElementCout == 0) {
//			ret = TRUE;
//		}
//	}
//
//	return ret;
//}