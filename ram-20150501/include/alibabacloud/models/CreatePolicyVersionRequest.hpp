// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class CreatePolicyVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RotateStrategy, rotateStrategy_);
      DARABONBA_PTR_TO_JSON(SetAsDefault, setAsDefault_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RotateStrategy, rotateStrategy_);
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
        && this->policyName_ == nullptr && this->rotateStrategy_ == nullptr && this->setAsDefault_ == nullptr; };
    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline CreatePolicyVersionRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyVersionRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // rotateStrategy Field Functions 
    bool hasRotateStrategy() const { return this->rotateStrategy_ != nullptr;};
    void deleteRotateStrategy() { this->rotateStrategy_ = nullptr;};
    inline string getRotateStrategy() const { DARABONBA_PTR_GET_DEFAULT(rotateStrategy_, "") };
    inline CreatePolicyVersionRequest& setRotateStrategy(string rotateStrategy) { DARABONBA_PTR_SET_VALUE(rotateStrategy_, rotateStrategy) };


    // setAsDefault Field Functions 
    bool hasSetAsDefault() const { return this->setAsDefault_ != nullptr;};
    void deleteSetAsDefault() { this->setAsDefault_ = nullptr;};
    inline bool getSetAsDefault() const { DARABONBA_PTR_GET_DEFAULT(setAsDefault_, false) };
    inline CreatePolicyVersionRequest& setSetAsDefault(bool setAsDefault) { DARABONBA_PTR_SET_VALUE(setAsDefault_, setAsDefault) };


  protected:
    // The document of the policy. The document can be up to 6,144 bytes in length.
    shared_ptr<string> policyDocument_ {};
    // The name of the policy.
    shared_ptr<string> policyName_ {};
    // The rotation strategy of the policy. The rotation strategy can be used to delete an early policy version.
    // 
    // Valid values:
    // 
    // *   `None`: disables the rotation strategy.
    // *   `DeleteOldestNonDefaultVersionWhenLimitExceeded`: deletes the earliest non-active version if the number of versions exceeds the limit.
    // 
    // Default value: `None`.
    shared_ptr<string> rotateStrategy_ {};
    // Specifies whether to set this policy as the default policy. Default value: `false`.
    shared_ptr<bool> setAsDefault_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
