//#include <stdio.h>
//#include <stdlib.h>
//#include "circulararrayqueue.h"
//
//void displayArrayQueue(ArrayQueue* pQueue) {
//	int i = 0;
//	int maxElementIndex = 0;
//	int pos = 0;
//
//	if (pQueue != NULL) {
//		printf("Size of Queue : %d, Number of current Nodes : %d\n", pQueue->maxElementCount, pQueue->currentElementCount);
//
//		maxElementIndex = pQueue->front + pQueue->currentElementCount;
//		for (i = pQueue->front + 1; i <= maxElementIndex; i++) {
//			pos = i % pQueue->maxElementCount;
//			printf("[%d] => [%c]\n", pos, pQueue->pElement[pos].element);
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
//		enqueueAQChar(pQueue, 'F');
//		displayArrayQueue(pQueue);
//	}
//	return 0;
//}