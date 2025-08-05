// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGDISKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGDISKSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus(const DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus(DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus &&) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus& operator=(const DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus& operator=(DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus &&) = default ;
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
    inline DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The storage status of the instance. Valid values:
    // 
    // *   **critical**: The instance storage usage is greater than or equal to 90%. In this case, this metric is marked in red in the console and the instance is locked.
    // *   **warning**: The instance storage usage is greater than or equal to 70% and less than 90%. In this case, this metric is marked in yellow in the console.
    // *   **healthy**: The instance storage usage is less than 70%. In this case, this metric is marked in green in the console.
    // 
    // >  The instance storage usage is the average storage usage of all compute nodes.
    std::shared_ptr<string> status_ = nullptr;
    // The metric value of instance storage usage.
    // 
    // Unit: %.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
