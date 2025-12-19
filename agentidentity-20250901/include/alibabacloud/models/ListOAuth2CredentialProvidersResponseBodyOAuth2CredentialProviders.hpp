// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOAUTH2CREDENTIALPROVIDERSRESPONSEBODYOAUTH2CREDENTIALPROVIDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTOAUTH2CREDENTIALPROVIDERSRESPONSEBODYOAUTH2CREDENTIALPROVIDERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OAuth2ProviderConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CredentialProviderArn, credentialProviderArn_);
      DARABONBA_PTR_TO_JSON(CredentialProviderVendor, credentialProviderVendor_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
      DARABONBA_PTR_TO_JSON(OAuth2ProviderConfig, OAuth2ProviderConfig_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderArn, credentialProviderArn_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderVendor, credentialProviderVendor_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(OAuth2ProviderConfig, OAuth2ProviderConfig_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders() = default ;
    ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders(const ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders &) = default ;
    ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders(ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders &&) = default ;
    ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders() = default ;
    ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& operator=(const ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders &) = default ;
    ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& operator=(ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackURL_ == nullptr
        && return this->createTime_ == nullptr && return this->credentialProviderArn_ == nullptr && return this->credentialProviderVendor_ == nullptr && return this->description_ == nullptr && return this->OAuth2CredentialProviderName_ == nullptr
        && return this->OAuth2ProviderConfig_ == nullptr && return this->updateTime_ == nullptr; };
    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // credentialProviderArn Field Functions 
    bool hasCredentialProviderArn() const { return this->credentialProviderArn_ != nullptr;};
    void deleteCredentialProviderArn() { this->credentialProviderArn_ = nullptr;};
    inline string credentialProviderArn() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderArn_, "") };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setCredentialProviderArn(string credentialProviderArn) { DARABONBA_PTR_SET_VALUE(credentialProviderArn_, credentialProviderArn) };


    // credentialProviderVendor Field Functions 
    bool hasCredentialProviderVendor() const { return this->credentialProviderVendor_ != nullptr;};
    void deleteCredentialProviderVendor() { this->credentialProviderVendor_ = nullptr;};
    inline string credentialProviderVendor() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderVendor_, "") };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setCredentialProviderVendor(string credentialProviderVendor) { DARABONBA_PTR_SET_VALUE(credentialProviderVendor_, credentialProviderVendor) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // OAuth2CredentialProviderName Field Functions 
    bool hasOAuth2CredentialProviderName() const { return this->OAuth2CredentialProviderName_ != nullptr;};
    void deleteOAuth2CredentialProviderName() { this->OAuth2CredentialProviderName_ = nullptr;};
    inline string OAuth2CredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(OAuth2CredentialProviderName_, "") };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setOAuth2CredentialProviderName(string OAuth2CredentialProviderName) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProviderName_, OAuth2CredentialProviderName) };


    // OAuth2ProviderConfig Field Functions 
    bool hasOAuth2ProviderConfig() const { return this->OAuth2ProviderConfig_ != nullptr;};
    void deleteOAuth2ProviderConfig() { this->OAuth2ProviderConfig_ = nullptr;};
    inline const Models::OAuth2ProviderConfig & OAuth2ProviderConfig() const { DARABONBA_PTR_GET_CONST(OAuth2ProviderConfig_, Models::OAuth2ProviderConfig) };
    inline Models::OAuth2ProviderConfig OAuth2ProviderConfig() { DARABONBA_PTR_GET(OAuth2ProviderConfig_, Models::OAuth2ProviderConfig) };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setOAuth2ProviderConfig(const Models::OAuth2ProviderConfig & OAuth2ProviderConfig) { DARABONBA_PTR_SET_VALUE(OAuth2ProviderConfig_, OAuth2ProviderConfig) };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setOAuth2ProviderConfig(Models::OAuth2ProviderConfig && OAuth2ProviderConfig) { DARABONBA_PTR_SET_RVALUE(OAuth2ProviderConfig_, OAuth2ProviderConfig) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> callbackURL_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> credentialProviderArn_ = nullptr;
    std::shared_ptr<string> credentialProviderVendor_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> OAuth2CredentialProviderName_ = nullptr;
    std::shared_ptr<Models::OAuth2ProviderConfig> OAuth2ProviderConfig_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
