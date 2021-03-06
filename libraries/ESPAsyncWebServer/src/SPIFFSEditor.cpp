#include "SPIFFSEditor.h"
#include <FS.h>


#define edit_htm_gz_len 4187
const uint8_t edit_htm_gz[] PROGMEM = {
0x1f, 0x8b, 0x08, 0x08, 0x37, 0xf6, 0xae, 0x58, 0x00, 0x0b, 0x65, 0x64, 0x69, 0x74, 0x2d, 0x6e, 
0x65, 0x77, 0x2d, 0x6d, 0x69, 0x6e, 0x69, 0x66, 0x69, 0x65, 0x64, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 
0x00, 0xb5, 0x5a, 0xfd, 0x7f, 0x9b, 0x38, 0xd2, 0xff, 0xfd, 0xf9, 0x2b, 0x08, 0xbd, 0xcd, 0xc2, 
0x19, 0x63, 0x3b, 0x49, 0xb3, 0x2d, 0x0e, 0xc9, 0xda, 0x49, 0xda, 0xf4, 0x25, 0xaf, 0xb6, 0xdb, 
0xa6, 0xbd, 0xdc, 0x7e, 0x64, 0x90, 0x6d, 0x35, 0x20, 0x28, 0xc8, 0x71, 0x52, 0xaf, 0xff, 0xf7, 
0x9b, 0x91, 0xc0, 0x06, 0x87, 0xb6, 0xdb, 0xbb, 0x67, 0x9b, 0xb6, 0x20, 0x8d, 0x5e, 0x66, 0x46, 
0x33, 0xdf, 0x99, 0x11, 0xd9, 0xdb, 0x38, 0x3a, 0x3f, 0xec, 0x5f, 0x5f, 0x1c, 0x6b, 0x13, 0x11, 
0x06, 0xfb, 0xda, 0x1e, 0x3e, 0xb4, 0x80, 0xf0, 0xb1, 0x4b, 0x39, 0x36, 0x29, 0xf1, 0xe1, 0x21, 
0x98, 0x08, 0xe8, 0xfe, 0x71, 0xef, 0x42, 0x3b, 0xf6, 0x99, 0x88, 0x92, 0xbd, 0x86, 0xea, 0xd1, 
0xf6, 0x52, 0xf1, 0x10, 0x50, 0x2d, 0xa4, 0x3e, 0x23, 0x6e, 0xea, 0x25, 0x14, 0x66, 0xd9, 0x5e, 
0x38, 0xff, 0x5a, 0x67, 0xdc, 0xa7, 0xf7, 0xce, 0x76, 0xb3, 0xd9, 0x8e, 0xa3, 0x94, 0x09, 0x16, 
0x71, 0x87, 0x0c, 0xd3, 0x28, 0x98, 0x0a, 0xda, 0x0e, 0xe8, 0x48, 0x38, 0x4f, 0xe3, 0xfb, 0xf6, 
0x30, 0x4a, 0x7c, 0x9a, 0x38, 0xad, 0xf8, 0x5e, 0x03, 0x12, 0xf3, 0xb5, 0x27, 0x3b, 0x3b, 0x3b, 
0xed, 0x21, 0xf1, 0x6e, 0xc7, 0x49, 0x34, 0xe5, 0x7e, 0xdd, 0x8b, 0x82, 0x28, 0x71, 0x9e, 0x8c, 
0x9e, 0xe2, 0x4f, 0xdb, 0x67, 0x69, 0x1c, 0x90, 0x07, 0x87, 0x47, 0x9c, 0xc2, 0xdc, 0xfb, 0x7a, 
0x3a, 0x21, 0x7e, 0x34, 0x73, 0x9a, 0x5a, 0x53, 0x6b, 0x35, 0x61, 0x91, 0x64, 0x3c, 0x24, 0x46, 
0xd3, 0xc2, 0x1f, 0x7b, 0xc7, 0x6c, 0x8f, 0x22, 0x2e, 0xea, 0x29, 0xfb, 0x4a, 0x9d, 0xd6, 0x16, 
0xec, 0x26, 0x9b, 0x23, 0x12, 0xb2, 0xe0, 0xc1, 0x49, 0x09, 0x4f, 0xeb, 0x29, 0x4d, 0xd8, 0x48, 
0x75, 0xcf, 0x28, 0x1b, 0x4f, 0x84, 0xf3, 0x5b, 0xb3, 0xb9, 0x00, 0xfe, 0xb5, 0x69, 0x30, 0x0f, 
0x58, 0x0a, 0x93, 0x51, 0x3c, 0xb5, 0x9f, 0x88, 0x62, 0xa7, 0xa9, 0x58, 0x6f, 0xb6, 0x43, 0x92, 
0x8c, 0x19, 0x87, 0x97, 0x98, 0xf8, 0x3e, 0xe3, 0x63, 0x47, 0x4d, 0x0b, 0xd8, 0x7c, 0x29, 0x6d, 
0x42, 0x03, 0x22, 0xd8, 0x1d, 0x6d, 0x87, 0x8c, 0xd7, 0x67, 0xcc, 0x17, 0x13, 0x67, 0x17, 0x78, 
0x6c, 0x7b, 0xd3, 0x24, 0x05, 0x99, 0xe2, 0x88, 0x71, 0x41, 0x13, 0x39, 0x2d, 0x8d, 0x09, 0x9f, 
0x67, 0xa2, 0xa2, 0x02, 0x72, 0x39, 0x19, 0x0f, 0x18, 0xa7, 0xf5, 0x61, 0x10, 0x79, 0xb7, 0xcb, 
0x9d, 0x76, 0xe3, 0xfb, 0x6c, 0x2f, 0x67, 0x12, 0xdd, 0xd1, 0x64, 0xbe, 0x52, 0x97, 0x9c, 0x5d, 
0x22, 0x96, 0x96, 0xa6, 0x94, 0x2e, 0x6c, 0x71, 0x37, 0x05, 0xaa, 0x25, 0x9f, 0x20, 0xe5, 0x92, 
0xff, 0x95, 0x48, 0x6b, 0x82, 0xab, 0x29, 0x8c, 0xc7, 0x53, 0x31, 0x7f, 0x7c, 0x94, 0x51, 0x4c, 
0x3c, 0x26, 0x1e, 0x50, 0x7e, 0x18, 0x36, 0x47, 0x5d, 0x3a, 0x3b, 0x4d, 0x38, 0x0e, 0x50, 0xb8, 
0xf6, 0x8e, 0x26, 0x3e, 0xe1, 0xc4, 0xea, 0x24, 0x8c, 0x04, 0x56, 0x6f, 0xa5, 0xf2, 0x7a, 0x18, 
0x7d, 0xad, 0x4f, 0xe1, 0x1d, 0xda, 0x01, 0xf5, 0x84, 0xd2, 0x30, 0x1c, 0xc2, 0xf0, 0x96, 0x89, 
0xc7, 0x84, 0x47, 0x1d, 0x05, 0x5d, 0x49, 0x0d, 0x4d, 0xd4, 0xe9, 0xb5, 0xa4, 0x6e, 0x90, 0x5d, 
0x29, 0xb6, 0x92, 0xa8, 0x3e, 0x8c, 0x84, 0x88, 0x42, 0x69, 0x6f, 0x4b, 0x69, 0x35, 0x69, 0x32, 
0xcf, 0x1e, 0x1d, 0x47, 0xb5, 0xea, 0x0b, 0xcb, 0xb7, 0x41, 0xa9, 0x82, 0x79, 0x24, 0xa8, 0x93, 
0x80, 0x8d, 0xb9, 0x13, 0x32, 0xdf, 0x0f, 0x68, 0xc1, 0x64, 0x9d, 0x69, 0x12, 0x18, 0x3e, 0x11, 
0xc4, 0x61, 0x21, 0x19, 0xd3, 0x46, 0xcc, 0xc7, 0x40, 0x4d, 0xe9, 0xee, 0x8e, 0xc5, 0xde, 0x75, 
0xcf, 0xaf, 0x66, 0xcd, 0x37, 0x2f, 0xc7, 0x51, 0x07, 0xfe, 0x9c, 0xf5, 0x06, 0x93, 0xe3, 0xc1, 
0x18, 0xde, 0xba, 0xd8, 0xec, 0x5c, 0x1e, 0x76, 0x2e, 0xe1, 0x71, 0xd8, 0xaa, 0x7d, 0x1e, 0x7d, 
0xc1, 0x8e, 0xee, 0x4b, 0xbf, 0xdb, 0x1f, 0x1c, 0x77, 0x3a, 0x6f, 0x1a, 0xaf, 0xce, 0x66, 0xef, 
0xdf, 0xec, 0x22, 0xb9, 0x1b, 0x34, 0xaf, 0xde, 0x4d, 0x9a, 0x83, 0xad, 0xe7, 0xa1, 0x7f, 0xe2, 
0x4f, 0xbc, 0x70, 0xd0, 0xb9, 0x7c, 0x7f, 0x75, 0x77, 0x1d, 0x0e, 0xc6, 0xbd, 0xf7, 0xad, 0xc9, 
0xc7, 0xad, 0x77, 0xbd, 0x8f, 0xef, 0x5f, 0xdc, 0xd2, 0x0f, 0x27, 0xaf, 0x3f, 0xf6, 0x67, 0x30, 
0xe1, 0x28, 0xea, 0x0d, 0xae, 0xba, 0xef, 0xba, 0xe3, 0x8f, 0x5d, 0xef, 0xf8, 0x7e, 0x18, 0x9c, 
0x75, 0x5f, 0x76, 0x86, 0x9d, 0x2d, 0x8f, 0xd2, 0x71, 0xff, 0xaa, 0x3b, 0x7d, 0xf5, 0xe6, 0x7c, 
0xcc, 0xd8, 0xa4, 0xf7, 0xf1, 0xac, 0xef, 0x1d, 0x3e, 0x7d, 0x3b, 0x38, 0xe9, 0xb0, 0xc9, 0xd9, 
0xeb, 0xab, 0xe6, 0xed, 0xcb, 0x37, 0x87, 0x47, 0xde, 0xf5, 0xeb, 0xeb, 0xdd, 0xa3, 0xed, 0xc6, 
0x6f, 0xbf, 0x9d, 0xfa, 0xe7, 0x8c, 0xf7, 0xef, 0xbe, 0x76, 0xc6, 0x87, 0xb3, 0x67, 0x0f, 0x69, 
0x7f, 0xf2, 0xea, 0x8e, 0x37, 0xde, 0x45, 0x9f, 0x5f, 0x3d, 0x9c, 0xc2, 0xbf, 0x8b, 0x8b, 0xda, 
0xb0, 0xd7, 0x4a, 0x07, 0x97, 0xaf, 0xde, 0x6d, 0xa5, 0xcf, 0x9f, 0xc6, 0xdd, 0xa3, 0xa3, 0xbb, 
0x70, 0x78, 0xd1, 0x08, 0xfd, 0xdb, 0x91, 0x78, 0xb6, 0x2d, 0xe2, 0xeb, 0xf1, 0xf4, 0xe3, 0x97, 
0xa7, 0xaf, 0x27, 0x8d, 0x73, 0x4a, 0xae, 0x27, 0xb5, 0x87, 0xaf, 0x0f, 0xcf, 0x26, 0xfd, 0x93, 
0xbb, 0xb3, 0x80, 0xdc, 0x9f, 0x9d, 0x79, 0x5f, 0xc3, 0x5a, 0x40, 0x9e, 0x9f, 0xf7, 0x03, 0x92, 
0xb4, 0x06, 0x7e, 0xa7, 0x51, 0x3b, 0xdc, 0xea, 0xec, 0x88, 0xe4, 0xea, 0x90, 0x1f, 0x6d, 0x7f, 
0xee, 0x3d, 0xeb, 0x76, 0x5b, 0xd1, 0xf0, 0xcb, 0xd6, 0xcb, 0xdb, 0xdd, 0x97, 0x83, 0xdd, 0xcb, 
0xe1, 0x65, 0xa7, 0xb7, 0xd3, 0x1d, 0x90, 0xeb, 0xde, 0x65, 0x67, 0xb4, 0x33, 0x9c, 0x4c, 0xde, 
0xbc, 0xe9, 0xbf, 0xf0, 0x3b, 0x5f, 0x93, 0xce, 0xf9, 0xac, 0x73, 0x7f, 0x3c, 0xe8, 0x9c, 0xd4, 
0xde, 0x1c, 0x9f, 0x36, 0x5b, 0xbd, 0xeb, 0xed, 0xf1, 0xe9, 0xee, 0xac, 0x9b, 0x1e, 0x77, 0x2e, 
0xbb, 0xcd, 0xf1, 0xeb, 0x5a, 0x48, 0x3e, 0x46, 0x87, 0xdb, 0xe3, 0x57, 0xbb, 0xec, 0xe2, 0x9a, 
0x74, 0x5e, 0x75, 0x5f, 0xa7, 0xec, 0x2a, 0x3c, 0x19, 0x34, 0x3b, 0x9d, 0xb7, 0xe7, 0xf4, 0xc5, 
0xe1, 0x36, 0x79, 0xb3, 0xe5, 0xbd, 0x07, 0xfd, 0x0f, 0x3e, 0xd0, 0xdf, 0x6a, 0x9d, 0xd9, 0x79, 
0x33, 0xf0, 0x9e, 0xd3, 0xfe, 0xc9, 0x75, 0x5f, 0x9e, 0xce, 0x71, 0xf0, 0xa2, 0x7f, 0xdb, 0x9b, 
0x5e, 0x86, 0x87, 0x87, 0xa6, 0xc6, 0xa3, 0x7a, 0x42, 0x63, 0x4a, 0x44, 0x11, 0xab, 0x96, 0xce, 
0x01, 0xb6, 0xb5, 0xb2, 0xc2, 0xcc, 0x49, 0x05, 0xbd, 0x17, 0x75, 0x9f, 0x7a, 0x51, 0x42, 0xe4, 
0x18, 0x98, 0x40, 0x13, 0x34, 0xb1, 0xc5, 0xef, 0x12, 0x3c, 0x35, 0x05, 0x9e, 0x1a, 0xe1, 0xbe, 
0x66, 0xe4, 0x8e, 0x80, 0xc8, 0xe1, 0xd3, 0x3b, 0xe6, 0xd1, 0x7a, 0xcc, 0xee, 0x69, 0x50, 0x97, 
0x93, 0x9d, 0xa6, 0x39, 0x97, 0xce, 0x96, 0x0f, 0x23, 0x1c, 0x4c, 0x4d, 0xae, 0x9a, 0x77, 0xf8, 
0x9f, 0x89, 0x47, 0x01, 0xd5, 0xc0, 0x65, 0x42, 0x7c, 0x2a, 0xdf, 0x89, 0x92, 0xfa, 0x70, 0x3a, 
0x1e, 0xb1, 0x7b, 0xf0, 0xe6, 0x11, 0xe3, 0x4c, 0x50, 0xad, 0x95, 0x2e, 0x7e, 0xcf, 0x97, 0xb9, 
0xa5, 0x0f, 0xa3, 0x84, 0x84, 0x34, 0xd5, 0xfe, 0xe2, 0x32, 0xf3, 0x51, 0x12, 0x85, 0x2b, 0x04, 
0x59, 0x88, 0xa8, 0xd0, 0x58, 0x2c, 0x9e, 0x4c, 0xe3, 0x20, 0x22, 0x20, 0x66, 0x05, 0x6c, 0x28, 
0x30, 0x4d, 0xa4, 0x5b, 0x2d, 0x41, 0x35, 0x73, 0xb3, 0x2d, 0x74, 0xcb, 0xa2, 0x5b, 0x6f, 0xed, 
0xac, 0x5c, 0xb7, 0x2e, 0xc7, 0x22, 0xd8, 0x57, 0x84, 0x09, 0xc4, 0x83, 0x02, 0xd6, 0x3d, 0x11, 
0xa0, 0xd2, 0x6f, 0x6c, 0x2e, 0x37, 0xc9, 0x90, 0x61, 0xc9, 0x80, 0x42, 0xe9, 0x96, 0x84, 0xe9, 
0x5c, 0x12, 0x18, 0xb7, 0x78, 0x42, 0x65, 0xd4, 0xb3, 0x9e, 0xc4, 0x09, 0x9c, 0x06, 0x9d, 0x7d, 
0x6f, 0xcd, 0x5c, 0xa6, 0xf2, 0xda, 0x6a, 0x4d, 0x15, 0xee, 0x32, 0x11, 0x56, 0x31, 0x4f, 0xf2, 
0x9a, 0x2f, 0xfd, 0x58, 0x2a, 0x20, 0x2f, 0xb9, 0x79, 0x8a, 0xdc, 0x7c, 0x57, 0xab, 0xdb, 0xbb, 
0xbf, 0x64, 0x3c, 0xec, 0x34, 0x7f, 0x59, 0xd8, 0xd9, 0xd8, 0x3c, 0x1e, 0xb7, 0x9a, 0xf0, 0x27, 
0x0f, 0xbb, 0xcf, 0x56, 0x2c, 0x0c, 0x9f, 0xe2, 0x4f, 0xce, 0x20, 0xae, 0x53, 0x20, 0x6e, 0xef, 
0x3c, 0x7f, 0xe6, 0x0f, 0x73, 0x62, 0x26, 0xd8, 0x37, 0xe9, 0x09, 0xf1, 0xd9, 0x34, 0x75, 0x9e, 
0x36, 0x7f, 0xc9, 0xf4, 0xb9, 0xb5, 0x83, 0xb2, 0x2f, 0xcf, 0x12, 0x1b, 0x2b, 0x8b, 0x4d, 0x63, 
0xc6, 0xb5, 0xad, 0x54, 0xc3, 0xf3, 0x26, 0xc9, 0xd2, 0x30, 0x4b, 0xa1, 0x7e, 0xf1, 0xfb, 0xca, 
0x34, 0x71, 0xfc, 0xbc, 0xf9, 0xcb, 0x5c, 0x24, 0x10, 0x4d, 0x46, 0x51, 0x12, 0x3a, 0x49, 0x24, 
0x88, 0xa0, 0x46, 0xd3, 0x5c, 0x80, 0x70, 0x15, 0x84, 0xed, 0xdd, 0xa6, 0x4f, 0xc7, 0xe6, 0x62, 
0xb1, 0xd7, 0x90, 0x41, 0x0d, 0x93, 0x16, 0x2f, 0x61, 0xb1, 0xd8, 0x1f, 0x4d, 0xb9, 0x87, 0x4c, 
0x68, 0x63, 0x6a, 0x50, 0x73, 0x9e, 0x50, 0x31, 0x4d, 0xb8, 0xe6, 0x47, 0xde, 0x14, 0xad, 0xdd, 
0x1e, 0x53, 0x71, 0xac, 0x0c, 0xbf, 0xfb, 0xf0, 0xca, 0x87, 0x11, 0x8b, 0xe5, 0x04, 0xaf, 0x72, 
0x02, 0x78, 0x30, 0x6c, 0x98, 0xcd, 0x29, 0x8d, 0x87, 0x08, 0x03, 0x8b, 0xbc, 0xa1, 0x0f, 0x06, 
0xb5, 0xc4, 0x72, 0x22, 0xb5, 0xb1, 0xdf, 0xc8, 0x47, 0x01, 0x8d, 0x9b, 0xf3, 0x3b, 0xd0, 0x02, 
0x71, 0xe9, 0x27, 0x71, 0x63, 0x31, 0x97, 0xc3, 0xa3, 0x9d, 0x8d, 0x26, 0x7b, 0xec, 0xa0, 0xde, 
0x72, 0xc8, 0x3e, 0x3b, 0x68, 0x81, 0x7f, 0x15, 0xb9, 0x91, 0xfb, 0xbe, 0x60, 0x01, 0x1d, 0x64, 
0x1e, 0x87, 0xdb, 0xe0, 0x62, 0xcb, 0x21, 0x44, 0x2d, 0xbe, 0xd5, 0x6c, 0x6e, 0xb8, 0xf4, 0x80, 
0x04, 0x10, 0xc4, 0x0c, 0xfd, 0xf8, 0xea, 0xea, 0xfc, 0xea, 0x93, 0x5e, 0xa3, 0x35, 0xfd, 0xc6, 
0xd1, 0xf4, 0x1a, 0x37, 0x1d, 0x61, 0x27, 0x74, 0x94, 0xd0, 0x74, 0x72, 0x41, 0xc4, 0xc4, 0xf0, 
0xec, 0x3b, 0x12, 0x4c, 0x8b, 0x82, 0x30, 0x94, 0x1b, 0x59, 0x14, 0x2e, 0xa7, 0x33, 0xed, 0x05, 
0xe8, 0xf9, 0x08, 0x62, 0x5d, 0x5b, 0xd8, 0x24, 0x8e, 0x29, 0xf7, 0x0d, 0x3d, 0x86, 0x89, 0xba, 
0x45, 0x4d, 0x2b, 0xa1, 0x5f, 0xa6, 0x34, 0x15, 0xa9, 0x0d, 0xa6, 0x6b, 0xe8, 0x17, 0x83, 0xbe, 
0x6e, 0xe9, 0x0d, 0x74, 0x24, 0x1d, 0x78, 0x23, 0xe6, 0x02, 0x57, 0x89, 0x5c, 0xd0, 0xa4, 0x2e, 
0x73, 0x0b, 0xdd, 0x6c, 0x47, 0xb6, 0x78, 0x88, 0xa9, 0xab, 0x8f, 0x40, 0x12, 0xdd, 0x8a, 0xec, 
0x70, 0x1a, 0x08, 0x16, 0x07, 0xd4, 0xdd, 0x68, 0x41, 0x8b, 0xc3, 0xf9, 0xbb, 0x3a, 0x46, 0x56, 
0xa4, 0x31, 0xdf, 0xd5, 0x15, 0xbe, 0x64, 0xa8, 0xa4, 0x5b, 0xf2, 0x14, 0x33, 0x3e, 0x0e, 0x27, 
0x2c, 0xf0, 0x8d, 0xc8, 0x6c, 0xe3, 0x2e, 0x5e, 0x69, 0x17, 0xaf, 0x38, 0x57, 0x71, 0xeb, 0x65, 
0x1b, 0x23, 0x48, 0x63, 0x4b, 0x6d, 0x95, 0xd3, 0x7c, 0x3a, 0x22, 0xc0, 0xc9, 0x3b, 0x54, 0x85, 
0xab, 0x37, 0xaa, 0x36, 0xf2, 0xd4, 0x46, 0xbe, 0xdc, 0x68, 0x38, 0x05, 0x07, 0xe1, 0xb0, 0x93, 
0x6f, 0x33, 0xce, 0x69, 0x72, 0xd2, 0x3f, 0x7d, 0xeb, 0xea, 0xea, 0x68, 0xaa, 0x26, 0xfb, 0x6a, 
0x72, 0x5a, 0x9e, 0x9c, 0x16, 0x27, 0x1f, 0xca, 0x13, 0xae, 0x9a, 0x9c, 0xaa, 0xc9, 0x49, 0x49, 
0xc4, 0x44, 0x8a, 0xa8, 0x40, 0xab, 0x8e, 0xda, 0x44, 0x81, 0x74, 0x2b, 0x29, 0x89, 0x99, 0xd8, 
0xe0, 0x63, 0x64, 0x18, 0x50, 0xdf, 0xdd, 0x68, 0x42, 0x0b, 0xf3, 0x64, 0x77, 0xab, 0x59, 0xb1, 
0x47, 0xa2, 0xf6, 0x08, 0xca, 0x0c, 0x06, 0x45, 0x06, 0xb5, 0x1e, 0xb9, 0xa3, 0x5a, 0x15, 0x83, 
0x81, 0x69, 0xa5, 0x76, 0xc4, 0xbd, 0x80, 0x79, 0xb7, 0xee, 0xca, 0xd4, 0xcd, 0x39, 0x5b, 0x9a, 
0x97, 0xc5, 0x25, 0x4c, 0x0d, 0x20, 0x71, 0x5a, 0x76, 0x65, 0x2f, 0xa8, 0xef, 0x85, 0x15, 0x54, 
0x2e, 0xc0, 0x6d, 0x7a, 0x4f, 0xbd, 0xc3, 0x28, 0x0c, 0x09, 0x1a, 0x5e, 0x0a, 0x1c, 0x64, 0x0d, 
0xdd, 0x5c, 0x58, 0x7e, 0xf5, 0xa6, 0x23, 0x03, 0x3c, 0xc0, 0x8d, 0x6c, 0xd4, 0x4a, 0x6a, 0x83, 
0x66, 0xc6, 0x62, 0xf2, 0x03, 0x8b, 0xce, 0x4d, 0x4e, 0x4e, 0xf9, 0xd4, 0xbc, 0xb1, 0x96, 0x4c, 
0xae, 0x99, 0xf8, 0x79, 0x6f, 0xcd, 0xc6, 0xa5, 0xda, 0xb8, 0x0b, 0x4a, 0x29, 0xd9, 0x9b, 0xd9, 
0xe6, 0x2b, 0xe9, 0xe4, 0x18, 0x56, 0x1c, 0x93, 0xd9, 0xb3, 0xd9, 0x66, 0xf9, 0x28, 0x7d, 0xb1, 
0x80, 0xfd, 0x41, 0x9e, 0x09, 0x14, 0x66, 0xf4, 0xaf, 0x0b, 0xb4, 0xe2, 0x59, 0x9a, 0xb4, 0xc5, 
0x5d, 0xa3, 0x61, 0x1c, 0x38, 0xff, 0xb2, 0x8d, 0x4f, 0xff, 0xb6, 0x6f, 0x6a, 0xa6, 0x79, 0xf0, 
0x8f, 0x86, 0x54, 0xa2, 0x21, 0xcc, 0x4f, 0xad, 0x1b, 0xab, 0x61, 0xd8, 0xff, 0x34, 0xff, 0x65, 
0x4b, 0x62, 0x89, 0x02, 0x92, 0x44, 0x80, 0xf4, 0xb8, 0x13, 0x9a, 0x50, 0x34, 0xd2, 0xf8, 0xe6, 
0xa6, 0x01, 0x1a, 0x2b, 0x1d, 0x54, 0x4d, 0x40, 0xd4, 0x5f, 0x43, 0xa5, 0x3e, 0x84, 0x60, 0x05, 
0x7a, 0x4b, 0x82, 0xe4, 0x1b, 0xe5, 0x85, 0xd2, 0x8d, 0x4b, 0x89, 0x25, 0xb6, 0xeb, 0xa6, 0x9d, 
0x26, 0x9e, 0xab, 0xf4, 0x77, 0x90, 0xd3, 0x5c, 0x80, 0xa7, 0x45, 0x11, 0xc6, 0x72, 0xd9, 0x70, 
0x81, 0x75, 0x0b, 0x37, 0xe1, 0xd4, 0x14, 0x37, 0xd4, 0x5a, 0xd1, 0x71, 0x61, 0x04, 0x7e, 0x3b, 
0x8b, 0x29, 0xae, 0x8e, 0x41, 0x45, 0xb7, 0x26, 0xeb, 0xdd, 0x32, 0xd9, 0xc7, 0xfe, 0x95, 0x61, 
0xff, 0xba, 0xc7, 0xc2, 0xb1, 0x56, 0xe0, 0x0b, 0xff, 0x73, 0x7f, 0x45, 0xc8, 0xdc, 0xfc, 0xc3, 
0x1b, 0x02, 0x77, 0x60, 0x2c, 0xd4, 0xe6, 0xd1, 0xcc, 0x30, 0x6b, 0xbf, 0xea, 0x9a, 0x5c, 0xd1, 
0xd5, 0x43, 0x72, 0x9f, 0x95, 0x7c, 0x18, 0x93, 0xda, 0x1a, 0xb6, 0xf3, 0x22, 0x22, 0xeb, 0x90, 
0xc5, 0x16, 0x99, 0x8a, 0xa8, 0xad, 0xe5, 0xb1, 0x4e, 0x15, 0x1b, 0xba, 0xd6, 0xd8, 0xff, 0xb5, 
0x84, 0xb8, 0x16, 0x53, 0x42, 0x2b, 0xb4, 0x9c, 0x06, 0x20, 0x27, 0xfd, 0x36, 0xce, 0x05, 0x4c, 
0x42, 0x69, 0x19, 0x9e, 0xac, 0xc4, 0x60, 0xe6, 0x01, 0xb8, 0x57, 0xc1, 0x67, 0xf7, 0x30, 0x3d, 
0xdd, 0xbf, 0x50, 0x79, 0x07, 0x04, 0x47, 0x6c, 0x21, 0xde, 0x3d, 0xf2, 0x1b, 0x38, 0x3c, 0x02, 
0xd3, 0xad, 0x65, 0xa0, 0x1b, 0x46, 0xfe, 0x43, 0x21, 0x3c, 0xa6, 0xdd, 0x87, 0xc3, 0x80, 0xa4, 
0xe9, 0x19, 0x9c, 0x81, 0xa1, 0x7b, 0x21, 0x28, 0x5c, 0xd9, 0xe1, 0x7e, 0x73, 0x73, 0xb3, 0x3c, 
0x29, 0xa1, 0x21, 0xa4, 0xc3, 0x8a, 0x2b, 0x88, 0x2b, 0xa6, 0x93, 0xc2, 0xc2, 0x60, 0x4a, 0x15, 
0x8c, 0xe1, 0x4d, 0xc3, 0xf7, 0xb8, 0x82, 0x70, 0x26, 0x96, 0xb8, 0xf1, 0xf7, 0x70, 0x57, 0x00, 
0xf5, 0x0a, 0xad, 0xfa, 0xb0, 0xe7, 0x63, 0xb6, 0x8f, 0x32, 0xc3, 0x5d, 0xb2, 0x5e, 0x01, 0x44, 
0xa0, 0x50, 0xfe, 0xf7, 0xb0, 0x5c, 0x00, 0xea, 0x0a, 0x8e, 0x01, 0x8b, 0x83, 0x0a, 0x8e, 0x01, 
0x6f, 0x04, 0x5d, 0xf2, 0x5b, 0x01, 0xb6, 0xc0, 0xef, 0xf4, 0xef, 0xe1, 0x77, 0x65, 0xe7, 0x51, 
0x9e, 0xb3, 0xa8, 0x04, 0x08, 0x25, 0xf0, 0xd9, 0x9d, 0x6e, 0x5a, 0x91, 0x5b, 0x5e, 0x01, 0x92, 
0xb7, 0x28, 0x08, 0xfa, 0x51, 0x7c, 0xf0, 0x8d, 0x7e, 0x67, 0xd9, 0x9f, 0xbf, 0x64, 0x6c, 0xae, 
0x86, 0x58, 0x5e, 0xe5, 0xa2, 0x6f, 0x21, 0x31, 0xaf, 0x5c, 0x15, 0x09, 0x3f, 0x5a, 0x16, 0xc7, 
0x58, 0xbe, 0x4b, 0x6d, 0x50, 0x1e, 0xf4, 0x7e, 0xa8, 0x79, 0x56, 0xba, 0x6c, 0x5d, 0xd7, 0xa2, 
0x36, 0x81, 0xf7, 0x4c, 0x49, 0x2e, 0x2a, 0xc9, 0x22, 0xdf, 0x00, 0xa0, 0xbc, 0x1f, 0xeb, 0x04, 
0xd7, 0xaf, 0xe9, 0xf1, 0xfd, 0xaa, 0x0f, 0x52, 0x73, 0x37, 0x55, 0x5d, 0xcc, 0x20, 0x80, 0xab, 
0x6b, 0x87, 0x52, 0x3c, 0x6e, 0x92, 0xe7, 0x06, 0xc4, 0x8e, 0x46, 0xa3, 0x94, 0x8a, 0xf7, 0x08, 
0x49, 0x56, 0xb0, 0x6c, 0x9f, 0x48, 0x48, 0x02, 0xc6, 0x22, 0x1e, 0x46, 0xd3, 0x94, 0x46, 0x53, 
0x51, 0x0a, 0x2e, 0xc6, 0x52, 0x98, 0x3d, 0xff, 0xcf, 0x3f, 0x97, 0x8d, 0x7d, 0xbf, 0x96, 0xac, 
0x9a, 0xd7, 0x7b, 0x69, 0xa1, 0xb1, 0x9f, 0xd6, 0x02, 0x73, 0xfd, 0xd0, 0xff, 0x67, 0x4b, 0x21, 
0x45, 0x4b, 0xf1, 0x30, 0x97, 0xcd, 0x31, 0xb1, 0x80, 0x79, 0x32, 0xb1, 0xe3, 0x05, 0x9f, 0x45, 
0x83, 0xc6, 0x6c, 0x28, 0x4b, 0xd3, 0x0b, 0x96, 0xcf, 0x01, 0x50, 0xd6, 0x5c, 0xb9, 0x02, 0x61, 
0x40, 0x03, 0x29, 0x22, 0x93, 0x0f, 0x5a, 0x7f, 0x1b, 0xcd, 0x68, 0x72, 0x48, 0x52, 0x6a, 0x40, 
0xd4, 0x14, 0x85, 0x7c, 0x85, 0xf9, 0xa6, 0x93, 0x54, 0x8d, 0xda, 0xdc, 0x24, 0x8a, 0xbc, 0x50, 
0x6b, 0x47, 0x1c, 0xf3, 0x2e, 0x90, 0x6f, 0x5a, 0xda, 0x81, 0xda, 0x58, 0xf9, 0x81, 0xd4, 0x47, 
0x2a, 0xcd, 0x34, 0x4c, 0x0b, 0xea, 0x02, 0x38, 0xe6, 0x8b, 0x24, 0x8a, 0xc9, 0x58, 0x56, 0x49, 
0xd0, 0x87, 0xee, 0x81, 0xab, 0x59, 0x1b, 0x4d, 0x5c, 0x70, 0xa5, 0x0d, 0x3f, 0xf7, 0x9b, 0x55, 
0x8d, 0xc1, 0x2d, 0x3d, 0x0b, 0x87, 0x2b, 0x5f, 0xaa, 0x88, 0x1a, 0x04, 0x2f, 0x48, 0x13, 0x43, 
0xe5, 0x1f, 0x3c, 0x3b, 0x07, 0x70, 0xb7, 0x66, 0x3b, 0xda, 0x63, 0xed, 0xa8, 0x56, 0x33, 0x55, 
0x26, 0xee, 0xba, 0x50, 0x87, 0x44, 0x37, 0x32, 0x79, 0x04, 0xa1, 0xca, 0x91, 0xc5, 0x80, 0xbd, 
0x91, 0xa8, 0xf2, 0x0b, 0x7c, 0xc3, 0x3c, 0xd2, 0x2c, 0xd6, 0x3e, 0xab, 0x98, 0xfd, 0x8d, 0xe4, 
0x83, 0x62, 0x8a, 0xd1, 0x86, 0x4c, 0x66, 0x3d, 0xc9, 0x10, 0x66, 0x3a, 0x63, 0xc2, 0x9b, 0x20, 
0x00, 0x79, 0xa0, 0x55, 0x5d, 0x40, 0xe2, 0xea, 0xc8, 0xb7, 0x89, 0x08, 0x57, 0x6f, 0x41, 0xf6, 
0xfa, 0x39, 0xcd, 0x5e, 0xbc, 0x34, 0x7f, 0xbb, 0x2f, 0x10, 0x21, 0x6d, 0xcd, 0xc8, 0x11, 0x1f, 
0x65, 0xaf, 0x50, 0x6d, 0xe6, 0xeb, 0xe4, 0xc4, 0xfc, 0x19, 0xc7, 0xd9, 0x5b, 0x3c, 0xc9, 0xdf, 
0x26, 0xf4, 0x7e, 0x39, 0x2f, 0xca, 0xa9, 0x3e, 0xd5, 0x1d, 0x65, 0x63, 0x1b, 0xcd, 0x45, 0xf6, 
0xd2, 0x5a, 0xc9, 0x9f, 0xfc, 0x3f, 0xca, 0x1f, 0xf3, 0x71, 0x2e, 0x4d, 0x9c, 0xbf, 0x8d, 0x59, 
0x2e, 0xcb, 0x30, 0x8c, 0xbf, 0xcb, 0x49, 0x50, 0x28, 0x5a, 0x0b, 0x45, 0xa7, 0xf8, 0x51, 0x5d, 
0x28, 0x4c, 0xc7, 0x18, 0x95, 0xfc, 0x71, 0x64, 0x7b, 0xf8, 0x3c, 0x8b, 0x7c, 0x99, 0x5d, 0x9a, 
0x56, 0x68, 0x8c, 0x20, 0xf3, 0xd5, 0xcd, 0xa2, 0x9f, 0x4e, 0xff, 0xdb, 0x5a, 0xf1, 0xe8, 0xf8, 
0xed, 0x71, 0xff, 0xb8, 0x98, 0x4a, 0x23, 0xe7, 0x05, 0x93, 0x8a, 0x4b, 0x65, 0xf4, 0x2a, 0x23, 
0x80, 0x94, 0x1b, 0x45, 0x01, 0x7b, 0x05, 0x30, 0x91, 0x7e, 0xf1, 0xba, 0x77, 0x7e, 0x66, 0xc7, 
0x24, 0x01, 0x8f, 0x24, 0x25, 0xe6, 0xc2, 0x7c, 0x89, 0xe2, 0xc6, 0x2f, 0x8f, 0x0b, 0x09, 0xbc, 
0xfc, 0x00, 0xe0, 0x88, 0x85, 0xa5, 0x76, 0x53, 0x05, 0xeb, 0x44, 0xe6, 0x9d, 0xd9, 0x5d, 0x0d, 
0x04, 0xa7, 0xd1, 0x2a, 0x50, 0xe5, 0x38, 0x33, 0x2a, 0xc2, 0xbc, 0xb8, 0x9b, 0x56, 0x15, 0x45, 
0x23, 0xd3, 0x12, 0x13, 0x96, 0x16, 0x8b, 0xed, 0x12, 0x28, 0xfc, 0x45, 0x6d, 0x2f, 0x96, 0x6f, 
0x72, 0xb9, 0xf5, 0xdc, 0x5b, 0x7d, 0xab, 0x51, 0xf8, 0x60, 0x11, 0x44, 0xcc, 0x62, 0xb4, 0xcd, 
0xcf, 0x46, 0x87, 0xd8, 0xc3, 0xb8, 0x0e, 0xc5, 0xc1, 0xcf, 0x9a, 0x27, 0xcf, 0xcd, 0x93, 0x17, 
0xdd, 0x73, 0xb9, 0x62, 0x7b, 0x08, 0x5c, 0xdc, 0xb6, 0x57, 0x8e, 0x53, 0x49, 0x51, 0xbe, 0x58, 
0x3d, 0x09, 0x7d, 0x1c, 0x28, 0xd2, 0xc3, 0x8b, 0x04, 0xf4, 0x73, 0xe8, 0xff, 0x4c, 0xee, 0x88, 
0xba, 0xca, 0x29, 0x4f, 0x93, 0x44, 0xef, 0x0f, 0x74, 0xe0, 0xd2, 0x4e, 0xdf, 0xea, 0x47, 0x47, 
0xaf, 0xa6, 0x2c, 0x61, 0x24, 0x5d, 0xbd, 0x16, 0xd0, 0x40, 0x54, 0x81, 0xcb, 0x0a, 0x71, 0x24, 
0xb6, 0x80, 0xf1, 0x67, 0xae, 0xa8, 0x89, 0x72, 0x0c, 0x5b, 0xfa, 0x1d, 0x80, 0xea, 0xb7, 0x1c, 
0xaf, 0x02, 0xe7, 0x15, 0xa6, 0x97, 0x3c, 0x8a, 0xac, 0xd5, 0xaa, 0x48, 0xec, 0x06, 0xd1, 0xd0, 
0xc0, 0x5b, 0xa4, 0x39, 0x9e, 0x96, 0xc3, 0x17, 0x66, 0xc5, 0xa5, 0x4c, 0xa9, 0x62, 0x25, 0x96, 
0x57, 0x86, 0x6d, 0xe4, 0xb0, 0x64, 0xee, 0xd5, 0x75, 0xd4, 0xf7, 0x2a, 0xad, 0x2c, 0xa3, 0x91, 
0x4e, 0x49, 0x0f, 0x02, 0x1b, 0x92, 0x0e, 0x79, 0x8f, 0x02, 0x88, 0xe6, 0x14, 0x5a, 0xba, 0x8e, 
0x99, 0xa9, 0x17, 0x50, 0x92, 0xf4, 0x64, 0xf5, 0x2b, 0x83, 0xde, 0x1a, 0x86, 0x7e, 0xcf, 0x57, 
0xf1, 0xe1, 0xd0, 0x85, 0x95, 0x9a, 0x0b, 0x1d, 0xaf, 0xd6, 0x47, 0x8c, 0x53, 0x5f, 0x5f, 0x01, 
0xa9, 0xac, 0x56, 0xf5, 0x86, 0xbc, 0x04, 0xb5, 0xe5, 0xb9, 0x99, 0x56, 0xd5, 0x40, 0x2c, 0x6b, 
0xb9, 0x1b, 0x01, 0x7b, 0xd5, 0x74, 0x02, 0x74, 0xa2, 0x6e, 0x50, 0x42, 0xbc, 0x91, 0xa9, 0x1e, 
0xc5, 0x60, 0x14, 0x53, 0xa3, 0xa0, 0x2a, 0x86, 0x70, 0xac, 0x4c, 0xcb, 0x95, 0xc0, 0xb4, 0xa4, 
0x28, 0x83, 0x37, 0xf3, 0xcb, 0x15, 0xe2, 0x51, 0x1b, 0xc5, 0x00, 0x51, 0x33, 0x28, 0xc9, 0x5c, 
0x62, 0x43, 0x4e, 0x0b, 0x30, 0x8b, 0xea, 0xd1, 0x34, 0x95, 0xaa, 0x41, 0xd5, 0x9d, 0x02, 0x1e, 
0x18, 0x3a, 0x4c, 0x6b, 0x84, 0xf0, 0x86, 0x1b, 0xa1, 0x12, 0x81, 0xd0, 0x9f, 0xd0, 0x30, 0xa3, 
0x08, 0x7c, 0x05, 0x12, 0x41, 0xd2, 0x3f, 0xe4, 0x69, 0xf4, 0x64, 0xb6, 0xca, 0xf8, 0xd8, 0x6d, 
0x35, 0x9a, 0xd6, 0xe3, 0x65, 0x07, 0x29, 0xed, 0x45, 0x23, 0xd1, 0x27, 0xc3, 0xd4, 0x80, 0x64, 
0xa3, 0x62, 0x04, 0x90, 0x7a, 0x10, 0xe4, 0x8d, 0xad, 0x6c, 0xbf, 0x13, 0xc8, 0x22, 0x03, 0xcc, 
0x24, 0x3b, 0x1e, 0x7e, 0xf0, 0x7c, 0x0b, 0xca, 0xc8, 0x66, 0x02, 0xb1, 0x37, 0x89, 0x66, 0x17, 
0x09, 0xe3, 0xe2, 0x54, 0x96, 0xbc, 0xc6, 0x46, 0x4b, 0x1e, 0xb5, 0xba, 0xa8, 0x91, 0x67, 0x99, 
0xdf, 0xe0, 0xcc, 0x31, 0x87, 0x70, 0x4a, 0xf7, 0x38, 0xd6, 0x10, 0x4e, 0x0c, 0x52, 0x1a, 0x67, 
0x3e, 0x83, 0x6a, 0x59, 0x3f, 0x14, 0x49, 0x50, 0xef, 0xe9, 0x56, 0x48, 0x3c, 0x68, 0xa8, 0x31, 
0xd0, 0x5e, 0x58, 0x88, 0x53, 0x4e, 0x11, 0x40, 0x7d, 0xc8, 0x4b, 0x28, 0x32, 0xae, 0xec, 0xcb, 
0xac, 0xe9, 0x90, 0x2f, 0x03, 0x5e, 0x82, 0x6f, 0xfb, 0xe7, 0x3c, 0x78, 0x70, 0x20, 0x2e, 0xfe, 
0x80, 0x0f, 0x38, 0xd7, 0xe8, 0x7b, 0x7c, 0x7c, 0x5c, 0xe3, 0xe3, 0x63, 0x15, 0x1f, 0xb4, 0xac, 
0x3c, 0x68, 0x0c, 0x60, 0xd9, 0x53, 0xc2, 0xc9, 0x98, 0x26, 0xd0, 0x81, 0x9b, 0xa0, 0x4a, 0x7e, 
0x8a, 0xb3, 0x84, 0x7e, 0x9f, 0xb3, 0xde, 0x84, 0x8d, 0xc4, 0x23, 0xfe, 0xf2, 0xde, 0xff, 0x82, 
0x4b, 0xdc, 0xb0, 0x9a, 0xcb, 0x2c, 0x0f, 0x2e, 0x05, 0x2f, 0x05, 0x50, 0xd5, 0xf7, 0x33, 0x64, 
0x79, 0x3f, 0x23, 0x5c, 0xbc, 0x8f, 0x42, 0x4f, 0xb3, 0x4a, 0xae, 0xf2, 0xf3, 0x36, 0x9f, 0xc0, 
0x1a, 0x0b, 0x2b, 0x28, 0x94, 0x92, 0xbc, 0x0b, 0x05, 0xc4, 0x5b, 0x60, 0xcd, 0x50, 0xdc, 0x50, 
0x77, 0xbe, 0x80, 0x0d, 0x0d, 0x50, 0x91, 0x1f, 0xcd, 0x80, 0x69, 0x4f, 0xa6, 0xd5, 0xf6, 0x04, 
0xe2, 0x2f, 0x08, 0x07, 0x5b, 0x42, 0x14, 0x6f, 0x7c, 0x3a, 0xd8, 0xbc, 0xa9, 0x41, 0xf4, 0x73, 
0xe1, 0x61, 0xba, 0xf0, 0xb2, 0x79, 0xf3, 0x4f, 0xb3, 0x31, 0x66, 0xd6, 0xaa, 0x0e, 0xb6, 0x64, 
0x8a, 0x41, 0x3f, 0xf1, 0x1b, 0x97, 0x80, 0xfc, 0xa5, 0x30, 0x9b, 0x63, 0x20, 0xd8, 0x1d, 0x0a, 
0x0c, 0x0f, 0xfc, 0x35, 0x0a, 0x78, 0x48, 0x1f, 0x04, 0x3c, 0xe1, 0x6e, 0xe1, 0x4a, 0x4c, 0xc7, 
0x6f, 0x53, 0x90, 0xda, 0x40, 0xd9, 0xf2, 0xf8, 0xf6, 0x5e, 0xcf, 0xbf, 0x9c, 0x01, 0x94, 0x63, 
0x89, 0x57, 0x85, 0x31, 0x6a, 0x17, 0x80, 0x13, 0xf5, 0xb2, 0x0e, 0x6e, 0xab, 0x12, 0x45, 0xd1, 
0xab, 0x71, 0xf1, 0xc3, 0xe9, 0xdb, 0x13, 0x21, 0xe2, 0x2b, 0x85, 0xac, 0xb0, 0x58, 0xb9, 0x63, 
0x75, 0xac, 0xe6, 0x5c, 0x24, 0x0f, 0x79, 0xc2, 0x85, 0xe1, 0x45, 0xb9, 0xfa, 0x87, 0xf3, 0xe1, 
0x67, 0x40, 0x6b, 0x43, 0x3f, 0x4d, 0x21, 0xec, 0x6d, 0xd9, 0x38, 0xbd, 0xdf, 0xbf, 0xb0, 0x77, 
0xed, 0x26, 0x64, 0x27, 0xa0, 0x65, 0x48, 0x0e, 0xc0, 0x22, 0x16, 0x3f, 0x35, 0x79, 0xfb, 0xe7, 
0x26, 0x33, 0xc0, 0xb3, 0x14, 0x00, 0x2b, 0x9f, 0x5f, 0x9e, 0x3b, 0x49, 0xa2, 0x99, 0x9c, 0x76, 
0x9c, 0x24, 0x78, 0x48, 0x7d, 0xc8, 0x93, 0xb4, 0x21, 0x74, 0xa6, 0x14, 0xca, 0xc4, 0x88, 0xa6, 
0x1a, 0x8f, 0x84, 0x96, 0x4e, 0xe3, 0x18, 0xca, 0xa7, 0x35, 0x7d, 0xd8, 0x7a, 0x7e, 0x07, 0x74, 
0x39, 0xa5, 0x53, 0xea, 0x67, 0xdd, 0x34, 0x29, 0xe9, 0x05, 0xf3, 0xb8, 0x2f, 0x48, 0x77, 0x3f, 
0xdd, 0x64, 0x59, 0xdd, 0x94, 0x73, 0xc4, 0xd7, 0x8d, 0x96, 0x6a, 0x83, 0x74, 0x13, 0x58, 0xd5, 
0xe5, 0xd3, 0x20, 0x58, 0xb4, 0xd7, 0xd6, 0x82, 0xf2, 0x2f, 0x12, 0x91, 0xbc, 0x98, 0x9f, 0xff, 
0x91, 0x85, 0xb8, 0x92, 0x73, 0x2e, 0xcd, 0x5a, 0x54, 0x67, 0xbd, 0xe6, 0x7c, 0x07, 0x62, 0xab, 
0x8d, 0x9e, 0xf9, 0xd0, 0xc3, 0x2f, 0x5e, 0x70, 0x8c, 0xe8, 0x7c, 0x99, 0x05, 0x7d, 0x23, 0x68, 
0x0b, 0xdb, 0x23, 0x41, 0x80, 0x1f, 0x1b, 0x0d, 0x2c, 0x37, 0x89, 0x98, 0xa6, 0x16, 0x2e, 0x92, 
0xc6, 0x11, 0x4f, 0x69, 0x1f, 0xdc, 0xd1, 0xb4, 0x9a, 0x18, 0xb0, 0x94, 0x6c, 0x59, 0x75, 0x88, 
0xd1, 0xb1, 0x20, 0x1e, 0xde, 0xdc, 0x67, 0xad, 0xcd, 0x4d, 0x6e, 0xe7, 0xec, 0x1b, 0xf9, 0xa4, 
0x14, 0x21, 0x07, 0x4a, 0x61, 0x48, 0xbc, 0x21, 0x7d, 0x2c, 0xeb, 0xa6, 0x69, 0x6d, 0x18, 0x1b, 
0x54, 0x63, 0x1c, 0x36, 0xe7, 0x1e, 0x1a, 0xa3, 0x3a, 0x51, 0x53, 0xb9, 0x2c, 0x77, 0x71, 0x78, 
0xfb, 0x7b, 0x82, 0xa8, 0xdc, 0x22, 0xab, 0x71, 0x75, 0x1d, 0x33, 0x54, 0x8a, 0xb9, 0x3e, 0x09, 
0xd3, 0xe2, 0xb2, 0x79, 0x96, 0x64, 0x12, 0x37, 0x27, 0xb7, 0x69, 0x90, 0xc2, 0xd6, 0xd5, 0xe3, 
0x33, 0x36, 0x96, 0xa5, 0x31, 0xd0, 0xb4, 0x7c, 0x9c, 0x49, 0x6a, 0xb0, 0x13, 0xa8, 0x85, 0x1c, 
0xc8, 0x04, 0xc4, 0x45, 0xcd, 0x87, 0x54, 0x4c, 0x22, 0xff, 0x40, 0x3f, 0xd0, 0x1d, 0x1d, 0xfe, 
0x6e, 0x42, 0x26, 0x55, 0x73, 0x29, 0x14, 0xfc, 0x3e, 0x1d, 0x5c, 0xbd, 0x02, 0xf8, 0x05, 0x95, 
0xe2, 0x07, 0x41, 0x56, 0xd3, 0xf1, 0x36, 0x3b, 0x5b, 0xea, 0x13, 0xbb, 0x31, 0xdb, 0x65, 0xf3, 
0x00, 0x2b, 0x2d, 0x1b, 0x60, 0xc9, 0x7c, 0xec, 0x88, 0xcb, 0x33, 0xc6, 0xc3, 0xa2, 0xd9, 0x97, 
0x00, 0x61, 0x14, 0x47, 0x60, 0x82, 0xf7, 0x88, 0x2d, 0xa3, 0xbc, 0x06, 0xa4, 0x89, 0x46, 0x4e, 
0x83, 0x03, 0x9f, 0x26, 0x41, 0x8d, 0xe0, 0x9d, 0x42, 0x79, 0xab, 0x14, 0x93, 0x49, 0x13, 0xca, 
0xbe, 0x1f, 0x4d, 0x96, 0x53, 0x49, 0x51, 0x7d, 0x3d, 0x91, 0x48, 0x73, 0x58, 0x5b, 0x4f, 0x64, 
0x22, 0x9d, 0x50, 0x85, 0x70, 0x87, 0x78, 0x1d, 0xc2, 0x45, 0x1d, 0x0d, 0x1f, 0xf2, 0x38, 0xc8, 
0x5f, 0x03, 0xa6, 0x50, 0xb9, 0x71, 0x5f, 0x9f, 0xcd, 0x66, 0x75, 0xfc, 0x84, 0x5b, 0x87, 0x1d, 
0x94, 0x22, 0x7d, 0xbd, 0x8a, 0x43, 0x59, 0xd2, 0x59, 0x78, 0x59, 0xe2, 0xac, 0x7b, 0xe4, 0xd2, 
0x2c, 0xd7, 0xcc, 0xae, 0x55, 0x5e, 0x67, 0x8d, 0xcf, 0x95, 0x13, 0xed, 0xed, 0xac, 0x91, 0xc8, 
0x10, 0xbf, 0xd5, 0x42, 0xa0, 0x81, 0x78, 0xec, 0x14, 0xab, 0x67, 0x15, 0x13, 0x56, 0x30, 0x60, 
0xc7, 0xd3, 0x74, 0x62, 0xcc, 0x81, 0x75, 0x47, 0x58, 0x4a, 0x57, 0x0e, 0xb5, 0xd4, 0xa1, 0x3b, 
0xdc, 0xca, 0xdd, 0xce, 0xc1, 0x00, 0x52, 0xe4, 0xed, 0xcf, 0x3f, 0x65, 0x6b, 0xe9, 0x44, 0x85, 
0x15, 0x73, 0x3f, 0x5a, 0xa8, 0xfb, 0xdd, 0x3c, 0x11, 0x96, 0x16, 0xb3, 0x06, 0x27, 0x7b, 0x8d, 
0xec, 0xe3, 0x76, 0xfe, 0x95, 0x5b, 0x03, 0x53, 0x81, 0xf2, 0x57, 0xb8, 0x53, 0x31, 0xaa, 0x3f, 
0xd3, 0x98, 0x8f, 0x89, 0xa6, 0xfc, 0xa2, 0xd1, 0xc0, 0x8c, 0xf3, 0x73, 0xba, 0xff, 0x68, 0xca, 
0x3e, 0x78, 0x46, 0x65, 0xf2, 0x9b, 0x65, 0xa8, 0xca, 0x43, 0xd5, 0x58, 0xf7, 0x1b, 0x5f, 0xbf, 
0xf5, 0xac, 0x30, 0x33, 0xdb, 0xea, 0x45, 0x7d, 0xdb, 0x41, 0x4d, 0xa6, 0x4e, 0xa3, 0xe1, 0xf9, 
0xfc, 0x73, 0x0a, 0xf9, 0x7e, 0x34, 0xf5, 0x47, 0x01, 0x49, 0x28, 0x66, 0x3b, 0x0d, 0xf2, 0x99, 
0xdc, 0x37, 0x02, 0x36, 0x4c, 0x91, 0xb1, 0x46, 0xcb, 0xde, 0xb2, 0x77, 0x33, 0x16, 0x75, 0x2b, 
0x5b, 0x84, 0xa4, 0x0f, 0xdc, 0x43, 0x5c, 0x5d, 0xee, 0x8a, 0xbf, 0xa0, 0x58, 0xfe, 0x20, 0x2a, 
0x47, 0x9a, 0x8b, 0x82, 0x54, 0x8d, 0xec, 0xb7, 0x18, 0xf1, 0x5a, 0x11, 0x92, 0x03, 0xf9, 0x59, 
0xa9, 0x98, 0x23, 0x00, 0x09, 0x2a, 0x78, 0x54, 0x8d, 0x82, 0x1a, 0x4d, 0x16, 0xf0, 0x59, 0x03, 
0xd4, 0x03, 0xc4, 0xd5, 0x90, 0x3c, 0x34, 0xaf, 0xf7, 0x63, 0x3c, 0x5f, 0xef, 0x53, 0x19, 0xc1, 
0x7a, 0x6f, 0x56, 0x4e, 0x65, 0xdf, 0x8a, 0x8a, 0xbf, 0xe8, 0xb0, 0x1c, 0xc9, 0xe4, 0x17, 0x31, 
0x1c, 0x5c, 0xfe, 0x46, 0x56, 0x3d, 0x47, 0x8d, 0x86, 0x17, 0x14, 0x10, 0x1e, 0xf2, 0x57, 0x39, 
0xff, 0xef, 0x3f, 0x01, 0x67, 0x19, 0x90, 0xdb, 0x29, 0x00, 0x00 
};

