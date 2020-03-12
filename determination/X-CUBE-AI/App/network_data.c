#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 2108 ] = {
    0x09, 0x78, 0xc0, 0xbe, 0x4b, 0x66, 0xad, 0xbe, 0xec, 0xbe,
    0x79, 0xbe, 0xd3, 0x52, 0x4a, 0xbe, 0xf9, 0xcd, 0x1c, 0xbe,
    0x82, 0xb7, 0xdf, 0xbd, 0x21, 0xf4, 0x74, 0xbd, 0x23, 0xe7,
    0x24, 0xbc, 0xc1, 0x2b, 0x37, 0x3d, 0x2c, 0xb3, 0xce, 0x3d,
    0x99, 0x21, 0x18, 0x3e, 0xfe, 0xb0, 0x49, 0x3e, 0x4a, 0x81,
    0x81, 0x3e, 0x66, 0x51, 0x9a, 0x3e, 0xaf, 0x20, 0xb1, 0x3e,
    0xe0, 0x43, 0xcc, 0x3e, 0x69, 0xb6, 0x74, 0x87, 0x8a, 0xbb,
    0x4b, 0xa7, 0x68, 0x83, 0x9b, 0x35, 0x48, 0x73, 0x95, 0x5b,
    0xa3, 0x38, 0x45, 0xb3, 0x55, 0x53, 0x74, 0x46, 0xb5, 0xb7,
    0xba, 0xab, 0x58, 0xb9, 0xa6, 0x64, 0xa9, 0x39, 0x95, 0x96,
    0xa7, 0x84, 0x57, 0x33, 0xaa, 0x56, 0x9a, 0x58, 0x86, 0x6b,
    0x65, 0x8a, 0x44, 0x93, 0x82, 0x11, 0x35, 0x12, 0x69, 0x92,
    0x45, 0x66, 0x78, 0xa5, 0xa8, 0xcb, 0xc6, 0xc8, 0x88, 0xb6,
    0xbc, 0x87, 0xbb, 0xdd, 0xd6, 0x6c, 0xce, 0x7b, 0x6b, 0x7b,
    0x68, 0x8a, 0x85, 0x48, 0x8a, 0x4b, 0x87, 0x7a, 0x73, 0x48,
    0x49, 0x94, 0x55, 0xb8, 0x89, 0x77, 0xb5, 0x9a, 0x84, 0x92,
    0x98, 0x55, 0x34, 0x43, 0x97, 0x86, 0x74, 0x49, 0x56, 0x63,
    0x67, 0xa5, 0x93, 0x88, 0x6b, 0x8b, 0x36, 0x58, 0x49, 0x36,
    0xab, 0x46, 0x48, 0x78, 0x87, 0xb7, 0x66, 0x64, 0x43, 0x3b,
    0xa7, 0xb3, 0x6b, 0x57, 0x8a, 0x67, 0x95, 0xb7, 0x75, 0x67,
    0xa9, 0x84, 0x78, 0x59, 0x35, 0x9b, 0x7b, 0x77, 0x69, 0x79,
    0x53, 0xaa, 0x75, 0x38, 0xfb, 0xed, 0x6a, 0xcb, 0x9d, 0x6c,
    0x95, 0xba, 0xb7, 0xb4, 0x89, 0x48, 0xb4, 0x85, 0x95, 0x99,
    0x75, 0x78, 0x54, 0x69, 0x78, 0x29, 0x29, 0x53, 0x44, 0x59,
    0x4b, 0xb7, 0xa4, 0x9b, 0x3b, 0x94, 0x64, 0xbc, 0x85, 0xb8,
    0x44, 0xb7, 0x73, 0x5a, 0x54, 0xc7, 0x85, 0x88, 0x94, 0x76,
    0xbb, 0xbc, 0x64, 0x4b, 0xa8, 0xa7, 0x8b, 0x73, 0xaa, 0x89,
    0x75, 0x46, 0x3b, 0x45, 0x36, 0x67, 0x8a, 0x94, 0x97, 0x68,
    0x98, 0x46, 0xb8, 0x83, 0x46, 0x64, 0x94, 0x88, 0x49, 0x77,
    0x78, 0x58, 0xba, 0x43, 0x93, 0x73, 0x94, 0x5b, 0x96, 0xb9,
    0x78, 0xab, 0x89, 0x74, 0x83, 0xb6, 0x34, 0x58, 0x38, 0xb3,
    0xb6, 0x97, 0x84, 0xa5, 0x86, 0x60, 0x05, 0x24, 0x14, 0x62,
    0x45, 0x44, 0x35, 0x9b, 0xc4, 0x9c, 0xa9, 0xaa, 0x79, 0xca,
    0x7c, 0xce, 0x8d, 0xc9, 0x77, 0x8d, 0xeb, 0xcc, 0x77, 0x75,
    0x58, 0xbc, 0xc5, 0x99, 0xb9, 0xb7, 0x69, 0x66, 0x39, 0x7a,
    0x69, 0x9a, 0x85, 0x93, 0x46, 0xb8, 0x84, 0x78, 0x77, 0x2a,
    0x36, 0x94, 0x56, 0x2b, 0x74, 0x4b, 0xaa, 0x73, 0x99, 0x58,
    0x69, 0x86, 0x98, 0xaa, 0x8a, 0x57, 0x59, 0x43, 0x34, 0x34,
    0x75, 0xa7, 0x57, 0x55, 0x38, 0x34, 0xaa, 0x8a, 0x35, 0x99,
    0x68, 0xb6, 0x73, 0xb3, 0x36, 0xa3, 0x7a, 0xaa, 0xba, 0xbb,
    0x57, 0xa9, 0x67, 0x46, 0xba, 0x85, 0x73, 0x87, 0x75, 0x54,
    0x69, 0x8b, 0x58, 0x6b, 0x78, 0x58, 0xb3, 0x3a, 0x48, 0xb3,
    0x69, 0x38, 0x7b, 0x85, 0x38, 0x89, 0x88, 0x8a, 0x78, 0xa5,
    0x83, 0x58, 0x3b, 0x76, 0x65, 0x67, 0x6a, 0x46, 0x65, 0x48,
    0xba, 0x95, 0x67, 0x59, 0xb5, 0x59, 0x56, 0x44, 0x6a, 0x94,
    0xa9, 0x79, 0x94, 0x6b, 0x54, 0x59, 0x64, 0x37, 0x37, 0x83,
    0x74, 0x8b, 0x84, 0x46, 0xa8, 0x3b, 0xaa, 0x85, 0x63, 0x56,
    0x5b, 0x53, 0x83, 0xb9, 0x83, 0x38, 0x45, 0xa8, 0x58, 0xa4,
    0x88, 0xa8, 0x77, 0x54, 0x74, 0x58, 0x34, 0xab, 0x48, 0x89,
    0x46, 0x6a, 0xb3, 0x69, 0xb5, 0x69, 0xa7, 0x45, 0x66, 0x48,
    0x65, 0xa5, 0x79, 0xa3, 0x35, 0x7a, 0xb4, 0x94, 0x95, 0x8a,
    0x7a, 0x33, 0x53, 0x64, 0xd5, 0x97, 0xbf, 0xee, 0xcd, 0xe9,
    0x8b, 0x78, 0xc9, 0xdd, 0x6b, 0xcb, 0x7c, 0x6b, 0xaa, 0x96,
    0x68, 0x96, 0xa8, 0x4b, 0x98, 0x36, 0x4b, 0x65, 0x44, 0x48,
    0x7b, 0x59, 0xb7, 0xa7, 0x96, 0x66, 0xc7, 0x6b, 0xa9, 0x8d,
    0xb7, 0x9d, 0xa6, 0xc6, 0xe8, 0x9d, 0xe8, 0x7d, 0xd8, 0xe8,
    0x8a, 0xec, 0xd7, 0x9d, 0x86, 0x47, 0x37, 0x65, 0x63, 0x67,
    0x75, 0x57, 0x74, 0x35, 0xa3, 0xa8, 0x84, 0xb6, 0x9b, 0x56,
    0xba, 0x99, 0x55, 0xa4, 0xab, 0x75, 0x9b, 0x44, 0x96, 0x56,
    0x45, 0x98, 0x5b, 0x87, 0xa6, 0x45, 0x8b, 0x83, 0x69, 0xa6,
    0x83, 0x78, 0x75, 0x83, 0xb7, 0x79, 0x36, 0x98, 0x93, 0x45,
    0x86, 0x59, 0xa7, 0x45, 0x60, 0x76, 0x62, 0x98, 0x6a, 0x98,
    0x6a, 0xb8, 0x3b, 0x7a, 0x77, 0x77, 0x76, 0x37, 0x93, 0x83,
    0x96, 0x8a, 0x89, 0xa4, 0x7b, 0x42, 0xb9, 0x52, 0x8b, 0x3a,
    0x88, 0x87, 0x5b, 0x46, 0x89, 0x7b, 0x87, 0x37, 0x85, 0xb9,
    0xa4, 0x4a, 0x56, 0xb4, 0xb7, 0x94, 0x93, 0xca, 0x3b, 0x9c,
    0xb5, 0x87, 0x98, 0x97, 0xb3, 0x6a, 0x36, 0x83, 0x73, 0x5b,
    0x97, 0x58, 0x54, 0x33, 0xa7, 0x75, 0x8a, 0x88, 0xa5, 0x59,
    0xa9, 0x85, 0x3a, 0x97, 0x9a, 0x47, 0xb2, 0x36, 0xb7, 0x83,
    0x68, 0x8a, 0x3b, 0xb9, 0x65, 0x96, 0x35, 0x54, 0x63, 0x39,
    0x8a, 0xb6, 0x65, 0xa7, 0x5a, 0xa5, 0x74, 0x99, 0x99, 0x56,
    0x77, 0xa6, 0xa4, 0x4a, 0x8b, 0x3b, 0x48, 0x86, 0x36, 0xa8,
    0x8b, 0x63, 0x67, 0x58, 0xb9, 0xa3, 0xa7, 0xa9, 0x8a, 0x97,
    0x7b, 0x38, 0x86, 0x33, 0xb8, 0x94, 0x98, 0x7a, 0x65, 0x55,
    0x3a, 0xb5, 0xa5, 0x49, 0xb3, 0x77, 0x98, 0x5a, 0x7b, 0x6b,
    0xaa, 0x8b, 0x54, 0x83, 0x36, 0x75, 0x33, 0x84, 0x73, 0x73,
    0x33, 0x86, 0x83, 0xb7, 0xbd, 0x8d, 0x9a, 0x8e, 0x9f, 0x99,
    0xec, 0xc8, 0xbe, 0xb7, 0xd6, 0xb8, 0xb7, 0x69, 0x9b, 0x4a,
    0x5a, 0x95, 0x58, 0x59, 0x99, 0xb4, 0x9a, 0x8c, 0x6b, 0xb6,
    0xca, 0xb7, 0xdc, 0xad, 0xab, 0x98, 0xcc, 0xd9, 0xbe, 0x97,
    0xae, 0x8d, 0xde, 0x9a, 0x9a, 0x9b, 0xbe, 0xa9, 0xea, 0xe9,
    0xee, 0xce, 0x8b, 0xad, 0xaa, 0xef, 0xfe, 0xeb, 0xbc, 0xda,
    0xc9, 0x7b, 0xca, 0x79, 0x5c, 0x84, 0x86, 0x59, 0x99, 0x73,
    0x78, 0x83, 0x25, 0x59, 0x99, 0x39, 0x44, 0x87, 0x48, 0x59,
    0x5b, 0x8b, 0x5b, 0xaa, 0xc7, 0x75, 0x8a, 0x76, 0x86, 0xc9,
    0xca, 0x96, 0xb8, 0x9c, 0xb7, 0xcd, 0xab, 0xbb, 0x57, 0xcb,
    0x9a, 0x77, 0x97, 0x5b, 0x79, 0x7a, 0x58, 0x6b, 0x44, 0x57,
    0x65, 0x8a, 0x48, 0x34, 0xa6, 0x95, 0x97, 0x33, 0x68, 0x97,
    0x4a, 0x49, 0x83, 0x6b, 0x66, 0x95, 0xbb, 0x4b, 0x8a, 0x6b,
    0xb4, 0x45, 0x56, 0x49, 0x4a, 0x44, 0x86, 0x76, 0x94, 0x8a,
    0xa8, 0x45, 0xab, 0x95, 0x47, 0x65, 0x46, 0x95, 0xaa, 0x59,
    0x56, 0x9b, 0x88, 0x49, 0x8a, 0xfa, 0xd9, 0xec, 0xde, 0xe9,
    0x85, 0x95, 0xd5, 0x9c, 0x55, 0x98, 0x65, 0x55, 0xaa, 0x39,
    0x48, 0xa6, 0x85, 0x38, 0xa5, 0x84, 0x74, 0xa7, 0x99, 0x44,
    0x53, 0x44, 0xba, 0xb7, 0x8b, 0xb5, 0x7c, 0xbc, 0x7d, 0x46,
    0x98, 0x98, 0x5a, 0xbc, 0x9a, 0x8c, 0x5b, 0xab, 0x9b, 0x69,
    0x8a, 0x97, 0x75, 0xba, 0x72, 0x37, 0x11, 0x66, 0x75, 0x34,
    0x57, 0x82, 0x46, 0xb8, 0x5b, 0x78, 0xc9, 0x86, 0xe9, 0xc7,
    0x8c, 0x77, 0xe9, 0x7d, 0x7a, 0xcd, 0xc9, 0xec, 0xca, 0x8d,
    0xc8, 0xba, 0x86, 0x9a, 0x38, 0x5c, 0xa5, 0xb7, 0xbb, 0x67,
    0x43, 0x38, 0xa9, 0x44, 0x79, 0x88, 0xb3, 0x26, 0x98, 0x52,
    0x63, 0x77, 0x37, 0x94, 0xa3, 0x45, 0x88, 0x59, 0x59, 0x89,
    0xb4, 0x59, 0xaa, 0xa8, 0x3a, 0x54, 0x54, 0x8a, 0x9b, 0x33,
    0x3b, 0x35, 0x98, 0x88, 0x38, 0x87, 0x87, 0x58, 0xab, 0x48,
    0x83, 0x36, 0x87, 0xa9, 0x45, 0x8b, 0x3b, 0x46, 0x69, 0xb8,
    0x55, 0x84, 0x77, 0x58, 0x4b, 0xb5, 0xa3, 0x58, 0x56, 0x88,
    0x34, 0x45, 0x36, 0x59, 0xba, 0xb4, 0xaa, 0x88, 0x96, 0x88,
    0x76, 0x88, 0x8b, 0x44, 0x66, 0x56, 0xa4, 0x78, 0x56, 0x4a,
    0x54, 0x39, 0xa4, 0x86, 0x44, 0x9b, 0x6b, 0x47, 0x73, 0x64,
    0x9b, 0x46, 0x47, 0x43, 0xb6, 0x78, 0x65, 0x68, 0x89, 0x79,
    0x9b, 0xa9, 0x3a, 0x79, 0x83, 0x96, 0x7a, 0x9b, 0xb4, 0x53,
    0x56, 0x76, 0x66, 0x94, 0x96, 0x95, 0x57, 0x87, 0x83, 0x8b,
    0xab, 0x4b, 0x3a, 0xab, 0xa6, 0x38, 0x84, 0xa7, 0x44, 0xb3,
    0x86, 0x3b, 0x74, 0xb9, 0xa5, 0x34, 0xa3, 0x98, 0x83, 0x76,
    0xb8, 0x76, 0x95, 0x98, 0x4b, 0xa3, 0x78, 0x84, 0xa6, 0xa4,
    0x54, 0x33, 0x98, 0x76, 0x73, 0x7b, 0xb9, 0x49, 0x7a, 0x5b,
    0x39, 0x38, 0x57, 0x5b, 0x36, 0x76, 0x66, 0x67, 0x34, 0x58,
    0xb8, 0xba, 0xba, 0x65, 0xb8, 0x68, 0x94, 0x68, 0x48, 0x65,
    0x8a, 0x34, 0x76, 0x73, 0x35, 0xa3, 0x53, 0x55, 0xa6, 0xb6,
    0x99, 0xa9, 0x9b, 0x6a, 0x69, 0xab, 0x37, 0xa5, 0x85, 0x39,
    0x3a, 0xa4, 0x65, 0x7b, 0x66, 0x56, 0xb4, 0x48, 0x4b, 0x47,
    0xbb, 0x77, 0x76, 0x5b, 0xa7, 0x6b, 0x54, 0x64, 0xb5, 0x73,
    0x48, 0x53, 0xa6, 0xba, 0x54, 0x58, 0xa7, 0x7b, 0x63, 0x6a,
    0x5b, 0x4b, 0x87, 0x63, 0x35, 0x49, 0x48, 0x76, 0x84, 0x89,
    0x78, 0x74, 0xa7, 0x39, 0x89, 0x9a, 0x54, 0x59, 0x38, 0x57,
    0x64, 0x3a, 0x7b, 0x5b, 0x7a, 0x56, 0x67, 0xba, 0x59, 0xb6,
    0xb6, 0x8a, 0x43, 0xb7, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb0,
    0x2b, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x77, 0x4a, 0xbe,
    0x00, 0x00, 0x00, 0x00, 0x11, 0x12, 0xd6, 0x3d, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xd8, 0x1e, 0xb8, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x99, 0x79,
    0x62, 0x3e, 0x6f, 0x3a, 0x4f, 0xbb, 0x00, 0x00, 0x00, 0x00,
    0xb3, 0x38, 0x07, 0xbd, 0xdd, 0x4a, 0x0c, 0xbe, 0x00, 0x00,
    0x00, 0x00, 0xc2, 0xc6, 0x3e, 0xbe, 0x1c, 0x07, 0xe0, 0x3d,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0xeb,
    0xbd, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x10, 0x2b, 0x02, 0xbf, 0xde, 0x4a, 0xc4, 0xbe, 0x28, 0x04,
    0xa7, 0xbe, 0x33, 0x23, 0x88, 0xbe, 0x3b, 0x68, 0x53, 0xbe,
    0x66, 0x32, 0x0f, 0xbe, 0x7a, 0x4d, 0x91, 0xbd, 0x0d, 0x2e,
    0x7e, 0x3c, 0x02, 0x20, 0xbb, 0x3d, 0x7f, 0x0c, 0x30, 0x3e,
    0xab, 0x55, 0x7f, 0x3e, 0x7b, 0x01, 0xa4, 0x3e, 0xb9, 0x16,
    0xc6, 0x3e, 0x04, 0x75, 0xe8, 0x3e, 0x4d, 0x8b, 0x0c, 0x3f,
    0xd3, 0xb3, 0x21, 0x3f, 0x66, 0x6a, 0x53, 0x65, 0x27, 0x82,
    0x76, 0x9d, 0x26, 0x27, 0x65, 0x7b, 0x24, 0x26, 0xb3, 0x78,
    0x59, 0xad, 0x96, 0x6c, 0xa7, 0x27, 0x59, 0x8b, 0xa0, 0x47,
    0xb2, 0x99, 0xaa, 0x27, 0x47, 0xc7, 0x77, 0x08, 0x38, 0x73,
    0xa4, 0x7d, 0x93, 0xa8, 0xaa, 0xb1, 0x47, 0x8c, 0x4a, 0x15,
    0xa4, 0x7a, 0x97, 0x7a, 0x86, 0x32, 0x74, 0x35, 0x78, 0x8b,
    0x4d, 0x5b, 0x65, 0x2a, 0x43, 0x58, 0x63, 0x34, 0x66, 0x77,
    0xa7, 0x32, 0x82, 0x7a, 0x6b, 0xb7, 0x69, 0x95, 0x59, 0x69,
    0x36, 0xa7, 0x56, 0x35, 0x2b, 0x36, 0x35, 0x7b, 0x61, 0x2d,
    0x9a, 0xab, 0xbc, 0x42, 0xbb, 0xa8, 0x2d, 0x82, 0x72, 0x73,
    0x37, 0xb9, 0x27, 0x55, 0x82, 0x64, 0x49, 0xa2, 0x64, 0x92,
    0xb9, 0x45, 0x79, 0x63, 0xa8, 0x52, 0x82, 0x33, 0x4a, 0x43,
    0x78, 0x5a, 0x36, 0x83, 0x23, 0xac, 0x91, 0x2b, 0xa5, 0xa7,
    0x4b, 0x9c, 0x9b, 0x64, 0x92, 0x43, 0x2a, 0x49, 0x82, 0xa3,
    0x28, 0x3d, 0xa3, 0xca, 0x27, 0x3a, 0x63, 0x36, 0x2d, 0x73,
    0x8e, 0x57, 0xb8, 0x7b, 0x55, 0xb3, 0xa1, 0xc6, 0x76, 0x83,
    0x87, 0x3c, 0x46, 0x25, 0xb7, 0x44, 0xa4, 0x7c, 0xa5, 0x53,
    0xa5, 0x44, 0x4b, 0x88, 0x6b, 0x8b, 0xa2, 0x35, 0x34, 0x36,
    0x72, 0x69, 0xb7, 0x58, 0x7b, 0xb6, 0x97, 0x95, 0x63, 0x56,
    0x55, 0x87, 0xb6, 0x55, 0x99, 0x86, 0x54, 0x26, 0x27, 0x23,
    0x78, 0x92, 0x6a, 0xbc, 0x48, 0xa7, 0xb3, 0x29, 0xaa, 0xae,
    0x7a, 0xb4, 0x37, 0xa1, 0xab, 0xac, 0x4d, 0xc2, 0x69, 0x83,
    0x67, 0x6a, 0xa2, 0xb2, 0x3c, 0x95, 0xb8, 0x59, 0x6b, 0x15,
    0xb7, 0x86, 0x38, 0x7b, 0x79, 0x62, 0x95, 0xa2, 0x84, 0x32,
    0x96, 0x79, 0x29, 0xa8, 0x8b, 0x94, 0x29, 0x6a, 0x98, 0xb2,
    0x22, 0x81, 0x61, 0xa8, 0x7b, 0x89, 0xb1, 0x6b, 0x48, 0x58,
    0x28, 0x77, 0x52, 0x99, 0xba, 0x0b, 0x39, 0x66, 0x8b, 0x83,
    0x7f, 0x8b, 0x9a, 0x7a, 0x57, 0x9c, 0xb8, 0xf4, 0x89, 0x85,
    0xa2, 0x95, 0x79, 0xa2, 0x37, 0x69, 0x69, 0x57, 0x48, 0x68,
    0x29, 0xb7, 0x74, 0x38, 0x55, 0xbe, 0x74, 0x83, 0x39, 0x3d,
    0x5a, 0x5b, 0x83, 0x3d, 0x2d, 0x70, 0x6a, 0xbe, 0xcb, 0xef,
    0x4e, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x58, 0x17, 0x43, 0xbe, 0xb3, 0x91, 0x46, 0xbc, 0x00, 0x00,
    0x00, 0x00, 0x72, 0x5d, 0x2d, 0xbe, 0x2e, 0xc4, 0x38, 0x3e,
    0x20, 0xab, 0x67, 0x3e, 0x52, 0x2a, 0xdf, 0xbd, 0x00, 0x00,
    0x00, 0x00, 0x0a, 0xe4, 0x3e, 0xbc, 0x67, 0x25, 0x3e, 0xbe,
    0x4b, 0x5c, 0x16, 0xbe, 0xde, 0x5c, 0x0a, 0x3e, 0x00, 0x00,
    0x00, 0x00, 0xf8, 0x78, 0xe1, 0xbc, 0x60, 0xf4, 0x63, 0xbe,
    0xb4, 0x6a, 0x44, 0x3e, 0xe9, 0xfe, 0xd1, 0xbb, 0x07, 0x10,
    0x0f, 0xbf, 0xd7, 0x05, 0x1f, 0x3f, 0xce, 0x8f, 0x0f, 0x3e,
    0xfe, 0x6b, 0xef, 0xbe, 0xba, 0x8a, 0xe3, 0xbe, 0xb3, 0x45,
    0xe1, 0x3e, 0x80, 0x29, 0x46, 0xbd, 0x67, 0xf8, 0xc5, 0xbe,
    0x60, 0x9f, 0x90, 0x3e, 0xf9, 0x4d, 0x73, 0xbe, 0xb7, 0xd3,
    0x09, 0xbe, 0x35, 0x99, 0x57, 0x3e, 0x07, 0xf3, 0x82, 0x3e,
    0x1a, 0x07, 0x1c, 0x3d, 0xb1, 0x4f, 0x88, 0x3e, 0xe6, 0xdd,
    0x96, 0x3d, 0xf9, 0x68, 0x9f, 0xbe, 0x63, 0xbf, 0xe8, 0xbe,
    0x17, 0x71, 0x90, 0x3e, 0x6b, 0x0c, 0xc3, 0xbe, 0x0b, 0xd5,
    0x98, 0xbe, 0x58, 0xba, 0xef, 0x3d, 0x5c, 0x61, 0x06, 0xbf,
    0x28, 0x13, 0x92, 0x3e, 0x3e, 0x62, 0x8f, 0x3e, 0x85, 0x8c,
    0x05, 0x3f, 0xaf, 0xd8, 0x80, 0x3c, 0xea, 0x18, 0xb6, 0x3e,
    0xb2, 0x32, 0x8b, 0x3e, 0x0b, 0x70, 0xc1, 0xbe, 0x02, 0x10,
    0xcf, 0xbe, 0xc1, 0x15, 0xd1, 0xbd, 0xf8, 0xc4, 0x18, 0x3d,
    0xd8, 0x71, 0x57, 0x3d, 0xfc, 0x72, 0xfd, 0x3e, 0x34, 0x8a,
    0xc8, 0xbe, 0xf1, 0xc6, 0xa5, 0xbe, 0x4b, 0xf3, 0x18, 0x3f,
    0xa4, 0xbe, 0xb6, 0xbe, 0x68, 0x9e, 0x91, 0xbe, 0x05, 0x02,
    0xd9, 0xbd, 0x21, 0xf9, 0x55, 0xbe, 0x4f, 0xb7, 0x19, 0x3e,
    0xbe, 0x13, 0x6d, 0xbe, 0xd5, 0xd6, 0x2d, 0x3e, 0x57, 0x50,
    0x26, 0x3f, 0x09, 0x94, 0x19, 0xbf, 0x77, 0x33, 0x10, 0xbe,
    0xba, 0x5a, 0x15, 0xbf, 0x9c, 0x5c, 0x12, 0xbf, 0xee, 0xe8,
    0x36, 0xbf, 0xa8, 0x31, 0x11, 0xbf, 0x76, 0x86, 0x01, 0xbf,
    0x97, 0x21, 0x8c, 0x3e, 0x29, 0x4a, 0xe5, 0x3e, 0x91, 0x49,
    0xb5, 0xbe, 0xb5, 0x3b, 0xb7, 0xbe, 0x4f, 0x6d, 0xa7, 0x3e,
    0x2d, 0x79, 0x20, 0xbf, 0x25, 0xf4, 0xf5, 0xbe, 0x05, 0x97,
    0xf2, 0x3e, 0xf8, 0xa9, 0xfa, 0xbe, 0x76, 0x82, 0x83, 0xbe,
    0x97, 0x06, 0xcb, 0xbd, 0xd7, 0x63, 0xb0, 0xbe, 0xed, 0xd1,
    0xa7, 0xbe, 0x56, 0x93, 0xa6, 0xbe, 0xb0, 0x85, 0xbb, 0xbc,
    0x6d, 0x2d, 0x2b, 0x3f, 0xc9, 0x14, 0x86, 0xbd, 0x53, 0x1c,
    0xb3, 0xbc, 0x93, 0xf3, 0x1e, 0xbb, 0xc7, 0x57, 0x18,
    0x3e, 0x47, 0xc4, 0x82, 0xbe, 0x35, 0x27, 0x79, 0x3d
  };

  return AI_HANDLE_PTR(s_network_weights);

}

