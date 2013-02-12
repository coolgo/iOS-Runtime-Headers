/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface UIKeyboardEmojiCategoriesControl_iPad : UIKeyboardEmojiCategoriesControl {
    UIImage *categoryKeyHighlightedImage;
    UIImage *categoryKeyImage;
    UIImage *dividerHighlightedImage;
    UIImage *dividerImage;
}

@property(retain) UIImage * categoryKeyHighlightedImage;
@property(retain) UIImage * categoryKeyImage;
@property(retain) UIImage * dividerHighlightedImage;
@property(retain) UIImage * dividerImage;

- (id)categoryKeyHighlightedImage;
- (id)categoryKeyImage;
- (void)dealloc;
- (id)dividerHighlightedImage;
- (id)dividerImage;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDivider:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForSegment:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)releaseImagesAndViews;
- (void)setCategoryKeyHighlightedImage:(id)arg1;
- (void)setCategoryKeyImage:(id)arg1;
- (void)setDividerHighlightedImage:(id)arg1;
- (void)setDividerImage:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateSegmentAndDividers:(int)arg1;
- (void)updateSegmentImages;

@end