/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, VKLabelNavRoad;

@interface VKLabelNavRoadLabel : NSObject {
    struct shared_ptr<vk::Label> { 
        struct Label {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    NSString *_displayGroup;
    unsigned int _displayID;
    BOOL _isShield;
    } _label;
    VKLabelNavRoad *_road;
}

@property unsigned int displayID;
@property(readonly) BOOL isShield;
@property(readonly) const struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; }* label;
@property VKLabelNavRoad * road;

+ (id)displayGroupForShieldLabelOnRoad:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)displayGroup;
- (unsigned int)displayID;
- (id)initWithRoad:(id)arg1 label:(const struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (BOOL)isShield;
- (const struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; }*)label;
- (id)road;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setRoad:(id)arg1;

@end
