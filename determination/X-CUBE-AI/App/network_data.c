#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 2108 ] = {
    0xd4, 0x90, 0xb7, 0xbe, 0x37, 0x0a, 0x95, 0xbe, 0x32, 0xb5,
    0x77, 0xbe, 0x04, 0xa9, 0x47, 0xbe, 0xc8, 0x86, 0x14, 0xbe,
    0x2a, 0x37, 0xc0, 0xbd, 0x8c, 0x2e, 0x3c, 0xbd, 0x62, 0xad,
    0xde, 0x3b, 0x44, 0xad, 0x70, 0x3d, 0x36, 0x63, 0xdb, 0x3d,
    0x3f, 0xc5, 0x1e, 0x3e, 0x90, 0x7e, 0x4d, 0x3e, 0x4a, 0x61,
    0x83, 0x3e, 0x32, 0x33, 0x9d, 0x3e, 0xa3, 0x75, 0xb7, 0x3e,
    0x7c, 0x01, 0xda, 0x3e, 0x76, 0xbb, 0x5b, 0x88, 0x93, 0x3a,
    0x6b, 0x39, 0x74, 0x53, 0x7a, 0x87, 0x93, 0x83, 0x67, 0xa3,
    0x5a, 0x73, 0x88, 0xb5, 0x54, 0x96, 0x56, 0x8a, 0x39, 0x38,
    0x68, 0x4b, 0x86, 0x86, 0x57, 0x57, 0x49, 0xa6, 0x47, 0x56,
    0x55, 0x95, 0x9a, 0x43, 0x44, 0x39, 0xa3, 0x7b, 0x66, 0x46,
    0x73, 0x53, 0x4b, 0x66, 0x56, 0x77, 0x37, 0x5a, 0x59, 0x38,
    0xb5, 0x6b, 0x84, 0x79, 0xb4, 0x94, 0xb8, 0x86, 0x95, 0x67,
    0x48, 0x76, 0x95, 0x34, 0x53, 0x63, 0x84, 0x97, 0x66, 0x65,
    0x39, 0x99, 0x34, 0x59, 0x85, 0x3b, 0x54, 0x98, 0x33, 0x74,
    0xba, 0x5a, 0x34, 0x63, 0x78, 0x6b, 0x63, 0x77, 0x2a, 0x47,
    0x65, 0xa5, 0x4b, 0xb5, 0x78, 0x89, 0x65, 0xb7, 0xcb, 0xba,
    0xbc, 0xd6, 0xcb, 0xeb, 0xd9, 0x67, 0xd5, 0xcd, 0xa7, 0xac,
    0x87, 0xbe, 0xdd, 0x8e, 0xee, 0xab, 0xe7, 0xc8, 0x6e, 0x9d,
    0xb9, 0x88, 0xa8, 0xed, 0xa6, 0x8c, 0xdc, 0x8d, 0x6a, 0x6b,
    0x67, 0xb9, 0x7c, 0x98, 0x95, 0x5a, 0x8c, 0xee, 0xd8, 0xec,
    0x6d, 0x7c, 0xc6, 0x56, 0xa8, 0x69, 0xa5, 0x44, 0x54, 0x83,
    0xbb, 0x34, 0x36, 0x63, 0x57, 0x6b, 0x39, 0x9b, 0x43, 0xa9,
    0x76, 0x66, 0xb3, 0x63, 0x63, 0xa6, 0xa4, 0x62, 0x44, 0x33,
    0x4a, 0x56, 0x89, 0xa9, 0x97, 0x38, 0x87, 0xab, 0x88, 0x47,
    0xa5, 0xb3, 0xba, 0x58, 0x66, 0x53, 0x53, 0xb4, 0xa5, 0x34,
    0x59, 0x48, 0xb3, 0x86, 0xdc, 0xfe, 0xc8, 0x9e, 0x8b, 0x7b,
    0xd7, 0xa7, 0x75, 0x45, 0xb5, 0x55, 0x35, 0x87, 0x39, 0x67,
    0x61, 0x86, 0x74, 0x79, 0x15, 0x35, 0x93, 0x56, 0x22, 0x29,
    0x89, 0x5a, 0x83, 0x34, 0x68, 0xb6, 0x9b, 0x97, 0xa9, 0x95,
    0x95, 0xb9, 0x99, 0x4b, 0x89, 0x66, 0x86, 0xc8, 0x94, 0xc8,
    0x97, 0xa7, 0xb9, 0x7a, 0x57, 0x54, 0x75, 0xb8, 0x57, 0x95,
    0x64, 0xa3, 0x5b, 0x57, 0xb6, 0xa3, 0x8a, 0xab, 0x65, 0x78,
    0x89, 0x59, 0x35, 0x66, 0x73, 0x64, 0x48, 0x87, 0x54, 0x54,
    0xa8, 0x48, 0x35, 0x88, 0xa9, 0x63, 0x45, 0x35, 0x9b, 0x9b,
    0x3a, 0x37, 0x75, 0x66, 0x95, 0x98, 0x49, 0x68, 0xa8, 0x65,
    0x36, 0x74, 0x6a, 0x7b, 0xa5, 0x64, 0xaa, 0xaa, 0x77, 0x87,
    0x7b, 0x93, 0xa3, 0x39, 0x28, 0x36, 0x5a, 0x44, 0x55, 0x3a,
    0x98, 0x49, 0x5a, 0x89, 0x5b, 0x33, 0x45, 0x73, 0x39, 0x98,
    0x6a, 0x99, 0x64, 0x3a, 0x57, 0x66, 0x54, 0x45, 0x53, 0x74,
    0x53, 0xa6, 0x75, 0x9a, 0x85, 0xa5, 0x63, 0xb7, 0x4b, 0x88,
    0xb8, 0x69, 0x57, 0x98, 0x10, 0x40, 0x06, 0x54, 0x61, 0x46,
    0x88, 0xa9, 0x9a, 0x86, 0x63, 0xa4, 0x67, 0x4a, 0x8b, 0x4a,
    0xc7, 0x8c, 0xac, 0x99, 0x89, 0x7a, 0xc7, 0xcb, 0x46, 0x65,
    0x99, 0x56, 0x7b, 0x46, 0x54, 0x39, 0x96, 0x9a, 0x44, 0x63,
    0x6b, 0x7a, 0x76, 0x32, 0xa6, 0x48, 0x3a, 0x44, 0x78, 0x56,
    0x77, 0xb4, 0x87, 0x47, 0x48, 0xa9, 0x38, 0x33, 0xb5, 0x78,
    0x37, 0x67, 0x69, 0x44, 0x93, 0xa4, 0x44, 0x78, 0x49, 0xb7,
    0x4a, 0x75, 0x44, 0x83, 0x59, 0x75, 0x43, 0x66, 0x37, 0x67,
    0x33, 0xa6, 0xb5, 0x59, 0x66, 0xbb, 0x37, 0x76, 0x46, 0x98,
    0x46, 0x69, 0x8a, 0x59, 0x4a, 0x3a, 0x5a, 0xb3, 0x75, 0xb4,
    0x53, 0x6a, 0xab, 0x56, 0xc7, 0xcc, 0xcb, 0xab, 0x7c, 0x9c,
    0x8c, 0xca, 0xb8, 0xad, 0x99, 0xb7, 0xc6, 0x88, 0x59, 0x8a,
    0x63, 0x74, 0x28, 0xa8, 0x97, 0x36, 0x86, 0x58, 0xb3, 0x98,
    0x66, 0x9b, 0x4b, 0x6d, 0xbc, 0xcd, 0x58, 0x6a, 0x97, 0xa9,
    0x57, 0x89, 0xc9, 0xa6, 0x95, 0xce, 0x7d, 0x7b, 0x9a, 0xd7,
    0x8a, 0x7d, 0x58, 0x68, 0x04, 0x71, 0x52, 0x71, 0x75, 0x70,
    0x58, 0x03, 0x31, 0x72, 0x76, 0x7b, 0xb6, 0x95, 0x47, 0xd6,
    0xd6, 0x7a, 0xa9, 0xba, 0xdc, 0xd8, 0xb9, 0x8a, 0x77, 0x8a,
    0x89, 0x64, 0xb8, 0x64, 0x63, 0x85, 0x85, 0x95, 0x48, 0xa9,
    0x67, 0x4a, 0x77, 0xa8, 0x45, 0x57, 0x67, 0x56, 0x41, 0x62,
    0x28, 0x78, 0x58, 0xa9, 0xa3, 0xa9, 0x8a, 0x9b, 0x33, 0x84,
    0x46, 0x9a, 0x63, 0x48, 0xb4, 0x67, 0xa5, 0xb3, 0x38, 0x94,
    0x45, 0x84, 0x66, 0x44, 0x39, 0x7a, 0x6b, 0xb8, 0x75, 0x85,
    0x48, 0x73, 0x85, 0x53, 0x89, 0x4b, 0x3a, 0x77, 0x7b, 0xa5,
    0x4b, 0xb7, 0x96, 0x37, 0x68, 0xb7, 0x6a, 0x93, 0x58, 0x6b,
    0x44, 0x54, 0x87, 0x35, 0x00, 0x37, 0x50, 0x10, 0x51, 0x14,
    0x23, 0x32, 0x29, 0x45, 0xa7, 0x44, 0xc7, 0x79, 0xc7, 0x8c,
    0xb9, 0xcb, 0xb7, 0xb5, 0xbc, 0x8c, 0xb8, 0xa7, 0x77, 0x95,
    0xbc, 0x79, 0xcb, 0xb4, 0x9b, 0x98, 0x99, 0x29, 0x79, 0x32,
    0x79, 0x97, 0x54, 0x4a, 0x64, 0x49, 0x49, 0xb6, 0x89, 0x43,
    0x26, 0x44, 0x75, 0x39, 0x51, 0x05, 0x77, 0xbd, 0x8a, 0xba,
    0xc6, 0x8c, 0x64, 0x55, 0xcc, 0xa8, 0x49, 0x8b, 0xa8, 0x96,
    0x98, 0x93, 0xb6, 0xa8, 0x37, 0x36, 0x75, 0x95, 0x57, 0x54,
    0x8b, 0x75, 0xba, 0x8a, 0xa4, 0x97, 0xbb, 0xab, 0x97, 0x7a,
    0xb4, 0xc5, 0x65, 0xc5, 0x75, 0xca, 0xcd, 0xc7, 0x99, 0x57,
    0xc6, 0x7a, 0x5c, 0x94, 0xfb, 0xd7, 0xcd, 0xaa, 0xee, 0x7c,
    0xc6, 0x6a, 0x77, 0xaa, 0x89, 0xa5, 0x64, 0x84, 0xa3, 0x6a,
    0xb9, 0x83, 0xa9, 0xa5, 0x3a, 0xb9, 0xa7, 0x74, 0x34, 0x5b,
    0x89, 0x7a, 0xa5, 0x46, 0x4c, 0x64, 0x99, 0x5c, 0xb4, 0xc5,
    0xb9, 0x85, 0xc4, 0x5a, 0x6c, 0x85, 0x7c, 0x7c, 0xb6, 0x7b,
    0x55, 0x88, 0x89, 0xcd, 0x78, 0x33, 0x95, 0x95, 0x99, 0x4a,
    0x56, 0x36, 0x97, 0x47, 0x98, 0x43, 0x74, 0x44, 0xb4, 0x56,
    0xb4, 0x55, 0x37, 0x53, 0x64, 0x89, 0xb6, 0x54, 0x55, 0x3a,
    0x87, 0x58, 0x44, 0x96, 0x69, 0x4b, 0x7b, 0x47, 0xb4, 0xa8,
    0x66, 0xa6, 0x47, 0xa3, 0x34, 0x77, 0x86, 0xb7, 0x68, 0x43,
    0x48, 0x65, 0x67, 0x8b, 0xdb, 0xb9, 0xd5, 0x58, 0xbd, 0x74,
    0xac, 0xa6, 0x66, 0x69, 0x6b, 0x47, 0x47, 0xc7, 0x54, 0x6b,
    0xc4, 0x75, 0xa7, 0x84, 0xc5, 0x46, 0x6a, 0xba, 0xab, 0x9b,
    0x45, 0x49, 0x99, 0x6b, 0x97, 0x6c, 0x88, 0x74, 0xcc, 0xb4,
    0x8a, 0xbb, 0x89, 0xb7, 0x84, 0xa8, 0x96, 0x89, 0xbc, 0x5b,
    0x84, 0x6b, 0xb9, 0x54, 0x65, 0x3a, 0xba, 0x46, 0xa3, 0x94,
    0xa4, 0x66, 0xa9, 0x47, 0x6b, 0xa4, 0xab, 0x46, 0x84, 0x67,
    0xba, 0x43, 0x56, 0x54, 0x44, 0x79, 0x25, 0xa9, 0x53, 0x43,
    0x6b, 0x74, 0x98, 0x47, 0x37, 0x36, 0x44, 0xb8, 0x68, 0xb8,
    0x5a, 0x89, 0x79, 0x73, 0x3b, 0x83, 0x39, 0xb6, 0x45, 0x57,
    0xbb, 0x95, 0x87, 0x88, 0x5b, 0xaa, 0x67, 0xb4, 0x4b, 0x62,
    0x55, 0x34, 0x94, 0x55, 0x75, 0x28, 0x99, 0x5a, 0x35, 0x96,
    0x85, 0xa9, 0xa4, 0x3a, 0x75, 0xa5, 0x74, 0x59, 0x46, 0x98,
    0x39, 0x87, 0x58, 0x8b, 0x4b, 0x94, 0xaa, 0x84, 0x74, 0x29,
    0x9a, 0x44, 0x98, 0x6a, 0xab, 0x84, 0x76, 0x94, 0x38, 0x54,
    0x86, 0xa4, 0x36, 0x95, 0xf8, 0x99, 0x8c, 0xc9, 0xb9, 0x8e,
    0x9b, 0xed, 0xa6, 0x7b, 0x97, 0x9b, 0x67, 0xed, 0xb7, 0xc6,
    0xbd, 0x8a, 0x55, 0xcb, 0x6a, 0xc8, 0x55, 0xd5, 0x68, 0xc8,
    0x7b, 0xbc, 0x9b, 0xde, 0xd8, 0xad, 0xdb, 0x9e, 0x6e, 0xe9,
    0xc9, 0x79, 0xc9, 0x58, 0xbd, 0xcd, 0xba, 0x86, 0x7c, 0xdc,
    0xbb, 0xcb, 0xcd, 0xee, 0x93, 0x43, 0x64, 0xb9, 0x87, 0x54,
    0x84, 0x55, 0xa6, 0x6b, 0x4a, 0x92, 0x76, 0x63, 0x68, 0x76,
    0x8b, 0x35, 0x73, 0x58, 0xb5, 0x89, 0x79, 0xa6, 0x73, 0xa3,
    0x99, 0x69, 0x89, 0x59, 0x63, 0x98, 0x3b, 0x36, 0x96, 0x44,
    0xa7, 0x3b, 0x3a, 0x65, 0x66, 0x65, 0x47, 0x56, 0x43, 0x56,
    0x93, 0x37, 0xb5, 0x59, 0x69, 0xe6, 0xdc, 0x68, 0xdb, 0x6a,
    0xc9, 0x96, 0x48, 0xa9, 0x9b, 0xb5, 0xb5, 0x49, 0x38, 0x45,
    0xa2, 0x37, 0x95, 0x37, 0x73, 0x89, 0x37, 0x6b, 0x86, 0x45,
    0x77, 0xa4, 0xa5, 0x6a, 0x76, 0x69, 0x7b, 0x93, 0xa9, 0x63,
    0x47, 0x7b, 0x76, 0x88, 0x54, 0xb5, 0xa5, 0x46, 0x3a, 0x88,
    0xa8, 0x49, 0xaa, 0x48, 0x33, 0x36, 0x4a, 0x47, 0xa4, 0x64,
    0x33, 0x65, 0x38, 0x56, 0xb6, 0x97, 0x36, 0x68, 0x85, 0xa7,
    0x9a, 0x97, 0x64, 0x83, 0xb4, 0x87, 0x35, 0x72, 0x6b, 0x97,
    0x47, 0x97, 0x88, 0x64, 0x95, 0xb3, 0x37, 0x55, 0x79, 0x73,
    0x4b, 0x78, 0x58, 0x67, 0x9a, 0x83, 0x9a, 0x9a, 0x69, 0x75,
    0xa4, 0xa9, 0x27, 0x77, 0x5e, 0x59, 0x59, 0x29, 0x22, 0x99,
    0x55, 0x87, 0x8b, 0x57, 0xa6, 0x85, 0x9b, 0x68, 0x97, 0x69,
    0x6e, 0xcc, 0xc6, 0x88, 0x76, 0xdb, 0xec, 0xcc, 0xd5, 0xbc,
    0xba, 0x8a, 0x8b, 0x7b, 0x9a, 0x99, 0x43, 0x9a, 0x78, 0xb7,
    0x63, 0x38, 0x89, 0x4a, 0x66, 0x4a, 0x96, 0x39, 0x4a, 0x56,
    0x4a, 0x83, 0x95, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x42, 0xf9, 0x1b, 0xbd, 0x00, 0x00, 0x00, 0x00,
    0xdc, 0x8a, 0x39, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x20, 0x48, 0x5a, 0x3e, 0x00, 0x00, 0x00, 0x00,
    0x36, 0xfc, 0x69, 0xbd, 0x35, 0xbc, 0xd6, 0x3d, 0x00, 0x00,
    0x00, 0x00, 0xb5, 0xbf, 0x1f, 0x3e, 0x09, 0x84, 0x4d, 0x3e,
    0x8e, 0x3f, 0x4f, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x7a, 0xe6,
    0x84, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x76, 0x3d, 0xdf, 0xbb,
    0xea, 0x76, 0x0d, 0xbe, 0x00, 0x00, 0x00, 0x00, 0xb7, 0xe7,
    0x51, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x11, 0x68, 0xbd,
    0x20, 0x6b, 0x16, 0xbf, 0x0e, 0x40, 0x01, 0xbf, 0x60, 0xd0,
    0xe0, 0xbe, 0x82, 0x17, 0xac, 0xbe, 0x31, 0xb0, 0x8c, 0xbe,
    0x3b, 0xa2, 0x47, 0xbe, 0x3e, 0x35, 0xdf, 0xbd, 0x0d, 0x71,
    0xc6, 0xbc, 0x54, 0x54, 0x85, 0x3d, 0x13, 0x7b, 0x11, 0x3e,
    0x87, 0x04, 0x63, 0x3e, 0x04, 0x87, 0x99, 0x3e, 0x44, 0x0a,
    0xbd, 0x3e, 0x99, 0x1a, 0xea, 0x3e, 0xf7, 0x29, 0x05, 0x3f,
    0xa0, 0xc0, 0x24, 0x3f, 0xb7, 0x96, 0xc7, 0xb3, 0x86, 0x7a,
    0x99, 0x88, 0xba, 0x65, 0x9c, 0xb7, 0x96, 0x94, 0x58, 0x9c,
    0x79, 0xeb, 0x97, 0x7c, 0x8c, 0x67, 0xa4, 0x94, 0x94, 0x48,
    0x76, 0x96, 0x79, 0x68, 0x96, 0x48, 0x6a, 0x97, 0x57, 0x5a,
    0x57, 0x5b, 0x7b, 0x73, 0x94, 0x54, 0x37, 0x7b, 0x3b, 0x83,
    0x6a, 0xb8, 0x6b, 0xd8, 0x44, 0x99, 0x7e, 0x79, 0xd9, 0xc4,
    0xc7, 0x9c, 0x6a, 0xac, 0x4a, 0x37, 0x98, 0xbb, 0x3a, 0x7b,
    0x9b, 0x6a, 0x96, 0x74, 0x85, 0x57, 0xa4, 0x86, 0x9b, 0xaa,
    0xaa, 0x37, 0x56, 0x9b, 0x53, 0x56, 0xbb, 0xb5, 0x67, 0x3c,
    0x5a, 0x83, 0x48, 0x68, 0xab, 0x84, 0x45, 0xc6, 0x9b, 0x75,
    0xb3, 0x84, 0xb7, 0xb0, 0x88, 0x76, 0x4b, 0xa7, 0xc9, 0x3c,
    0xb8, 0x57, 0x75, 0xa9, 0x7b, 0xb2, 0x38, 0x2b, 0x76, 0x59,
    0x59, 0x68, 0x5a, 0x57, 0x63, 0x46, 0x59, 0x5a, 0x83, 0x79,
    0x65, 0x45, 0x4a, 0x85, 0x83, 0x66, 0x4a, 0x78, 0x06, 0x77,
    0x65, 0xd7, 0xe9, 0x99, 0x35, 0x89, 0x76, 0x36, 0xaa, 0x9b,
    0x56, 0x5d, 0x53, 0xd8, 0xeb, 0x58, 0xa7, 0x96, 0x51, 0x6a,
    0x97, 0x36, 0x77, 0xa8, 0x44, 0x6b, 0xa6, 0x84, 0x79, 0x69,
    0x99, 0x99, 0x35, 0x74, 0x77, 0x45, 0x89, 0x16, 0x39, 0x53,
    0xb9, 0x79, 0xb9, 0xa6, 0x39, 0x5a, 0xb6, 0x63, 0x87, 0x88,
    0x9a, 0x77, 0xb7, 0xb6, 0x8b, 0x87, 0x6b, 0x57, 0x4b, 0x49,
    0x78, 0xa6, 0xbb, 0xc7, 0x59, 0xb4, 0xbb, 0x75, 0x87, 0xab,
    0x67, 0x99, 0x55, 0x94, 0xdb, 0x69, 0x9b, 0x98, 0x44, 0x8a,
    0xa8, 0x97, 0x48, 0xac, 0xac, 0x7a, 0x8e, 0xa8, 0x74, 0xb8,
    0x92, 0x36, 0x6b, 0x56, 0x75, 0x34, 0x94, 0xb7, 0xaa, 0x77,
    0x79, 0x84, 0x97, 0x77, 0x69, 0x55, 0x7b, 0xad, 0x78, 0x9b,
    0xe7, 0x5a, 0x99, 0x59, 0xa3, 0x48, 0x9b, 0x96, 0x13, 0x48,
    0x66, 0xc9, 0xf8, 0x65, 0x4a, 0x5a, 0x55, 0x38, 0xb8, 0x95,
    0x34, 0xaa, 0x98, 0xb3, 0xd2, 0x99, 0x47, 0x56, 0x46, 0xac,
    0xb9, 0xcb, 0xb7, 0x33, 0x99, 0x25, 0x78, 0xd3, 0x4b, 0xbb,
    0xba, 0x8c, 0x47, 0x11, 0x65, 0xbe, 0xe3, 0x23, 0x32, 0x3e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x7d,
    0x1b, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x47, 0x55, 0x57, 0xbe, 0x7f, 0xe8,
    0xcc, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x78, 0xd5, 0x3d, 0xbd,
    0x86, 0xba, 0x54, 0x3e, 0x64, 0x23, 0xfa, 0xbc, 0x43, 0x1f,
    0xd4, 0xbc, 0x30, 0x93, 0x46, 0xbc, 0x60, 0xba, 0x32, 0x39,
    0x57, 0x37, 0xb9, 0x3d, 0x2a, 0xda, 0x4e, 0x3e, 0x2d, 0x3b,
    0x4f, 0xbb, 0xa8, 0x8c, 0x48, 0x3e, 0xb3, 0x47, 0x55, 0x3e,
    0xc7, 0x47, 0xdb, 0xbd, 0x91, 0xe1, 0x95, 0xbd, 0xa3, 0x5d,
    0x78, 0xbe, 0x7a, 0x4a, 0x81, 0xbd, 0x40, 0x1e, 0x6e, 0xbd,
    0x0c, 0x6e, 0xf9, 0xbd, 0xcd, 0xac, 0xca, 0xbe, 0x85, 0x5e,
    0xb0, 0x3e, 0x68, 0xec, 0x39, 0xbd, 0x4c, 0x25, 0xd7, 0xbe,
    0xc9, 0x0a, 0xc0, 0xbe, 0xb8, 0x69, 0xd7, 0x3e, 0x97, 0x5f,
    0x9f, 0xbe, 0x74, 0x31, 0x64, 0xbd, 0x18, 0x57, 0x97, 0x3e,
    0x17, 0xb0, 0x1b, 0x3e, 0xdc, 0x23, 0x6a, 0x3a, 0xce, 0xa8,
    0x98, 0x3e, 0x84, 0xd0, 0xe9, 0xbe, 0xbb, 0x98, 0xd6, 0xbe,
    0xbb, 0xeb, 0x7c, 0x3e, 0x6c, 0x6e, 0x61, 0xbc, 0x80, 0x54,
    0xb7, 0x3e, 0xf2, 0xd1, 0x8a, 0xbe, 0xfb, 0xaa, 0x1c, 0xbf,
    0x29, 0xca, 0x32, 0x3c, 0xb3, 0x18, 0x99, 0x3e, 0xf2, 0x12,
    0x08, 0xbf, 0x86, 0x47, 0x40, 0x3e, 0x52, 0x4b, 0x1f, 0x3e,
    0x7b, 0x61, 0xba, 0xbe, 0xd0, 0xf0, 0x90, 0xbe, 0x2f, 0xcd,
    0xcc, 0x3e, 0xf0, 0x0c, 0x98, 0xbd, 0x22, 0x81, 0xf5, 0x3e,
    0x67, 0xb1, 0x8e, 0x3e, 0xe8, 0x6d, 0xfc, 0xbd, 0xa3, 0x9d,
    0x94, 0xbd, 0xe7, 0x1c, 0x24, 0xbf, 0x2c, 0x51, 0x94, 0xbe,
    0x66, 0xfa, 0x90, 0x3e, 0xd4, 0x93, 0xad, 0x3e, 0xa0, 0x73,
    0x4d, 0x3e, 0x5e, 0x43, 0x12, 0xbf, 0x74, 0x4b, 0xd8, 0xbe,
    0x94, 0x5e, 0xb3, 0x3e, 0xc5, 0xaa, 0xf6, 0xbe, 0x5f, 0x87,
    0x36, 0xbf, 0x5c, 0xa8, 0x23, 0x3d, 0x41, 0x8e, 0x44, 0x3e,
    0x3a, 0x21, 0x75, 0xbd, 0x02, 0x71, 0x86, 0x3e, 0x05, 0x66,
    0xa9, 0xbe, 0x40, 0x85, 0xe6, 0xbd, 0xde, 0x17, 0x91, 0xbe,
    0x40, 0x4e, 0x8a, 0xbb, 0x7d, 0xa3, 0x8b, 0x3e, 0xb4, 0xc2,
    0xae, 0xbe, 0xa8, 0x9f, 0xb3, 0xbe, 0xd2, 0xd7, 0x2f, 0xbd,
    0x50, 0x74, 0x31, 0xbe, 0x6b, 0x69, 0x17, 0x3f, 0x2b, 0x6d,
    0x02, 0x3f, 0x15, 0x40, 0xc7, 0xbe, 0xaa, 0x90, 0x04, 0xbf,
    0x5c, 0x09, 0xf7, 0x3e, 0x39, 0x93, 0xfe, 0x3d, 0xaa, 0xf3,
    0x23, 0x3e, 0x13, 0x7e, 0xa5, 0xbe, 0x86, 0xb4, 0xbf, 0xbe,
    0x32, 0x6b, 0x1d, 0x3f, 0xd7, 0x67, 0xe1, 0x3d, 0x42, 0x4d,
    0x23, 0x3f, 0x64, 0xcb, 0xe2, 0xbe, 0x93, 0xf2, 0x24,
    0x3e, 0x12, 0x74, 0x6b, 0xbe, 0xe3, 0x47, 0xcc, 0xbc
  };

  return AI_HANDLE_PTR(s_network_weights);

}

