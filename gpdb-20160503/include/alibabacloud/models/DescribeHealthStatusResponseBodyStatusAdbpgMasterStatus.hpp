// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGMASTERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUSADBPGMASTERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus(const DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus(DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus &&) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus() = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus& operator=(const DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus &) = default ;
    DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus& operator=(DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus &&) = default ;
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
    inline DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The availability status of the coordinator node. Valid values:
    // 
    // *   **critical**: Both the primary and standby coordinator nodes are unavailable. In this case, this metric is marked in red in the console.
    // *   **warning**: The primary or standby coordinator node is unavailable. In this case, this metric is marked in yellow in the console.
    // *   **healthy**: Both the primary and standby coordinator nodes are available. In this case, this metric is marked in green in the console.
    std::shared_ptr<string> status_ = nullptr;
    // The metric value of coordinator node availability status. Valid values:
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
