//
//  HelloWorldLayer.h
//  Cocos2d-box2d-arc-compatible
//
//  Created by Tyler Zetterstrom on 2013-06-14.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
	CCTexture2D *spriteTexture_;	// weak ref
	b2World* world;					// strong ref
	GLESDebugDraw *m_debugDraw;		// strong ref
}
@end


@interface PhysicsSprite : CCSprite
{
	b2Body *body_;	// strong ref
}
-(void) setPhysicsBody:(b2Body*)body;
@end