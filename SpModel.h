//
//  SpModel.h
//  JanceeTCPDebuggerTool
//
//  Created by jancee wang on 2016/11/23.
//
//

#import <Foundation/Foundation.h>

@interface SpModel : NSObject

+ (void)addConnectHistoryWithIp:(NSString*)string port:(NSString*)port;
+ (NSArray<NSDictionary*>*)getConnectHistory;

+ (void)addSendDataHistoryWithData:(NSString*)string;
+ (NSArray<NSString*>*)getSendDataHistory;

@end
