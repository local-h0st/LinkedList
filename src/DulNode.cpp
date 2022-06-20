#include"DulNode.h"

DulNode::DulNode(std::string contentt) {
	this->content = contentt;
	this->pCrnt = this;
	this->pNext = this->pCrnt;
	this->pPrev = this->pCrnt;
}

void DulNode::addNodeAfterCurrent(std::string contentt) {
	this->pNext->pPrev = new DulNode(contentt);
	this->pNext->pPrev->pPrev = this;
	this->pNext->pPrev->pNext = this->pNext;
	this->pNext = this->pNext->pPrev;
}

void DulNode::printContent(int mode = 0){
		std::cout<<this->content<<std::endl;
	if(mode == 1)
		std::cout<<"this->pPrev : "<<this->pPrev<<std::endl;
		std::cout<<"this->pCrnt : "<<this->pCrnt<<std::endl;
		std::cout<<"this->pNext : "<<this->pNext<<std::endl;

}

DulNode* DulNode::getPrev(){
	return this->pPrev;
}

DulNode* DulNode::getNext(){
	return this->pNext;
}

DulNode* DulNode::getCrnt(){
	return this->pCrnt;
}

void DulNode::movPrev(){
	this->content = this->pPrev->content;
	this->pNext = this->pCrnt;
	this->pCrnt = this->pPrev;
	this->pPrev = this->pPrev->pPrev;
}

void DulNode::movNext(){
	this->content = this->pNext->content;
	this->pPrev = this->pCrnt;
	this->pCrnt = this->pNext;
	this->pNext = this->pNext->pNext;
}