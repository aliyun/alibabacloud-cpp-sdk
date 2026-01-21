// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYIPACLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYIPACLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class IPAclConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IPAclConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AclType, aclType_);
        DARABONBA_PTR_TO_JSON(IPs, IPs_);
      };
      friend void from_json(const Darabonba::Json& j, IPAclConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AclType, aclType_);
        DARABONBA_PTR_FROM_JSON(IPs, IPs_);
      };
      IPAclConfig() = default ;
      IPAclConfig(const IPAclConfig &) = default ;
      IPAclConfig(IPAclConfig &&) = default ;
      IPAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IPAclConfig() = default ;
      IPAclConfig& operator=(const IPAclConfig &) = default ;
      IPAclConfig& operator=(IPAclConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclType_ == nullptr
        && this->IPs_ == nullptr; };
      // aclType Field Functions 
      bool hasAclType() const { return this->aclType_ != nullptr;};
      void deleteAclType() { this->aclType_ = nullptr;};
      inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
      inline IPAclConfig& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


      // IPs Field Functions 
      bool hasIPs() const { return this->IPs_ != nullptr;};
      void deleteIPs() { this->IPs_ = nullptr;};
      inline const vector<string> & getIPs() const { DARABONBA_PTR_GET_CONST(IPs_, vector<string>) };
      inline vector<string> getIPs() { DARABONBA_PTR_GET(IPs_, vector<string>) };
      inline IPAclConfig& setIPs(const vector<string> & IPs) { DARABONBA_PTR_SET_VALUE(IPs_, IPs) };
      inline IPAclConfig& setIPs(vector<string> && IPs) { DARABONBA_PTR_SET_RVALUE(IPs_, IPs) };


    protected:
      // The mode of access control on source IP addresses. Valid values:
      // 
      // *   **black**: blacklist mode.
      // *   **white**: whitelist mode.
      // 
      // This parameter is required.
      shared_ptr<string> aclType_ {};
      // The source IP addresses in the blacklist or whitelist.
      // 
      // > 
      // 
      // *   This parameter is required if AclType is set to white.
      // 
      // *   If AclType is set to black but you do not want to add IP addresses to the blacklist, you can leave IPs empty.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> IPs_ {};
    };

    virtual bool empty() const override { return this->IPAclConfig_ == nullptr
        && this->instanceId_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr; };
    // IPAclConfig Field Functions 
    bool hasIPAclConfig() const { return this->IPAclConfig_ != nullptr;};
    void deleteIPAclConfig() { this->IPAclConfig_ = nullptr;};
    inline const SetPolicyIPAclConfigRequest::IPAclConfig & getIPAclConfig() const { DARABONBA_PTR_GET_CONST(IPAclConfig_, SetPolicyIPAclConfigRequest::IPAclConfig) };
    inline SetPolicyIPAclConfigRequest::IPAclConfig getIPAclConfig() { DARABONBA_PTR_GET(IPAclConfig_, SetPolicyIPAclConfigRequest::IPAclConfig) };
    inline SetPolicyIPAclConfigRequest& setIPAclConfig(const SetPolicyIPAclConfigRequest::IPAclConfig & iPAclConfig) { DARABONBA_PTR_SET_VALUE(IPAclConfig_, iPAclConfig) };
    inline SetPolicyIPAclConfigRequest& setIPAclConfig(SetPolicyIPAclConfigRequest::IPAclConfig && iPAclConfig) { DARABONBA_PTR_SET_RVALUE(IPAclConfig_, iPAclConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyIPAclConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyIPAclConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyIPAclConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The access control settings for source IP addresses.
    // 
    // This parameter is required.
    shared_ptr<SetPolicyIPAclConfigRequest::IPAclConfig> IPAclConfig_ {};
    // The bastion host ID.
    // 
    // > You can call the DescribeInstances operation to query the bastion host ID.[](~~153281~~)
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy that you want to modify.
    // 
    // >  You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
