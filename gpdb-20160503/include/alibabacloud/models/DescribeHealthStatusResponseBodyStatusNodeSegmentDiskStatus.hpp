// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSNODESEGMENTDISKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSNODESEGMENTDISKSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus() = default ;
    DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus(const DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus(DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus &&) = default ;
    DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus() = default ;
    DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus& operator=(const DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus& operator=(DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus &&) = default ;
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
    inline DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The storage status of compute nodes. Valid values:
    // 
    // *   **critical**: The compute node storage usage is greater than or equal to 90%. In this case, this metric is marked in red in the console and the instance is locked.
    // *   **warning**: The compute node storage usage is greater than or equal to 80% and less than 90%. In this case, this metric is marked in yellow in the console.
    // *   **healthy**: The compute node storage usage is less than 80%. In this case, this metric is marked in green in the console.
    // 
    // >  The compute node storage usage is the maximum storage usage among all compute nodes.
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
