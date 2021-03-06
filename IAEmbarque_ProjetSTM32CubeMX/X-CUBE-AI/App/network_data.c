#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 604 ] = {
    0x1f, 0x69, 0x55, 0xbf, 0x5c, 0xb8, 0x30, 0xbf, 0x12, 0x41,
    0x12, 0xbf, 0x83, 0x57, 0xf7, 0xbe, 0xa0, 0x3b, 0xc5, 0xbe,
    0xdb, 0xdc, 0x90, 0xbe, 0xfb, 0x82, 0x34, 0xbe, 0x1f, 0xa7,
    0x71, 0xbd, 0xf8, 0x34, 0x5f, 0x3d, 0xab, 0x40, 0x1d, 0x3e,
    0x9a, 0x5b, 0x82, 0x3e, 0x7f, 0x30, 0xbd, 0x3e, 0x30, 0x4f,
    0xf1, 0x3e, 0x49, 0xa3, 0x1b, 0x3f, 0xf6, 0x2a, 0x35, 0x3f,
    0x92, 0x1c, 0x4a, 0x3f, 0x13, 0x23, 0x33, 0x15, 0x23, 0x22,
    0x66, 0x66, 0x48, 0x79, 0x77, 0x88, 0x7a, 0x8b, 0x8a, 0x9c,
    0x9b, 0xab, 0xba, 0xba, 0xc9, 0x99, 0xbb, 0x8b, 0xc8, 0xaa,
    0x89, 0xb9, 0x99, 0x88, 0x89, 0x59, 0x55, 0x87, 0x54, 0x87,
    0x68, 0x85, 0x57, 0x85, 0x87, 0x66, 0x75, 0x77, 0x85, 0x74,
    0x78, 0x85, 0x77, 0x67, 0x57, 0x77, 0x76, 0xa6, 0x99, 0x88,
    0x79, 0x77, 0x87, 0x68, 0x76, 0x67, 0x79, 0x69, 0x98, 0x9a,
    0x87, 0x79, 0x67, 0x68, 0x89, 0x96, 0x87, 0x86, 0x56, 0x96,
    0x78, 0x8a, 0x88, 0x67, 0x96, 0x86, 0x99, 0x69, 0x76, 0x67,
    0x76, 0x79, 0x67, 0x87, 0x7a, 0x79, 0x76, 0xa8, 0x76, 0x88,
    0x89, 0x87, 0x99, 0x79, 0x10, 0x13, 0x52, 0x33, 0x33, 0x56,
    0x84, 0x89, 0x86, 0x79, 0xaa, 0x87, 0x9a, 0xaa, 0xa8, 0xb9,
    0xac, 0x98, 0x88, 0x8a, 0x7b, 0x78, 0xb8, 0xba, 0x87, 0xba,
    0xaa, 0x89, 0x96, 0x96, 0x97, 0x98, 0x77, 0x78, 0x89, 0x67,
    0x99, 0x66, 0x76, 0x78, 0x99, 0x66, 0x88, 0x57, 0x87, 0x56,
    0x66, 0x86, 0x87, 0x67, 0x8c, 0xa4, 0x44, 0x56, 0x63, 0x44,
    0x54, 0x64, 0x57, 0x68, 0x89, 0x8a, 0x9b, 0x8b, 0x8b, 0xab,
    0xb9, 0xbc, 0xcb, 0x9d, 0xdb, 0xba, 0xa9, 0xc9, 0xa9, 0xb9,
    0x88, 0xa7, 0x9a, 0x6a, 0x68, 0x77, 0x77, 0x95, 0x78, 0x68,
    0x88, 0x78, 0x67, 0x58, 0x67, 0x64, 0x65, 0x46, 0x56, 0x77,
    0x77, 0x65, 0x45, 0x77, 0xed, 0xfb, 0xfb, 0xcc, 0xbb, 0xba,
    0xcb, 0xab, 0x98, 0x9a, 0x7a, 0xb9, 0x98, 0xa8, 0x87, 0x99,
    0xa7, 0x8a, 0x99, 0x86, 0x7a, 0x79, 0x68, 0x89, 0x8a, 0x68,
    0x8a, 0x8a, 0xb7, 0x89, 0x98, 0xba, 0xba, 0x8b, 0x98, 0xab,
    0xba, 0xab, 0xa8, 0x8a, 0xa9, 0xbb, 0xbb, 0x89, 0x9a, 0x9b,
    0x8c, 0x99, 0xa9, 0xba, 0x00, 0x00, 0x11, 0xde, 0xe0, 0x3e,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xf8, 0x1e, 0x3f, 0xc9, 0x40,
    0x9e, 0xbe, 0x9b, 0x05, 0xd6, 0xbe, 0x5e, 0x01, 0xc7, 0xbf,
    0x12, 0x7f, 0xac, 0xbf, 0x1b, 0x84, 0x88, 0xbf, 0x1c, 0x20,
    0x6d, 0xbf, 0x1b, 0x94, 0x18, 0xbf, 0xed, 0xcc, 0xd8, 0xbe,
    0xae, 0x4e, 0x8b, 0xbe, 0xb5, 0x32, 0xcc, 0xbd, 0x2c, 0xf3,
    0xb2, 0x3d, 0xde, 0x03, 0xaa, 0x3e, 0x50, 0xa7, 0x0c, 0x3f,
    0x35, 0x13, 0x3f, 0x3f, 0x4e, 0x1d, 0x77, 0x3f, 0xd7, 0x21,
    0x94, 0x3f, 0xa7, 0x04, 0xb3, 0x3f, 0x32, 0x35, 0xcb, 0x3f,
    0xa5, 0x47, 0x40, 0xe7, 0xbc, 0x80, 0x29, 0x1b, 0xb0, 0xc8,
    0xcd, 0x60, 0x1a, 0x70, 0xc0, 0x85, 0x49, 0x40, 0x87, 0x47,
    0x40, 0x9a, 0x5a, 0x50, 0x96, 0x68, 0x60, 0x58, 0x5f, 0x90,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xe0, 0xcd, 0x3e,
    0xe8, 0x8e, 0x19, 0xbf, 0x5e, 0x69, 0x8d, 0x3d, 0x11, 0x7d,
    0x76, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x14,
    0x41, 0xbf, 0xc0, 0xcd, 0xbc, 0xbd, 0x85, 0xb5, 0x57, 0xbe,
    0x32, 0x70, 0xaf, 0xbf, 0xc0, 0x77, 0x69, 0xbf, 0x46, 0x16,
    0x7f, 0x3f, 0xc0, 0x25, 0x03, 0xbd, 0x05, 0x44, 0x94, 0xbe,
    0xa0, 0x88, 0x4c, 0x3e, 0x92, 0x9b, 0x13, 0x3f, 0x11, 0x97,
    0x70, 0xbf, 0x54, 0xf9, 0x29, 0xbe, 0xfc, 0x16, 0xa0, 0xbf,
    0xb2, 0x69, 0xb9, 0x3f, 0xa8, 0x24, 0xd3, 0xbf, 0x21, 0x67,
    0x35, 0x3f, 0x90, 0xce, 0xe8, 0x3e, 0x38, 0x39, 0xa2, 0x3d,
    0xec, 0xde, 0x06, 0x3e, 0x82, 0xc6, 0x90, 0x3e, 0x2b, 0xc9,
    0xb7, 0x3f, 0x38, 0xd4, 0x99, 0x3d, 0xa7, 0x37, 0xd0,
    0x3e, 0x6c, 0xe5, 0x99, 0xbf, 0x43, 0xda, 0x27, 0x3f,
    0x5d, 0xb1, 0x5b, 0xbf, 0x6a, 0xfe, 0xb0, 0xbe, 0x28,
    0x7b, 0x2a, 0xbf, 0xe6, 0xa1, 0x95, 0x3e, 0xbd, 0x6c,
    0xe5, 0xbe, 0xbe, 0xa9, 0x71, 0x3f, 0xe5, 0x4b, 0x48,
    0x3f, 0xff, 0x24, 0x60, 0xbf, 0xe1, 0x2c, 0xcc, 0xbe
  };

  return AI_HANDLE_PTR(s_network_weights);

}

