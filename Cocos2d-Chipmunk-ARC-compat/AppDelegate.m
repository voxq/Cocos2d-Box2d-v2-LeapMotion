//
//  AppDelegate.m
//  Cocos2d-Chipmunk-ARC-compat
//
//  Created by Tyler Zetterstrom on 2013-06-14.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//

#import "AppDelegate.h"
#import "HelloWorldLayer.h"
#import "Sample.h"

@implementation Cocos2d_Chipmunk_ARC_compatAppDelegate
@synthesize window=window_, glView=glView_;
@synthesize sample = _sample; // must retain for notifications

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    _sample = [[Sample alloc]init];
    [_sample run];

	CCDirectorMac *director = (CCDirectorMac*) [CCDirector sharedDirector];
	
	// enable FPS and SPF
	[director setDisplayStats:YES];
	
	// connect the OpenGL view with the director
	[director setView:glView_];

	// EXPERIMENTAL stuff.
	// 'Effects' don't work correctly when autoscale is turned on.
	// Use kCCDirectorResize_NoScale if you don't want auto-scaling.
	[director setResizeMode:kCCDirectorResize_AutoScale];
	
	// Enable "moving" mouse event. Default no.
	[window_ setAcceptsMouseMovedEvents:NO];
	
	// Center main window
	[window_ center];
	
	CCScene *scene = [CCScene node];
	[scene addChild:[HelloWorldLayer node]];
	
	[director runWithScene:scene];
}

- (BOOL) applicationShouldTerminateAfterLastWindowClosed: (NSApplication *) theApplication
{
	return YES;
}

- (void)dealloc
{
	[[CCDirector sharedDirector] end];
}

#pragma mark AppDelegate - IBActions

- (IBAction)toggleFullScreen: (id)sender
{
	CCDirectorMac *director = (CCDirectorMac*) [CCDirector sharedDirector];
	[director setFullScreen: ! [director isFullScreen] ];
}

@end
