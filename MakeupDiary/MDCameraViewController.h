//
//  MDCameraViewController.h
//  MakeupDiary
//
//  Created by Kamila Wojciechowska on 30.10.2013.
//  Copyright (c) 2013 silk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDCameraViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
    @property (weak, nonatomic) IBOutlet UIImageView *imageView;
@end
