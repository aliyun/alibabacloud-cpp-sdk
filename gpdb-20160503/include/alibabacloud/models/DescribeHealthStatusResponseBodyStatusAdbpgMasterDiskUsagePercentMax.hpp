// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGMASTERDISKUSAGEPERCENTMAX_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGMASTERDISKUSAGEPERCENTMAX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax(const DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax(DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax &&) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax& operator=(const DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax& operator=(DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->value_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The status corresponding to the maximum storage usage of the coordinator node. Valid values:
    // 
    // *   **critical**: The coordinator node storage usage is greater than or equal to 90%. In this case, the instance is locked.
    // *   **warning**: The coordinator node storage usage is greater than or equal to 70% and less than 90%.
    // *   **healthy**: The coordinator node storage usage is less than 70%.
    std::shared_ptr<string> status_ = nullptr;
    // The metric value of maximum coordinator node storage usage.
    // 
    // Unit: %.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
