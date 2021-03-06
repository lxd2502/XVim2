//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResult.h>

@class NSArray, NSURL;

@interface IDEOpenQuicklySwiftGeneratedInterfaceResult : IDEOpenQuicklyResult
{
    NSArray *_childResults;
    IDEOpenQuicklyResult *_originalResult;
    NSURL *_generatedInterfaceURL;
}

+ (id)resultBasedOnResult:(id)arg1 childResults:(id)arg2 withGeneratedInterfaceURL:(id)arg3;
+ (id)generatedInterfaceURLForURL:(id)arg1 inWorkspace:(id)arg2;
+ (Class)swiftLanguageService;
@property(readonly) NSURL *generatedInterfaceURL; // @synthesize generatedInterfaceURL=_generatedInterfaceURL;
@property(readonly) IDEOpenQuicklyResult *originalResult; // @synthesize originalResult=_originalResult;
- (void).cxx_destruct;
- (id)childResults;
- (id)displayPathURL;
- (BOOL)isFromPoject;
- (BOOL)isSymbolic;
- (id)sourceSDKFilePath;
- (id)location;
- (id)alternateTitleGivenParentResult:(id)arg1;
- (BOOL)representsSameResult:(id)arg1;
- (BOOL)representsSameResultAsSwiftGeneratedInterfaceResult:(id)arg1;
- (unsigned long long)hashOfResultIdentity;
- (id)updatedResultForQuery:(id)arg1;
- (id)generateImage;

@end