// WEB HANDLER IMPLEMENTATION

SPIFFSEditor::SPIFFSEditor(const String& username, const String& password)
:_username(username)
,_password(password)
,_authenticated(false)
,_startTime(0)
{}

bool SPIFFSEditor::canHandle(AsyncWebServerRequest *request){
  if(request->url().equalsIgnoreCase("/edit")){
    if(request->method() == HTTP_GET){
      if(request->hasParam("list"))
        return true;
      if(request->hasParam("edit")){
        request->_tempFile = SPIFFS.open(request->arg("edit"), "r");
        if(!request->_tempFile)
          return false;
      }
      if(request->hasParam("download")){
        request->_tempFile = SPIFFS.open(request->arg("download"), "r");
        if(!request->_tempFile)
          return false;
      }
      return true;
    }
    else if(request->method() == HTTP_POST)
      return true;
    else if(request->method() == HTTP_DELETE)
      return true;
    else if(request->method() == HTTP_PUT)
      return true;

  }
  return false;
}


void SPIFFSEditor::handleRequest(AsyncWebServerRequest *request){
  if(_username.length() && _password.length() && !request->authenticate(_username.c_str(), _password.c_str()))
    return request->requestAuthentication();

  if(request->method() == HTTP_GET){
    if(request->hasParam("list")){
      String path = request->getParam("list")->value();
      Dir dir = SPIFFS.openDir(path);
      path = String();
      String output = "[";
      while(dir.next()){
        fs::File entry = dir.openFile("r");
        if (isHidden(entry.name(), EXCLUDELIST)) { continue; }
//        if (String(entry.name()).equals("/ace.js"))  { continue; }
//        if (String(entry.name()).equals("/mode-css.js"))  { continue; }
//        if (String(entry.name()).equals("/mode-html.js")) { continue; }
//        if (String(entry.name()).equals("/worker-html.js"))  { continue; } 
        if (output != "[") output += ',';
        output += "{\"type\":\"";
        output += "file";
        output += "\",\"name\":\"";
        output += String(entry.name());
        output += "\",\"size\":";
        output += String(entry.size());
        output += "}";
        entry.close();
      }
      output += "]";
      request->send(200, "text/json", output);
      output = String();
    }
    else if(request->hasParam("edit") || request->hasParam("download")){
      request->send(request->_tempFile, request->_tempFile.name(), String(), request->hasParam("download"));
    }
    else {
      AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", edit_htm_gz, edit_htm_gz_len);
      response->addHeader("Content-Encoding", "gzip");
      request->send(response);
    }
  } else if(request->method() == HTTP_DELETE){
    if(request->hasParam("path", true)){
      SPIFFS.remove(request->getParam("path", true)->value());
      request->send(200, "", "DELETE: "+request->getParam("path", true)->value());
    } else
      request->send(404);
  } else if(request->method() == HTTP_POST){
    if(request->hasParam("data", true, true) && SPIFFS.exists(request->getParam("data", true, true)->value()))
      request->send(200, "", "UPLOADED: "+request->getParam("data", true, true)->value());
    else
      request->send(500);
  } else if(request->method() == HTTP_PUT){
    if(request->hasParam("path", true)){
      String filename = request->getParam("path", true)->value();
      if(SPIFFS.exists(filename)){
        request->send(200);
      } else {
        fs::File f = SPIFFS.open(filename, "w");
        if(f){
          f.write((uint8_t)0x00);
          f.close();
          request->send(200, "", "CREATE: "+filename);
        } else {
          request->send(500);
        }
      }
    } else
      request->send(400);
  }
}

