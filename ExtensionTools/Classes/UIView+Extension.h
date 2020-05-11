//
//  UIView+Extension.h
//  ExtensionTools
//
//  Created by Taylor on 2020/5/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, ZSBorderSideType) {
    ZSBorderSideTypeAll  = 0,
    ZSBorderSideTypeTop = 1 << 0,
    ZSBorderSideTypeBottom = 1 << 1,
    ZSBorderSideTypeLeft = 1 << 2,
    ZSBorderSideTypeRight = 1 << 3,
};

@interface UIView (Extension)

/// 宽
@property (nonatomic, assign) CGFloat width;

/// 高
@property (nonatomic, assign) CGFloat height;

/// x
@property (nonatomic, assign) CGFloat x;

/// y
@property (nonatomic, assign) CGFloat y;

@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
/**
 为view添加指定边的border
 @param color 线条颜色
 @param borderWidth 线条宽度
 @param borderType 类型(上下左右)
 @return 添加了指定border的view
 */
- (UIView *)borderForColor:(UIColor *)color borderWidth:(CGFloat)borderWidth borderType:(ZSBorderSideType)borderType;

/// 切圆角
/// @param radius 圆角半径
/// @param radiusType 圆角类型
-(UIView *)cornerRadiusWithValue:(CGFloat )radius radiusType:(UIRectCorner)radiusType;
@end


@interface UIView (Postion)

@property (nonatomic, assign, readonly) CGRect bt_frame;
@property (nonatomic, assign, readonly) CGPoint bt_topLeftVertex;
@property (nonatomic, assign, readonly) CGPoint bt_bottomLeftVertex;
@property (nonatomic, assign, readonly) CGPoint bt_bottomRightVertex;
@property (nonatomic, assign, readonly) CGPoint bt_topRightVertex;

- (void)bt_setAnchorPoint:(CGPoint)anchorPoint;
/// Point 仿射变换(自定义 center)
CG_EXTERN CGPoint bt_CGPointApplyAffineTransform(CGPoint origin, CGPoint point, CGAffineTransform t);

@end
NS_ASSUME_NONNULL_END
