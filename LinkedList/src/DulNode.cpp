#include"DulNode.h"

DulNode::DulNode(std::string contentt) {
	this->content = contentt;
	this->pCrnt = std::shared_ptr<DulNode>(this);
	this->pNext = this->pCrnt;
	this->pPrev = this->pCrnt;
}

void DulNode::addNodeAfterCurrent(std::string contentt) {
	this->pNext->pPrev = std::make_shared<DulNode>(contentt);
	this->pNext->pPrev->pPrev = std::shared_ptr<DulNode>(this);
	this->pNext->pPrev->pNext = this->pNext;
	this->pNext = this->pNext->pPrev;
}

void DulNode::printContent(){
	std::cout<<this->content<<std::endl;
}