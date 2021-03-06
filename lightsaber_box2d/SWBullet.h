//
//  SWBullet.h
//  lightsaber
//
//  Created by Lion User on 10/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "SWLightsaber.h"
#import "SWUtility.h"

@interface SWBullet : NSObject
{
    bool isOut;
    
    CCSprite* sprite;
    
    // Pointer to level layer
    CCLayer* layer;
    
    // Pointer to lightsaber
    SWLightsaber* lightsaber;
    
    // Pointer to bullet pool
    NSMutableArray* bulletPool;
    
    double speed;
    
    CGPoint direction;
}

@property(assign) bool isOut;
@property(assign) CCSprite* sprite;

-(void)initAtPosition:(CGPoint)pos WithLayer:(CCLayer*)pLayer WithLightsaber:(SWLightsaber*)pLightsaber WithBulletPool:(NSMutableArray*)pBulletPool spriteTag:(int)tag;
-(void)moveAction;
-(void)deflectedMove;

@end
