// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetPolicyCommandConfigRequestCommandConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyCommandConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyCommandConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandConfig, commandConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyCommandConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandConfig, commandConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyCommandConfigRequest() = default ;
    SetPolicyCommandConfigRequest(const SetPolicyCommandConfigRequest &) = default ;
    SetPolicyCommandConfigRequest(SetPolicyCommandConfigRequest &&) = default ;
    SetPolicyCommandConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyCommandConfigRequest() = default ;
    SetPolicyCommandConfigRequest& operator=(const SetPolicyCommandConfigRequest &) = default ;
    SetPolicyCommandConfigRequest& operator=(SetPolicyCommandConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandConfig_ == nullptr
        && return this->instanceId_ == nullptr && return this->policyId_ == nullptr && return this->regionId_ == nullptr; };
    // commandConfig Field Functions 
    bool hasCommandConfig() const { return this->commandConfig_ != nullptr;};
    void deleteCommandConfig() { this->commandConfig_ = nullptr;};
    inline const SetPolicyCommandConfigRequestCommandConfig & commandConfig() const { DARABONBA_PTR_GET_CONST(commandConfig_, SetPolicyCommandConfigRequestCommandConfig) };
    inline SetPolicyCommandConfigRequestCommandConfig commandConfig() { DARABONBA_PTR_GET(commandConfig_, SetPolicyCommandConfigRequestCommandConfig) };
    inline SetPolicyCommandConfigRequest& setCommandConfig(const SetPolicyCommandConfigRequestCommandConfig & commandConfig) { DARABONBA_PTR_SET_VALUE(commandConfig_, commandConfig) };
    inline SetPolicyCommandConfigRequest& setCommandConfig(SetPolicyCommandConfigRequestCommandConfig && commandConfig) { DARABONBA_PTR_SET_RVALUE(commandConfig_, commandConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyCommandConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyCommandConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyCommandConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The command control settings.
    // 
    // > This parameter applies only to Linux hosts.
    // 
    // This parameter is required.
    std::shared_ptr<SetPolicyCommandConfigRequestCommandConfig> commandConfig_ = nullptr;
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the control policy that you want to modify.
    // 
    // > You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
