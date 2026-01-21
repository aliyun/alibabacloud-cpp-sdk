// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyCommandConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyCommandConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandConfig, commandConfigShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyCommandConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandConfig, commandConfigShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyCommandConfigShrinkRequest() = default ;
    SetPolicyCommandConfigShrinkRequest(const SetPolicyCommandConfigShrinkRequest &) = default ;
    SetPolicyCommandConfigShrinkRequest(SetPolicyCommandConfigShrinkRequest &&) = default ;
    SetPolicyCommandConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyCommandConfigShrinkRequest() = default ;
    SetPolicyCommandConfigShrinkRequest& operator=(const SetPolicyCommandConfigShrinkRequest &) = default ;
    SetPolicyCommandConfigShrinkRequest& operator=(SetPolicyCommandConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandConfigShrink_ == nullptr
        && this->instanceId_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr; };
    // commandConfigShrink Field Functions 
    bool hasCommandConfigShrink() const { return this->commandConfigShrink_ != nullptr;};
    void deleteCommandConfigShrink() { this->commandConfigShrink_ = nullptr;};
    inline string getCommandConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(commandConfigShrink_, "") };
    inline SetPolicyCommandConfigShrinkRequest& setCommandConfigShrink(string commandConfigShrink) { DARABONBA_PTR_SET_VALUE(commandConfigShrink_, commandConfigShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyCommandConfigShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyCommandConfigShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyCommandConfigShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The command control settings.
    // 
    // > This parameter applies only to Linux hosts.
    // 
    // This parameter is required.
    shared_ptr<string> commandConfigShrink_ {};
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy that you want to modify.
    // 
    // > You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
