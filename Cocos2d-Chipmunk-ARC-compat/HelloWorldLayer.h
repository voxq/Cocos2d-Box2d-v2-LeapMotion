//
//  HelloWorldLayer.h
//  Cocos2d-Chipmunk-ARC-compat
//
//  Created by Tyler Zetterstrom on 2013-06-14.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//



// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// Importing Chipmunk headers
#import "chipmunk.h"

@interface HelloWorldLayer : CCLayer
{
	CCTexture2D *spriteTexture_; // weak ref
	
	cpSpace *space_; // strong ref
	
	cpShape *walls_[4];
}
@end


@interface PhysicsSprite : CCSprite
{
	cpBody *body_;	// strong ref
}

-(void) setPhysicsBody:(cpBody*)body;

@end