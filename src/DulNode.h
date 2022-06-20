#ifndef CIRCULATEBIDIRECTIONALLINKEDLIST_H
#define CIRCULATEBIDIRECTIONALLINKEDLIST_H

#include<iostream>
#include <memory>

class DulNode{
public:
	DulNode(std::string contentt);
	void printContent(int mode);
	DulNode* getPrev();
	DulNode* getNext();
	DulNode* getCrnt();
	void movPrev();
	void movNext();
	void addNodeAfterCurrent(std::string contentt);
	void deleteCurrentNode();
private:
	std::string content;
	DulNode* pCrnt;
	DulNode* pPrev;
	DulNode* pNext;
};

#endif // !CIRCULATEBIDIRECTIONALLINKEDLIST_H
