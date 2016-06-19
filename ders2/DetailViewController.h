//
//  DetailViewController.h
//  ders2
//
//  Created by eren on 19/06/16.
//  Copyright © 2016 eren. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

