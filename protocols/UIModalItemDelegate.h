/* Generated by RuntimeBrowser.
 */

@protocol UIModalItemDelegate <NSObject>

@optional

- (void)didPresentModalItem:(_UIModalItem *)arg1;
- (void)modalItem:(_UIModalItem *)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)modalItem:(_UIModalItem *)arg1 shouldDismissForButtonAtIndex:(int)arg2;
- (void)modalItem:(_UIModalItem *)arg1 willDismissWithButtonIndex:(int)arg2;
- (BOOL)modalItemShouldEnableFirstOtherButton:(_UIModalItem *)arg1;
- (void)willPresentModalItem:(_UIModalItem *)arg1;

@end