// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYCOMMANDCONFIGDENY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYCOMMANDCONFIGDENY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicyCommandConfigDeny : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyCommandConfigDeny& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(Commands, commands_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyCommandConfigDeny& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
    };
    GetPolicyResponseBodyPolicyCommandConfigDeny() = default ;
    GetPolicyResponseBodyPolicyCommandConfigDeny(const GetPolicyResponseBodyPolicyCommandConfigDeny &) = default ;
    GetPolicyResponseBodyPolicyCommandConfigDeny(GetPolicyResponseBodyPolicyCommandConfigDeny &&) = default ;
    GetPolicyResponseBodyPolicyCommandConfigDeny(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyCommandConfigDeny() = default ;
    GetPolicyResponseBodyPolicyCommandConfigDeny& operator=(const GetPolicyResponseBodyPolicyCommandConfigDeny &) = default ;
    GetPolicyResponseBodyPolicyCommandConfigDeny& operator=(GetPolicyResponseBodyPolicyCommandConfigDeny &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclType_ == nullptr
        && return this->commands_ == nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline GetPolicyResponseBodyPolicyCommandConfigDeny& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline GetPolicyResponseBodyPolicyCommandConfigDeny& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline GetPolicyResponseBodyPolicyCommandConfigDeny& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


  protected:
    // The type of command control. Valid values:
    // 
    // *   white: whitelist mode.
    // *   black: blacklist mode.
    std::shared_ptr<string> aclType_ = nullptr;
    // An array of controlled commands.
    std::shared_ptr<vector<string>> commands_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
