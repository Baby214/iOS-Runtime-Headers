/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {
    NSAttributedString * _attributedText;
    float  _fontSize;
    int  _fontWeight;
    int  _numberOfLines;
    NSString * _text;
    unsigned char  _textAlignment;
    float  _width;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float fontSize;
@property (nonatomic) int fontWeight;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) Class layoutClass;
@property (nonatomic) int numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) unsigned char textAlignment;
@property (nonatomic) float width;

- (void).cxx_destruct;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)fontSize;
- (int)fontWeight;
- (id)init;
- (Class)layoutClass;
- (int)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setFontWeight:(int)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(unsigned char)arg1;
- (void)setWidth:(float)arg1;
- (id)text;
- (unsigned char)textAlignment;
- (float)width;

@end
