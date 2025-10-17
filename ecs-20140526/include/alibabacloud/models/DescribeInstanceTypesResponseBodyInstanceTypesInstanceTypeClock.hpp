// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPECLOCK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPECLOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock& obj) { 
      DARABONBA_PTR_TO_JSON(PtpSupport, ptpSupport_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock& obj) { 
      DARABONBA_PTR_FROM_JSON(PtpSupport, ptpSupport_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ptpSupport_ == nullptr; };
    // ptpSupport Field Functions 
    bool hasPtpSupport() const { return this->ptpSupport_ != nullptr;};
    void deletePtpSupport() { this->ptpSupport_ = nullptr;};
    inline string ptpSupport() const { DARABONBA_PTR_GET_DEFAULT(ptpSupport_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock& setPtpSupport(string ptpSupport) { DARABONBA_PTR_SET_VALUE(ptpSupport_, ptpSupport) };


  protected:
    // Whether PTP is supported. Possible values:
    // 
    // *   supported
    // *   unsupported
    std::shared_ptr<string> ptpSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
