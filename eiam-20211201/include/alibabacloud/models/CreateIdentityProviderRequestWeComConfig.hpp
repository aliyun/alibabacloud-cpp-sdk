// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTWECOMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTWECOMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestWeComConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestWeComConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(CorpSecret, corpSecret_);
      DARABONBA_PTR_TO_JSON(TrustableDomain, trustableDomain_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestWeComConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(CorpSecret, corpSecret_);
      DARABONBA_PTR_FROM_JSON(TrustableDomain, trustableDomain_);
    };
    CreateIdentityProviderRequestWeComConfig() = default ;
    CreateIdentityProviderRequestWeComConfig(const CreateIdentityProviderRequestWeComConfig &) = default ;
    CreateIdentityProviderRequestWeComConfig(CreateIdentityProviderRequestWeComConfig &&) = default ;
    CreateIdentityProviderRequestWeComConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestWeComConfig() = default ;
    CreateIdentityProviderRequestWeComConfig& operator=(const CreateIdentityProviderRequestWeComConfig &) = default ;
    CreateIdentityProviderRequestWeComConfig& operator=(CreateIdentityProviderRequestWeComConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->authorizeCallbackDomain_ == nullptr && return this->corpId_ == nullptr && return this->corpSecret_ == nullptr && return this->trustableDomain_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateIdentityProviderRequestWeComConfig& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // authorizeCallbackDomain Field Functions 
    bool hasAuthorizeCallbackDomain() const { return this->authorizeCallbackDomain_ != nullptr;};
    void deleteAuthorizeCallbackDomain() { this->authorizeCallbackDomain_ = nullptr;};
    inline string authorizeCallbackDomain() const { DARABONBA_PTR_GET_DEFAULT(authorizeCallbackDomain_, "") };
    inline CreateIdentityProviderRequestWeComConfig& setAuthorizeCallbackDomain(string authorizeCallbackDomain) { DARABONBA_PTR_SET_VALUE(authorizeCallbackDomain_, authorizeCallbackDomain) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CreateIdentityProviderRequestWeComConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpSecret Field Functions 
    bool hasCorpSecret() const { return this->corpSecret_ != nullptr;};
    void deleteCorpSecret() { this->corpSecret_ = nullptr;};
    inline string corpSecret() const { DARABONBA_PTR_GET_DEFAULT(corpSecret_, "") };
    inline CreateIdentityProviderRequestWeComConfig& setCorpSecret(string corpSecret) { DARABONBA_PTR_SET_VALUE(corpSecret_, corpSecret) };


    // trustableDomain Field Functions 
    bool hasTrustableDomain() const { return this->trustableDomain_ != nullptr;};
    void deleteTrustableDomain() { this->trustableDomain_ = nullptr;};
    inline string trustableDomain() const { DARABONBA_PTR_GET_DEFAULT(trustableDomain_, "") };
    inline CreateIdentityProviderRequestWeComConfig& setTrustableDomain(string trustableDomain) { DARABONBA_PTR_SET_VALUE(trustableDomain_, trustableDomain) };


  protected:
    // Agent ID of the self-built WeCom application.
    std::shared_ptr<string> agentId_ = nullptr;
    // Authorization callback domain.
    std::shared_ptr<string> authorizeCallbackDomain_ = nullptr;
    // Corp ID of the self-built WeCom application.
    std::shared_ptr<string> corpId_ = nullptr;
    // Corp Secret of the self-built WeCom application.
    std::shared_ptr<string> corpSecret_ = nullptr;
    // Trusted domain.
    std::shared_ptr<string> trustableDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
