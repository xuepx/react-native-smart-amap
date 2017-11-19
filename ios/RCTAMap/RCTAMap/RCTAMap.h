
#import "RCTAMapManager.h"
#import <MAMapKit/MAMapKit.h>

@interface RCTAMap : MAMapView

@property (nonatomic, assign) BOOL hasUserLocationPointAnnotaiton;

@property (nonatomic, copy) RCTBubblingEventBlock onDidMoveByUser;

@property (nonatomic, copy) RCTBubblingEventBlock onDeselectMarker;

@property (nonatomic, copy) RCTBubblingEventBlock onSelectMarker;

@property (nonatomic, copy) NSString *centerMarker;

@property (nonatomic, copy) NSString *markerImage;

- (id)initWithManager: (RCTAMapManager*)manager;

@end
