//
//  FPTouchView.h
//  FPPopoverDemo
//
//  Created by Alvise Susmel on 4/16/12.
//  Copyright (c) 2012 Fifty Pixels Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^FPTouchedOutsideBlock)();
typedef void (^FPTouchedInsideBlock)();

@interface FPTouchView : UIView
{
    FPTouchedOutsideBlock _outsideBlock;
    FPTouchedInsideBlock  _insideBlock;
}

-(void)setTouchedOutsideBlock:(FPTouchedOutsideBlock)outsideBlock;

-(void)setTouchedInsideBlock:(FPTouchedInsideBlock)insideBlock;

@end
