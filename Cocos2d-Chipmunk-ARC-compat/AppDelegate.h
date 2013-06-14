//
//  AppDelegate.h
//  Cocos2d-Chipmunk-ARC-compat
//
//  Created by Tyler Zetterstrom on 2013-06-14.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//


#import "cocos2d.h"
@class Sample;

@interface Cocos2d_Chipmunk_ARC_compatAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*__weak window_;
	CCGLView	*__weak glView_;
}

@property (weak) IBOutlet NSWindow	*window;
@property (weak) IBOutlet CCGLView	*glView;
@property (nonatomic, strong, readwrite)Sample *sample;

- (IBAction)toggleFullScreen:(id)sender;

@end
