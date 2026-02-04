// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHCONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DetachControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    DetachControlPolicyRequest() = default ;
    DetachControlPolicyRequest(const DetachControlPolicyRequest &) = default ;
    DetachControlPolicyRequest(DetachControlPolicyRequest &&) = default ;
    DetachControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachControlPolicyRequest() = default ;
    DetachControlPolicyRequest& operator=(const DetachControlPolicyRequest &) = default ;
    DetachControlPolicyRequest& operator=(DetachControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && this->targetId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DetachControlPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DetachControlPolicyRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The ID of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The ID of the object from which you want to detach the access control policy. Access control policies can be attached to the following objects:
    // 
    // *   Root folder
    // *   Subfolders of the Root folder
    // *   Members
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
