// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CredentialContent, credentialContent_);
      DARABONBA_PTR_TO_JSON(CredentialExternalId, credentialExternalId_);
      DARABONBA_PTR_TO_JSON(CredentialIdentifier, credentialIdentifier_);
      DARABONBA_PTR_TO_JSON(CredentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(CredentialScenarioLabel, credentialScenarioLabel_);
      DARABONBA_PTR_TO_JSON(CredentialSharingScope, credentialSharingScope_);
      DARABONBA_PTR_TO_JSON(CredentialSubjectId, credentialSubjectId_);
      DARABONBA_PTR_TO_JSON(CredentialSubjectType, credentialSubjectType_);
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExclusiveUserId, exclusiveUserId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CredentialContent, credentialContent_);
      DARABONBA_PTR_FROM_JSON(CredentialExternalId, credentialExternalId_);
      DARABONBA_PTR_FROM_JSON(CredentialIdentifier, credentialIdentifier_);
      DARABONBA_PTR_FROM_JSON(CredentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(CredentialScenarioLabel, credentialScenarioLabel_);
      DARABONBA_PTR_FROM_JSON(CredentialSharingScope, credentialSharingScope_);
      DARABONBA_PTR_FROM_JSON(CredentialSubjectId, credentialSubjectId_);
      DARABONBA_PTR_FROM_JSON(CredentialSubjectType, credentialSubjectType_);
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExclusiveUserId, exclusiveUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateCredentialRequest() = default ;
    CreateCredentialRequest(const CreateCredentialRequest &) = default ;
    CreateCredentialRequest(CreateCredentialRequest &&) = default ;
    CreateCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialRequest() = default ;
    CreateCredentialRequest& operator=(const CreateCredentialRequest &) = default ;
    CreateCredentialRequest& operator=(CreateCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CredentialContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CredentialContent& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKeyContent, apiKeyContent_);
        DARABONBA_PTR_TO_JSON(OAuthClientContent, OAuthClientContent_);
      };
      friend void from_json(const Darabonba::Json& j, CredentialContent& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKeyContent, apiKeyContent_);
        DARABONBA_PTR_FROM_JSON(OAuthClientContent, OAuthClientContent_);
      };
      CredentialContent() = default ;
      CredentialContent(const CredentialContent &) = default ;
      CredentialContent(CredentialContent &&) = default ;
      CredentialContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CredentialContent() = default ;
      CredentialContent& operator=(const CredentialContent &) = default ;
      CredentialContent& operator=(CredentialContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OAuthClientContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OAuthClientContent& obj) { 
          DARABONBA_PTR_TO_JSON(ClientId, clientId_);
          DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        };
        friend void from_json(const Darabonba::Json& j, OAuthClientContent& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        };
        OAuthClientContent() = default ;
        OAuthClientContent(const OAuthClientContent &) = default ;
        OAuthClientContent(OAuthClientContent &&) = default ;
        OAuthClientContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OAuthClientContent() = default ;
        OAuthClientContent& operator=(const OAuthClientContent &) = default ;
        OAuthClientContent& operator=(OAuthClientContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientSecret_ == nullptr; };
        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline OAuthClientContent& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // clientSecret Field Functions 
        bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
        void deleteClientSecret() { this->clientSecret_ = nullptr;};
        inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
        inline OAuthClientContent& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      protected:
        // The client_id of the OAuth protocol.
        shared_ptr<string> clientId_ {};
        // The client_secret of the OAuth protocol.
        shared_ptr<string> clientSecret_ {};
      };

      class ApiKeyContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiKeyContent& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        };
        friend void from_json(const Darabonba::Json& j, ApiKeyContent& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        };
        ApiKeyContent() = default ;
        ApiKeyContent(const ApiKeyContent &) = default ;
        ApiKeyContent(ApiKeyContent &&) = default ;
        ApiKeyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiKeyContent() = default ;
        ApiKeyContent& operator=(const ApiKeyContent &) = default ;
        ApiKeyContent& operator=(ApiKeyContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline ApiKeyContent& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      protected:
        // The API key content.
        shared_ptr<string> apiKey_ {};
      };

      virtual bool empty() const override { return this->apiKeyContent_ == nullptr
        && this->OAuthClientContent_ == nullptr; };
      // apiKeyContent Field Functions 
      bool hasApiKeyContent() const { return this->apiKeyContent_ != nullptr;};
      void deleteApiKeyContent() { this->apiKeyContent_ = nullptr;};
      inline const CredentialContent::ApiKeyContent & getApiKeyContent() const { DARABONBA_PTR_GET_CONST(apiKeyContent_, CredentialContent::ApiKeyContent) };
      inline CredentialContent::ApiKeyContent getApiKeyContent() { DARABONBA_PTR_GET(apiKeyContent_, CredentialContent::ApiKeyContent) };
      inline CredentialContent& setApiKeyContent(const CredentialContent::ApiKeyContent & apiKeyContent) { DARABONBA_PTR_SET_VALUE(apiKeyContent_, apiKeyContent) };
      inline CredentialContent& setApiKeyContent(CredentialContent::ApiKeyContent && apiKeyContent) { DARABONBA_PTR_SET_RVALUE(apiKeyContent_, apiKeyContent) };


      // OAuthClientContent Field Functions 
      bool hasOAuthClientContent() const { return this->OAuthClientContent_ != nullptr;};
      void deleteOAuthClientContent() { this->OAuthClientContent_ = nullptr;};
      inline const CredentialContent::OAuthClientContent & getOAuthClientContent() const { DARABONBA_PTR_GET_CONST(OAuthClientContent_, CredentialContent::OAuthClientContent) };
      inline CredentialContent::OAuthClientContent getOAuthClientContent() { DARABONBA_PTR_GET(OAuthClientContent_, CredentialContent::OAuthClientContent) };
      inline CredentialContent& setOAuthClientContent(const CredentialContent::OAuthClientContent & oAuthClientContent) { DARABONBA_PTR_SET_VALUE(OAuthClientContent_, oAuthClientContent) };
      inline CredentialContent& setOAuthClientContent(CredentialContent::OAuthClientContent && oAuthClientContent) { DARABONBA_PTR_SET_RVALUE(OAuthClientContent_, oAuthClientContent) };


    protected:
      // The credential content of the API key credential type.
      shared_ptr<CredentialContent::ApiKeyContent> apiKeyContent_ {};
      // The credential content of the OAuth client authentication credential type.
      shared_ptr<CredentialContent::OAuthClientContent> OAuthClientContent_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->credentialContent_ == nullptr && this->credentialExternalId_ == nullptr && this->credentialIdentifier_ == nullptr && this->credentialName_ == nullptr && this->credentialScenarioLabel_ == nullptr
        && this->credentialSharingScope_ == nullptr && this->credentialSubjectId_ == nullptr && this->credentialSubjectType_ == nullptr && this->credentialType_ == nullptr && this->description_ == nullptr
        && this->exclusiveUserId_ == nullptr && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCredentialRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credentialContent Field Functions 
    bool hasCredentialContent() const { return this->credentialContent_ != nullptr;};
    void deleteCredentialContent() { this->credentialContent_ = nullptr;};
    inline const CreateCredentialRequest::CredentialContent & getCredentialContent() const { DARABONBA_PTR_GET_CONST(credentialContent_, CreateCredentialRequest::CredentialContent) };
    inline CreateCredentialRequest::CredentialContent getCredentialContent() { DARABONBA_PTR_GET(credentialContent_, CreateCredentialRequest::CredentialContent) };
    inline CreateCredentialRequest& setCredentialContent(const CreateCredentialRequest::CredentialContent & credentialContent) { DARABONBA_PTR_SET_VALUE(credentialContent_, credentialContent) };
    inline CreateCredentialRequest& setCredentialContent(CreateCredentialRequest::CredentialContent && credentialContent) { DARABONBA_PTR_SET_RVALUE(credentialContent_, credentialContent) };


    // credentialExternalId Field Functions 
    bool hasCredentialExternalId() const { return this->credentialExternalId_ != nullptr;};
    void deleteCredentialExternalId() { this->credentialExternalId_ = nullptr;};
    inline string getCredentialExternalId() const { DARABONBA_PTR_GET_DEFAULT(credentialExternalId_, "") };
    inline CreateCredentialRequest& setCredentialExternalId(string credentialExternalId) { DARABONBA_PTR_SET_VALUE(credentialExternalId_, credentialExternalId) };


    // credentialIdentifier Field Functions 
    bool hasCredentialIdentifier() const { return this->credentialIdentifier_ != nullptr;};
    void deleteCredentialIdentifier() { this->credentialIdentifier_ = nullptr;};
    inline string getCredentialIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialIdentifier_, "") };
    inline CreateCredentialRequest& setCredentialIdentifier(string credentialIdentifier) { DARABONBA_PTR_SET_VALUE(credentialIdentifier_, credentialIdentifier) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateCredentialRequest& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // credentialScenarioLabel Field Functions 
    bool hasCredentialScenarioLabel() const { return this->credentialScenarioLabel_ != nullptr;};
    void deleteCredentialScenarioLabel() { this->credentialScenarioLabel_ = nullptr;};
    inline string getCredentialScenarioLabel() const { DARABONBA_PTR_GET_DEFAULT(credentialScenarioLabel_, "") };
    inline CreateCredentialRequest& setCredentialScenarioLabel(string credentialScenarioLabel) { DARABONBA_PTR_SET_VALUE(credentialScenarioLabel_, credentialScenarioLabel) };


    // credentialSharingScope Field Functions 
    bool hasCredentialSharingScope() const { return this->credentialSharingScope_ != nullptr;};
    void deleteCredentialSharingScope() { this->credentialSharingScope_ = nullptr;};
    inline string getCredentialSharingScope() const { DARABONBA_PTR_GET_DEFAULT(credentialSharingScope_, "") };
    inline CreateCredentialRequest& setCredentialSharingScope(string credentialSharingScope) { DARABONBA_PTR_SET_VALUE(credentialSharingScope_, credentialSharingScope) };


    // credentialSubjectId Field Functions 
    bool hasCredentialSubjectId() const { return this->credentialSubjectId_ != nullptr;};
    void deleteCredentialSubjectId() { this->credentialSubjectId_ = nullptr;};
    inline string getCredentialSubjectId() const { DARABONBA_PTR_GET_DEFAULT(credentialSubjectId_, "") };
    inline CreateCredentialRequest& setCredentialSubjectId(string credentialSubjectId) { DARABONBA_PTR_SET_VALUE(credentialSubjectId_, credentialSubjectId) };


    // credentialSubjectType Field Functions 
    bool hasCredentialSubjectType() const { return this->credentialSubjectType_ != nullptr;};
    void deleteCredentialSubjectType() { this->credentialSubjectType_ = nullptr;};
    inline string getCredentialSubjectType() const { DARABONBA_PTR_GET_DEFAULT(credentialSubjectType_, "") };
    inline CreateCredentialRequest& setCredentialSubjectType(string credentialSubjectType) { DARABONBA_PTR_SET_VALUE(credentialSubjectType_, credentialSubjectType) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline CreateCredentialRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCredentialRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exclusiveUserId Field Functions 
    bool hasExclusiveUserId() const { return this->exclusiveUserId_ != nullptr;};
    void deleteExclusiveUserId() { this->exclusiveUserId_ = nullptr;};
    inline string getExclusiveUserId() const { DARABONBA_PTR_GET_DEFAULT(exclusiveUserId_, "") };
    inline CreateCredentialRequest& setExclusiveUserId(string exclusiveUserId) { DARABONBA_PTR_SET_VALUE(exclusiveUserId_, exclusiveUserId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken parameter supports only ASCII characters and cannot exceed 64 characters in length. For more information, see References: [How to ensure idempotence](https://www.alibabacloud.com/help/zh/ecs/developer-reference/how-to-ensure-idempotence).
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The credential content.
    // 
    // This parameter is required.
    shared_ptr<CreateCredentialRequest::CredentialContent> credentialContent_ {};
    shared_ptr<string> credentialExternalId_ {};
    // The credential identifier.
    // 
    // This parameter is required.
    shared_ptr<string> credentialIdentifier_ {};
    // The credential name.
    // 
    // This parameter is required.
    shared_ptr<string> credentialName_ {};
    // The Scenarios label of the credential. Valid values:
    // - llm: large language model.
    // - saas: third-party SaaS service.
    shared_ptr<string> credentialScenarioLabel_ {};
    shared_ptr<string> credentialSharingScope_ {};
    // The subject ID of the credential.
    shared_ptr<string> credentialSubjectId_ {};
    // The subject type of the credential. Valid values:
    // - authentication_token_provider: authentication token provider.
    shared_ptr<string> credentialSubjectType_ {};
    // The credential type. Valid values:
    // - api_key: API key authentication credential.
    // - oauth_client: OAuth client authentication credential.
    // 
    // This parameter is required.
    shared_ptr<string> credentialType_ {};
    // The credential description.
    shared_ptr<string> description_ {};
    shared_ptr<string> exclusiveUserId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
