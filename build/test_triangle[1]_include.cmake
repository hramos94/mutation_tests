if(EXISTS "/home/hlr/Documents/mutation_tests/build/test_triangle[1]_tests.cmake")
  include("/home/hlr/Documents/mutation_tests/build/test_triangle[1]_tests.cmake")
else()
  add_test(test_triangle_NOT_BUILT test_triangle_NOT_BUILT)
endif()
