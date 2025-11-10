// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdateControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(NewPolicyDocument, newPolicyDocument_);
      DARABONBA_PTR_TO_JSON(NewPolicyName, newPolicyName_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(NewPolicyDocument, newPolicyDocument_);
      DARABONBA_PTR_FROM_JSON(NewPolicyName, newPolicyName_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    UpdateControlPolicyRequest() = default ;
    UpdateControlPolicyRequest(const UpdateControlPolicyRequest &) = default ;
    UpdateControlPolicyRequest(UpdateControlPolicyRequest &&) = default ;
    UpdateControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateControlPolicyRequest() = default ;
    UpdateControlPolicyRequest& operator=(const UpdateControlPolicyRequest &) = default ;
    UpdateControlPolicyRequest& operator=(UpdateControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newDescription_ == nullptr
        && return this->newPolicyDocument_ == nullptr && return this->newPolicyName_ == nullptr && return this->policyId_ == nullptr; };
    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string newDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateControlPolicyRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


    // newPolicyDocument Field Functions 
    bool hasNewPolicyDocument() const { return this->newPolicyDocument_ != nullptr;};
    void deleteNewPolicyDocument() { this->newPolicyDocument_ = nullptr;};
    inline string newPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(newPolicyDocument_, "") };
    inline UpdateControlPolicyRequest& setNewPolicyDocument(string newPolicyDocument) { DARABONBA_PTR_SET_VALUE(newPolicyDocument_, newPolicyDocument) };


    // newPolicyName Field Functions 
    bool hasNewPolicyName() const { return this->newPolicyName_ != nullptr;};
    void deleteNewPolicyName() { this->newPolicyName_ = nullptr;};
    inline string newPolicyName() const { DARABONBA_PTR_GET_DEFAULT(newPolicyName_, "") };
    inline UpdateControlPolicyRequest& setNewPolicyName(string newPolicyName) { DARABONBA_PTR_SET_VALUE(newPolicyName_, newPolicyName) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateControlPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The new description of the access control policy.
    // 
    // The description must be 1 to 1,024 characters in length. The description can contain letters, digits, underscores (_), and hyphens (-) and must start with a letter.
    std::shared_ptr<string> newDescription_ = nullptr;
    // The new document of the access control policy.
    // 
    // The document can be a maximum of 4,096 characters in length.
    // 
    // For more information about the languages of access control policies, see [Languages of access control policies](https://help.aliyun.com/document_detail/179096.html).
    // 
    // For more information about the examples of access control policies, see [Examples of custom access control policies](https://help.aliyun.com/document_detail/181474.html).
    std::shared_ptr<string> newPolicyDocument_ = nullptr;
    // The new name of the access control policy.
    // 
    // The name must be 1 to 128 characters in length. The name can contain letters, digits, and hyphens (-) and must start with a letter.
    std::shared_ptr<string> newPolicyName_ = nullptr;
    // The ID of the access control policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
