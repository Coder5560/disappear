#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
   
    auto scene = Scene::create();
    auto layer = HelloWorld::create();

	scene->addChild(RenderLayer::getInstance()->getBackgroundLayer());
	scene->addChild(RenderLayer::getInstance()->getGameLayer());
	scene->addChild(RenderLayer::getInstance()->getHudLayer());
 
    return scene;
}

bool HelloWorld::init()
{

    if ( !Layer::init() )
    {
        return false;
    }
    

    auto sprite = Sprite::create("HelloWorld.png");

    sprite->setPosition(RenderLayer::getInstance()->getGameLayer()->getContentSize()/2);

	RenderLayer::getInstance()->getGameLayer()->addChild(sprite);
    
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
