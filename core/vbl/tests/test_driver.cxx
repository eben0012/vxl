#include <testlib/testlib_register.h>

DECLARE(vbl_test_bounding_box);
DECLARE(vbl_test_quadruple);
DECLARE(vbl_test_triple);
DECLARE(vbl_test_qsort);
DECLARE(vbl_test_array);
DECLARE(vbl_test_sparse_array_2d);
DECLARE(vbl_test_sparse_array_3d);
DECLARE(vbl_test_smart_ptr);

void
register_tests()
{
  REGISTER(vbl_test_bounding_box);
  REGISTER(vbl_test_quadruple);
  REGISTER(vbl_test_triple);
  REGISTER(vbl_test_qsort);
  REGISTER(vbl_test_array);
  REGISTER(vbl_test_sparse_array_2d);
  REGISTER(vbl_test_sparse_array_3d);
  REGISTER(vbl_test_smart_ptr);
}

DEFINE_MAIN;
