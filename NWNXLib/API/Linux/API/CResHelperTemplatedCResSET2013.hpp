#pragma once

#include <cstdint>

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct CResRef;

struct CResHelperTemplatedCResSET2013
{

    // The below are auto generated stubs.
    CResHelperTemplatedCResSET2013() = default;
    CResHelperTemplatedCResSET2013(const CResHelperTemplatedCResSET2013&) = default;
    CResHelperTemplatedCResSET2013& operator=(const CResHelperTemplatedCResSET2013&) = default;

    ~CResHelperTemplatedCResSET2013();
    void SetResRef(const CResRef&, int32_t);
};

void CResHelperTemplatedCResSET2013__CResHelperTemplatedCResSET2013Dtor__0(CResHelperTemplatedCResSET2013* thisPtr);
void CResHelperTemplatedCResSET2013__SetResRef(CResHelperTemplatedCResSET2013* thisPtr, const CResRef&, int32_t);

}

}
