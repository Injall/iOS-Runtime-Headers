/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject  {
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property(readonly) MPMediaPropertyPredicate * nativePredicate;
@property(getter=_comparisonType,retain,readonly) NSString * comparisonType;
@property(getter=_property,retain,readonly) NSString * property;
@property(getter=_value,retain,readonly) id value;

+ (id)webScriptNameForKey:(const char *)arg1;

- (void)dealloc;
- (id)_property;
- (id)_comparisonType;
- (void)set_comparisonType:(id)arg1;
- (void)set_property:(id)arg1;
- (void)set_value:(id)arg1;
- (id)_copyComparisonType;
- (id)_copyProperty;
- (id)_copyValue;
- (void)_setProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3;
- (id)_playlistAttributesForScriptArray:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)nativePredicate;
- (id)_value;
- (id)_className;

@end