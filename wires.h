// pad number on asic in order of bonds
//	int pad [1714] = {252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 32, 33, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 48, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 62, 63, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 32, 33, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 34, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 31, 34, 35, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 32, 34, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 32, 34, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 32, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 32, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 46, 47, 48, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 62, 63, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 98, 97, 94, 93, 98, 97, 94, 93, 98, 97, 94, 93, 98, 97, 94, 93, 98, 97, 94, 93, 98, 97, 94, 93, 98, 97, 94, 93, 98, 97, 94, 93, 98, 97, 94, 93, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 48, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 62, 63, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 32, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 32, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 31, 32, 33, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 252, 1, 2, 3, 4, 8, 9, 10, 12, 13, 11, 19, 20, 23, 24, 32, 33, 35, 37, 38, 39, 40, 41, 42, 43, 46, 47, 48, 51, 52, 55, 56, 64, 65, 66, 67, 68, 69, 59, 60, 62, 63, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88, 95, 96, 99, 100, 104, 105, 80, 89, 90, 91, 92, 103, 116, 117, 118, 113, 114, 115, 119, 120, 121, 122, 123, 124, 21, 22, 25, 26, 26, 25, 22, 21, 26, 25, 22, 21, 26, 25, 22, 21, 26, 25, 22, 21, 26, 25, 22, 21, 26, 25, 22, 21, 26, 25, 22, 21, 26, 25, 22, 21};
    // ASIC bond is coming FROM
//	char wirex [1714][20] ={"E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "E73", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S72", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S71", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S70", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S69", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S68", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S67", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S66", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "S65", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "M64", "S72", "S72", "S72", "S72", "S71", "S71", "S71", "S71", "S70", "S70", "S70", "S70", "S69", "S69", "S69", "S69", "S68", "S68", "S68", "S68", "S67", "S67", "S67", "S67", "S66", "S66", "S66", "S66", "S65", "S65", "S65", "S65", "M64", "M64", "M64", "M64", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "M32", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S33", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S34", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S35", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S36", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S37", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S38", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S39", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "S40", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "E41", "S40", "S40", "S40", "S40", "S39", "S39", "S39", "S39", "S38", "S38", "S38", "S38", "S37", "S37", "S37", "S37", "S36", "S36", "S36", "S36", "S35", "S35", "S35", "S35", "S34", "S34", "S34", "S34", "S33", "S33", "S33", "S33"};
    // Description of bond purpose
//	char wirem[1714][20]= {"i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<1>", "ID<2>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "MasterB", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "IdoB", "Ido", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<1>", "ID<2>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "Vddd", "W Shunt Disable", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<1>", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<1>", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<2>", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<2>", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<1>", "ID<2>", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<1>", "ID<2>", "ID<3>", "ID<4>", "ID<5>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "MasterB", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "IdoB", "Ido", "Vddd", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Shunt Disable", "Vddd", "Vddd", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "98", "97", "94", "93", "98", "97", "94", "93", "98", "97", "94", "93", "98", "97", "94", "93", "98", "97", "94", "93", "98", "97", "94", "93", "98", "97", "94", "93", "98", "97", "94", "93", "98", "97", "94", "93", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<1>", "ID<2>", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "MasterB", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "IdoB", "Ido", "Vddd", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Shunt Disable", "Vddd", "Vddd", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<1>", "ID<2>", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<2>", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<2>", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<1>", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<1>", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<3>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "Vddd", "Vddd", "W Shunt Disable", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<0>", "ID<1>", "ID<2>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "Shunt Disable", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "i128", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gndd", "Gnd", "Vddd", "Gndd", "Gnd", "Gndd", "Gnd", "ID<1>", "ID<2>", "ID<4>", "ID<6>", "Gndd", "Vddd", "Gnd", "HardResetB", "HardReset", "ClkMode80", "Clk0", "Clk0B", "MasterB", "COM0", "COM0B", "LONE0", "LONE0B", "Gnd", "Gndd", "Gndd", "Gndd", "Gndd", "Gndd", "BC0", "BC0B", "IdoB", "Ido", "Vddd", "Vddd", "Vddd", "Vddd", "Vddd", "W Shunt Disable", "Vddd", "Vddd", "Vddd", "Vddd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "Gnd", "Gndd", "ShuntCtl1", "ShuntCtl2", "Vddd", "Vddd", "Vddd", "Vddd", "Vdd", "Vdd", "Vdd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "Gnd", "i0", "i1", "21", "22", "25", "26", "26", "25", "22", "21", "26", "25", "22", "21", "26", "25", "22", "21", "26", "25", "22", "21", "26", "25", "22", "21", "26", "25", "22", "21", "26", "25", "22", "21", "26", "25", "22", "21"};

	