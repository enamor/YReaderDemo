//
//  YReaderView.h
//  YReaderDemo
//
//  Created by yanxuewen on 2016/12/13.
//  Copyright © 2016年 yxw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YReaderView : UIView

@property (strong, nonatomic) NSAttributedString *content;
@property (strong, nonatomic) NSAttributedString *sourceAttributedString;
@property (assign, nonatomic) CTFrameRef contentFrame;
- (void)updateSpeakString:(NSString *)string;

@end
