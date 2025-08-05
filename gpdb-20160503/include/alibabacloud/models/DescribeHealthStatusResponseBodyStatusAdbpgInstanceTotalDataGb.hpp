// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGINSTANCETOTALDATAGB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGINSTANCETOTALDATAGB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb(const DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb(DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb &&) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb& operator=(const DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb& operator=(DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The total amount of data storage of the instance. Unit: GB.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
