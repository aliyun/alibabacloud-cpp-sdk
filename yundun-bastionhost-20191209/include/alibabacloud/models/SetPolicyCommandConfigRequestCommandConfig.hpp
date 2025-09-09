// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUESTCOMMANDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUESTCOMMANDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetPolicyCommandConfigRequestCommandConfigApproval.hpp>
#include <alibabacloud/models/SetPolicyCommandConfigRequestCommandConfigDeny.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyCommandConfigRequestCommandConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyCommandConfigRequestCommandConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Approval, approval_);
      DARABONBA_PTR_TO_JSON(Deny, deny_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyCommandConfigRequestCommandConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Approval, approval_);
      DARABONBA_PTR_FROM_JSON(Deny, deny_);
    };
    SetPolicyCommandConfigRequestCommandConfig() = default ;
    SetPolicyCommandConfigRequestCommandConfig(const SetPolicyCommandConfigRequestCommandConfig &) = default ;
    SetPolicyCommandConfigRequestCommandConfig(SetPolicyCommandConfigRequestCommandConfig &&) = default ;
    SetPolicyCommandConfigRequestCommandConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyCommandConfigRequestCommandConfig() = default ;
    SetPolicyCommandConfigRequestCommandConfig& operator=(const SetPolicyCommandConfigRequestCommandConfig &) = default ;
    SetPolicyCommandConfigRequestCommandConfig& operator=(SetPolicyCommandConfigRequestCommandConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approval_ != nullptr
        && this->deny_ != nullptr; };
    // approval Field Functions 
    bool hasApproval() const { return this->approval_ != nullptr;};
    void deleteApproval() { this->approval_ = nullptr;};
    inline const Models::SetPolicyCommandConfigRequestCommandConfigApproval & approval() const { DARABONBA_PTR_GET_CONST(approval_, Models::SetPolicyCommandConfigRequestCommandConfigApproval) };
    inline Models::SetPolicyCommandConfigRequestCommandConfigApproval approval() { DARABONBA_PTR_GET(approval_, Models::SetPolicyCommandConfigRequestCommandConfigApproval) };
    inline SetPolicyCommandConfigRequestCommandConfig& setApproval(const Models::SetPolicyCommandConfigRequestCommandConfigApproval & approval) { DARABONBA_PTR_SET_VALUE(approval_, approval) };
    inline SetPolicyCommandConfigRequestCommandConfig& setApproval(Models::SetPolicyCommandConfigRequestCommandConfigApproval && approval) { DARABONBA_PTR_SET_RVALUE(approval_, approval) };


    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const Models::SetPolicyCommandConfigRequestCommandConfigDeny & deny() const { DARABONBA_PTR_GET_CONST(deny_, Models::SetPolicyCommandConfigRequestCommandConfigDeny) };
    inline Models::SetPolicyCommandConfigRequestCommandConfigDeny deny() { DARABONBA_PTR_GET(deny_, Models::SetPolicyCommandConfigRequestCommandConfigDeny) };
    inline SetPolicyCommandConfigRequestCommandConfig& setDeny(const Models::SetPolicyCommandConfigRequestCommandConfigDeny & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline SetPolicyCommandConfigRequestCommandConfig& setDeny(Models::SetPolicyCommandConfigRequestCommandConfigDeny && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


  protected:
    // The command approval settings.
    // 
    // > A command approval policy is used to approve the commands that are excluded from a whitelist or blacklist specified in a command control policy. The command control policy takes precedence over the command approval policy in validation.
    std::shared_ptr<Models::SetPolicyCommandConfigRequestCommandConfigApproval> approval_ = nullptr;
    // The command control settings.
    // 
    // This parameter is required.
    std::shared_ptr<Models::SetPolicyCommandConfigRequestCommandConfigDeny> deny_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
