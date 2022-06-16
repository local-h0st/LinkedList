#ifndef CIRCULATEBIDIRECTIONALLINKEDLIST_H
#define CIRCULATEBIDIRECTIONALLINKEDLIST_H

#include<iostream>
#include <memory>

class DulNode{
public:
	DulNode(std::string contentt);
	void printContent();
	std::shared_ptr<DulNode> getPrev();
	std::shared_ptr<DulNode> getNext();
	void movPrev();
	void movNext();
	void addNodeAfterCurrent(std::string contentt);
	void deleteCurrentNode();
private:
	std::string content;
	std::shared_ptr<DulNode> pCrnt;
	std::shared_ptr<DulNode> pPrev;
	std::shared_ptr<DulNode> pNext;
};

#endif // !CIRCULATEBIDIRECTIONALLINKEDLIST_H
