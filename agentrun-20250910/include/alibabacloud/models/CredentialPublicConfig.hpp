// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CredentialPublicConfigRemoteConfig.hpp>
#include <vector>
#include <alibabacloud/models/CredentialPublicConfigUsers.hpp>
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
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && return this->authType_ == nullptr && return this->headerKey_ == nullptr && return this->provider_ == nullptr && return this->remoteConfig_ == nullptr && return this->users_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const map<string, string> & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, map<string, string>) };
    inline map<string, string> authConfig() { DARABONBA_PTR_GET(authConfig_, map<string, string>) };
    inline CredentialPublicConfig& setAuthConfig(const map<string, string> & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline CredentialPublicConfig& setAuthConfig(map<string, string> && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CredentialPublicConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // headerKey Field Functions 
    bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
    void deleteHeaderKey() { this->headerKey_ = nullptr;};
    inline string headerKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
    inline CredentialPublicConfig& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CredentialPublicConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // remoteConfig Field Functions 
    bool hasRemoteConfig() const { return this->remoteConfig_ != nullptr;};
    void deleteRemoteConfig() { this->remoteConfig_ = nullptr;};
    inline const CredentialPublicConfigRemoteConfig & remoteConfig() const { DARABONBA_PTR_GET_CONST(remoteConfig_, CredentialPublicConfigRemoteConfig) };
    inline CredentialPublicConfigRemoteConfig remoteConfig() { DARABONBA_PTR_GET(remoteConfig_, CredentialPublicConfigRemoteConfig) };
    inline CredentialPublicConfig& setRemoteConfig(const CredentialPublicConfigRemoteConfig & remoteConfig) { DARABONBA_PTR_SET_VALUE(remoteConfig_, remoteConfig) };
    inline CredentialPublicConfig& setRemoteConfig(CredentialPublicConfigRemoteConfig && remoteConfig) { DARABONBA_PTR_SET_RVALUE(remoteConfig_, remoteConfig) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CredentialPublicConfigUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<CredentialPublicConfigUsers>) };
    inline vector<CredentialPublicConfigUsers> users() { DARABONBA_PTR_GET(users_, vector<CredentialPublicConfigUsers>) };
    inline CredentialPublicConfig& setUsers(const vector<CredentialPublicConfigUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CredentialPublicConfig& setUsers(vector<CredentialPublicConfigUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<map<string, string>> authConfig_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<string> headerKey_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<CredentialPublicConfigRemoteConfig> remoteConfig_ = nullptr;
    std::shared_ptr<vector<CredentialPublicConfigUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
