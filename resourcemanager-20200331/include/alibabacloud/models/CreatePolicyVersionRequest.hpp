// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreatePolicyVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(SetAsDefault, setAsDefault_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(SetAsDefault, setAsDefault_);
    };
    CreatePolicyVersionRequest() = default ;
    CreatePolicyVersionRequest(const CreatePolicyVersionRequest &) = default ;
    CreatePolicyVersionRequest(CreatePolicyVersionRequest &&) = default ;
    CreatePolicyVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyVersionRequest() = default ;
    CreatePolicyVersionRequest& operator=(const CreatePolicyVersionRequest &) = default ;
    CreatePolicyVersionRequest& operator=(CreatePolicyVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyDocument_ == nullptr
        && return this->policyName_ == nullptr && return this->setAsDefault_ == nullptr; };
    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline CreatePolicyVersionRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyVersionRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // setAsDefault Field Functions 
    bool hasSetAsDefault() const { return this->setAsDefault_ != nullptr;};
    void deleteSetAsDefault() { this->setAsDefault_ = nullptr;};
    inline bool setAsDefault() const { DARABONBA_PTR_GET_DEFAULT(setAsDefault_, false) };
    inline CreatePolicyVersionRequest& setSetAsDefault(bool setAsDefault) { DARABONBA_PTR_SET_VALUE(setAsDefault_, setAsDefault) };


  protected:
    // The document of the permission policy.
    // 
    // The document must be 1 to 6,144 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyDocument_ = nullptr;
    // The name of the permission policy.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, and hyphen (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> policyName_ = nullptr;
    // Specifies whether to set the policy version as the default version.
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> setAsDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
