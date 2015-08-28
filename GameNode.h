#pragma once
#include "Definition.h"
USING_NS_CC;
class GameNode : public Node
{
public:
	GameNode(R::NodeType nodeType,R::NodeState noteState);
	void setState(R::NodeState _ewState);
	void update(float delta);
	GameNode* findNode(R::Direction direction);

	float timeOnState;
	R::NodeState _NodeState;
	R::NodeType  _NodeType;
	std::vector<GameNode*> childrens;

};

