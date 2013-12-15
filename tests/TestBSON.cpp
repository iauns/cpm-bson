/// \author James Hughes
/// \date   November 2013

#define MAX(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

#define MIN(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

#include <bson/bson.h>
#include <gtest/gtest.h>

// Only tests compilation. No real unit tests here. That is covered by the
// external library's battery of tests.
TEST(Mongo, BSON)
{
  // Start forming a bson structure to send to the viewer.
  bson_t b;
  bson_init(&b);

  bson_append_int32(&b, "frameTimeSecs", -1, 1234);
  bson_append_int32(&b, "frameTimeMS", -1, 1234567);
  bson_append_double(&b, "experimentTime", -1, 1.023);

  bson_destroy(&b);
}


