//
//  headerView.h
//  网易滚动视图
//
//  Created by 蕾 on 15/10/16.
//  Copyright © 2015年 丛蕾. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CLHeaderView;

@protocol CLHeaderViewDelegate <NSObject>

- (void) headerView: (CLHeaderView*)header selectedIndexChanged: (NSUInteger) index;

@end

@interface CLHeaderView : UIScrollView

@property (nonatomic, weak) NSArray * sectionArray;
@property (nonatomic) NSUInteger selectedIndex;

@property (nonatomic, weak) id<CLHeaderViewDelegate> delegates;
@property (nonatomic,strong)NSArray * headerArray;

+ (CLHeaderView *)creatHeaderView;
- (void) setSelectedIndexAnimated:(NSUInteger)selectedIndex;
@end


