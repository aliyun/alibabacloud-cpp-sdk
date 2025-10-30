// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSNODEMASTERCONNECTIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSNODEMASTERCONNECTIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus() = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus(const DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus(DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus &&) = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus() = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus& operator=(const DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus& operator=(DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus &&) = default ;
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
    inline DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The connection health status of the coordinator node. Valid values:
    // 
    // *   **critical**: The coordinator node connection usage is greater than 95%. In this case, this metric is marked in red in the console.
    // *   **warning**: The coordinator node connection usage is greater than or equal to 90% and less than 95%. In this case, this metric is marked in yellow in the console.
    // *   **healthy**: The coordinator node connection usage is less than 90%. In this case, this metric is marked in green in the console.
    // 
    // >  The coordinator node connection usage is the maximum connection usage of the coordinator node.
    std::shared_ptr<string> status_ = nullptr;
    // The metric value of coordinator node connection usage.
    // 
    // Unit: %.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
