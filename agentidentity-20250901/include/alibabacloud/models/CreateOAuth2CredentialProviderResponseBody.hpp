// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOAUTH2CREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOAUTH2CREDENTIALPROVIDERRESPONSEBODY_HPP_
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
  class CreateOAuth2CredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOAuth2CredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OAuth2CredentialProvider, OAuth2CredentialProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOAuth2CredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OAuth2CredentialProvider, OAuth2CredentialProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOAuth2CredentialProviderResponseBody() = default ;
    CreateOAuth2CredentialProviderResponseBody(const CreateOAuth2CredentialProviderResponseBody &) = default ;
    CreateOAuth2CredentialProviderResponseBody(CreateOAuth2CredentialProviderResponseBody &&) = default ;
    CreateOAuth2CredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOAuth2CredentialProviderResponseBody() = default ;
    CreateOAuth2CredentialProviderResponseBody& operator=(const CreateOAuth2CredentialProviderResponseBody &) = default ;
    CreateOAuth2CredentialProviderResponseBody& operator=(CreateOAuth2CredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OAuth2CredentialProvider : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OAuth2CredentialProvider& obj) { 
        DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CredentialProviderArn, credentialProviderArn_);
        DARABONBA_PTR_TO_JSON(CredentialProviderVendor, credentialProviderVendor_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
        DARABONBA_PTR_TO_JSON(OAuth2ProviderConfig, OAuth2ProviderConfig_);
        DARABONBA_PTR_TO_JSON(OAuthType, OAuthType_);
        DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, OAuth2CredentialProvider& obj) { 
        DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderArn, credentialProviderArn_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderVendor, credentialProviderVendor_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
        DARABONBA_PTR_FROM_JSON(OAuth2ProviderConfig, OAuth2ProviderConfig_);
        DARABONBA_PTR_FROM_JSON(OAuthType, OAuthType_);
        DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      OAuth2CredentialProvider() = default ;
      OAuth2CredentialProvider(const OAuth2CredentialProvider &) = default ;
      OAuth2CredentialProvider(OAuth2CredentialProvider &&) = default ;
      OAuth2CredentialProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OAuth2CredentialProvider() = default ;
      OAuth2CredentialProvider& operator=(const OAuth2CredentialProvider &) = default ;
      OAuth2CredentialProvider& operator=(OAuth2CredentialProvider &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callbackURL_ == nullptr
        && this->createTime_ == nullptr && this->credentialProviderArn_ == nullptr && this->credentialProviderVendor_ == nullptr && this->description_ == nullptr && this->OAuth2CredentialProviderName_ == nullptr
        && this->OAuth2ProviderConfig_ == nullptr && this->OAuthType_ == nullptr && this->tokenVaultName_ == nullptr && this->updateTime_ == nullptr; };
      // callbackURL Field Functions 
      bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
      void deleteCallbackURL() { this->callbackURL_ = nullptr;};
      inline string getCallbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
      inline OAuth2CredentialProvider& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline OAuth2CredentialProvider& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialProviderArn Field Functions 
      bool hasCredentialProviderArn() const { return this->credentialProviderArn_ != nullptr;};
      void deleteCredentialProviderArn() { this->credentialProviderArn_ = nullptr;};
      inline string getCredentialProviderArn() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderArn_, "") };
      inline OAuth2CredentialProvider& setCredentialProviderArn(string credentialProviderArn) { DARABONBA_PTR_SET_VALUE(credentialProviderArn_, credentialProviderArn) };


      // credentialProviderVendor Field Functions 
      bool hasCredentialProviderVendor() const { return this->credentialProviderVendor_ != nullptr;};
      void deleteCredentialProviderVendor() { this->credentialProviderVendor_ = nullptr;};
      inline string getCredentialProviderVendor() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderVendor_, "") };
      inline OAuth2CredentialProvider& setCredentialProviderVendor(string credentialProviderVendor) { DARABONBA_PTR_SET_VALUE(credentialProviderVendor_, credentialProviderVendor) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline OAuth2CredentialProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // OAuth2CredentialProviderName Field Functions 
      bool hasOAuth2CredentialProviderName() const { return this->OAuth2CredentialProviderName_ != nullptr;};
      void deleteOAuth2CredentialProviderName() { this->OAuth2CredentialProviderName_ = nullptr;};
      inline string getOAuth2CredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(OAuth2CredentialProviderName_, "") };
      inline OAuth2CredentialProvider& setOAuth2CredentialProviderName(string OAuth2CredentialProviderName) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProviderName_, OAuth2CredentialProviderName) };


      // OAuth2ProviderConfig Field Functions 
      bool hasOAuth2ProviderConfig() const { return this->OAuth2ProviderConfig_ != nullptr;};
      void deleteOAuth2ProviderConfig() { this->OAuth2ProviderConfig_ = nullptr;};
      inline const OAuth2ProviderConfig & getOAuth2ProviderConfig() const { DARABONBA_PTR_GET_CONST(OAuth2ProviderConfig_, OAuth2ProviderConfig) };
      inline OAuth2ProviderConfig getOAuth2ProviderConfig() { DARABONBA_PTR_GET(OAuth2ProviderConfig_, OAuth2ProviderConfig) };
      inline OAuth2CredentialProvider& setOAuth2ProviderConfig(const OAuth2ProviderConfig & OAuth2ProviderConfig) { DARABONBA_PTR_SET_VALUE(OAuth2ProviderConfig_, OAuth2ProviderConfig) };
      inline OAuth2CredentialProvider& setOAuth2ProviderConfig(OAuth2ProviderConfig && OAuth2ProviderConfig) { DARABONBA_PTR_SET_RVALUE(OAuth2ProviderConfig_, OAuth2ProviderConfig) };


      // OAuthType Field Functions 
      bool hasOAuthType() const { return this->OAuthType_ != nullptr;};
      void deleteOAuthType() { this->OAuthType_ = nullptr;};
      inline string getOAuthType() const { DARABONBA_PTR_GET_DEFAULT(OAuthType_, "") };
      inline OAuth2CredentialProvider& setOAuthType(string OAuthType) { DARABONBA_PTR_SET_VALUE(OAuthType_, OAuthType) };


      // tokenVaultName Field Functions 
      bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
      void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
      inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
      inline OAuth2CredentialProvider& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline OAuth2CredentialProvider& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> callbackURL_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> credentialProviderArn_ {};
      shared_ptr<string> credentialProviderVendor_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> OAuth2CredentialProviderName_ {};
      shared_ptr<OAuth2ProviderConfig> OAuth2ProviderConfig_ {};
      shared_ptr<string> OAuthType_ {};
      shared_ptr<string> tokenVaultName_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->OAuth2CredentialProvider_ == nullptr
        && this->requestId_ == nullptr; };
    // OAuth2CredentialProvider Field Functions 
    bool hasOAuth2CredentialProvider() const { return this->OAuth2CredentialProvider_ != nullptr;};
    void deleteOAuth2CredentialProvider() { this->OAuth2CredentialProvider_ = nullptr;};
    inline const CreateOAuth2CredentialProviderResponseBody::OAuth2CredentialProvider & getOAuth2CredentialProvider() const { DARABONBA_PTR_GET_CONST(OAuth2CredentialProvider_, CreateOAuth2CredentialProviderResponseBody::OAuth2CredentialProvider) };
    inline CreateOAuth2CredentialProviderResponseBody::OAuth2CredentialProvider getOAuth2CredentialProvider() { DARABONBA_PTR_GET(OAuth2CredentialProvider_, CreateOAuth2CredentialProviderResponseBody::OAuth2CredentialProvider) };
    inline CreateOAuth2CredentialProviderResponseBody& setOAuth2CredentialProvider(const CreateOAuth2CredentialProviderResponseBody::OAuth2CredentialProvider & oAuth2CredentialProvider) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProvider_, oAuth2CredentialProvider) };
    inline CreateOAuth2CredentialProviderResponseBody& setOAuth2CredentialProvider(CreateOAuth2CredentialProviderResponseBody::OAuth2CredentialProvider && oAuth2CredentialProvider) { DARABONBA_PTR_SET_RVALUE(OAuth2CredentialProvider_, oAuth2CredentialProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOAuth2CredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateOAuth2CredentialProviderResponseBody::OAuth2CredentialProvider> OAuth2CredentialProvider_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
