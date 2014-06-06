//
//  ustomtailor.h
//  zhubao
//
//  Created by johnson on 14-5-28.
//  Copyright (c) 2014年 SUNYEARS___FULLUSERNAME. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Index.h"
#import "product.h"
#import "NakedDiamond.h"
#import "diploma.h"
#import "member.h"

@interface ustomtailor : UIViewController

@property (retain, nonatomic) IBOutlet UIView *primaryView;
@property (retain, nonatomic) IBOutlet UIView *secondaryView;
@property (retain, nonatomic) IBOutlet UIView *primaryShadeView;
@property (retain, nonatomic) IBOutlet UIView *thirdaryView;
@property (weak, nonatomic) IBOutlet UITableView *textureselect;
@property (strong, nonatomic) NSArray *mainlist;
@property (weak, nonatomic) IBOutlet UITextField *texturetext;


- (IBAction)goAction:(id)sender;
- (IBAction)closeAction:(id)sender;

@end
