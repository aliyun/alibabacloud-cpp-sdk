// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyAccessTimeRangeConfig.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyApprovalConfig.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyCommandConfig.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyIPAclConfig.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyProtocolConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
      DARABONBA_PTR_TO_JSON(ApprovalConfig, approvalConfig_);
      DARABONBA_PTR_TO_JSON(CommandConfig, commandConfig_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(IPAclConfig, IPAclConfig_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProtocolConfig, protocolConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
      DARABONBA_PTR_FROM_JSON(ApprovalConfig, approvalConfig_);
      DARABONBA_PTR_FROM_JSON(CommandConfig, commandConfig_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(IPAclConfig, IPAclConfig_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProtocolConfig, protocolConfig_);
    };
    GetPolicyResponseBodyPolicy() = default ;
    GetPolicyResponseBodyPolicy(const GetPolicyResponseBodyPolicy &) = default ;
    GetPolicyResponseBodyPolicy(GetPolicyResponseBodyPolicy &&) = default ;
    GetPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicy() = default ;
    GetPolicyResponseBodyPolicy& operator=(const GetPolicyResponseBodyPolicy &) = default ;
    GetPolicyResponseBodyPolicy& operator=(GetPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTimeRangeConfig_ != nullptr
        && this->approvalConfig_ != nullptr && this->commandConfig_ != nullptr && this->comment_ != nullptr && this->IPAclConfig_ != nullptr && this->policyId_ != nullptr
        && this->policyName_ != nullptr && this->priority_ != nullptr && this->protocolConfig_ != nullptr; };
    // accessTimeRangeConfig Field Functions 
    bool hasAccessTimeRangeConfig() const { return this->accessTimeRangeConfig_ != nullptr;};
    void deleteAccessTimeRangeConfig() { this->accessTimeRangeConfig_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfig & accessTimeRangeConfig() const { DARABONBA_PTR_GET_CONST(accessTimeRangeConfig_, Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfig) };
    inline Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfig accessTimeRangeConfig() { DARABONBA_PTR_GET(accessTimeRangeConfig_, Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfig) };
    inline GetPolicyResponseBodyPolicy& setAccessTimeRangeConfig(const Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfig & accessTimeRangeConfig) { DARABONBA_PTR_SET_VALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };
    inline GetPolicyResponseBodyPolicy& setAccessTimeRangeConfig(Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfig && accessTimeRangeConfig) { DARABONBA_PTR_SET_RVALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };


    // approvalConfig Field Functions 
    bool hasApprovalConfig() const { return this->approvalConfig_ != nullptr;};
    void deleteApprovalConfig() { this->approvalConfig_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyApprovalConfig & approvalConfig() const { DARABONBA_PTR_GET_CONST(approvalConfig_, Models::GetPolicyResponseBodyPolicyApprovalConfig) };
    inline Models::GetPolicyResponseBodyPolicyApprovalConfig approvalConfig() { DARABONBA_PTR_GET(approvalConfig_, Models::GetPolicyResponseBodyPolicyApprovalConfig) };
    inline GetPolicyResponseBodyPolicy& setApprovalConfig(const Models::GetPolicyResponseBodyPolicyApprovalConfig & approvalConfig) { DARABONBA_PTR_SET_VALUE(approvalConfig_, approvalConfig) };
    inline GetPolicyResponseBodyPolicy& setApprovalConfig(Models::GetPolicyResponseBodyPolicyApprovalConfig && approvalConfig) { DARABONBA_PTR_SET_RVALUE(approvalConfig_, approvalConfig) };


    // commandConfig Field Functions 
    bool hasCommandConfig() const { return this->commandConfig_ != nullptr;};
    void deleteCommandConfig() { this->commandConfig_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyCommandConfig & commandConfig() const { DARABONBA_PTR_GET_CONST(commandConfig_, Models::GetPolicyResponseBodyPolicyCommandConfig) };
    inline Models::GetPolicyResponseBodyPolicyCommandConfig commandConfig() { DARABONBA_PTR_GET(commandConfig_, Models::GetPolicyResponseBodyPolicyCommandConfig) };
    inline GetPolicyResponseBodyPolicy& setCommandConfig(const Models::GetPolicyResponseBodyPolicyCommandConfig & commandConfig) { DARABONBA_PTR_SET_VALUE(commandConfig_, commandConfig) };
    inline GetPolicyResponseBodyPolicy& setCommandConfig(Models::GetPolicyResponseBodyPolicyCommandConfig && commandConfig) { DARABONBA_PTR_SET_RVALUE(commandConfig_, commandConfig) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetPolicyResponseBodyPolicy& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // IPAclConfig Field Functions 
    bool hasIPAclConfig() const { return this->IPAclConfig_ != nullptr;};
    void deleteIPAclConfig() { this->IPAclConfig_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyIPAclConfig & IPAclConfig() const { DARABONBA_PTR_GET_CONST(IPAclConfig_, Models::GetPolicyResponseBodyPolicyIPAclConfig) };
    inline Models::GetPolicyResponseBodyPolicyIPAclConfig IPAclConfig() { DARABONBA_PTR_GET(IPAclConfig_, Models::GetPolicyResponseBodyPolicyIPAclConfig) };
    inline GetPolicyResponseBodyPolicy& setIPAclConfig(const Models::GetPolicyResponseBodyPolicyIPAclConfig & IPAclConfig) { DARABONBA_PTR_SET_VALUE(IPAclConfig_, IPAclConfig) };
    inline GetPolicyResponseBodyPolicy& setIPAclConfig(Models::GetPolicyResponseBodyPolicyIPAclConfig && IPAclConfig) { DARABONBA_PTR_SET_RVALUE(IPAclConfig_, IPAclConfig) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline GetPolicyResponseBodyPolicy& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocolConfig Field Functions 
    bool hasProtocolConfig() const { return this->protocolConfig_ != nullptr;};
    void deleteProtocolConfig() { this->protocolConfig_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyProtocolConfig & protocolConfig() const { DARABONBA_PTR_GET_CONST(protocolConfig_, Models::GetPolicyResponseBodyPolicyProtocolConfig) };
    inline Models::GetPolicyResponseBodyPolicyProtocolConfig protocolConfig() { DARABONBA_PTR_GET(protocolConfig_, Models::GetPolicyResponseBodyPolicyProtocolConfig) };
    inline GetPolicyResponseBodyPolicy& setProtocolConfig(const Models::GetPolicyResponseBodyPolicyProtocolConfig & protocolConfig) { DARABONBA_PTR_SET_VALUE(protocolConfig_, protocolConfig) };
    inline GetPolicyResponseBodyPolicy& setProtocolConfig(Models::GetPolicyResponseBodyPolicyProtocolConfig && protocolConfig) { DARABONBA_PTR_SET_RVALUE(protocolConfig_, protocolConfig) };


  protected:
    // The details of the logon period restrictions.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfig> accessTimeRangeConfig_ = nullptr;
    // The O\\&M approval setting.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyApprovalConfig> approvalConfig_ = nullptr;
    // The details of the command policy.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyCommandConfig> commandConfig_ = nullptr;
    // The description of the control policy.
    std::shared_ptr<string> comment_ = nullptr;
    // The access control settings on source IP addresses.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyIPAclConfig> IPAclConfig_ = nullptr;
    // The ID of the control policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The name of the control policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The priority of the control policy. A smaller value indicates a higher priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The details of protocol control.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyProtocolConfig> protocolConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
