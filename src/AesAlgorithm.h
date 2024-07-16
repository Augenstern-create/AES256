#ifndef _LSO_CODECS_AES_H_
#define _LSO_CODECS_AES_H_

// #include "LSOMacro.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief 编码字符
/// @param dataPtr 需要编码的char *
/// @param dataLen 字符的长度
/// @param keyPtr 密匙
/// @param keyLen 密匙长度
/// @param retLen 编码后的数据长度
/// @return 编码后的数据
char *LSOEncodeDataWithKey(char *dataPtr, int dataLen, char *keyPtr, int keyLen, int *retLen);

/// @brief 解码字符
/// @param dataPtr 需要解码的char *
/// @param dataLen 字符的长度
/// @param keyPtr 密匙
/// @param keyLen 密匙长度
/// @param retLen 解码后的数据长度
/// @return 解码后的数据
char *LSODecodeDataWithKey(char *dataPtr, int dataLen, char *keyPtr, int keyLen, int *retLen);

char *decode_data_with_key(char *dataPtr, int dataLen, char *keyPtr, int keyLen, int *retLen);

int decoderShader(char *data, int dataLen, unsigned char *resultBuffer);

#ifdef __cplusplus
};
#endif

#endif