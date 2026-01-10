// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CredentialPublicConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialPublicConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(headerKey, headerKey_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(remoteConfig, remoteConfig_);
      DARABONBA_PTR_TO_JSON(users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialPublicConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(headerKey, headerKey_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(remoteConfig, remoteConfig_);
      DARABONBA_PTR_FROM_JSON(users, users_);
    };
    CredentialPublicConfig() = default ;
    CredentialPublicConfig(const CredentialPublicConfig &) = default ;
    CredentialPublicConfig(CredentialPublicConfig &&) = default ;
    CredentialPublicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialPublicConfig() = default ;
    CredentialPublicConfig& operator=(const CredentialPublicConfig &) = default ;
    CredentialPublicConfig& operator=(CredentialPublicConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(password, password_);
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(password, password_);
        DARABONBA_PTR_FROM_JSON(username, username_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->username_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Users& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Users& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> password_ {};
      shared_ptr<string> username_ {};
    };

    class RemoteConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoteConfig& obj) { 
        DARABONBA_PTR_TO_JSON(timeout, timeout_);
        DARABONBA_PTR_TO_JSON(ttl, ttl_);
        DARABONBA_PTR_TO_JSON(uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, RemoteConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(uri, uri_);
      };
      RemoteConfig() = default ;
      RemoteConfig(const RemoteConfig &) = default ;
      RemoteConfig(RemoteConfig &&) = default ;
      RemoteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoteConfig() = default ;
      RemoteConfig& operator=(const RemoteConfig &) = default ;
      RemoteConfig& operator=(RemoteConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timeout_ == nullptr
        && this->ttl_ == nullptr && this->uri_ == nullptr; };
      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline RemoteConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline RemoteConfig& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline RemoteConfig& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      shared_ptr<int32_t> timeout_ {};
      shared_ptr<int32_t> ttl_ {};
      shared_ptr<string> uri_ {};
    };

    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->authType_ == nullptr && this->headerKey_ == nullptr && this->provider_ == nullptr && this->remoteConfig_ == nullptr && this->users_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const map<string, string> & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, map<string, string>) };
    inline map<string, string> getAuthConfig() { DARABONBA_PTR_GET(authConfig_, map<string, string>) };
    inline CredentialPublicConfig& setAuthConfig(const map<string, string> & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline CredentialPublicConfig& setAuthConfig(map<string, string> && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CredentialPublicConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // headerKey Field Functions 
    bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
    void deleteHeaderKey() { this->headerKey_ = nullptr;};
    inline string getHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
    inline CredentialPublicConfig& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CredentialPublicConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // remoteConfig Field Functions 
    bool hasRemoteConfig() const { return this->remoteConfig_ != nullptr;};
    void deleteRemoteConfig() { this->remoteConfig_ = nullptr;};
    inline const CredentialPublicConfig::RemoteConfig & getRemoteConfig() const { DARABONBA_PTR_GET_CONST(remoteConfig_, CredentialPublicConfig::RemoteConfig) };
    inline CredentialPublicConfig::RemoteConfig getRemoteConfig() { DARABONBA_PTR_GET(remoteConfig_, CredentialPublicConfig::RemoteConfig) };
    inline CredentialPublicConfig& setRemoteConfig(const CredentialPublicConfig::RemoteConfig & remoteConfig) { DARABONBA_PTR_SET_VALUE(remoteConfig_, remoteConfig) };
    inline CredentialPublicConfig& setRemoteConfig(CredentialPublicConfig::RemoteConfig && remoteConfig) { DARABONBA_PTR_SET_RVALUE(remoteConfig_, remoteConfig) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CredentialPublicConfig::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<CredentialPublicConfig::Users>) };
    inline vector<CredentialPublicConfig::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<CredentialPublicConfig::Users>) };
    inline CredentialPublicConfig& setUsers(const vector<CredentialPublicConfig::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CredentialPublicConfig& setUsers(vector<CredentialPublicConfig::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    shared_ptr<map<string, string>> authConfig_ {};
    shared_ptr<string> authType_ {};
    shared_ptr<string> headerKey_ {};
    shared_ptr<string> provider_ {};
    shared_ptr<CredentialPublicConfig::RemoteConfig> remoteConfig_ {};
    shared_ptr<vector<CredentialPublicConfig::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
