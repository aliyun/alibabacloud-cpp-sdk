// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYCOMMANDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYCOMMANDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyCommandConfigApproval.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyCommandConfigDeny.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicyCommandConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyCommandConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Approval, approval_);
      DARABONBA_PTR_TO_JSON(Deny, deny_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyCommandConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Approval, approval_);
      DARABONBA_PTR_FROM_JSON(Deny, deny_);
    };
    GetPolicyResponseBodyPolicyCommandConfig() = default ;
    GetPolicyResponseBodyPolicyCommandConfig(const GetPolicyResponseBodyPolicyCommandConfig &) = default ;
    GetPolicyResponseBodyPolicyCommandConfig(GetPolicyResponseBodyPolicyCommandConfig &&) = default ;
    GetPolicyResponseBodyPolicyCommandConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyCommandConfig() = default ;
    GetPolicyResponseBodyPolicyCommandConfig& operator=(const GetPolicyResponseBodyPolicyCommandConfig &) = default ;
    GetPolicyResponseBodyPolicyCommandConfig& operator=(GetPolicyResponseBodyPolicyCommandConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approval_ == nullptr
        && return this->deny_ == nullptr; };
    // approval Field Functions 
    bool hasApproval() const { return this->approval_ != nullptr;};
    void deleteApproval() { this->approval_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyCommandConfigApproval & approval() const { DARABONBA_PTR_GET_CONST(approval_, Models::GetPolicyResponseBodyPolicyCommandConfigApproval) };
    inline Models::GetPolicyResponseBodyPolicyCommandConfigApproval approval() { DARABONBA_PTR_GET(approval_, Models::GetPolicyResponseBodyPolicyCommandConfigApproval) };
    inline GetPolicyResponseBodyPolicyCommandConfig& setApproval(const Models::GetPolicyResponseBodyPolicyCommandConfigApproval & approval) { DARABONBA_PTR_SET_VALUE(approval_, approval) };
    inline GetPolicyResponseBodyPolicyCommandConfig& setApproval(Models::GetPolicyResponseBodyPolicyCommandConfigApproval && approval) { DARABONBA_PTR_SET_RVALUE(approval_, approval) };


    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyCommandConfigDeny & deny() const { DARABONBA_PTR_GET_CONST(deny_, Models::GetPolicyResponseBodyPolicyCommandConfigDeny) };
    inline Models::GetPolicyResponseBodyPolicyCommandConfigDeny deny() { DARABONBA_PTR_GET(deny_, Models::GetPolicyResponseBodyPolicyCommandConfigDeny) };
    inline GetPolicyResponseBodyPolicyCommandConfig& setDeny(const Models::GetPolicyResponseBodyPolicyCommandConfigDeny & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline GetPolicyResponseBodyPolicyCommandConfig& setDeny(Models::GetPolicyResponseBodyPolicyCommandConfigDeny && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


  protected:
    // The details of the command approval settings.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyCommandConfigApproval> approval_ = nullptr;
    // The details of the command control setting.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyCommandConfigDeny> deny_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
