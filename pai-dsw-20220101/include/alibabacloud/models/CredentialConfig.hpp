// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CredentialConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    CredentialConfig() = default ;
    CredentialConfig(const CredentialConfig &) = default ;
    CredentialConfig(CredentialConfig &&) = default ;
    CredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfig() = default ;
    CredentialConfig& operator=(const CredentialConfig &) = default ;
    CredentialConfig& operator=(CredentialConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Roles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Roles& obj) { 
          DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
          DARABONBA_PTR_TO_JSON(RoleType, roleType_);
          DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Roles& obj) { 
          DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
          DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
          DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
        };
        Roles() = default ;
        Roles(const Roles &) = default ;
        Roles(Roles &&) = default ;
        Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Roles() = default ;
        Roles& operator=(const Roles &) = default ;
        Roles& operator=(Roles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          UserInfo() = default ;
          UserInfo(const UserInfo &) = default ;
          UserInfo(UserInfo &&) = default ;
          UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserInfo() = default ;
          UserInfo& operator=(const UserInfo &) = default ;
          UserInfo& operator=(UserInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->id_ == nullptr && this->securityToken_ == nullptr && this->type_ == nullptr; };
          // accessKeyId Field Functions 
          bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
          void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
          inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
          inline UserInfo& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // securityToken Field Functions 
          bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
          void deleteSecurityToken() { this->securityToken_ = nullptr;};
          inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
          inline UserInfo& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline UserInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> accessKeyId_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> securityToken_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->policy_ == nullptr && this->roleArn_ == nullptr && this->roleType_ == nullptr && this->userInfo_ == nullptr; };
        // assumeRoleFor Field Functions 
        bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
        void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
        inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
        inline Roles& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline Roles& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // roleArn Field Functions 
        bool hasRoleArn() const { return this->roleArn_ != nullptr;};
        void deleteRoleArn() { this->roleArn_ = nullptr;};
        inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
        inline Roles& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


        // roleType Field Functions 
        bool hasRoleType() const { return this->roleType_ != nullptr;};
        void deleteRoleType() { this->roleType_ = nullptr;};
        inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
        inline Roles& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


        // userInfo Field Functions 
        bool hasUserInfo() const { return this->userInfo_ != nullptr;};
        void deleteUserInfo() { this->userInfo_ = nullptr;};
        inline const Roles::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Roles::UserInfo) };
        inline Roles::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, Roles::UserInfo) };
        inline Roles& setUserInfo(const Roles::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
        inline Roles& setUserInfo(Roles::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


      protected:
        shared_ptr<string> assumeRoleFor_ {};
        shared_ptr<string> policy_ {};
        // This parameter is required.
        shared_ptr<string> roleArn_ {};
        // This parameter is required.
        shared_ptr<string> roleType_ {};
        shared_ptr<Roles::UserInfo> userInfo_ {};
      };

      virtual bool empty() const override { return this->key_ == nullptr
        && this->roles_ == nullptr && this->type_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Configs& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<Configs::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Configs::Roles>) };
      inline vector<Configs::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<Configs::Roles>) };
      inline Configs& setRoles(const vector<Configs::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Configs& setRoles(vector<Configs::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Configs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<string> key_ {};
      shared_ptr<vector<Configs::Roles>> roles_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->aliyunEnvRoleKey_ == nullptr
        && this->configs_ == nullptr && this->enable_ == nullptr; };
    // aliyunEnvRoleKey Field Functions 
    bool hasAliyunEnvRoleKey() const { return this->aliyunEnvRoleKey_ != nullptr;};
    void deleteAliyunEnvRoleKey() { this->aliyunEnvRoleKey_ = nullptr;};
    inline string getAliyunEnvRoleKey() const { DARABONBA_PTR_GET_DEFAULT(aliyunEnvRoleKey_, "") };
    inline CredentialConfig& setAliyunEnvRoleKey(string aliyunEnvRoleKey) { DARABONBA_PTR_SET_VALUE(aliyunEnvRoleKey_, aliyunEnvRoleKey) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<CredentialConfig::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<CredentialConfig::Configs>) };
    inline vector<CredentialConfig::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<CredentialConfig::Configs>) };
    inline CredentialConfig& setConfigs(const vector<CredentialConfig::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline CredentialConfig& setConfigs(vector<CredentialConfig::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CredentialConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    shared_ptr<string> aliyunEnvRoleKey_ {};
    shared_ptr<vector<CredentialConfig::Configs>> configs_ {};
    shared_ptr<bool> enable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
