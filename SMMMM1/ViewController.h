//
//  ViewController.h
//  SMMMM1
//
//  Created by student on 05/12/2022.
//  Copyright © 2022 pb.edu.ps9. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"
@interface ViewController : UIViewController <SecondViewControllerDelegate>


@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (nonatomic, weak) IBOutlet UITextField *surnameTextField;

-(IBAction)enter;



@end

