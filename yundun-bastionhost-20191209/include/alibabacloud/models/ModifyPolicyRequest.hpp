// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyPolicyRequest() = default ;
    ModifyPolicyRequest(const ModifyPolicyRequest &) = default ;
    ModifyPolicyRequest(ModifyPolicyRequest &&) = default ;
    ModifyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyRequest() = default ;
    ModifyPolicyRequest& operator=(const ModifyPolicyRequest &) = default ;
    ModifyPolicyRequest& operator=(ModifyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->instanceId_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyPolicyRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ModifyPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ModifyPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ModifyPolicyRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new remarks of the control policy.
    shared_ptr<string> comment_ {};
    // The ID of the bastion host to which the control policy to modify belongs.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The new name of the control policy.
    shared_ptr<string> policyName_ {};
    // The priority of the modified control policy. Valid values: 1 to 100. The smaller the value, the higher the priority. Default value: 1.
    shared_ptr<string> priority_ {};
    // The region ID of the bastion host to which the control policy to modify belongs.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
