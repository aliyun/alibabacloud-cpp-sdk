// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSNODEMASTERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSNODEMASTERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusNodeMasterStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusNodeMasterStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusNodeMasterStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusNodeMasterStatus() = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterStatus(const DescribeHealthStatusResponseBodyStatusNodeMasterStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterStatus(DescribeHealthStatusResponseBodyStatusNodeMasterStatus &&) = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusNodeMasterStatus() = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterStatus& operator=(const DescribeHealthStatusResponseBodyStatusNodeMasterStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusNodeMasterStatus& operator=(DescribeHealthStatusResponseBodyStatusNodeMasterStatus &&) = default ;
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
    inline DescribeHealthStatusResponseBodyStatusNodeMasterStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusNodeMasterStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The health status of the coordinator node. Valid values:
    // 
    // *   **critical**: The primary or standby coordinator node is unavailable. In this case, this metric is marked in red in the console.
    // *   **healthy**: Both the primary and standby coordinator nodes are available. In this case, this metric is marked in green in the console.
    std::shared_ptr<string> status_ = nullptr;
    // The metric value of coordinator node health status. Valid values:
    // 
    // *   **1**: healthy
    // *   **0**: critical
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
