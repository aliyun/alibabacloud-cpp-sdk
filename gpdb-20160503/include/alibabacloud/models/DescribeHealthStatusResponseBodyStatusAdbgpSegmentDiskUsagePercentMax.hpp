// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBGPSEGMENTDISKUSAGEPERCENTMAX_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBGPSEGMENTDISKUSAGEPERCENTMAX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax() = default ;
    DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax(const DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax(DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax &&) = default ;
    DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax() = default ;
    DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax& operator=(const DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax& operator=(DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->value_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The status corresponding to the maximum storage usage among all compute nodes. Valid values:
    // 
    // *   **critical**: The compute node storage usage is greater than or equal to 90%. In this case, the instance is locked.
    // *   **warning**: The compute node storage usage is greater than or equal to 80% and less than 90%.
    // *   **healthy**: The compute node storage usage is less than 80%.
    std::shared_ptr<string> status_ = nullptr;
    // The metric value of maximum compute node storage usage.
    // 
    // Unit: %.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
