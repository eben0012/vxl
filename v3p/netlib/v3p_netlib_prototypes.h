/* Include prototype headers. */
#include "blas/caxpy.h"
#include "blas/ccopy.h"
#include "blas/cdotc.h"
#include "blas/cscal.h"
#include "blas/csrot.h"
#include "blas/cswap.h"
#include "blas/dasum.h"
#include "blas/daxpy.h"
#include "blas/dcabs1.h"
#include "blas/dcopy.h"
#include "blas/ddot.h"
#include "blas/dlamch.h"
#include "blas/dnrm2.h"
#include "blas/drot.h"
#include "blas/drotg.h"
#include "blas/dscal.h"
#include "blas/dswap.h"
#include "blas/dzasum.h"
#include "blas/dznrm2.h"
#include "blas/idamax.h"
#include "blas/izamax.h"
#include "blas/saxpy.h"
#include "blas/scnrm2.h"
#include "blas/scopy.h"
#include "blas/sdot.h"
#include "blas/snrm2.h"
#include "blas/srot.h"
#include "blas/srotg.h"
#include "blas/sscal.h"
#include "blas/sswap.h"
#include "blas/xerbla.h"
#include "blas/zaxpy.h"
#include "blas/zcopy.h"
#include "blas/zdotc.h"
#include "blas/zdotu.h"
#include "blas/zdrot.h"
#include "blas/zdscal.h"
#include "blas/zgemm.h"
#include "blas/zgemv.h"
#include "blas/zgerc.h"
#include "blas/zscal.h"
#include "blas/zswap.h"
#include "blas/ztrmm.h"
#include "blas/ztrmv.h"
#include "blas/ztrsv.h"
#include "linpack/cqrdc.h"
#include "linpack/cqrsl.h"
#include "linpack/csvdc.h"
#include "linpack/dpoco.h"
#include "linpack/dpodi.h"
#include "linpack/dpofa.h"
#include "linpack/dposl.h"
#include "linpack/dqrdc.h"
#include "linpack/dqrsl.h"
#include "linpack/dsvdc.h"
#include "linpack/sqrdc.h"
#include "linpack/sqrsl.h"
#include "linpack/ssvdc.h"
#include "linpack/zqrdc.h"
#include "linpack/zqrsl.h"
#include "linpack/zsvdc.h"
#include "temperton/dgpfa.h"
#include "temperton/dgpfa2f.h"
#include "temperton/dgpfa3f.h"
#include "temperton/dgpfa5f.h"
#include "temperton/gpfa.h"
#include "temperton/gpfa2f.h"
#include "temperton/gpfa3f.h"
#include "temperton/gpfa5f.h"
#include "temperton/setdgpfa.h"
#include "temperton/setgpfa.h"
#include "eispack/balanc.h"
#include "eispack/balbak.h"
#include "eispack/cdiv.h"
#include "eispack/elmhes.h"
#include "eispack/eltran.h"
#include "eispack/epslon.h"
#include "eispack/hqr.h"
#include "eispack/hqr2.h"
#include "eispack/otqlrat.h"
#include "eispack/pythag.h"
#include "eispack/rebak.h"
#include "eispack/reduc.h"
#include "eispack/rg.h"
#include "eispack/rs.h"
#include "eispack/rsg.h"
#include "eispack/tql1.h"
#include "eispack/tql2.h"
#include "eispack/tred1.h"
#include "eispack/tred2.h"
#include "laso/dlabax.h"
#include "laso/dlabcm.h"
#include "laso/dlabfc.h"
#include "laso/dlaeig.h"
#include "laso/dlager.h"
#include "laso/dlaran.h"
#include "laso/dmvpc.h"
#include "laso/dnlaso.h"
#include "laso/dnppla.h"
#include "laso/dortqr.h"
#include "laso/dvsort.h"
#include "laso/urand.h"
#include "lapack/complex16/zgebak.h"
#include "lapack/complex16/zgebal.h"
#include "lapack/complex16/zgeev.h"
#include "lapack/complex16/zgehd2.h"
#include "lapack/complex16/zgehrd.h"
#include "lapack/complex16/zhseqr.h"
#include "lapack/complex16/zlacgv.h"
#include "lapack/complex16/zlacpy.h"
#include "lapack/complex16/zladiv.h"
#include "lapack/complex16/zlahqr.h"
#include "lapack/complex16/zlahrd.h"
#include "lapack/complex16/zlange.h"
#include "lapack/complex16/zlanhs.h"
#include "lapack/complex16/zlarf.h"
#include "lapack/complex16/zlarfb.h"
#include "lapack/complex16/zlarfg.h"
#include "lapack/complex16/zlarft.h"
#include "lapack/complex16/zlarfx.h"
#include "lapack/complex16/zlascl.h"
#include "lapack/complex16/zlaset.h"
#include "lapack/complex16/zlassq.h"
#include "lapack/complex16/zlatrs.h"
#include "lapack/complex16/ztrevc.h"
#include "lapack/complex16/zung2r.h"
#include "lapack/complex16/zunghr.h"
#include "lapack/complex16/zungqr.h"
#include "lapack/double/dlabad.h"
#include "lapack/double/dladiv.h"
#include "lapack/double/dlapy2.h"
#include "lapack/double/dlapy3.h"
#include "lapack/util/ieeeck.h"
#include "lapack/util/ilaenv.h"
#include "lapack/util/lsame.h"
