//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorStaticStringProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_staticText;
    NSTextField *_textField;
}

@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (unsigned long long)_textAlignmentFromString:(id)arg1;
- (void)refresh;
- (double)baseline;
- (id)view;

@end

