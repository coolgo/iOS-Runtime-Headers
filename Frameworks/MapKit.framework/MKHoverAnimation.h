/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationViewInternal;

@interface MKHoverAnimation : CAAnimationGroup {
    MKUserLocationViewInternal *viewImpl;
}

@property float restAccuracy;
@property MKUserLocationViewInternal * viewImpl;

+ (id)bounceAnimation;
+ (id)defaultValueForKey:(id)arg1;
+ (id)fallAnimation;
+ (id)hoverAnimation;

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)drawAccuracyLayer:(float)arg1;
- (id)init;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setInitialAccuracy:(float)arg1 restAccuracy:(float)arg2 drawAccuracy:(float)arg3;
- (void)setViewImpl:(id)arg1;
- (id)viewImpl;

@end
