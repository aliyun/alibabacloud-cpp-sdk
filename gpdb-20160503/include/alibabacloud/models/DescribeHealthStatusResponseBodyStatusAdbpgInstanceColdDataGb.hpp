// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGINSTANCECOLDDATAGB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGINSTANCECOLDDATAGB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb(const DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb(DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb &&) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb& operator=(const DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb& operator=(DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The total amount of cold data storage. Unit: GB.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
