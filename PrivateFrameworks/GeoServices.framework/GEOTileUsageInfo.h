/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMapTable;

@interface GEOTileUsageInfo : NSObject {
    unsigned int _dataLength;
    double _endTime;
    double _startTime;
    NSMapTable *_tileStyleToCount;
}

@property(readonly) unsigned int dataLength;
@property double endTime;
@property double startTime;
@property(readonly) NSMapTable * tileStyleToCount;

- (void)addTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 dataLength:(unsigned int)arg2;
- (unsigned int)dataLength;
- (void)dealloc;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)tileStyleToCount;

@end