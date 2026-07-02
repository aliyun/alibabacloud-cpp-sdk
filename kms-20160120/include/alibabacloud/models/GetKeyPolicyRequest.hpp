// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKEYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKEYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKeyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKeyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, GetKeyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    GetKeyPolicyRequest() = default ;
    GetKeyPolicyRequest(const GetKeyPolicyRequest &) = default ;
    GetKeyPolicyRequest(GetKeyPolicyRequest &&) = default ;
    GetKeyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKeyPolicyRequest() = default ;
    GetKeyPolicyRequest& operator=(const GetKeyPolicyRequest &) = default ;
    GetKeyPolicyRequest& operator=(GetKeyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && this->policyName_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetKeyPolicyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetKeyPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // The ID or Alibaba Cloud Resource Name (ARN) of the key.
    // 
    // > When you access a key in another Alibaba Cloud account, you must enter the ARN of the key. The ARN of a key is in the `acs:kms:${region}:${account}:key/${keyid}` format.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The name of the key policy. Only the static value default is supported.
    shared_ptr<string> policyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
