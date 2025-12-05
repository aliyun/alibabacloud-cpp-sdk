// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYIPACLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYIPACLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetPolicyIPAclConfigRequestIPAclConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyIPAclConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyIPAclConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IPAclConfig, IPAclConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyIPAclConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IPAclConfig, IPAclConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyIPAclConfigRequest() = default ;
    SetPolicyIPAclConfigRequest(const SetPolicyIPAclConfigRequest &) = default ;
    SetPolicyIPAclConfigRequest(SetPolicyIPAclConfigRequest &&) = default ;
    SetPolicyIPAclConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyIPAclConfigRequest() = default ;
    SetPolicyIPAclConfigRequest& operator=(const SetPolicyIPAclConfigRequest &) = default ;
    SetPolicyIPAclConfigRequest& operator=(SetPolicyIPAclConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPAclConfig_ == nullptr
        && return this->instanceId_ == nullptr && return this->policyId_ == nullptr && return this->regionId_ == nullptr; };
    // IPAclConfig Field Functions 
    bool hasIPAclConfig() const { return this->IPAclConfig_ != nullptr;};
    void deleteIPAclConfig() { this->IPAclConfig_ = nullptr;};
    inline const SetPolicyIPAclConfigRequestIPAclConfig & IPAclConfig() const { DARABONBA_PTR_GET_CONST(IPAclConfig_, SetPolicyIPAclConfigRequestIPAclConfig) };
    inline SetPolicyIPAclConfigRequestIPAclConfig IPAclConfig() { DARABONBA_PTR_GET(IPAclConfig_, SetPolicyIPAclConfigRequestIPAclConfig) };
    inline SetPolicyIPAclConfigRequest& setIPAclConfig(const SetPolicyIPAclConfigRequestIPAclConfig & IPAclConfig) { DARABONBA_PTR_SET_VALUE(IPAclConfig_, IPAclConfig) };
    inline SetPolicyIPAclConfigRequest& setIPAclConfig(SetPolicyIPAclConfigRequestIPAclConfig && IPAclConfig) { DARABONBA_PTR_SET_RVALUE(IPAclConfig_, IPAclConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyIPAclConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyIPAclConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyIPAclConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The access control settings for source IP addresses.
    // 
    // This parameter is required.
    std::shared_ptr<SetPolicyIPAclConfigRequestIPAclConfig> IPAclConfig_ = nullptr;
    // The bastion host ID.
    // 
    // > You can call the DescribeInstances operation to query the bastion host ID.[](~~153281~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the control policy that you want to modify.
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
