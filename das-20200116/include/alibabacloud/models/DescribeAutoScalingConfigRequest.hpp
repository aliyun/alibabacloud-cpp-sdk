// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeAutoScalingConfigRequest() = default ;
    DescribeAutoScalingConfigRequest(const DescribeAutoScalingConfigRequest &) = default ;
    DescribeAutoScalingConfigRequest(DescribeAutoScalingConfigRequest &&) = default ;
    DescribeAutoScalingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigRequest() = default ;
    DescribeAutoScalingConfigRequest& operator=(const DescribeAutoScalingConfigRequest &) = default ;
    DescribeAutoScalingConfigRequest& operator=(DescribeAutoScalingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAutoScalingConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
