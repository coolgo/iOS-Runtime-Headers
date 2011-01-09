/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUStructuredPage, UILabel;



@interface SUStructuredPageViewController : SUItemTableViewController <ISURLOperationDelegate>
{
    Class _dataSourceClass;
    UILabel *_noItemsLabel;
    SUStructuredPage *_structuredPage;
}

@property(retain) SUStructuredPage *structuredPage;
@property(retain) Class dataSourceClass;

+ (void)_initializeSafeCategory;

- (id)newNoItemsOverlayLabel;
- (void)setLoading:(BOOL)arg1;
- (Class)dataSourceClass;
- (id)newDataSource;
- (id)newTermsAndConditionsFooter;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)setDataSourceClass:(Class)arg1;
- (void)setStructuredPage:(id)arg1;
- (void)bannerCell:(id)arg1 tappedButtonAtIndex:(NSInteger)arg2;
- (BOOL)_handleLoadMoreForIndexPath:(id)arg1;
- (BOOL)_gotoURLForItem:(id)arg1 withURLIndex:(NSInteger)arg2;
- (void)_loadMoreOperation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_loadMoreWithURL:(id)arg1;
- (void)_reloadLoadMoreCellAtIndexPath:(id)arg1;
- (void)_reloadNoItemsLabel;
- (void)_reloadTermsAndConditions;
- (id)structuredPage;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(NSInteger)arg2;
- (BOOL)hasDisplayableContent;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (id)storePageProtocol;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void)_accessibilityClearTable:(id)arg1;

@end