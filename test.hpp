unsigned int key_128_128[16] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f };
unsigned int key_128_256[32] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
								 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F };
unsigned int key_256_256[32] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
								 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F };
unsigned int key_256_512[64] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
								 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
								 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
								 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F };
unsigned int key_512_512[64] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
								 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
								 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
								 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F };

unsigned int input_128_128[16] = { 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F };
unsigned int input_128_256[16] = { 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F };
unsigned int input_256_256[32] = { 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
								   0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F };
unsigned int input_256_512[32] = { 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
								   0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F };
unsigned int input_512_512[64] = { 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
								   0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
								   0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F,
								   0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F };

unsigned int close_key_128_128[16] = { 0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00 };
unsigned int close_key_128_256[32] = { 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10,
 									   0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00 };
unsigned int close_key_256_256[32] = { 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10,
 									   0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00 };
unsigned int close_key_256_512[64] = { 0x3F, 0x3E, 0x3D, 0x3C, 0x3B, 0x3A, 0x39, 0x38, 0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30,
									   0x2F, 0x2E, 0x2D, 0x2C, 0x2B, 0x2A, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20,
									   0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10,
									   0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00 };
unsigned int close_key_512_512[64] = { 0x3F, 0x3E, 0x3D, 0x3C, 0x3B, 0x3A, 0x39, 0x38, 0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30,
									   0x2F, 0x2E, 0x2D, 0x2C, 0x2B, 0x2A, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20,
									   0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10,
									   0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00 };

unsigned int close_text_128_128[16] = { 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10 };
unsigned int close_text_128_256[16] = { 0x2F, 0x2E, 0x2D, 0x2C, 0x2B, 0x2A, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20 };
unsigned int close_text_256_256[32] = { 0x3F, 0x3E, 0x3D, 0x3C, 0x3B, 0x3A, 0x39, 0x38, 0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30,
 										0x2F, 0x2E, 0x2D, 0x2C, 0x2B, 0x2A, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20 };
unsigned int close_text_256_512[32] = { 0x5F, 0x5E, 0x5D, 0x5C, 0x5B, 0x5A, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x52, 0x51, 0x50,
 										0x4F, 0x4E, 0x4D, 0x4C, 0x4B, 0x4A, 0x49, 0x48, 0x47, 0x46, 0x45, 0x44, 0x43, 0x42, 0x41, 0x40 };
unsigned int close_text_512_512[64] = { 0x7F, 0x7E, 0x7D, 0x7C, 0x7B, 0x7A, 0x79, 0x78, 0x77, 0x76, 0x75, 0x74, 0x73, 0x72, 0x71, 0x70,
 										0x6F, 0x6E, 0x6D, 0x6C, 0x6B, 0x6A, 0x69, 0x68, 0x67, 0x66, 0x65, 0x64, 0x63, 0x62, 0x61, 0x60,
									    0x5F, 0x5E, 0x5D, 0x5C, 0x5B, 0x5A, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x52, 0x51, 0x50,
 										0x4F, 0x4E, 0x4D, 0x4C, 0x4B, 0x4A, 0x49, 0x48, 0x47, 0x46, 0x45, 0x44, 0x43, 0x42, 0x41, 0x40 };

unsigned int decryption_res_128_128[16] = { 0x72, 0x91, 0xEF, 0x2B, 0x47, 0x0C, 0xC7, 0x84, 0x6F, 0x09, 0xC2, 0x30, 0x39, 0x73, 0xDA, 0xD7 };
unsigned int decryption_res_128_256[16] = { 0xF3, 0x6D, 0xB4, 0x56, 0xCE, 0xFD, 0xDF, 0xE1, 0xB4, 0x5B, 0x5F, 0x70, 0x30, 0xCA, 0xD9, 0x96 };
unsigned int decryption_res_256_256[32] = { 0x7F, 0xC5, 0x23, 0x78, 0x96, 0x67, 0x4E, 0x86, 0x03, 0xC1, 0xE9, 0xB0, 0x3F, 0x8B, 0x4B, 0xA3,
 											0xAB, 0x5B, 0x7C, 0x59, 0x2C, 0x3F, 0xC3, 0xD3, 0x61, 0xED, 0xD1, 0x25, 0x86, 0xB2, 0x0F, 0xE3 };
