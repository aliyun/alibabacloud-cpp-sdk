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
        && this->policy_ == nullptr && this->policyName_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline SetKeyPolicyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline SetKeyPolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline SetKeyPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // The ID or Alibaba Cloud Resource Name (ARN) of the key.
    // 
    // > To access a key of another Alibaba Cloud account, you must specify the ARN of the key. The key ARN is in the format of `acs:kms:${region}:${account}:key/${keyid}`.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The key policy. The policy is in the JSON format. The policy can be up to 32,768 bytes in length.
    // 
    // A key policy contains the following elements:
    // 
    // - Version: The version of the key policy. The value can only be 1.
    // 
    // - Statement: The statement of the key policy. Each key policy can contain one or more statements.
    // 
    // The following code provides an example of a key policy:
    // 
    // ```
    // {
    //     "Version": "1",
    //     "Statement": [
    //         {
    //             "Sid": "Enable RAM User Permissions",
    //             "Effect": "Allow",
    //             "Principal": {
    //               "RAM": ["acs:ram::112890462****:*"]
    //             },
    //             "Action": [
    //                 "kms:*"
    //             ],
    //             "Resource": [
    //                 "*"
    //             ]
    //         }
    //     ]
    // }
    // ```
    // 
    // The following section describes the elements in a Statement:
    // 
    // - Sid: Optional. The custom statement identifier. The value can be up to 128 characters in length and can contain uppercase letters, lowercase letters, digits, and the following special characters: _ / + = . @ -.
    // 
    // - Effect: Required. The effect of the policy statement. Valid values: Allow and Deny.
    // 
    // - Principal: Required. The principal that is authorized to access the key. You can set this parameter to the current Alibaba Cloud account, a RAM user or RAM role of the current Alibaba Cloud account, or a RAM user or RAM role of another Alibaba Cloud account.
    // 
    // - Action: Required. The API operations that are allowed or denied. The value must start with kms:. For more information about the operations, see [Key policy overview](https://help.aliyun.com/document_detail/2716468.html). If you specify an operation that is not included in the list, the operation will not take effect.
    // 
    // - Resource: Required. The key. The value can only be \\*.
    // 
    // - Condition: Optional. The conditions for the policy to take effect. You can use conditions to evaluate the context of an API request to determine whether the policy statement is applicable. The format is `"Condition": {"condition operator": {"condition key": "condition value"}}`. For more information, see [Key policy overview](https://help.aliyun.com/document_detail/2716468.html).
    // 
    // > After you grant permissions to a RAM user or RAM role of another Alibaba Cloud account, you must use the Alibaba Cloud account to which the RAM user or RAM role belongs to grant the RAM user or RAM role the permissions to use the key in the RAM console. For more information, see [Custom policies for KMS](https://help.aliyun.com/document_detail/480682.html), [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html), and [Grant permissions to a RAM role](https://help.aliyun.com/document_detail/116147.html).
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The name of the key policy. The name can only be \\`default\\`.
    shared_ptr<string> policyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
