//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTFileDataTypeDetection : NSObject
{
}

+ (id)guessFileDataTypeForFileAtPath:(id)arg1 bestCurrentGuessedFileDataType:(id)arg2;
+ (id)_guessFileDataTypeUsingMagicForFileAtPath:(id)arg1 bestCurrentGuessedFileDataType:(id)arg2 fileLength:(unsigned long long)arg3 fileBytes:(const char *)arg4;
+ (id)_magicCaches;

@end

