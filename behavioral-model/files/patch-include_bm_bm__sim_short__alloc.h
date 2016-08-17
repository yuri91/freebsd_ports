--- include/bm/bm_sim/short_alloc.h.orig	2016-08-15 14:16:22 UTC
+++ include/bm/bm_sim/short_alloc.h
@@ -30,7 +30,7 @@ namespace detail {
 
 // See https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56019
 // TODO(antonin): find a better way to do this?
-#if __GNUC__ == 4 && __GNUC_MINOR__ <= 8
+#if __GNUC__ == 4 && __GNUC_MINOR__ <= 8 && !__clang__
   typedef ::max_align_t max_align_t;
 #else
   typedef std::max_align_t max_align_t;
