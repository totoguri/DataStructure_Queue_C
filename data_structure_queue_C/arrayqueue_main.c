//#include <stdio.h>
//#include <stdlib.h>
//#include "arrayqueue.h"
//
//void displayArrayQueue(ArrayQueue* pQueue) {
//	int i = 0;
//	if (pQueue != NULL) {
//		printf("Size of Queue : %d, Number of current Nodes : %d\n", pQueue->maxElementCount, pQueue->currentElementCout);
//
//		for (i = pQueue->front + 1; i <= pQueue->rear; i++) {
//			printf("[%d] => [%c]\n", i, pQueue->pElement[i].element);
//		}
//	}
//}
//
//int enqueueAQChar(ArrayQueue* pQueue, char element) {
//	ArrayQueueNode node = { 0, };
//	node.element = element;
//	return enqueueAQ(pQueue, node);
//}
//
//int main() {
//	ArrayQueue* pQueue = NULL;
//	ArrayQueueNode* pNode = NULL;
//	char value = 0;
//
//	pQueue = createArrayQueue(4);
//	if (pQueue != NULL) {
//		enqueueAQChar(pQueue, 'A');
//		enqueueAQChar(pQueue, 'B');
//		enqueueAQChar(pQueue, 'C');
//		enqueueAQChar(pQueue, 'D');
//		displayArrayQueue(pQueue);
//
//		pNode = dequeueAQ(pQueue);
//		if (pNode != NULL) {
//			printf("Dequeue Value => [%c]\n", pNode->element);
//			free(pNode);
//		}
//		displayArrayQueue(pQueue);
//
//		pNode = peekAQ(pQueue);
//		if (pNode != NULL) {
//			printf("Peek Value=>[%c]\n", pNode->element);
//		}
//		displayArrayQueue(pQueue);
//
//		enqueueAQChar(pQueue, 'E');
//		displayArrayQueue(pQueue);
//	}
//	return 0;
//}