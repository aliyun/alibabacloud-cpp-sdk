// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
namespace Models
{
  class AssumeRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(ExternalId, externalId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(RoleSessionName, roleSessionName_);
      DARABONBA_PTR_TO_JSON(SourceIdentity, sourceIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(ExternalId, externalId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(RoleSessionName, roleSessionName_);
      DARABONBA_PTR_FROM_JSON(SourceIdentity, sourceIdentity_);
    };
    AssumeRoleRequest() = default ;
    AssumeRoleRequest(const AssumeRoleRequest &) = default ;
    AssumeRoleRequest(AssumeRoleRequest &&) = default ;
    AssumeRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleRequest() = default ;
    AssumeRoleRequest& operator=(const AssumeRoleRequest &) = default ;
    AssumeRoleRequest& operator=(AssumeRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationSeconds_ == nullptr
        && this->externalId_ == nullptr && this->policy_ == nullptr && this->roleArn_ == nullptr && this->roleSessionName_ == nullptr && this->sourceIdentity_ == nullptr; };
    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline AssumeRoleRequest& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline string getExternalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
    inline AssumeRoleRequest& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AssumeRoleRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline AssumeRoleRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // roleSessionName Field Functions 
    bool hasRoleSessionName() const { return this->roleSessionName_ != nullptr;};
    void deleteRoleSessionName() { this->roleSessionName_ = nullptr;};
    inline string getRoleSessionName() const { DARABONBA_PTR_GET_DEFAULT(roleSessionName_, "") };
    inline AssumeRoleRequest& setRoleSessionName(string roleSessionName) { DARABONBA_PTR_SET_VALUE(roleSessionName_, roleSessionName) };


    // sourceIdentity Field Functions 
    bool hasSourceIdentity() const { return this->sourceIdentity_ != nullptr;};
    void deleteSourceIdentity() { this->sourceIdentity_ = nullptr;};
    inline string getSourceIdentity() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentity_, "") };
    inline AssumeRoleRequest& setSourceIdentity(string sourceIdentity) { DARABONBA_PTR_SET_VALUE(sourceIdentity_, sourceIdentity) };


  protected:
    // The validity period of the STS token. Unit: seconds.
    // 
    // Minimum value: 900. Maximum value: the value of the `MaxSessionDuration` parameter. Default value: 3600.
    // 
    // You can call the CreateRole or UpdateRole operation to configure the `MaxSessionDuration` parameter. For more information, see [CreateRole](https://help.aliyun.com/document_detail/28710.html) or [UpdateRole](https://help.aliyun.com/document_detail/28712.html).
    shared_ptr<int64_t> durationSeconds_ {};
    // The external ID of the RAM role.
    // 
    // This parameter is provided by an external party and is used to prevent the confused deputy problem. For more information, see [Use ExternalId to prevent the confused deputy problem](https://help.aliyun.com/document_detail/2361741.html).
    // 
    // The value must be 2 to 1,224 characters in length and can contain letters, digits, and the following special characters: `= , . @ : / - _`. The regular expression for this parameter is `[\\w+=,.@:\\/-]*`.
    shared_ptr<string> externalId_ {};
    // The policy that specifies the permissions of the returned STS token. You can use this parameter to grant the STS token fewer permissions than the permissions granted to the RAM role.
    // 
    // *   If you specify this parameter, the permissions of the returned STS token are the permissions that are included in the value of this parameter and owned by the RAM role.
    // *   If you do not specify this parameter, the returned STS token has all the permissions of the RAM role.
    // 
    // The value must be 1 to 2,048 characters in length.
    // 
    // For more information about policy elements and sample policies, see [Policy elements](https://help.aliyun.com/document_detail/93738.html) and [Overview of sample policies](https://help.aliyun.com/document_detail/210969.html).
    shared_ptr<string> policy_ {};
    // The Alibaba Cloud Resource Name (ARN) of the RAM role.
    // 
    // The trusted entity of the RAM role is an Alibaba Cloud account. For more information, see [Create a RAM role for a trusted Alibaba Cloud account](https://help.aliyun.com/document_detail/93691.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
    // 
    // Format: `acs:ram::<account_id>:role/<role_name>`.
    // 
    // You can view the ARN in the RAM console or by calling operations. The following items describe the validity periods of storage addresses:
    // 
    // *   For more information about how to view the ARN in the RAM console, see [How do I find the ARN of the RAM role?](https://help.aliyun.com/document_detail/39744.html)
    // *   For more information about how to view the ARN by calling operations, see [ListRoles](https://help.aliyun.com/document_detail/28713.html) or [GetRole](https://help.aliyun.com/document_detail/28711.html).
    // 
    // This parameter is required.
    shared_ptr<string> roleArn_ {};
    // The custom name of the role session.
    // 
    // Set this parameter based on your business requirements. In most cases, you can set this parameter to the identity of the API caller. For example, you can specify a username. You can specify `RoleSessionName` to identify API callers that assume the same RAM role in ActionTrail logs. This allows you to track the users that perform the operations.
    // 
    // The value must be 2 to 64 characters in length and can contain letters, digits, and the following special characters: `. @ - _`.
    // 
    // This parameter is required.
    shared_ptr<string> roleSessionName_ {};
    shared_ptr<string> sourceIdentity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif
