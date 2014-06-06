#import <Foundation/Foundation.h>
#import "ResourceCommandContextMenuProtocol.h"

@class ProjectSettings;

@interface ResourceNewPackageCommand : NSObject <ResourceCommandProtocol, ResourceCommandContextMenuProtocol>

@property (nonatomic, weak) ProjectSettings *projectSettings;

@end