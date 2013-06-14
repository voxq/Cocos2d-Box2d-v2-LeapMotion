//
//  AppDelegate.h
//  Cocos2d-box2d-arc-compatible
//
//  Created by Tyler Zetterstrom on 2013-06-14.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//

#import "cocos2d.h"

@class Sample;

@interface Cocos2d_box2d_arc_compatibleAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*__weak window_;
	CCGLView	*__weak glView_;
}

@property (weak) IBOutlet NSWindow	*window;
@property (weak) IBOutlet CCGLView	*glView;
@property (nonatomic, strong, readwrite)Sample *sample;

- (IBAction)toggleFullScreen:(id)sender;

@end
