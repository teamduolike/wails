//go:build darwin && !ios

#import <AppKit/AppKit.h>

@interface WebviewDrag : NSView <NSDraggingDestination, NSDraggingSource>

@property unsigned int windowId;
@property BOOL isDraggingOut;

- (void)startFileDrag:(NSString *)filename image:(NSString *)image event:(NSEvent *)event;

@end
