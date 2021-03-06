//
//  GenericReportController.h
//  ASiST
//
//  Created by Oliver Drobnik on 29.12.08.
//  Copyright 2008 drobnik.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Report_v1, App;

@interface GenericReportController : UITableViewController {
	Report_v1 *report;
	UIImage *sumImage;
	App *filteredApp;
	
	BOOL shouldShowApps;
	BOOL shouldShowIAPs;
	
	NSArray *sortedProducts;
}

- (id) initWithReport:(Report_v1 *)aReport;

@property (nonatomic, retain) App *filteredApp;

- (void) setFilteredApp:(App *)app showApps:(BOOL)showApps showIAPs:(BOOL)showIAPs;

@end
