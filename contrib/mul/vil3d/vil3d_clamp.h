// This is contrib/mul/vil3d/vil3d_clamp.h
#ifndef vil3d_clamp_h_
#define vil3d_clamp_h_
#ifdef VCL_NEEDS_PRAGMA_INTERFACE
#pragma interface
#endif
//:
// \file
// \author Ian Scott.
//


#include <vil3d/vil3d_image_view.h>
#include <vcl_cassert.h>

//: Clamp an image view between two values.
// \relates vil3d_image_view
template <class T>
inline void vil3d_clamp(vil3d_image_view<T >&src, vil3d_image_view<T >&dest, T lo, T hi)
{
  assert (hi >= lo);
  assert (src.nplanes() == dest.nplanes() &&
          src.nk() == dest.nk() &&
          src.nj() == dest.nj() &&
          src.ni() == dest.ni());
  for (unsigned p = 0; p < src.nplanes(); ++p)
    for (unsigned k = 0; k < src.nk(); ++k)
      for (unsigned j = 0; j < src.nj(); ++j)
        for (unsigned i = 0; i < src.ni(); ++i)
        {
          const T v = src(i,j,k,p);
          dest(i,j,k,p) = v<lo?lo:(v>hi?hi:v);
        }
}

//: Clamp an image view above a given value t, setting it to v if below or on t
// \relates vil3d_image_view
template <class T>
inline void vil3d_clamp_below(vil3d_image_view<T>& src, T t, T v)
{
  vcl_ptrdiff_t istepA=src.istep(), jstepA=src.jstep(),
    kstepA=src.kstep(), pstepA=src.planestep();
  T* planeA = src.origin_ptr();
  for (unsigned int p=0; p<src.nplanes(); ++p,planeA+=pstepA)
  {
    T* sliceA = planeA;
    for (unsigned int k=0; k<src.nk(); ++k,sliceA+=kstepA)
    {
      T* rowA = sliceA;
      for (unsigned int j=0; j<src.nj(); ++j,rowA+=jstepA)
      {
        T* voxelA = rowA;
        for (unsigned int i=0; i<src.ni(); ++i,voxelA+=istepA)
          if (*voxelA <= t)
            *voxelA = v;
      }
    }
  }
}

//: Clamp an image view above a given value t, setting it to this t if below t
// \relates vil3d_image_view
template <class T>
inline void vil3d_clamp_below(vil3d_image_view<T>& src, T t)
{
  vil3d_clamp_below(src, t, t);
}

#endif // vil3d_clamp_h_
