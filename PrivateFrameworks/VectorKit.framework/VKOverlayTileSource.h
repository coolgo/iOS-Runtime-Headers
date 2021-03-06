/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray, NSMutableArray, VKTileSource;

@interface VKOverlayTileSource : VKTileSource {
    NSMutableArray *_overlays;
    VKTileSource *_tileSourceToMatch;
}

@property(readonly) NSArray * overlays;

- (void)_overlayBoundingMapRegionChanged:(id)arg1;
- (void)addOverlay:(id)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)matchTilesFromSource:(id)arg1;
- (int)maximumDownloadZoomLevel;
- (int)maximumZoomLevel;
- (BOOL)maximumZoomLevelBoundsCamera;
- (int)minimumDownloadZoomLevel;
- (int)minimumZoomLevel;
- (BOOL)minimumZoomLevelBoundsCamera;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })nativeKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)overlays;
- (void)removeOverlay:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForDownloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (int)tileSize;
- (id)tileSource;
- (int)zEquivalenceClass;

@end
