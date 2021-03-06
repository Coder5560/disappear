#pragma once
#include "cocos2d.h"

USING_NS_CC;

class RenderLayer
{
public:
	RenderLayer();
	~RenderLayer();
	static RenderLayer* getInstance();
	Node* createHudNode();
	Node* createGameNode();
	Node* createBackgroundNode();

	Layer* getBackgroundLayer();
	Layer* getGameLayer();
	Layer* getHudLayer();

	void resetAll();
private :
	
	Size winSize;
	Layer* gameLayer;
	Layer* hudLayer;
	Layer* backgroundLayer;
};

