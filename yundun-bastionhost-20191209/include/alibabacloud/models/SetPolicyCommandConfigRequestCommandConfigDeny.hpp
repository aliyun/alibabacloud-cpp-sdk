// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUESTCOMMANDCONFIGDENY_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUESTCOMMANDCONFIGDENY_HPP_
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
  class SetPolicyCommandConfigRequestCommandConfigDeny : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyCommandConfigRequestCommandConfigDeny& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(Commands, commands_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyCommandConfigRequestCommandConfigDeny& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
    };
    SetPolicyCommandConfigRequestCommandConfigDeny() = default ;
    SetPolicyCommandConfigRequestCommandConfigDeny(const SetPolicyCommandConfigRequestCommandConfigDeny &) = default ;
    SetPolicyCommandConfigRequestCommandConfigDeny(SetPolicyCommandConfigRequestCommandConfigDeny &&) = default ;
    SetPolicyCommandConfigRequestCommandConfigDeny(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyCommandConfigRequestCommandConfigDeny() = default ;
    SetPolicyCommandConfigRequestCommandConfigDeny& operator=(const SetPolicyCommandConfigRequestCommandConfigDeny &) = default ;
    SetPolicyCommandConfigRequestCommandConfigDeny& operator=(SetPolicyCommandConfigRequestCommandConfigDeny &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclType_ != nullptr
        && this->commands_ != nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline SetPolicyCommandConfigRequestCommandConfigDeny& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline SetPolicyCommandConfigRequestCommandConfigDeny& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline SetPolicyCommandConfigRequestCommandConfigDeny& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


  protected:
    // The type of command control. Valid values:
    // 
    // *   **black**: blacklist mode.
    // *   **white**: whitelist mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclType_ = nullptr;
    // The commands to be controlled.
    // 
    // > This parameter is required if AclType is set to white.
    std::shared_ptr<vector<string>> commands_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
