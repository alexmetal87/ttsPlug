//
//  ttsPlug.h
//  tts
//
//  Created by Alex on 27/11/14.
//
//

#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>
@interface  ttsPlug : CDVPlugin

-(void)ttsStart:(CDVInvokedUrlCommand*)command;

@end
