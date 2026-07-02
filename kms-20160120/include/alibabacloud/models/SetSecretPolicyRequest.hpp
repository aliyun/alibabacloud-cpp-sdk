// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECRETPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSECRETPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class SetSecretPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecretPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecretPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    SetSecretPolicyRequest() = default ;
    SetSecretPolicyRequest(const SetSecretPolicyRequest &) = default ;
    SetSecretPolicyRequest(SetSecretPolicyRequest &&) = default ;
    SetSecretPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecretPolicyRequest() = default ;
    SetSecretPolicyRequest& operator=(const SetSecretPolicyRequest &) = default ;
    SetSecretPolicyRequest& operator=(SetSecretPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policy_ == nullptr
        && this->policyName_ == nullptr && this->secretName_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline SetSecretPolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline SetSecretPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline SetSecretPolicyRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // The content of the secret policy. The value must be in the JSON format. The value can be up to 32,768 bytes in length.
    // 
    // A secret policy contains the following elements:
    // 
    // - Version: The version of the secret policy. The value can only be 1.
    // 
    // - Statement: The statement of the secret policy. Each secret policy can contain one or more statements.
    // 
    // The following code shows the format of a secret policy:
    // 
    // ```
    // {
    //     "Version": "1",
    //     "Statement": [
    //         {
    //             "Sid": "Enable RAM User Permissions",
    //             "Effect": "Allow",
    //             "Principal": {
    //               "RAM": ["acs:ram::12345678****:*"]
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
    // The following section describes the elements in a statement:
    // 
    // - Sid: Optional. The custom identifier of the statement. The value can be up to 128 characters in length and can contain uppercase letters (A-Z), lowercase letters (a-z), digits (0-9), and special characters, including underscores (_), forward slashes (/), equal signs (=), plus signs (+), periods (.), at signs (@), and hyphens (-).
    // 
    // - Effect: Required. Specifies whether to allow or deny the permissions in the statement. Valid values: Allow and Deny.
    // 
    // - Principal: Required. The principal that is authorized to access the secret. You can set this parameter to the current Alibaba Cloud account (the account to which the secret belongs), a RAM user or RAM role of the current Alibaba Cloud account, or a RAM user or RAM role of another Alibaba Cloud account.
    // 
    // - Action: Required. The API operations that are allowed or denied. The value must start with \\`kms:\\`. For a list of supported operations, see [Secret policy overview](https://help.aliyun.com/document_detail/2716465.html). If you specify an operation that is not in the list, the operation does not take effect.
    // 
    // - Resource: Required. The value can only be \\`\\*\\`, which indicates the current KMS secret.
    // 
    // - Condition: Optional. The conditions for the authorization to take effect. You can use conditions to evaluate the context of an API request to determine whether a policy statement is applicable. The format is `"Condition": {"condition operator": {"condition key": "condition value"}}`. For more information, see [Secret policy overview](https://help.aliyun.com/document_detail/2716465.html).
    // 
    // > After you grant permissions to a RAM user or RAM role of another Alibaba Cloud account, you must go to the RAM console and use the Alibaba Cloud account to which the RAM user or RAM role belongs to grant the RAM user or RAM role the permissions to use the secret. For more information, see [Custom policies for KMS](https://help.aliyun.com/document_detail/480682.html), [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html), and [Grant permissions to a RAM role](https://help.aliyun.com/document_detail/116147.html).
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The name of the secret policy. The value can only be \\`default\\`.
    shared_ptr<string> policyName_ {};
    // The name or Alibaba Cloud Resource Name (ARN) of the secret.
    // 
    // > When you access a secret in another Alibaba Cloud account, you must specify the ARN of the secret. The ARN of a secret is in the format of `acs:kms:${region}:${account}:secret/${secret-name}`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
