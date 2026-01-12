// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEWITHSAMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEWITHSAMLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
namespace Models
{
  class AssumeRoleWithSAMLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleWithSAMLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(SAMLAssertion, SAMLAssertion_);
      DARABONBA_PTR_TO_JSON(SAMLProviderArn, SAMLProviderArn_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleWithSAMLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(SAMLAssertion, SAMLAssertion_);
      DARABONBA_PTR_FROM_JSON(SAMLProviderArn, SAMLProviderArn_);
    };
    AssumeRoleWithSAMLRequest() = default ;
    AssumeRoleWithSAMLRequest(const AssumeRoleWithSAMLRequest &) = default ;
    AssumeRoleWithSAMLRequest(AssumeRoleWithSAMLRequest &&) = default ;
    AssumeRoleWithSAMLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleWithSAMLRequest() = default ;
    AssumeRoleWithSAMLRequest& operator=(const AssumeRoleWithSAMLRequest &) = default ;
    AssumeRoleWithSAMLRequest& operator=(AssumeRoleWithSAMLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationSeconds_ == nullptr
        && this->policy_ == nullptr && this->roleArn_ == nullptr && this->SAMLAssertion_ == nullptr && this->SAMLProviderArn_ == nullptr; };
    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline AssumeRoleWithSAMLRequest& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AssumeRoleWithSAMLRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline AssumeRoleWithSAMLRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // SAMLAssertion Field Functions 
    bool hasSAMLAssertion() const { return this->SAMLAssertion_ != nullptr;};
    void deleteSAMLAssertion() { this->SAMLAssertion_ = nullptr;};
    inline string getSAMLAssertion() const { DARABONBA_PTR_GET_DEFAULT(SAMLAssertion_, "") };
    inline AssumeRoleWithSAMLRequest& setSAMLAssertion(string SAMLAssertion) { DARABONBA_PTR_SET_VALUE(SAMLAssertion_, SAMLAssertion) };


    // SAMLProviderArn Field Functions 
    bool hasSAMLProviderArn() const { return this->SAMLProviderArn_ != nullptr;};
    void deleteSAMLProviderArn() { this->SAMLProviderArn_ = nullptr;};
    inline string getSAMLProviderArn() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderArn_, "") };
    inline AssumeRoleWithSAMLRequest& setSAMLProviderArn(string SAMLProviderArn) { DARABONBA_PTR_SET_VALUE(SAMLProviderArn_, SAMLProviderArn) };


  protected:
    // The validity period of the STS token. Unit: seconds.
    // 
    // Minimum value: 900. Maximum value: the value of the `MaxSessionDuration` parameter. Default value: 3600.
    // 
    // You can call the CreateRole or UpdateRole operation to configure the `MaxSessionDuration` parameter. For more information, see [CreateRole](https://help.aliyun.com/document_detail/28710.html) or [UpdateRole](https://help.aliyun.com/document_detail/28712.html).
    shared_ptr<int64_t> durationSeconds_ {};
    // The policy that specifies the permissions of the returned STS token. You can use this parameter to grant the STS token fewer permissions than the permissions granted to the RAM role.
    // 
    // *   If you specify this parameter, the permissions of the returned STS token are the permissions that are included in the value of this parameter and owned by the RAM role.
    // *   If you do not specify this parameter, the returned STS token has all the permissions of the RAM role.
    // 
    // The value must be 1 to 2,048 characters in length.
    shared_ptr<string> policy_ {};
    // The ARN of the RAM role.
    // 
    // The trust entity of the RAM role is a SAML IdP. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
    // 
    // Format: `acs:ram::<account_id>:role/<role_name>`.
    // 
    // You can view the ARN in the RAM console or by calling operations.
    // 
    // *   For more information about how to view the ARN in the RAM console, see [How do I view the ARN of the RAM role?](https://help.aliyun.com/document_detail/39744.html).
    // *   For more information about how to view the ARN by calling operations, see [ListRoles](https://help.aliyun.com/document_detail/28713.html) or [GetRole](https://help.aliyun.com/document_detail/28711.html).
    shared_ptr<string> roleArn_ {};
    // The Base64-encoded SAML assertion.
    // 
    // The value must be 4 to 100,000 characters in length.
    // 
    // > A complete SAML response rather than a single SAMLAssertion field must be retrieved from the external IdP.
    shared_ptr<string> SAMLAssertion_ {};
    // The Alibaba Cloud Resource Name (ARN) of the SAML IdP that is created in the RAM console.
    // 
    // Format: `acs:ram::<account_id>:saml-provider/<saml_provider_id>`.
    // 
    // You can view the ARN in the RAM console or by calling operations.
    // 
    // *   For more information about how to view the ARN in the RAM console, see [How do I view the ARN of a RAM role?](https://help.aliyun.com/document_detail/116795.html)
    // *   For more information about how to view the ARN by calling operations, see [GetSAMLProvider](https://help.aliyun.com/document_detail/186833.html) or [ListSAMLProviders](https://help.aliyun.com/document_detail/186851.html).
    shared_ptr<string> SAMLProviderArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif
