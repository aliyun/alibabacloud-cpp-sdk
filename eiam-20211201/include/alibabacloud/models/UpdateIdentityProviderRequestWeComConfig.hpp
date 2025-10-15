// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTWECOMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTWECOMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateIdentityProviderRequestWeComConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequestWeComConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
      DARABONBA_PTR_TO_JSON(CorpSecret, corpSecret_);
      DARABONBA_PTR_TO_JSON(TrustableDomain, trustableDomain_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequestWeComConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
      DARABONBA_PTR_FROM_JSON(CorpSecret, corpSecret_);
      DARABONBA_PTR_FROM_JSON(TrustableDomain, trustableDomain_);
    };
    UpdateIdentityProviderRequestWeComConfig() = default ;
    UpdateIdentityProviderRequestWeComConfig(const UpdateIdentityProviderRequestWeComConfig &) = default ;
    UpdateIdentityProviderRequestWeComConfig(UpdateIdentityProviderRequestWeComConfig &&) = default ;
    UpdateIdentityProviderRequestWeComConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequestWeComConfig() = default ;
    UpdateIdentityProviderRequestWeComConfig& operator=(const UpdateIdentityProviderRequestWeComConfig &) = default ;
    UpdateIdentityProviderRequestWeComConfig& operator=(UpdateIdentityProviderRequestWeComConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->authorizeCallbackDomain_ == nullptr && return this->corpSecret_ == nullptr && return this->trustableDomain_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdateIdentityProviderRequestWeComConfig& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // authorizeCallbackDomain Field Functions 
    bool hasAuthorizeCallbackDomain() const { return this->authorizeCallbackDomain_ != nullptr;};
    void deleteAuthorizeCallbackDomain() { this->authorizeCallbackDomain_ = nullptr;};
    inline string authorizeCallbackDomain() const { DARABONBA_PTR_GET_DEFAULT(authorizeCallbackDomain_, "") };
    inline UpdateIdentityProviderRequestWeComConfig& setAuthorizeCallbackDomain(string authorizeCallbackDomain) { DARABONBA_PTR_SET_VALUE(authorizeCallbackDomain_, authorizeCallbackDomain) };


    // corpSecret Field Functions 
    bool hasCorpSecret() const { return this->corpSecret_ != nullptr;};
    void deleteCorpSecret() { this->corpSecret_ = nullptr;};
    inline string corpSecret() const { DARABONBA_PTR_GET_DEFAULT(corpSecret_, "") };
    inline UpdateIdentityProviderRequestWeComConfig& setCorpSecret(string corpSecret) { DARABONBA_PTR_SET_VALUE(corpSecret_, corpSecret) };


    // trustableDomain Field Functions 
    bool hasTrustableDomain() const { return this->trustableDomain_ != nullptr;};
    void deleteTrustableDomain() { this->trustableDomain_ = nullptr;};
    inline string trustableDomain() const { DARABONBA_PTR_GET_DEFAULT(trustableDomain_, "") };
    inline UpdateIdentityProviderRequestWeComConfig& setTrustableDomain(string trustableDomain) { DARABONBA_PTR_SET_VALUE(trustableDomain_, trustableDomain) };


  protected:
    // 企业微信自建应用的Id
    std::shared_ptr<string> agentId_ = nullptr;
    // 授权回调域
    std::shared_ptr<string> authorizeCallbackDomain_ = nullptr;
    // 企业微信自建应用的corpSecret
    std::shared_ptr<string> corpSecret_ = nullptr;
    // 可信域名
    std::shared_ptr<string> trustableDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