void SPIFFSEditor::handleUpload(AsyncWebServerRequest *request, const String& filename, size_t index, uint8_t *data, size_t len, bool final){
  if(!index){
    if(!_username.length() || request->authenticate(_username.c_str(),_password.c_str())){
      _authenticated = true;
      request->_tempFile = SPIFFS.open(filename, "w");
      _startTime = millis();
    }
  }
  if(_authenticated && request->_tempFile){
    if(len){
      request->_tempFile.write(data,len);
    }
    if(final){
      request->_tempFile.close();
    }
  }
}



bool matchWild(const char *pattern, const char *testee) {
  const char *nxPat = NULL, *nxTst = NULL;

  while (*testee) {
    if (( *pattern == '?' ) || (*pattern == *testee)){
      pattern++;testee++;
      continue;
    }
    if (*pattern=='*'){
      nxPat=pattern++; nxTst=testee;
      continue;
    }
    if (nxPat){ 
      pattern = nxPat+1; testee=++nxTst;
      continue;
    }
    return false;
  }
  while (*pattern=='*'){pattern++;}  
  return (*pattern == 0);
}


bool isHidden( const char *filename, const char *excludeList) {
  File excludeFile=SPIFFS.open(excludeList, "r");
  if (excludeFile.size() > 0 ) {
    while (excludeFile.available()) {
      String line = excludeFile.readStringUntil('\n');
      line.trim();
      Serial.print("Compare: ");Serial.print(filename);Serial.print(" with: ");Serial.println(line);
      if (matchWild(line.c_str(), filename)) 
        {
          return true;
        }
    }
  }
  excludeFile.close();
  return false; 
}

