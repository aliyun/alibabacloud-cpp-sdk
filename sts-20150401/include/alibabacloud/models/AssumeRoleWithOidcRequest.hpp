// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEWITHOIDCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEWITHOIDCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
namespace Models
{
  class AssumeRoleWithOIDCRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleWithOIDCRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(OIDCProviderArn, OIDCProviderArn_);
      DARABONBA_PTR_TO_JSON(OIDCToken, OIDCToken_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(RoleSessionName, roleSessionName_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleWithOIDCRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(OIDCProviderArn, OIDCProviderArn_);
      DARABONBA_PTR_FROM_JSON(OIDCToken, OIDCToken_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(RoleSessionName, roleSessionName_);
    };
    AssumeRoleWithOIDCRequest() = default ;
    AssumeRoleWithOIDCRequest(const AssumeRoleWithOIDCRequest &) = default ;
    AssumeRoleWithOIDCRequest(AssumeRoleWithOIDCRequest &&) = default ;
    AssumeRoleWithOIDCRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleWithOIDCRequest() = default ;
    AssumeRoleWithOIDCRequest& operator=(const AssumeRoleWithOIDCRequest &) = default ;
    AssumeRoleWithOIDCRequest& operator=(AssumeRoleWithOIDCRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationSeconds_ == nullptr
        && this->OIDCProviderArn_ == nullptr && this->OIDCToken_ == nullptr && this->policy_ == nullptr && this->roleArn_ == nullptr && this->roleSessionName_ == nullptr; };
    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline AssumeRoleWithOIDCRequest& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // OIDCProviderArn Field Functions 
    bool hasOIDCProviderArn() const { return this->OIDCProviderArn_ != nullptr;};
    void deleteOIDCProviderArn() { this->OIDCProviderArn_ = nullptr;};
    inline string getOIDCProviderArn() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderArn_, "") };
    inline AssumeRoleWithOIDCRequest& setOIDCProviderArn(string OIDCProviderArn) { DARABONBA_PTR_SET_VALUE(OIDCProviderArn_, OIDCProviderArn) };


    // OIDCToken Field Functions 
    bool hasOIDCToken() const { return this->OIDCToken_ != nullptr;};
    void deleteOIDCToken() { this->OIDCToken_ = nullptr;};
    inline string getOIDCToken() const { DARABONBA_PTR_GET_DEFAULT(OIDCToken_, "") };
    inline AssumeRoleWithOIDCRequest& setOIDCToken(string OIDCToken) { DARABONBA_PTR_SET_VALUE(OIDCToken_, OIDCToken) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AssumeRoleWithOIDCRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline AssumeRoleWithOIDCRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // roleSessionName Field Functions 
    bool hasRoleSessionName() const { return this->roleSessionName_ != nullptr;};
    void deleteRoleSessionName() { this->roleSessionName_ = nullptr;};
    inline string getRoleSessionName() const { DARABONBA_PTR_GET_DEFAULT(roleSessionName_, "") };
    inline AssumeRoleWithOIDCRequest& setRoleSessionName(string roleSessionName) { DARABONBA_PTR_SET_VALUE(roleSessionName_, roleSessionName) };


  protected:
    // The validity period of the STS token. Unit: seconds.
    // 
    // Default value: 3600. Minimum value: 900. Maximum value: the value of the `MaxSessionDuration` parameter.
    // 
    // For more information about how to specify `MaxSessionDuration`, see [CreateRole](https://help.aliyun.com/document_detail/28710.html) or [UpdateRole](https://help.aliyun.com/document_detail/28712.html).
    shared_ptr<int64_t> durationSeconds_ {};
    // The Alibaba Cloud Resource Name (ARN) of the OIDC IdP.
    // 
    // You can view the ARN in the RAM console or by calling operations.
    // 
    // *   For more information about how to view the ARN in the RAM console, see [View the information about an OIDC IdP](https://help.aliyun.com/document_detail/327123.html).
    // *   For more information about how to view the ARN by calling operations, see [GetOIDCProvider](https://help.aliyun.com/document_detail/327126.html) or [ListOIDCProviders](https://help.aliyun.com/document_detail/327127.html).
    shared_ptr<string> OIDCProviderArn_ {};
    // The OIDC token that is issued by the external IdP.
    // 
    // The OIDC token must be 4 to 20,000 characters in length.
    // 
    // > You must enter the original OIDC token. You do not need to enter the Base64-encoded OIDC token.
    shared_ptr<string> OIDCToken_ {};
    // The policy that specifies the permissions of the returned STS token. You can use this parameter to grant the STS token fewer permissions than the permissions granted to the RAM role.
    // 
    // *   If you specify this parameter, the permissions of the returned STS token are the permissions that are included in the value of this parameter and owned by the RAM role.
    // *   If you do not specify this parameter, the returned STS token has all the permissions of the RAM role.
    // 
    // The value must be 1 to 2,048 characters in length.
    shared_ptr<string> policy_ {};
    // The ARN of the RAM role.
    // 
    // You can view the ARN in the RAM console or by calling operations.
    // 
    // *   For more information about how to view the ARN in the RAM console, see [How do I view the ARN of the RAM role?](https://help.aliyun.com/document_detail/39744.html)
    // *   For more information about how to view the ARN by calling operations, see [ListRoles](https://help.aliyun.com/document_detail/28713.html) or [GetRole](https://help.aliyun.com/document_detail/28711.html).
    shared_ptr<string> roleArn_ {};
    // The custom name of the role session.
    // 
    // Set this parameter based on your business requirements. In most cases, this parameter is set to the identity of the user who calls the operation, for example, the username. In ActionTrail logs, you can distinguish the users who assume the same RAM role to perform operations based on the value of the RoleSessionName parameter. This way, you can perform user-specific auditing.
    // 
    // The value can contain letters, digits, periods (.), at signs (@), hyphens (-), and underscores (_).
    // 
    // The value must be 2 to 64 characters in length.
    shared_ptr<string> roleSessionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif
