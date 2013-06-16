//
//  KOBattleScene.h
//  Knockout
//
//  Created by Carlos Paelinck on 6/12/13.
//  Copyright (c) 2013 Carlos Paelinck. All rights reserved.
//

@import SpriteKit;

#import "KOCharacterNode.h"

@interface KOBattleScene : SKScene <SKPhysicsContactDelegate>

@property (nonatomic) KOCharacterNode *playerNode;

-(void)createPlayerCharacter:(id)sender;
-(void)createOpponents:(id)sender;

@end