//
//  AppDelegate.h
//  SMMMM1
//
//  Created by student on 05/12/2022.
//  Copyright © 2022 pb.edu.ps9. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

