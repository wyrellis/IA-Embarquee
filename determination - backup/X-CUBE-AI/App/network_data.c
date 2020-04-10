#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 2108 ] = {
    0xaa, 0xeb, 0xbf, 0xbe, 0xc8, 0xb8, 0x9c, 0xbe, 0x4b, 0xea,
    0x7b, 0xbe, 0x7b, 0xad, 0x49, 0xbe, 0x3f, 0xc2, 0x17, 0xbe,
    0x07, 0xa6, 0xcf, 0xbd, 0x31, 0xbe, 0x41, 0xbd, 0x8b, 0x32,
    0xc7, 0x3b, 0x40, 0x73, 0x6f, 0x3d, 0x17, 0xef, 0xdc, 0x3d,
    0x11, 0xc8, 0x22, 0x3e, 0x5e, 0xde, 0x4f, 0x3e, 0x93, 0xc2,
    0x83, 0x3e, 0x38, 0x43, 0x9f, 0x3e, 0x6a, 0xc1, 0xbb, 0x3e,
    0x9e, 0x52, 0xea, 0x3e, 0x33, 0x69, 0x74, 0x38, 0x88, 0x4a,
    0x47, 0x63, 0x47, 0x78, 0xb4, 0x46, 0x95, 0x94, 0x85, 0x95,
    0x37, 0x98, 0x5a, 0x73, 0x66, 0x47, 0xa9, 0xb8, 0xaa, 0x58,
    0xb7, 0x94, 0x5a, 0x38, 0x73, 0xab, 0x69, 0x78, 0x87, 0x33,
    0xb7, 0x73, 0x4b, 0x8b, 0x93, 0xa8, 0x99, 0x53, 0x94, 0x86,
    0x64, 0x44, 0x43, 0x55, 0x41, 0x50, 0x25, 0x24, 0x22, 0x32,
    0x58, 0x38, 0xa5, 0x78, 0xab, 0xaa, 0x79, 0x64, 0x7c, 0x86,
    0x68, 0x86, 0xcc, 0xab, 0xb7, 0xc8, 0xb6, 0x58, 0x9a, 0x8d,
    0xca, 0xa7, 0xca, 0x7a, 0x55, 0x89, 0x54, 0x5b, 0x75, 0x86,
    0x7a, 0x59, 0x5a, 0x54, 0x88, 0x3a, 0xa6, 0x9a, 0x53, 0x8a,
    0x59, 0x74, 0x55, 0xb4, 0x37, 0x72, 0xa8, 0x59, 0x69, 0x5b,
    0xb8, 0xa5, 0x5c, 0x95, 0xc6, 0x5c, 0xb7, 0xcc, 0x9d, 0x68,
    0x68, 0xa8, 0xa9, 0xbd, 0x8a, 0xd6, 0xcb, 0xc7, 0xdd, 0xd8,
    0x89, 0xcd, 0xc8, 0x7d, 0xdb, 0xdc, 0xa6, 0xaa, 0xb6, 0x86,
    0x55, 0xc8, 0x98, 0xb6, 0xb5, 0xbb, 0xbb, 0xd6, 0x7c, 0xbb,
    0xab, 0xa6, 0xd5, 0x8d, 0xec, 0xfe, 0xcc, 0x7b, 0xa8, 0x8a,
    0xaa, 0xca, 0xca, 0xbc, 0x89, 0x58, 0x94, 0x45, 0x47, 0x88,
    0x4a, 0x27, 0x77, 0x33, 0x27, 0x43, 0x43, 0x56, 0x88, 0x9a,
    0x77, 0x9b, 0x4a, 0x35, 0x5b, 0x88, 0x98, 0x8a, 0x5c, 0x8b,
    0xa4, 0xb8, 0xab, 0x6c, 0xa7, 0x87, 0x65, 0x75, 0x4b, 0x9b,
    0x9c, 0xc7, 0x69, 0x7c, 0x74, 0xa6, 0xb3, 0x36, 0x46, 0x46,
    0xa9, 0x5b, 0xa4, 0x35, 0x43, 0x99, 0x53, 0x66, 0x77, 0xa9,
    0x45, 0x63, 0x86, 0xa7, 0x75, 0x73, 0x95, 0x66, 0x56, 0x96,
    0x4a, 0x77, 0x49, 0x85, 0x96, 0xab, 0x96, 0x3a, 0x37, 0x36,
    0xa7, 0x64, 0x34, 0x38, 0x97, 0x44, 0x35, 0x57, 0x54, 0x87,
    0x8a, 0x67, 0xaa, 0x33, 0x7b, 0x54, 0xa6, 0x65, 0x7a, 0x9a,
    0xa2, 0x44, 0x97, 0x79, 0xb9, 0x96, 0x68, 0xa8, 0x99, 0x53,
    0x3b, 0x53, 0x3a, 0xa6, 0x39, 0x99, 0x87, 0x56, 0x86, 0x72,
    0x8b, 0x4a, 0x6b, 0x76, 0xa5, 0xba, 0x6a, 0x34, 0x93, 0x94,
    0x33, 0xa8, 0x4a, 0x45, 0x55, 0x46, 0xb4, 0x97, 0x8b, 0x47,
    0x84, 0xa6, 0x6a, 0x53, 0x78, 0x35, 0xa6, 0x9a, 0xb8, 0x6b,
    0x87, 0x84, 0xa7, 0x73, 0x64, 0x8a, 0x57, 0x86, 0xb8, 0x35,
    0x66, 0x36, 0x67, 0x65, 0x59, 0x97, 0x85, 0x46, 0xa8, 0xa5,
    0x3a, 0x85, 0xa7, 0x6a, 0x75, 0x63, 0x54, 0x84, 0x55, 0xb3,
    0x69, 0x75, 0x73, 0x44, 0x68, 0x97, 0x46, 0x78, 0x39, 0x8b,
    0x97, 0xb6, 0x87, 0x65, 0xb5, 0x44, 0x48, 0x75, 0x68, 0x3b,
    0x66, 0xa9, 0x75, 0x36, 0x9b, 0xa3, 0x67, 0x45, 0x9b, 0xa6,
    0x93, 0x93, 0x37, 0x83, 0x79, 0xb5, 0x45, 0x49, 0x65, 0x99,
    0x67, 0x56, 0x98, 0x95, 0x57, 0x33, 0xa8, 0x79, 0x75, 0x95,
    0x98, 0x75, 0x59, 0xa5, 0x7a, 0x62, 0x9b, 0xb3, 0x8b, 0x67,
    0x57, 0x66, 0x76, 0x89, 0xcd, 0xdd, 0x84, 0x79, 0x96, 0x94,
    0x65, 0x57, 0x69, 0x5a, 0xc7, 0x7a, 0xad, 0x9e, 0xbb, 0xbe,
    0xac, 0xb8, 0x79, 0x89, 0xc7, 0xe9, 0xdd, 0xe9, 0xed, 0x69,
    0xed, 0xb6, 0xc8, 0x66, 0xcc, 0x5a, 0x95, 0x7a, 0xb4, 0xa8,
    0x9b, 0xcb, 0xb7, 0xc8, 0x77, 0x99, 0xb5, 0x67, 0xb5, 0x67,
    0x6a, 0xb7, 0xc7, 0x84, 0x13, 0x85, 0x54, 0x37, 0x86, 0x42,
    0x57, 0x46, 0x26, 0x57, 0x9a, 0x95, 0x7b, 0x8b, 0x49, 0xbc,
    0x9b, 0x78, 0xc7, 0x69, 0xcc, 0x58, 0xa5, 0xb9, 0xc8, 0x9c,
    0x67, 0x8a, 0x65, 0x37, 0x75, 0x88, 0x48, 0x47, 0x59, 0x36,
    0x74, 0x49, 0x88, 0x67, 0x76, 0x97, 0x94, 0x63, 0x2a, 0x87,
    0x22, 0xa5, 0x22, 0x43, 0xe8, 0x7e, 0x8e, 0xca, 0xa7, 0xc8,
    0xa9, 0x9c, 0xaa, 0xa9, 0xbb, 0xa6, 0x86, 0x43, 0x83, 0x14,
    0x68, 0x92, 0x85, 0x56, 0x72, 0x55, 0x93, 0x36, 0x72, 0x95,
    0x72, 0x5a, 0x96, 0x56, 0x88, 0x69, 0x69, 0x85, 0x95, 0xb6,
    0x8a, 0x75, 0x84, 0x38, 0xc5, 0xb6, 0xa8, 0x99, 0x49, 0x8c,
    0x67, 0xca, 0x4b, 0x6b, 0x36, 0x88, 0xb5, 0xa4, 0x76, 0x66,
    0x34, 0x53, 0x65, 0xba, 0x35, 0xa5, 0x37, 0x94, 0x73, 0x58,
    0x99, 0x96, 0x9a, 0x59, 0x86, 0xb3, 0x85, 0xb4, 0x64, 0x38,
    0x5a, 0x8b, 0x9a, 0x94, 0x7a, 0x87, 0x35, 0x45, 0x43, 0x79,
    0xbb, 0x94, 0x74, 0x59, 0xa9, 0x97, 0x69, 0x78, 0x97, 0x56,
    0x76, 0x94, 0x87, 0x46, 0xa8, 0x69, 0xbb, 0x99, 0x39, 0x36,
    0x34, 0x39, 0x7a, 0x33, 0xa5, 0x55, 0x76, 0x53, 0xba, 0x69,
    0x7b, 0x66, 0xb8, 0x37, 0x53, 0x75, 0x84, 0x89, 0x54, 0x98,
    0x6b, 0x59, 0xa4, 0x9a, 0x97, 0x34, 0x57, 0x56, 0x96, 0xb5,
    0xa4, 0xa5, 0x36, 0x74, 0x58, 0x35, 0x8b, 0x47, 0x67, 0x34,
    0x44, 0x86, 0x46, 0x65, 0x74, 0x38, 0x63, 0x9a, 0x55, 0xb7,
    0x79, 0x74, 0x39, 0x96, 0xa4, 0x35, 0x77, 0x34, 0xa6, 0x53,
    0xa6, 0x75, 0x98, 0x75, 0x6a, 0x8b, 0x57, 0x55, 0x88, 0xbb,
    0x57, 0x97, 0xa4, 0x43, 0x96, 0x85, 0x89, 0x8a, 0x45, 0xa4,
    0xb4, 0x43, 0x56, 0x49, 0x3b, 0x88, 0x69, 0xb7, 0x34, 0xb7,
    0x63, 0xb9, 0x3a, 0x85, 0x8b, 0xa6, 0x56, 0x54, 0xa7, 0x55,
    0x93, 0x36, 0x49, 0x94, 0x68, 0x37, 0x33, 0xa6, 0xb3, 0xa6,
    0x78, 0x89, 0xa5, 0x3b, 0x64, 0x33, 0x66, 0x44, 0xb9, 0x75,
    0x88, 0x58, 0x87, 0x36, 0x93, 0x43, 0x95, 0x63, 0x76, 0x87,
    0xaa, 0x79, 0x95, 0x88, 0x65, 0x84, 0xa9, 0x75, 0xba, 0x44,
    0x35, 0x68, 0x8b, 0x94, 0xb5, 0x5b, 0x85, 0x57, 0x33, 0xb3,
    0x6a, 0x55, 0x59, 0x9a, 0x7a, 0xa4, 0x55, 0x58, 0x6a, 0x66,
    0x98, 0x6a, 0x45, 0x46, 0x7a, 0x77, 0x34, 0x8a, 0x97, 0x98,
    0x45, 0x4b, 0x83, 0x68, 0xb8, 0x44, 0x68, 0x55, 0x34, 0x47,
    0x6b, 0x47, 0xa4, 0xb4, 0xa3, 0x54, 0x43, 0x93, 0xa9, 0x46,
    0x97, 0x93, 0x55, 0x8a, 0x89, 0x77, 0x68, 0x89, 0x7a, 0x89,
    0x69, 0x99, 0x45, 0x49, 0xa6, 0x4b, 0xb4, 0x78, 0x54, 0x43,
    0x9a, 0x89, 0x8b, 0x5a, 0x94, 0x45, 0xb8, 0x66, 0x4b, 0x95,
    0x74, 0x77, 0x55, 0x33, 0x3a, 0x69, 0x54, 0x95, 0x65, 0xba,
    0x53, 0x94, 0x67, 0xb9, 0x35, 0x45, 0x87, 0x66, 0x49, 0x7a,
    0x33, 0x57, 0x98, 0x85, 0xce, 0x8c, 0xed, 0x9a, 0xfb, 0x86,
    0x86, 0xbd, 0xb8, 0x86, 0x44, 0xb8, 0x73, 0x98, 0x29, 0x63,
    0x91, 0x22, 0x84, 0x12, 0x33, 0x26, 0x68, 0x93, 0x98, 0x7a,
    0xa2, 0x2a, 0x48, 0x67, 0x75, 0xbc, 0xab, 0x75, 0x9d, 0xca,
    0xcc, 0xc8, 0x96, 0x75, 0x95, 0x84, 0xa9, 0x58, 0x66, 0x97,
    0xd6, 0x68, 0x5c, 0xd8, 0x7e, 0x9b, 0xbb, 0xab, 0xe7, 0xc7,
    0xc9, 0x8d, 0x87, 0x96, 0xd7, 0xc6, 0x74, 0x88, 0xb4, 0xd5,
    0x8b, 0xca, 0x57, 0xb8, 0xcc, 0xc9, 0x9a, 0x95, 0x9c, 0xad,
    0x95, 0x8d, 0x6a, 0xad, 0xcb, 0x99, 0xb7, 0x99, 0xb9, 0xcb,
    0xbd, 0xcc, 0xab, 0xdd, 0x5d, 0xab, 0xb6, 0x99, 0x77, 0x79,
    0x85, 0xc5, 0x9d, 0xb5, 0x95, 0x5a, 0x57, 0x77, 0xb6, 0x48,
    0x65, 0x56, 0x73, 0x95, 0x69, 0x98, 0x8a, 0x77, 0x79, 0x79,
    0x79, 0x59, 0x95, 0x63, 0x84, 0x54, 0x75, 0x87, 0x45, 0x76,
    0x3a, 0x78, 0x93, 0x5a, 0x65, 0xa6, 0x7b, 0x76, 0x57, 0x34,
    0x96, 0x53, 0x76, 0x63, 0xa4, 0x9b, 0xaa, 0x65, 0x87, 0xa6,
    0x86, 0xba, 0x67, 0xb4, 0x14, 0x76, 0x40, 0x33, 0x21, 0x13,
    0x75, 0x53, 0x5a, 0x77, 0x93, 0x64, 0x8a, 0x8b, 0xcb, 0x6b,
    0xa8, 0xac, 0xa9, 0xbb, 0x6d, 0xdb, 0xca, 0x5b, 0x6a, 0xb5,
    0xaa, 0x6c, 0x65, 0x58, 0x75, 0x79, 0x78, 0x39, 0x44, 0x89,
    0x48, 0xaa, 0x26, 0x34, 0x78, 0x93, 0x24, 0x2a, 0x77, 0x75,
    0x86, 0x45, 0x52, 0x67, 0xec, 0xae, 0xe7, 0x8e, 0xeb, 0x7d,
    0xeb, 0x89, 0x87, 0x9b, 0x75, 0x72, 0x95, 0x58, 0x57, 0x62,
    0x27, 0x44, 0x73, 0x15, 0x68, 0x87, 0x28, 0x59, 0x21, 0x34,
    0x84, 0x26, 0x87, 0x64, 0xb6, 0x99, 0x48, 0x4c, 0xa4, 0x5b,
    0xcb, 0xac, 0xac, 0xc7, 0xc4, 0x95, 0xcc, 0x94, 0xc8, 0x99,
    0x8b, 0xac, 0xc9, 0x9c, 0x88, 0xbe, 0x7e, 0x76, 0xcc, 0xd6,
    0x8a, 0xd8, 0xdb, 0x88, 0x35, 0x43, 0x33, 0x87, 0x85, 0x78,
    0x84, 0x29, 0x69, 0x56, 0x66, 0x19, 0x29, 0x17, 0x99, 0x74,
    0x2a, 0xaa, 0x72, 0x66, 0x75, 0x38, 0x47, 0xb4, 0xb8, 0x97,
    0x76, 0x89, 0x87, 0x87, 0xa8, 0xcc, 0x9a, 0x8c, 0x74, 0x9a,
    0xbc, 0x65, 0x48, 0x4b, 0x67, 0x46, 0x48, 0x98, 0x56, 0xb8,
    0x76, 0x95, 0x33, 0x58, 0x74, 0xaa, 0x65, 0x45, 0x34, 0xbb,
    0x66, 0x84, 0x53, 0xb9, 0x35, 0x38, 0x87, 0xa7, 0xb5, 0x44,
    0x96, 0x95, 0x9a, 0x96, 0x43, 0x6a, 0x44, 0x75, 0x48, 0x93,
    0xaa, 0x6a, 0x37, 0xb8, 0x8a, 0x59, 0x6a, 0x99, 0x87, 0x4a,
    0x36, 0xa7, 0x39, 0x87, 0x00, 0x00, 0x00, 0x00, 0xed, 0x05,
    0x64, 0x3e, 0x06, 0x77, 0x6f, 0x3e, 0x6d, 0x93, 0x54, 0xbe,
    0x00, 0x00, 0x00, 0x00, 0x97, 0xfe, 0x1b, 0xbd, 0x00, 0x00,
    0x00, 0x00, 0x8c, 0x59, 0x90, 0xbb, 0x2c, 0x08, 0xd6, 0xbd,
    0xdc, 0x0c, 0xa8, 0x3d, 0x21, 0xcf, 0x22, 0xbe, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1d, 0x38, 0x0b, 0xbe, 0x57, 0xe4, 0x35, 0xbe,
    0x00, 0x00, 0x00, 0x00, 0xed, 0x30, 0xce, 0x3d, 0x39, 0x1a,
    0xbf, 0x3c, 0x88, 0x84, 0x51, 0xbe, 0x00, 0x00, 0x00, 0x00,
    0x74, 0x6a, 0x0b, 0xbf, 0x40, 0x72, 0xf0, 0xbe, 0x06, 0x34,
    0xb8, 0xbe, 0xef, 0x6d, 0x9d, 0xbe, 0xd4, 0xed, 0x7d, 0xbe,
    0x1d, 0x71, 0x38, 0xbe, 0x64, 0x6a, 0xe0, 0xbd, 0xb2, 0x49,
    0xa8, 0xbc, 0xb8, 0xe3, 0x91, 0x3d, 0xd4, 0x36, 0x15, 0x3e,
    0xa4, 0x8c, 0x4e, 0x3e, 0x7b, 0x31, 0x84, 0x3e, 0x15, 0xad,
    0xa4, 0x3e, 0x03, 0x5d, 0xd6, 0x3e, 0x8f, 0x42, 0x02, 0x3f,
    0x38, 0xd4, 0x18, 0x3f, 0xc6, 0x9b, 0x43, 0x79, 0x97, 0x96,
    0xc3, 0x42, 0x66, 0x49, 0x39, 0xac, 0xa4, 0xb8, 0xb7, 0x3c,
    0x3c, 0x78, 0x4b, 0xac, 0x8a, 0x65, 0x56, 0x5a, 0xaa, 0x4a,
    0xaa, 0x73, 0x4c, 0x69, 0xc8, 0xa2, 0x83, 0x89, 0x66, 0x9c,
    0x7c, 0xa4, 0xb8, 0xa9, 0xb9, 0x6c, 0x4b, 0x84, 0x30, 0xc7,
    0xe0, 0x28, 0x58, 0xb2, 0x76, 0x77, 0xa9, 0x09, 0x3c, 0x39,
    0xc5, 0x7b, 0xc5, 0x16, 0x8b, 0x5c, 0x97, 0xcb, 0x66, 0x96,
    0x43, 0xb6, 0x63, 0x8b, 0x64, 0x66, 0x75, 0xa2, 0xa6, 0x67,
    0x35, 0x36, 0xa6, 0xaa, 0x8b, 0x87, 0x85, 0x93, 0x87, 0x98,
    0xac, 0x67, 0x91, 0xc6, 0x86, 0x78, 0xb6, 0xc3, 0x18, 0xc5,
    0xc6, 0x39, 0x8b, 0x78, 0x66, 0xcc, 0x89, 0x97, 0xa9, 0x29,
    0x65, 0xcb, 0x44, 0x88, 0x85, 0x93, 0xad, 0x84, 0xc5, 0x54,
    0x59, 0xcb, 0xe7, 0x73, 0x5e, 0xb2, 0x9a, 0xa7, 0xcc, 0x4c,
    0xb6, 0x37, 0x33, 0x92, 0xa3, 0x04, 0x64, 0x95, 0xc7, 0x47,
    0x42, 0x39, 0x43, 0x89, 0x89, 0x74, 0x69, 0xc5, 0x6e, 0xcb,
    0x78, 0x88, 0xc6, 0x66, 0xa8, 0xa8, 0x67, 0xba, 0x6b, 0xd4,
    0x74, 0x67, 0x3b, 0x5a, 0x56, 0x9b, 0x87, 0x7b, 0x7b, 0x78,
    0x57, 0xa9, 0x6c, 0x69, 0x79, 0xb9, 0x76, 0x57, 0x7a, 0x27,
    0x5b, 0x4c, 0x45, 0x7b, 0xc4, 0x3b, 0x65, 0x7a, 0xc3, 0x67,
    0xab, 0x89, 0x6c, 0xbc, 0x15, 0xa5, 0xc2, 0x9d, 0xbc, 0x86,
    0x42, 0xe7, 0x28, 0x9c, 0x2d, 0xa9, 0x4c, 0x62, 0x71, 0x96,
    0xba, 0x89, 0x54, 0xeb, 0x88, 0x74, 0xae, 0xb4, 0x29, 0xe6,
    0x47, 0xdc, 0x37, 0x67, 0xe3, 0x85, 0x69, 0xa9, 0x6f, 0xd2,
    0x8d, 0xb4, 0x9d, 0x79, 0x68, 0x66, 0xad, 0x0b, 0x46, 0x84,
    0xb3, 0x45, 0xf8, 0x8c, 0xb6, 0x65, 0x3c, 0x54, 0xcd, 0x17,
    0x54, 0xc9, 0x77, 0x92, 0xd2, 0x94, 0x66, 0x68, 0x9b, 0x96,
    0x49, 0x38, 0x84, 0x79, 0xc4, 0x66, 0x6b, 0x38, 0xb8, 0x55,
    0xb7, 0x64, 0xa2, 0x56, 0x49, 0x9c, 0x74, 0x7c, 0x8c, 0x2a,
    0x83, 0x6b, 0x86, 0xa7, 0xc2, 0xb7, 0xa9, 0x5a, 0x3a, 0xb6,
    0x18, 0xd7, 0xea, 0xba, 0x76, 0xbe, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xca, 0xd3, 0x40, 0xbd, 0xd4, 0x3f,
    0x4d, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x73, 0x3e, 0x73, 0xbe, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x80,
    0x3b, 0xbe, 0x7b, 0x74, 0x70, 0x3e, 0x9c, 0x20, 0xea, 0xbb,
    0xb7, 0xb4, 0x8d, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x74, 0x93, 0x53, 0xbe, 0xc8, 0x57, 0x34, 0xbe,
    0x67, 0xc9, 0x96, 0xbd, 0xe2, 0x03, 0xde, 0x3d, 0x71, 0xfa,
    0xe4, 0xbd, 0x5b, 0x06, 0x56, 0xbe, 0x00, 0x00, 0x00, 0x00,
    0x52, 0x67, 0x22, 0xbd, 0x76, 0x4f, 0x66, 0xbe, 0xff, 0xe9,
    0x70, 0xbe, 0xe0, 0xb2, 0x13, 0xbd, 0xdb, 0x8d, 0x9c, 0x3e,
    0x2d, 0x5d, 0x00, 0xbf, 0x8a, 0x66, 0x48, 0x3e, 0xe8, 0x7e,
    0xba, 0xbe, 0x0b, 0x46, 0xde, 0x3e, 0x16, 0x56, 0xa5, 0xbe,
    0xda, 0x34, 0x88, 0xbe, 0x53, 0xf6, 0x21, 0xbf, 0xdc, 0x0e,
    0x07, 0xbd, 0xa9, 0xd4, 0x22, 0x3e, 0xa9, 0x5d, 0x48, 0x3d,
    0x6a, 0xb1, 0x87, 0xbe, 0x0e, 0x2c, 0x10, 0x3e, 0xb0, 0x22,
    0x0e, 0xbf, 0xd7, 0xa7, 0x08, 0xbe, 0x15, 0x03, 0xc7, 0x3e,
    0x46, 0x5f, 0xf2, 0xbd, 0x3a, 0xdd, 0x2e, 0xbe, 0x7a, 0xcb,
    0x0f, 0xbf, 0x01, 0x70, 0xa2, 0x3e, 0x65, 0x07, 0xd6, 0x3e,
    0x51, 0xad, 0xe8, 0xbe, 0xc5, 0x8e, 0xfc, 0x3e, 0x1a, 0x9f,
    0xaf, 0xbe, 0xbf, 0xf4, 0xa0, 0x3e, 0x17, 0x01, 0xc4, 0xbe,
    0x5b, 0x03, 0x2a, 0xbf, 0xe0, 0x1a, 0xd7, 0xbc, 0x19, 0x76,
    0xe4, 0x3e, 0xf3, 0x7b, 0x9b, 0x3e, 0x67, 0x0c, 0xdc, 0x3e,
    0xa2, 0x1e, 0x5f, 0xbd, 0xd9, 0xad, 0x35, 0xbf, 0xbc, 0xd8,
    0x82, 0xbc, 0xbd, 0x7c, 0x21, 0xbf, 0x50, 0x5e, 0xc6, 0xbc,
    0xa8, 0xd8, 0x1a, 0xbd, 0x53, 0x87, 0xbc, 0x3e, 0x7c, 0x5a,
    0xe2, 0x3e, 0x77, 0x0d, 0x08, 0x3f, 0x54, 0xdc, 0xe8, 0xbd,
    0x54, 0x88, 0x45, 0x3d, 0x9e, 0x7c, 0x65, 0x3c, 0x42, 0xcf,
    0x3e, 0xbe, 0x09, 0x0e, 0xb6, 0x3e, 0xb4, 0xf1, 0x04, 0x3f,
    0x7e, 0xe2, 0x72, 0xbe, 0xb8, 0x6e, 0x4f, 0xbe, 0x04, 0xc1,
    0x8b, 0xbd, 0xd3, 0x54, 0xc6, 0x3e, 0x3a, 0xad, 0x1c, 0x3f,
    0xf4, 0x23, 0xdc, 0xbe, 0x2f, 0x78, 0x8f, 0x3e, 0xb6, 0x58,
    0x85, 0xbe, 0x63, 0x61, 0x89, 0x3e, 0x46, 0x98, 0x34, 0xbe,
    0x54, 0x4d, 0xbc, 0x3e, 0x6f, 0x9e, 0xe4, 0xbe, 0xa3, 0x5f,
    0xbd, 0xbe, 0xbc, 0x26, 0x3e, 0xbe, 0x91, 0x4e, 0x9b, 0x3e,
    0xce, 0x84, 0xf8, 0xbe, 0x01, 0x6e, 0x0b, 0xbf, 0x70, 0x8c,
    0xe5, 0xbe, 0xc9, 0x88, 0xd1, 0xbe, 0x61, 0xd6, 0x21, 0x3f,
    0x62, 0xaf, 0x89, 0x3e, 0xb8, 0xf7, 0x0a, 0xbe, 0x9b, 0x4c,
    0xa6, 0xbd, 0x82, 0xff, 0x17, 0xbf, 0xf2, 0xf3, 0x38,
    0x3e, 0xde, 0x31, 0x8a, 0xbe, 0x88, 0x6b, 0xd2, 0xbd
  };

  return AI_HANDLE_PTR(s_network_weights);

}