unsigned int decryption_res_256_512[32] = { 0x18, 0x31, 0x7A, 0x27, 0x67, 0xDA, 0xD4, 0x82, 0xBC, 0xCD, 0x07, 0xB9, 0xA1, 0x78, 0x8D, 0x07,
 											0x5E, 0x70, 0x98, 0x18, 0x9E, 0x5F, 0x84, 0x97, 0x2D, 0x0B, 0x91, 0x6D, 0x79, 0xBA, 0x6A, 0xE0 };
unsigned int decryption_res_512_512[64] = { 0xCE, 0x80, 0x84, 0x33, 0x25, 0xA0, 0x52, 0x52, 0x1B, 0xEA, 0xD7, 0x14, 0xE6, 0xA9, 0xD8, 0x29,
											0xFD, 0x38, 0x1E, 0x0E, 0xE9, 0xA8, 0x45, 0xBD, 0x92, 0x04, 0x45, 0x54, 0xD9, 0xFA, 0x46, 0xA3,
											0x75, 0x7F, 0xEF, 0xDB, 0x85, 0x3B, 0xB1, 0xF2, 0x97, 0xFF, 0x9D, 0x83, 0x3B, 0x75, 0xE6, 0x6A,
											0xAF, 0x41, 0x57, 0xAB, 0xB5, 0x29, 0x1B, 0xDC, 0xF0, 0x94, 0xBB, 0x13, 0xAA, 0x5A, 0xFF, 0x22 };								   

unsigned int encryption_res_128_128[16] = { 0x81, 0xBF, 0x1C, 0x7D, 0x77, 0x9B, 0xAC, 0x20, 0xE1, 0xC9, 0xEA, 0x39, 0xB4, 0xD2, 0xAD, 0x06 };
unsigned int encryption_res_128_256[16] = { 0x58, 0xEC, 0x3E, 0x09, 0x10, 0x00, 0x15, 0x8A, 0x11, 0x48, 0xF7, 0x16, 0x6F, 0x33, 0x4F, 0x14 };
unsigned int encryption_res_256_256[32] = { 0xF6, 0x6E, 0x3D, 0x57, 0x0E, 0xC9, 0x21, 0x35, 0xAE, 0xDA, 0xE3, 0x23, 0xDC, 0xBD, 0x2A, 0x8C,
 											0xA0, 0x39, 0x63, 0xEC, 0x20, 0x6A, 0x0D, 0x5A, 0x88, 0x38, 0x5C, 0x24, 0x61, 0x7F, 0xD9, 0x2C };
unsigned int encryption_res_256_512[32] = { 0x60, 0x69, 0x90, 0xE9, 0xE6, 0xB7, 0xB6, 0x7A, 0x4B, 0xD6, 0xD8, 0x93, 0xD7, 0x22, 0x68, 0xB7,
											0x8E, 0x02, 0xC8, 0x3C, 0x3C, 0xD7, 0xE1, 0x02, 0xFD, 0x2E, 0x74, 0xA8, 0xFD, 0xFE, 0x5D, 0xD9  };
unsigned int encryption_res_512_512[64] = { 0x4A, 0x26, 0xE3, 0x1B, 0x81, 0x1C, 0x35, 0x6A, 0xA6, 0x1D, 0xD6, 0xCA, 0x05, 0x96, 0x23, 0x1A,
											0x67, 0xBA, 0x83, 0x54, 0xAA, 0x47, 0xF3, 0xA1, 0x3E, 0x1D, 0xEE, 0xC3, 0x20, 0xEB, 0x56, 0xB8,
											0x95, 0xD0, 0xF4, 0x17, 0x17, 0x5B, 0xAB, 0x66, 0x2F, 0xD6, 0xF1, 0x34, 0xBB, 0x15, 0xC8, 0x6C,
											0xCB, 0x90, 0x6A, 0x26, 0x85, 0x6E, 0xFE, 0xB7, 0xC5, 0xBC, 0x64, 0x72, 0x94, 0x0D, 0xD9, 0xD9 };