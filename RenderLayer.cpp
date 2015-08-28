#include "RenderLayer.h"

RenderLayer* instance = nullptr;

RenderLayer::RenderLayer()
{
	winSize = Director::getInstance()->getWinSize();
	backgroundLayer = Layer::create();
	backgroundLayer->setContentSize(winSize);
	gameLayer = Layer::create();
	gameLayer->setContentSize(winSize);
	hudLayer = Layer::create();
	hudLayer->setContentSize(winSize);

}


RenderLayer::~RenderLayer(){}

RenderLayer* RenderLayer::getInstance(){
	if (instance == nullptr){
		instance = new RenderLayer();
	}
	return instance;
}
Node* RenderLayer::createHudNode(){
	Node* node = Node::create();
	hudLayer->addChild(node);
	return node;
}

Node* RenderLayer::createGameNode(){
	Node* node = Node::create();
	gameLayer->addChild(node);
	return node;
}

Node* RenderLayer::createBackgroundNode(){
	Node* node = Node::create();
	backgroundLayer->addChild(node);
	return node;
}

Layer* RenderLayer::getBackgroundLayer(){
	return backgroundLayer;
}
Layer* RenderLayer::getGameLayer(){
	return gameLayer;
}
Layer* RenderLayer::getHudLayer(){
	return hudLayer;
}


void RenderLayer::resetAll(){
	winSize = Director::getInstance()->getWinSize();
	backgroundLayer = Layer::create();
	backgroundLayer->setContentSize(winSize);
	gameLayer = Layer::create();
	gameLayer->setContentSize(winSize);
	gameLayer->ignoreAnchorPointForPosition(false);
	hudLayer = Layer::create();
	hudLayer->setContentSize(winSize);
}