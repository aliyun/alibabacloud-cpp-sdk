// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAccessTimeRangeConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAccessTimeRangeConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTimeRangeConfig, accessTimeRangeConfigShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAccessTimeRangeConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTimeRangeConfig, accessTimeRangeConfigShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyAccessTimeRangeConfigShrinkRequest() = default ;
    SetPolicyAccessTimeRangeConfigShrinkRequest(const SetPolicyAccessTimeRangeConfigShrinkRequest &) = default ;
    SetPolicyAccessTimeRangeConfigShrinkRequest(SetPolicyAccessTimeRangeConfigShrinkRequest &&) = default ;
    SetPolicyAccessTimeRangeConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAccessTimeRangeConfigShrinkRequest() = default ;
    SetPolicyAccessTimeRangeConfigShrinkRequest& operator=(const SetPolicyAccessTimeRangeConfigShrinkRequest &) = default ;
    SetPolicyAccessTimeRangeConfigShrinkRequest& operator=(SetPolicyAccessTimeRangeConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTimeRangeConfigShrink_ == nullptr
        && return this->instanceId_ == nullptr && return this->policyId_ == nullptr && return this->regionId_ == nullptr; };
    // accessTimeRangeConfigShrink Field Functions 
    bool hasAccessTimeRangeConfigShrink() const { return this->accessTimeRangeConfigShrink_ != nullptr;};
    void deleteAccessTimeRangeConfigShrink() { this->accessTimeRangeConfigShrink_ = nullptr;};
    inline string accessTimeRangeConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(accessTimeRangeConfigShrink_, "") };
    inline SetPolicyAccessTimeRangeConfigShrinkRequest& setAccessTimeRangeConfigShrink(string accessTimeRangeConfigShrink) { DARABONBA_PTR_SET_VALUE(accessTimeRangeConfigShrink_, accessTimeRangeConfigShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyAccessTimeRangeConfigShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyAccessTimeRangeConfigShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyAccessTimeRangeConfigShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The logon period limits.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessTimeRangeConfigShrink_ = nullptr;
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The control policy ID.
    // 
    // >  You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
