//
//  Note.h
//  Memorandum
//
//  Created by Caesar on 15/5/5.
//  Copyright (c) 2015年 Caesar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Note : NSManagedObject

@property (nonatomic, retain) NSDate * lastChangeDate;
@property (nonatomic, retain) NSString * noteContent;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * uniqueIdentifier;

@end
