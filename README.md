Cocos2d-LeapMotion
==================

Cocos2d-LeapMotion

This repo is meant to put template projects to get people started quickly or solve problems with getting Cocos2d up and running with Leap Motion integration.

To start with is a project for:
- OS X, XCode (Tested on OS X 10.8.4 and Xcode 4.6.2)
- using ARC (Automated Reference Counting); this version of cocos2d defaults to non-ARC so the main purpose of this template is to bypass the need for repeating getting Cocos2d prepared for a Leap project that uses ARC, which the Sample Leap project does.
- v2.0 of Cocos2d 
- Box2d (just found out it is planned to be discontinued in v2.1 of Cocos2d, solely supporting Chipmunk thereafter)

To not use the template, the steps I have followed to create the template are:

1. Perform all the steps in the following (selecting static library in step 9 for latest versions of XCode): http://www.learn-cocos2d.com/2012/04/enabling-arc-cocos2d-project-howto-stepbystep-tutorialguide/
2. Building Settings for Application Target:
 - C++ Language Dialect forced to GNU++11 (-std=gnu++11)
 - C++ Standard Library (GNU C++ standard library)
3. Build Phases for Application Target:
 - Click "Add Build Phase" and select "Add Copy Files"
 - Set "Destination" to "Executables"
 - Click "+" button and find the leap library "libLeap.dylib"
4. Change name of project (clicking on blue project name in files navigator), accepting all changes.
