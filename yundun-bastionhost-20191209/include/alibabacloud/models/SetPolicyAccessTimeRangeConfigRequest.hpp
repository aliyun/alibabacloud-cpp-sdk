// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAccessTimeRangeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAccessTimeRangeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAccessTimeRangeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyAccessTimeRangeConfigRequest() = default ;
    SetPolicyAccessTimeRangeConfigRequest(const SetPolicyAccessTimeRangeConfigRequest &) = default ;
    SetPolicyAccessTimeRangeConfigRequest(SetPolicyAccessTimeRangeConfigRequest &&) = default ;
    SetPolicyAccessTimeRangeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAccessTimeRangeConfigRequest() = default ;
    SetPolicyAccessTimeRangeConfigRequest& operator=(const SetPolicyAccessTimeRangeConfigRequest &) = default ;
    SetPolicyAccessTimeRangeConfigRequest& operator=(SetPolicyAccessTimeRangeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTimeRangeConfig_ != nullptr
        && this->instanceId_ != nullptr && this->policyId_ != nullptr && this->regionId_ != nullptr; };
    // accessTimeRangeConfig Field Functions 
    bool hasAccessTimeRangeConfig() const { return this->accessTimeRangeConfig_ != nullptr;};
    void deleteAccessTimeRangeConfig() { this->accessTimeRangeConfig_ = nullptr;};
    inline const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig & accessTimeRangeConfig() const { DARABONBA_PTR_GET_CONST(accessTimeRangeConfig_, SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig) };
    inline SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig accessTimeRangeConfig() { DARABONBA_PTR_GET(accessTimeRangeConfig_, SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig) };
    inline SetPolicyAccessTimeRangeConfigRequest& setAccessTimeRangeConfig(const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig & accessTimeRangeConfig) { DARABONBA_PTR_SET_VALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };
    inline SetPolicyAccessTimeRangeConfigRequest& setAccessTimeRangeConfig(SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig && accessTimeRangeConfig) { DARABONBA_PTR_SET_RVALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyAccessTimeRangeConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyAccessTimeRangeConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyAccessTimeRangeConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The logon period limits.
    // 
    // This parameter is required.
    std::shared_ptr<SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig> accessTimeRangeConfig_ = nullptr;
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
