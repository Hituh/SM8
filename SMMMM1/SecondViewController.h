//
//  SecondViewController.h
//  SMMMM1
//
//  Created by student on 05/12/2022.
//  Copyright © 2022 pb.edu.ps9. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;
@protocol SecondViewControllerDelegate <NSObject>
- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;
@end

@interface SecondViewController : UIViewController
@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property NSString *surname;


@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;
-(IBAction)Powrot;
@end

NS_ASSUME_NONNULL_END
