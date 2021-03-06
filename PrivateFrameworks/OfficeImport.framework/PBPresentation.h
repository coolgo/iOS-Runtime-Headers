/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBPresentation : NSObject {
}

+ (void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2;
+ (void)finalizeWritingGlobalsWithPresentationState:(id)arg1;
+ (void)processLayoutTypesFromDocument:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readFrom:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long> > { struct map<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>, std::_Select1st<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned long, EscherObjectEnums> > { struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; }*)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (void)readMasterAndLayouts:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readNotes:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4;
+ (void)readSlides:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6;
+ (void)scanSlideListForLayoutTypes:(id)arg1 slideListHolder:(id)arg2 masterLayoutMap:(id)arg3;
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)arg1 state:(id)arg2;
+ (void)setFontEntites:(id)arg1 environmentHolder:(id)arg2;
+ (void)writeGlobalsWithPresentationState:(id)arg1;
+ (void)writeNotesMasterWithPresentationState:(id)arg1;
+ (void)writeSlideMastersWithPresentationState:(id)arg1;
+ (void)writeSlidesWithPresentationState:(id)arg1;

@end
