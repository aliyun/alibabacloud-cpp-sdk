// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYAPPROVALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYAPPROVALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetPolicyApprovalConfigRequestApprovalConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyApprovalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyApprovalConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalConfig, approvalConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyApprovalConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalConfig, approvalConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyApprovalConfigRequest() = default ;
    SetPolicyApprovalConfigRequest(const SetPolicyApprovalConfigRequest &) = default ;
    SetPolicyApprovalConfigRequest(SetPolicyApprovalConfigRequest &&) = default ;
    SetPolicyApprovalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyApprovalConfigRequest() = default ;
    SetPolicyApprovalConfigRequest& operator=(const SetPolicyApprovalConfigRequest &) = default ;
    SetPolicyApprovalConfigRequest& operator=(SetPolicyApprovalConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalConfig_ == nullptr
        && return this->instanceId_ == nullptr && return this->policyId_ == nullptr && return this->regionId_ == nullptr; };
    // approvalConfig Field Functions 
    bool hasApprovalConfig() const { return this->approvalConfig_ != nullptr;};
    void deleteApprovalConfig() { this->approvalConfig_ = nullptr;};
    inline const SetPolicyApprovalConfigRequestApprovalConfig & approvalConfig() const { DARABONBA_PTR_GET_CONST(approvalConfig_, SetPolicyApprovalConfigRequestApprovalConfig) };
    inline SetPolicyApprovalConfigRequestApprovalConfig approvalConfig() { DARABONBA_PTR_GET(approvalConfig_, SetPolicyApprovalConfigRequestApprovalConfig) };
    inline SetPolicyApprovalConfigRequest& setApprovalConfig(const SetPolicyApprovalConfigRequestApprovalConfig & approvalConfig) { DARABONBA_PTR_SET_VALUE(approvalConfig_, approvalConfig) };
    inline SetPolicyApprovalConfigRequest& setApprovalConfig(SetPolicyApprovalConfigRequestApprovalConfig && approvalConfig) { DARABONBA_PTR_SET_RVALUE(approvalConfig_, approvalConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyApprovalConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyApprovalConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyApprovalConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The O&M approval setting in the control policy.
    // 
    // This parameter is required.
    std::shared_ptr<SetPolicyApprovalConfigRequestApprovalConfig> approvalConfig_ = nullptr;
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
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
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
