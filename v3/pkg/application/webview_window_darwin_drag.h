//go:build darwin && !ios

#import <AppKit/AppKit.h>

@interface WebviewDrag : NSView <NSDraggingDestination, NSDraggingSource>
@property unsigned int windowId;
@end
