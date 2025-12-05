// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETKEYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETKEYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class SetKeyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetKeyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, SetKeyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    SetKeyPolicyRequest() = default ;
    SetKeyPolicyRequest(const SetKeyPolicyRequest &) = default ;
    SetKeyPolicyRequest(SetKeyPolicyRequest &&) = default ;
    SetKeyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetKeyPolicyRequest() = default ;
    SetKeyPolicyRequest& operator=(const SetKeyPolicyRequest &) = default ;
    SetKeyPolicyRequest& operator=(SetKeyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && return this->policy_ == nullptr && return this->policyName_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline SetKeyPolicyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline SetKeyPolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline SetKeyPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
