// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERAUTHNCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERAUTHNCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetIdentityProviderAuthnConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdentityProviderAuthnConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateUserConfig, autoCreateUserConfig_);
      DARABONBA_PTR_TO_JSON(AutoUpdateUserConfig, autoUpdateUserConfig_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LdapAuthnConfig, ldapAuthnConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SetIdentityProviderAuthnConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateUserConfig, autoCreateUserConfig_);
      DARABONBA_PTR_FROM_JSON(AutoUpdateUserConfig, autoUpdateUserConfig_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LdapAuthnConfig, ldapAuthnConfig_);
    };
    SetIdentityProviderAuthnConfigurationRequest() = default ;
    SetIdentityProviderAuthnConfigurationRequest(const SetIdentityProviderAuthnConfigurationRequest &) = default ;
    SetIdentityProviderAuthnConfigurationRequest(SetIdentityProviderAuthnConfigurationRequest &&) = default ;
    SetIdentityProviderAuthnConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdentityProviderAuthnConfigurationRequest() = default ;
    SetIdentityProviderAuthnConfigurationRequest& operator=(const SetIdentityProviderAuthnConfigurationRequest &) = default ;
    SetIdentityProviderAuthnConfigurationRequest& operator=(SetIdentityProviderAuthnConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LdapAuthnConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LdapAuthnConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoUpdatePasswordStatus, autoUpdatePasswordStatus_);
        DARABONBA_PTR_TO_JSON(UserLoginIdentifier, userLoginIdentifier_);
        DARABONBA_PTR_TO_JSON(UserObjectClass, userObjectClass_);
      };
      friend void from_json(const Darabonba::Json& j, LdapAuthnConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoUpdatePasswordStatus, autoUpdatePasswordStatus_);
        DARABONBA_PTR_FROM_JSON(UserLoginIdentifier, userLoginIdentifier_);
        DARABONBA_PTR_FROM_JSON(UserObjectClass, userObjectClass_);
      };
      LdapAuthnConfig() = default ;
      LdapAuthnConfig(const LdapAuthnConfig &) = default ;
      LdapAuthnConfig(LdapAuthnConfig &&) = default ;
      LdapAuthnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LdapAuthnConfig() = default ;
      LdapAuthnConfig& operator=(const LdapAuthnConfig &) = default ;
      LdapAuthnConfig& operator=(LdapAuthnConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoUpdatePasswordStatus_ == nullptr
        && this->userLoginIdentifier_ == nullptr && this->userObjectClass_ == nullptr; };
      // autoUpdatePasswordStatus Field Functions 
      bool hasAutoUpdatePasswordStatus() const { return this->autoUpdatePasswordStatus_ != nullptr;};
      void deleteAutoUpdatePasswordStatus() { this->autoUpdatePasswordStatus_ = nullptr;};
      inline string getAutoUpdatePasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(autoUpdatePasswordStatus_, "") };
      inline LdapAuthnConfig& setAutoUpdatePasswordStatus(string autoUpdatePasswordStatus) { DARABONBA_PTR_SET_VALUE(autoUpdatePasswordStatus_, autoUpdatePasswordStatus) };


      // userLoginIdentifier Field Functions 
      bool hasUserLoginIdentifier() const { return this->userLoginIdentifier_ != nullptr;};
      void deleteUserLoginIdentifier() { this->userLoginIdentifier_ = nullptr;};
      inline string getUserLoginIdentifier() const { DARABONBA_PTR_GET_DEFAULT(userLoginIdentifier_, "") };
      inline LdapAuthnConfig& setUserLoginIdentifier(string userLoginIdentifier) { DARABONBA_PTR_SET_VALUE(userLoginIdentifier_, userLoginIdentifier) };


      // userObjectClass Field Functions 
      bool hasUserObjectClass() const { return this->userObjectClass_ != nullptr;};
      void deleteUserObjectClass() { this->userObjectClass_ = nullptr;};
      inline string getUserObjectClass() const { DARABONBA_PTR_GET_DEFAULT(userObjectClass_, "") };
      inline LdapAuthnConfig& setUserObjectClass(string userObjectClass) { DARABONBA_PTR_SET_VALUE(userObjectClass_, userObjectClass) };


    protected:
      // 是否支持自动更新密码
      shared_ptr<string> autoUpdatePasswordStatus_ {};
      // 用户登录标识
      shared_ptr<string> userLoginIdentifier_ {};
      // 用户ObjectClass
      shared_ptr<string> userObjectClass_ {};
    };

    class BindingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoMatchUserProfileExpressions, autoMatchUserProfileExpressions_);
        DARABONBA_PTR_TO_JSON(AutoMatchUserStatus, autoMatchUserStatus_);
        DARABONBA_PTR_TO_JSON(MappingBindingStatus, mappingBindingStatus_);
      };
      friend void from_json(const Darabonba::Json& j, BindingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoMatchUserProfileExpressions, autoMatchUserProfileExpressions_);
        DARABONBA_PTR_FROM_JSON(AutoMatchUserStatus, autoMatchUserStatus_);
        DARABONBA_PTR_FROM_JSON(MappingBindingStatus, mappingBindingStatus_);
      };
      BindingConfig() = default ;
      BindingConfig(const BindingConfig &) = default ;
      BindingConfig(BindingConfig &&) = default ;
      BindingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindingConfig() = default ;
      BindingConfig& operator=(const BindingConfig &) = default ;
      BindingConfig& operator=(BindingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoMatchUserProfileExpressions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoMatchUserProfileExpressions& obj) { 
          DARABONBA_PTR_TO_JSON(ExpressionMappingType, expressionMappingType_);
          DARABONBA_PTR_TO_JSON(SourceValueExpression, sourceValueExpression_);
          DARABONBA_PTR_TO_JSON(TargetField, targetField_);
          DARABONBA_PTR_TO_JSON(TargetFieldDescription, targetFieldDescription_);
        };
        friend void from_json(const Darabonba::Json& j, AutoMatchUserProfileExpressions& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpressionMappingType, expressionMappingType_);
          DARABONBA_PTR_FROM_JSON(SourceValueExpression, sourceValueExpression_);
          DARABONBA_PTR_FROM_JSON(TargetField, targetField_);
          DARABONBA_PTR_FROM_JSON(TargetFieldDescription, targetFieldDescription_);
        };
        AutoMatchUserProfileExpressions() = default ;
        AutoMatchUserProfileExpressions(const AutoMatchUserProfileExpressions &) = default ;
        AutoMatchUserProfileExpressions(AutoMatchUserProfileExpressions &&) = default ;
        AutoMatchUserProfileExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoMatchUserProfileExpressions() = default ;
        AutoMatchUserProfileExpressions& operator=(const AutoMatchUserProfileExpressions &) = default ;
        AutoMatchUserProfileExpressions& operator=(AutoMatchUserProfileExpressions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expressionMappingType_ == nullptr
        && this->sourceValueExpression_ == nullptr && this->targetField_ == nullptr && this->targetFieldDescription_ == nullptr; };
        // expressionMappingType Field Functions 
        bool hasExpressionMappingType() const { return this->expressionMappingType_ != nullptr;};
        void deleteExpressionMappingType() { this->expressionMappingType_ = nullptr;};
        inline string getExpressionMappingType() const { DARABONBA_PTR_GET_DEFAULT(expressionMappingType_, "") };
        inline AutoMatchUserProfileExpressions& setExpressionMappingType(string expressionMappingType) { DARABONBA_PTR_SET_VALUE(expressionMappingType_, expressionMappingType) };


        // sourceValueExpression Field Functions 
        bool hasSourceValueExpression() const { return this->sourceValueExpression_ != nullptr;};
        void deleteSourceValueExpression() { this->sourceValueExpression_ = nullptr;};
        inline string getSourceValueExpression() const { DARABONBA_PTR_GET_DEFAULT(sourceValueExpression_, "") };
        inline AutoMatchUserProfileExpressions& setSourceValueExpression(string sourceValueExpression) { DARABONBA_PTR_SET_VALUE(sourceValueExpression_, sourceValueExpression) };


        // targetField Field Functions 
        bool hasTargetField() const { return this->targetField_ != nullptr;};
        void deleteTargetField() { this->targetField_ = nullptr;};
        inline string getTargetField() const { DARABONBA_PTR_GET_DEFAULT(targetField_, "") };
        inline AutoMatchUserProfileExpressions& setTargetField(string targetField) { DARABONBA_PTR_SET_VALUE(targetField_, targetField) };


        // targetFieldDescription Field Functions 
        bool hasTargetFieldDescription() const { return this->targetFieldDescription_ != nullptr;};
        void deleteTargetFieldDescription() { this->targetFieldDescription_ = nullptr;};
        inline string getTargetFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(targetFieldDescription_, "") };
        inline AutoMatchUserProfileExpressions& setTargetFieldDescription(string targetFieldDescription) { DARABONBA_PTR_SET_VALUE(targetFieldDescription_, targetFieldDescription) };


      protected:
        // 表达式的类型
        // 
        // This parameter is required.
        shared_ptr<string> expressionMappingType_ {};
        // 映射属性取值表达式
        // 
        // This parameter is required.
        shared_ptr<string> sourceValueExpression_ {};
        // 映射目标属性名称
        // 
        // This parameter is required.
        shared_ptr<string> targetField_ {};
        // 映射目标属性名称
        shared_ptr<string> targetFieldDescription_ {};
      };

      virtual bool empty() const override { return this->autoMatchUserProfileExpressions_ == nullptr
        && this->autoMatchUserStatus_ == nullptr && this->mappingBindingStatus_ == nullptr; };
      // autoMatchUserProfileExpressions Field Functions 
      bool hasAutoMatchUserProfileExpressions() const { return this->autoMatchUserProfileExpressions_ != nullptr;};
      void deleteAutoMatchUserProfileExpressions() { this->autoMatchUserProfileExpressions_ = nullptr;};
      inline const vector<BindingConfig::AutoMatchUserProfileExpressions> & getAutoMatchUserProfileExpressions() const { DARABONBA_PTR_GET_CONST(autoMatchUserProfileExpressions_, vector<BindingConfig::AutoMatchUserProfileExpressions>) };
      inline vector<BindingConfig::AutoMatchUserProfileExpressions> getAutoMatchUserProfileExpressions() { DARABONBA_PTR_GET(autoMatchUserProfileExpressions_, vector<BindingConfig::AutoMatchUserProfileExpressions>) };
      inline BindingConfig& setAutoMatchUserProfileExpressions(const vector<BindingConfig::AutoMatchUserProfileExpressions> & autoMatchUserProfileExpressions) { DARABONBA_PTR_SET_VALUE(autoMatchUserProfileExpressions_, autoMatchUserProfileExpressions) };
      inline BindingConfig& setAutoMatchUserProfileExpressions(vector<BindingConfig::AutoMatchUserProfileExpressions> && autoMatchUserProfileExpressions) { DARABONBA_PTR_SET_RVALUE(autoMatchUserProfileExpressions_, autoMatchUserProfileExpressions) };


      // autoMatchUserStatus Field Functions 
      bool hasAutoMatchUserStatus() const { return this->autoMatchUserStatus_ != nullptr;};
      void deleteAutoMatchUserStatus() { this->autoMatchUserStatus_ = nullptr;};
      inline string getAutoMatchUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoMatchUserStatus_, "") };
      inline BindingConfig& setAutoMatchUserStatus(string autoMatchUserStatus) { DARABONBA_PTR_SET_VALUE(autoMatchUserStatus_, autoMatchUserStatus) };


      // mappingBindingStatus Field Functions 
      bool hasMappingBindingStatus() const { return this->mappingBindingStatus_ != nullptr;};
      void deleteMappingBindingStatus() { this->mappingBindingStatus_ = nullptr;};
      inline string getMappingBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(mappingBindingStatus_, "") };
      inline BindingConfig& setMappingBindingStatus(string mappingBindingStatus) { DARABONBA_PTR_SET_VALUE(mappingBindingStatus_, mappingBindingStatus) };


    protected:
      // 自动匹配账户的规则
      shared_ptr<vector<BindingConfig::AutoMatchUserProfileExpressions>> autoMatchUserProfileExpressions_ {};
      // 自动匹配账户是否开启
      shared_ptr<string> autoMatchUserStatus_ {};
      // 用户手动绑定账户功能是否开启
      shared_ptr<string> mappingBindingStatus_ {};
    };

    class AutoUpdateUserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoUpdateUserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoUpdateUserStatus, autoUpdateUserStatus_);
      };
      friend void from_json(const Darabonba::Json& j, AutoUpdateUserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoUpdateUserStatus, autoUpdateUserStatus_);
      };
      AutoUpdateUserConfig() = default ;
      AutoUpdateUserConfig(const AutoUpdateUserConfig &) = default ;
      AutoUpdateUserConfig(AutoUpdateUserConfig &&) = default ;
      AutoUpdateUserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoUpdateUserConfig() = default ;
      AutoUpdateUserConfig& operator=(const AutoUpdateUserConfig &) = default ;
      AutoUpdateUserConfig& operator=(AutoUpdateUserConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoUpdateUserStatus_ == nullptr; };
      // autoUpdateUserStatus Field Functions 
      bool hasAutoUpdateUserStatus() const { return this->autoUpdateUserStatus_ != nullptr;};
      void deleteAutoUpdateUserStatus() { this->autoUpdateUserStatus_ = nullptr;};
      inline string getAutoUpdateUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoUpdateUserStatus_, "") };
      inline AutoUpdateUserConfig& setAutoUpdateUserStatus(string autoUpdateUserStatus) { DARABONBA_PTR_SET_VALUE(autoUpdateUserStatus_, autoUpdateUserStatus) };


    protected:
      shared_ptr<string> autoUpdateUserStatus_ {};
    };

    class AutoCreateUserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoCreateUserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoCreateUserStatus, autoCreateUserStatus_);
        DARABONBA_PTR_TO_JSON(TargetOrganizationalUnitIds, targetOrganizationalUnitIds_);
      };
      friend void from_json(const Darabonba::Json& j, AutoCreateUserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoCreateUserStatus, autoCreateUserStatus_);
        DARABONBA_PTR_FROM_JSON(TargetOrganizationalUnitIds, targetOrganizationalUnitIds_);
      };
      AutoCreateUserConfig() = default ;
      AutoCreateUserConfig(const AutoCreateUserConfig &) = default ;
      AutoCreateUserConfig(AutoCreateUserConfig &&) = default ;
      AutoCreateUserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoCreateUserConfig() = default ;
      AutoCreateUserConfig& operator=(const AutoCreateUserConfig &) = default ;
      AutoCreateUserConfig& operator=(AutoCreateUserConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoCreateUserStatus_ == nullptr
        && this->targetOrganizationalUnitIds_ == nullptr; };
      // autoCreateUserStatus Field Functions 
      bool hasAutoCreateUserStatus() const { return this->autoCreateUserStatus_ != nullptr;};
      void deleteAutoCreateUserStatus() { this->autoCreateUserStatus_ = nullptr;};
      inline string getAutoCreateUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoCreateUserStatus_, "") };
      inline AutoCreateUserConfig& setAutoCreateUserStatus(string autoCreateUserStatus) { DARABONBA_PTR_SET_VALUE(autoCreateUserStatus_, autoCreateUserStatus) };


      // targetOrganizationalUnitIds Field Functions 
      bool hasTargetOrganizationalUnitIds() const { return this->targetOrganizationalUnitIds_ != nullptr;};
      void deleteTargetOrganizationalUnitIds() { this->targetOrganizationalUnitIds_ = nullptr;};
      inline const vector<string> & getTargetOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(targetOrganizationalUnitIds_, vector<string>) };
      inline vector<string> getTargetOrganizationalUnitIds() { DARABONBA_PTR_GET(targetOrganizationalUnitIds_, vector<string>) };
      inline AutoCreateUserConfig& setTargetOrganizationalUnitIds(const vector<string> & targetOrganizationalUnitIds) { DARABONBA_PTR_SET_VALUE(targetOrganizationalUnitIds_, targetOrganizationalUnitIds) };
      inline AutoCreateUserConfig& setTargetOrganizationalUnitIds(vector<string> && targetOrganizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(targetOrganizationalUnitIds_, targetOrganizationalUnitIds) };


    protected:
      // 自动创建账户是否开启
      shared_ptr<string> autoCreateUserStatus_ {};
      shared_ptr<vector<string>> targetOrganizationalUnitIds_ {};
    };

    virtual bool empty() const override { return this->autoCreateUserConfig_ == nullptr
        && this->autoUpdateUserConfig_ == nullptr && this->bindingConfig_ == nullptr && this->identityProviderId_ == nullptr && this->instanceId_ == nullptr && this->ldapAuthnConfig_ == nullptr; };
    // autoCreateUserConfig Field Functions 
    bool hasAutoCreateUserConfig() const { return this->autoCreateUserConfig_ != nullptr;};
    void deleteAutoCreateUserConfig() { this->autoCreateUserConfig_ = nullptr;};
    inline const SetIdentityProviderAuthnConfigurationRequest::AutoCreateUserConfig & getAutoCreateUserConfig() const { DARABONBA_PTR_GET_CONST(autoCreateUserConfig_, SetIdentityProviderAuthnConfigurationRequest::AutoCreateUserConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest::AutoCreateUserConfig getAutoCreateUserConfig() { DARABONBA_PTR_GET(autoCreateUserConfig_, SetIdentityProviderAuthnConfigurationRequest::AutoCreateUserConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setAutoCreateUserConfig(const SetIdentityProviderAuthnConfigurationRequest::AutoCreateUserConfig & autoCreateUserConfig) { DARABONBA_PTR_SET_VALUE(autoCreateUserConfig_, autoCreateUserConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setAutoCreateUserConfig(SetIdentityProviderAuthnConfigurationRequest::AutoCreateUserConfig && autoCreateUserConfig) { DARABONBA_PTR_SET_RVALUE(autoCreateUserConfig_, autoCreateUserConfig) };


    // autoUpdateUserConfig Field Functions 
    bool hasAutoUpdateUserConfig() const { return this->autoUpdateUserConfig_ != nullptr;};
    void deleteAutoUpdateUserConfig() { this->autoUpdateUserConfig_ = nullptr;};
    inline const SetIdentityProviderAuthnConfigurationRequest::AutoUpdateUserConfig & getAutoUpdateUserConfig() const { DARABONBA_PTR_GET_CONST(autoUpdateUserConfig_, SetIdentityProviderAuthnConfigurationRequest::AutoUpdateUserConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest::AutoUpdateUserConfig getAutoUpdateUserConfig() { DARABONBA_PTR_GET(autoUpdateUserConfig_, SetIdentityProviderAuthnConfigurationRequest::AutoUpdateUserConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setAutoUpdateUserConfig(const SetIdentityProviderAuthnConfigurationRequest::AutoUpdateUserConfig & autoUpdateUserConfig) { DARABONBA_PTR_SET_VALUE(autoUpdateUserConfig_, autoUpdateUserConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setAutoUpdateUserConfig(SetIdentityProviderAuthnConfigurationRequest::AutoUpdateUserConfig && autoUpdateUserConfig) { DARABONBA_PTR_SET_RVALUE(autoUpdateUserConfig_, autoUpdateUserConfig) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const SetIdentityProviderAuthnConfigurationRequest::BindingConfig & getBindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, SetIdentityProviderAuthnConfigurationRequest::BindingConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest::BindingConfig getBindingConfig() { DARABONBA_PTR_GET(bindingConfig_, SetIdentityProviderAuthnConfigurationRequest::BindingConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setBindingConfig(const SetIdentityProviderAuthnConfigurationRequest::BindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setBindingConfig(SetIdentityProviderAuthnConfigurationRequest::BindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline SetIdentityProviderAuthnConfigurationRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetIdentityProviderAuthnConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ldapAuthnConfig Field Functions 
    bool hasLdapAuthnConfig() const { return this->ldapAuthnConfig_ != nullptr;};
    void deleteLdapAuthnConfig() { this->ldapAuthnConfig_ = nullptr;};
    inline const SetIdentityProviderAuthnConfigurationRequest::LdapAuthnConfig & getLdapAuthnConfig() const { DARABONBA_PTR_GET_CONST(ldapAuthnConfig_, SetIdentityProviderAuthnConfigurationRequest::LdapAuthnConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest::LdapAuthnConfig getLdapAuthnConfig() { DARABONBA_PTR_GET(ldapAuthnConfig_, SetIdentityProviderAuthnConfigurationRequest::LdapAuthnConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setLdapAuthnConfig(const SetIdentityProviderAuthnConfigurationRequest::LdapAuthnConfig & ldapAuthnConfig) { DARABONBA_PTR_SET_VALUE(ldapAuthnConfig_, ldapAuthnConfig) };
    inline SetIdentityProviderAuthnConfigurationRequest& setLdapAuthnConfig(SetIdentityProviderAuthnConfigurationRequest::LdapAuthnConfig && ldapAuthnConfig) { DARABONBA_PTR_SET_RVALUE(ldapAuthnConfig_, ldapAuthnConfig) };


  protected:
    // 自动创建账户账户规则配置。
    shared_ptr<SetIdentityProviderAuthnConfigurationRequest::AutoCreateUserConfig> autoCreateUserConfig_ {};
    shared_ptr<SetIdentityProviderAuthnConfigurationRequest::AutoUpdateUserConfig> autoUpdateUserConfig_ {};
    // 账户绑定规则配置
    shared_ptr<SetIdentityProviderAuthnConfigurationRequest::BindingConfig> bindingConfig_ {};
    // IDaaS的身份提供方主键id
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // AD/LDAP配置
    shared_ptr<SetIdentityProviderAuthnConfigurationRequest::LdapAuthnConfig> ldapAuthnConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
