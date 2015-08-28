#include "GameNode.h"

GameNode::GameNode(R::NodeType nodeType, R::NodeState nodeState) : _NodeType(nodeType),_NodeState(nodeState) {

}
void GameNode::update(float delta){
}
void GameNode::setState(R::NodeState newState){
	this->_NodeState = newState;
	this->timeOnState = 0;
	switch (_NodeState){
	case  R::NodeState::EMPTY :
		break;
	case  R::NodeState::EMPTY_SUGGEST:
		break;
	case  R::NodeState::FILL:
		break;
	case  R::NodeState::FILL_MOVING:
		break;

	}


}
