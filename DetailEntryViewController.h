//
//  DetailEntryViewController.h
//  artfolio
//
//  Created by Kyle Griffith on 2016-02-20.
//  Copyright © 2016 Kyle Griffith. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface DetailEntryViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
// action buttons (2)
    //back button
- (IBAction)backButton:(UIButton *)sender;
    //submitbutton
- (IBAction)submitButton:(UIButton *)sender;

//properties

//textfields for albums(4)
    //albumYear
@property (weak, nonatomic) IBOutlet UITextField *albumYear;
    //albumTitle
@property (weak, nonatomic) IBOutlet UITextField *albumTitle;
    //albumMedium
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *albumMedium;
//imageviews (7)
@property (weak, nonatomic) IBOutlet UIImageView *image0;
@property (weak, nonatomic) IBOutlet UIImageView *image1;
@property (weak, nonatomic) IBOutlet UIImageView *image2;
@property (weak, nonatomic) IBOutlet UIImageView *image3;
@property (weak, nonatomic) IBOutlet UIImageView *image4;
@property (weak, nonatomic) IBOutlet UIImageView *image5;
@property (weak, nonatomic) IBOutlet UIImageView *image6;

//detail of work(4)
    //textfield(workTitle)
@property (weak, nonatomic) IBOutlet UITextField *workTitle;
    //textfield(workSize)
@property (weak, nonatomic) IBOutlet UITextField *workSize;
    //imageview(imageInProgress)
@property (weak, nonatomic) IBOutlet UIImageView *imageInProgress;

//
@end

