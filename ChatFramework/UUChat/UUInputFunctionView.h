//
//  UUInputFunctionView.h
//  UUChatDemoForTextVoicePicture
//
//  Created by shake on 14-8-27.
//  Copyright (c) 2014年 uyiuyao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ACMacros.h"
#import <UIKit/UIKit.h>

@class UUInputFunctionView;

@protocol UUInputFunctionViewDelegate <NSObject>

// text
- (void)UUInputFunctionViewSend:(UUInputFunctionView *)funcView sendMessage:(NSString *)message;

// image
- (void)UUInputFunctionViewSend:(UUInputFunctionView *)funcView sendPicture:(UIImage *)image;

// audio
- (void)UUInputFunctionViewSend:(UUInputFunctionView *)funcView sendVoice:(NSData *)voice time:(NSInteger)second;

@end

@interface UUInputFunctionView : UIView <UIActionSheetDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property (nonatomic, retain) UIButton *btnSendMessage;
@property (nonatomic, retain) UIButton *btnChangeVoiceState;
@property (nonatomic, retain) UIButton *btnVoiceRecord;
@property (nonatomic, retain) UITextView *TextViewInput;
@property (nonatomic, retain) UIViewController *superVC;

@property (nonatomic, assign) BOOL isAbleToSendTextMessage;
@property (nonatomic, assign) id<UUInputFunctionViewDelegate>delegate;

- (id)init;

- (void)changeSendBtnWithPhoto:(BOOL)isPhoto;

@end
