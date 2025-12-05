// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetPolicyProtocolConfigRequestProtocolConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyProtocolConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyProtocolConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ProtocolConfig, protocolConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyProtocolConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ProtocolConfig, protocolConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyProtocolConfigRequest() = default ;
    SetPolicyProtocolConfigRequest(const SetPolicyProtocolConfigRequest &) = default ;
    SetPolicyProtocolConfigRequest(SetPolicyProtocolConfigRequest &&) = default ;
    SetPolicyProtocolConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyProtocolConfigRequest() = default ;
    SetPolicyProtocolConfigRequest& operator=(const SetPolicyProtocolConfigRequest &) = default ;
    SetPolicyProtocolConfigRequest& operator=(SetPolicyProtocolConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->policyId_ == nullptr && return this->protocolConfig_ == nullptr && return this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyProtocolConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyProtocolConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // protocolConfig Field Functions 
    bool hasProtocolConfig() const { return this->protocolConfig_ != nullptr;};
    void deleteProtocolConfig() { this->protocolConfig_ = nullptr;};
    inline const SetPolicyProtocolConfigRequestProtocolConfig & protocolConfig() const { DARABONBA_PTR_GET_CONST(protocolConfig_, SetPolicyProtocolConfigRequestProtocolConfig) };
    inline SetPolicyProtocolConfigRequestProtocolConfig protocolConfig() { DARABONBA_PTR_GET(protocolConfig_, SetPolicyProtocolConfigRequestProtocolConfig) };
    inline SetPolicyProtocolConfigRequest& setProtocolConfig(const SetPolicyProtocolConfigRequestProtocolConfig & protocolConfig) { DARABONBA_PTR_SET_VALUE(protocolConfig_, protocolConfig) };
    inline SetPolicyProtocolConfigRequest& setProtocolConfig(SetPolicyProtocolConfigRequestProtocolConfig && protocolConfig) { DARABONBA_PTR_SET_RVALUE(protocolConfig_, protocolConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyProtocolConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the control policy that you want to modify.
    // 
    // > You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // The protocol control settings.
    // 
    // This parameter is required.
    std::shared_ptr<SetPolicyProtocolConfigRequestProtocolConfig> protocolConfig_ = nullptr;
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
