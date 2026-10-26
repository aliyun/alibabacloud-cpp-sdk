// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyProtocolConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyProtocolConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProtocolConfig, protocolConfigShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyProtocolConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProtocolConfig, protocolConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyProtocolConfigShrinkRequest() = default ;
    SetPolicyProtocolConfigShrinkRequest(const SetPolicyProtocolConfigShrinkRequest &) = default ;
    SetPolicyProtocolConfigShrinkRequest(SetPolicyProtocolConfigShrinkRequest &&) = default ;
    SetPolicyProtocolConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyProtocolConfigShrinkRequest() = default ;
    SetPolicyProtocolConfigShrinkRequest& operator=(const SetPolicyProtocolConfigShrinkRequest &) = default ;
    SetPolicyProtocolConfigShrinkRequest& operator=(SetPolicyProtocolConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->policyId_ == nullptr && this->projectId_ == nullptr && this->protocolConfigShrink_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyProtocolConfigShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyProtocolConfigShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SetPolicyProtocolConfigShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // protocolConfigShrink Field Functions 
    bool hasProtocolConfigShrink() const { return this->protocolConfigShrink_ != nullptr;};
    void deleteProtocolConfigShrink() { this->protocolConfigShrink_ = nullptr;};
    inline string getProtocolConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(protocolConfigShrink_, "") };
    inline SetPolicyProtocolConfigShrinkRequest& setProtocolConfigShrink(string protocolConfigShrink) { DARABONBA_PTR_SET_VALUE(protocolConfigShrink_, protocolConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyProtocolConfigShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID of the bastion host.
    // > You can invoke [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy to modify.
    // 
    // > You can call [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The protocol control configuration.
    // 
    // This parameter is required.
    shared_ptr<string> protocolConfigShrink_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
