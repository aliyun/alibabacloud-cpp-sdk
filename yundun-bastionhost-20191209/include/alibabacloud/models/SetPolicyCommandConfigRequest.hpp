// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYCOMMANDCONFIGREQUEST_HPP_
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
  class SetPolicyCommandConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyCommandConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandConfig, commandConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyCommandConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandConfig, commandConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyCommandConfigRequest() = default ;
    SetPolicyCommandConfigRequest(const SetPolicyCommandConfigRequest &) = default ;
    SetPolicyCommandConfigRequest(SetPolicyCommandConfigRequest &&) = default ;
    SetPolicyCommandConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyCommandConfigRequest() = default ;
    SetPolicyCommandConfigRequest& operator=(const SetPolicyCommandConfigRequest &) = default ;
    SetPolicyCommandConfigRequest& operator=(SetPolicyCommandConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommandConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommandConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Approval, approval_);
        DARABONBA_PTR_TO_JSON(Deny, deny_);
      };
      friend void from_json(const Darabonba::Json& j, CommandConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Approval, approval_);
        DARABONBA_PTR_FROM_JSON(Deny, deny_);
      };
      CommandConfig() = default ;
      CommandConfig(const CommandConfig &) = default ;
      CommandConfig(CommandConfig &&) = default ;
      CommandConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommandConfig() = default ;
      CommandConfig& operator=(const CommandConfig &) = default ;
      CommandConfig& operator=(CommandConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Deny : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Deny& obj) { 
          DARABONBA_PTR_TO_JSON(AclType, aclType_);
          DARABONBA_PTR_TO_JSON(Commands, commands_);
        };
        friend void from_json(const Darabonba::Json& j, Deny& obj) { 
          DARABONBA_PTR_FROM_JSON(AclType, aclType_);
          DARABONBA_PTR_FROM_JSON(Commands, commands_);
        };
        Deny() = default ;
        Deny(const Deny &) = default ;
        Deny(Deny &&) = default ;
        Deny(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Deny() = default ;
        Deny& operator=(const Deny &) = default ;
        Deny& operator=(Deny &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclType_ == nullptr
        && this->commands_ == nullptr; };
        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline Deny& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // commands Field Functions 
        bool hasCommands() const { return this->commands_ != nullptr;};
        void deleteCommands() { this->commands_ = nullptr;};
        inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
        inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
        inline Deny& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
        inline Deny& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


      protected:
        // The type of command control. Valid values:
        // 
        // *   **black**: blacklist mode.
        // *   **white**: whitelist mode.
        // 
        // This parameter is required.
        shared_ptr<string> aclType_ {};
        // The commands to be controlled.
        // 
        // > This parameter is required if AclType is set to white.
        shared_ptr<vector<string>> commands_ {};
      };

      class Approval : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Approval& obj) { 
          DARABONBA_PTR_TO_JSON(Commands, commands_);
        };
        friend void from_json(const Darabonba::Json& j, Approval& obj) { 
          DARABONBA_PTR_FROM_JSON(Commands, commands_);
        };
        Approval() = default ;
        Approval(const Approval &) = default ;
        Approval(Approval &&) = default ;
        Approval(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Approval() = default ;
        Approval& operator=(const Approval &) = default ;
        Approval& operator=(Approval &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commands_ == nullptr; };
        // commands Field Functions 
        bool hasCommands() const { return this->commands_ != nullptr;};
        void deleteCommands() { this->commands_ = nullptr;};
        inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
        inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
        inline Approval& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
        inline Approval& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


      protected:
        // The commands that can be run only after approval.
        shared_ptr<vector<string>> commands_ {};
      };

      virtual bool empty() const override { return this->approval_ == nullptr
        && this->deny_ == nullptr; };
      // approval Field Functions 
      bool hasApproval() const { return this->approval_ != nullptr;};
      void deleteApproval() { this->approval_ = nullptr;};
      inline const CommandConfig::Approval & getApproval() const { DARABONBA_PTR_GET_CONST(approval_, CommandConfig::Approval) };
      inline CommandConfig::Approval getApproval() { DARABONBA_PTR_GET(approval_, CommandConfig::Approval) };
      inline CommandConfig& setApproval(const CommandConfig::Approval & approval) { DARABONBA_PTR_SET_VALUE(approval_, approval) };
      inline CommandConfig& setApproval(CommandConfig::Approval && approval) { DARABONBA_PTR_SET_RVALUE(approval_, approval) };


      // deny Field Functions 
      bool hasDeny() const { return this->deny_ != nullptr;};
      void deleteDeny() { this->deny_ = nullptr;};
      inline const CommandConfig::Deny & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, CommandConfig::Deny) };
      inline CommandConfig::Deny getDeny() { DARABONBA_PTR_GET(deny_, CommandConfig::Deny) };
      inline CommandConfig& setDeny(const CommandConfig::Deny & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
      inline CommandConfig& setDeny(CommandConfig::Deny && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


    protected:
      // The command approval settings.
      // 
      // > A command approval policy is used to approve the commands that are excluded from a whitelist or blacklist specified in a command control policy. The command control policy takes precedence over the command approval policy in validation.
      shared_ptr<CommandConfig::Approval> approval_ {};
      // The command control settings.
      // 
      // This parameter is required.
      shared_ptr<CommandConfig::Deny> deny_ {};
    };

    virtual bool empty() const override { return this->commandConfig_ == nullptr
        && this->instanceId_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr; };
    // commandConfig Field Functions 
    bool hasCommandConfig() const { return this->commandConfig_ != nullptr;};
    void deleteCommandConfig() { this->commandConfig_ = nullptr;};
    inline const SetPolicyCommandConfigRequest::CommandConfig & getCommandConfig() const { DARABONBA_PTR_GET_CONST(commandConfig_, SetPolicyCommandConfigRequest::CommandConfig) };
    inline SetPolicyCommandConfigRequest::CommandConfig getCommandConfig() { DARABONBA_PTR_GET(commandConfig_, SetPolicyCommandConfigRequest::CommandConfig) };
    inline SetPolicyCommandConfigRequest& setCommandConfig(const SetPolicyCommandConfigRequest::CommandConfig & commandConfig) { DARABONBA_PTR_SET_VALUE(commandConfig_, commandConfig) };
    inline SetPolicyCommandConfigRequest& setCommandConfig(SetPolicyCommandConfigRequest::CommandConfig && commandConfig) { DARABONBA_PTR_SET_RVALUE(commandConfig_, commandConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyCommandConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyCommandConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyCommandConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The command control settings.
    // 
    // > This parameter applies only to Linux hosts.
    // 
    // This parameter is required.
    shared_ptr<SetPolicyCommandConfigRequest::CommandConfig> commandConfig_ {};
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy that you want to modify.
    // 
    // > You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
