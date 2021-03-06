/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    BOOL _isInitialSync;
}

@property BOOL isInitialSync;

- (Class)bulkChangeTaskClass;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(void*)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(void*)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9;
- (BOOL)isInitialSync;
- (void)setIsInitialSync:(BOOL)arg1;

@end
