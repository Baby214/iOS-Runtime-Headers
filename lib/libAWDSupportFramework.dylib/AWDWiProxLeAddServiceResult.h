/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiProxLeAddServiceResult : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    }  _has;
    unsigned int  _result;
    NSString * _resultString;
    NSString * _serviceUUID;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasResult;
@property (nonatomic, readonly) BOOL hasResultString;
@property (nonatomic, readonly) BOOL hasServiceUUID;
@property (nonatomic, readonly) BOOL hasSessionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int result;
@property (nonatomic, retain) NSString *resultString;
@property (nonatomic, retain) NSString *serviceUUID;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasResult;
- (BOOL)hasResultString;
- (BOOL)hasServiceUUID;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)result;
- (id)resultString;
- (id)serviceUUID;
- (id)sessionId;
- (void)setHasResult:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setResultString:(id)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
