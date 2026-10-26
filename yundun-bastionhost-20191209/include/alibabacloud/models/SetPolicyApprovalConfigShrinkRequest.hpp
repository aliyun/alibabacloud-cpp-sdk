// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYAPPROVALCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYAPPROVALCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyApprovalConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyApprovalConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalConfig, approvalConfigShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyApprovalConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalConfig, approvalConfigShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyApprovalConfigShrinkRequest() = default ;
    SetPolicyApprovalConfigShrinkRequest(const SetPolicyApprovalConfigShrinkRequest &) = default ;
    SetPolicyApprovalConfigShrinkRequest(SetPolicyApprovalConfigShrinkRequest &&) = default ;
    SetPolicyApprovalConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyApprovalConfigShrinkRequest() = default ;
    SetPolicyApprovalConfigShrinkRequest& operator=(const SetPolicyApprovalConfigShrinkRequest &) = default ;
    SetPolicyApprovalConfigShrinkRequest& operator=(SetPolicyApprovalConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalConfigShrink_ == nullptr
        && this->instanceId_ == nullptr && this->policyId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // approvalConfigShrink Field Functions 
    bool hasApprovalConfigShrink() const { return this->approvalConfigShrink_ != nullptr;};
    void deleteApprovalConfigShrink() { this->approvalConfigShrink_ = nullptr;};
    inline string getApprovalConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(approvalConfigShrink_, "") };
    inline SetPolicyApprovalConfigShrinkRequest& setApprovalConfigShrink(string approvalConfigShrink) { DARABONBA_PTR_SET_VALUE(approvalConfigShrink_, approvalConfigShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyApprovalConfigShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyApprovalConfigShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SetPolicyApprovalConfigShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyApprovalConfigShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The O&M approval configuration in the control policy.
    // 
    // This parameter is required.
    shared_ptr<string> approvalConfigShrink_ {};
    // The Bastionhost instance ID.
    // > You can call the DescribeInstances operation to obtain the Bastionhost instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy that you want to modify.
    // > You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
