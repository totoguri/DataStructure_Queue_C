//#include <stdio.h>
//#include <stdlib.h>
//#include "linkeddeque.h"
//
//int main() {
//	LinkedDeque* pDeque = NULL;
//	DequeNode* pNode = NULL;
//
//	pDeque = createLinkedDeque();
//	if (pDeque != NULL) {
//		insertFrontLDChar(pDeque, 'A');
//		insertFrontLDChar(pDeque, 'B');
//		insertRearLDChar(pDeque, 'C');
//		insertRearLDChar(pDeque, 'D');
//		displayLinkedDeque(pDeque);
//
//		pNode = deleteRearLD(pDeque);
//		if (pNode != NULL) {
//			printf("deleteRearLD Value of [%c]\n", pNode->data);
//			free(pNode);
//		}
//		displayLinkedDeque(pDeque);
//
//		pNode = deleteFrontLD(pDeque);
//		if (pNode != NULL) {
//			printf("deleteFrontLD Value of [%c]\n", pNode->data);
//			free(pNode);
//		}
//		displayLinkedDeque(pDeque);
//
//		deleteLinkedDeque(pDeque);
//	}
//}