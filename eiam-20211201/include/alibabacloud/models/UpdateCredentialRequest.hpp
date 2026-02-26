// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CredentialContent, credentialContent_);
      DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(CredentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CredentialContent, credentialContent_);
      DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(CredentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateCredentialRequest() = default ;
    UpdateCredentialRequest(const UpdateCredentialRequest &) = default ;
    UpdateCredentialRequest(UpdateCredentialRequest &&) = default ;
    UpdateCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialRequest() = default ;
    UpdateCredentialRequest& operator=(const UpdateCredentialRequest &) = default ;
    UpdateCredentialRequest& operator=(UpdateCredentialRequest &&) = default ;
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
        // OAuth协议的client_id。
        shared_ptr<string> clientId_ {};
        // OAuth协议的client_secret。
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
        // API Key 凭证类型的凭据内容。
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
      // Api Key的内容。
      shared_ptr<CredentialContent::ApiKeyContent> apiKeyContent_ {};
      // OAuth客户端认证凭证类型的凭据内容。
      shared_ptr<CredentialContent::OAuthClientContent> OAuthClientContent_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->credentialContent_ == nullptr && this->credentialId_ == nullptr && this->credentialName_ == nullptr && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCredentialRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credentialContent Field Functions 
    bool hasCredentialContent() const { return this->credentialContent_ != nullptr;};
    void deleteCredentialContent() { this->credentialContent_ = nullptr;};
    inline const UpdateCredentialRequest::CredentialContent & getCredentialContent() const { DARABONBA_PTR_GET_CONST(credentialContent_, UpdateCredentialRequest::CredentialContent) };
    inline UpdateCredentialRequest::CredentialContent getCredentialContent() { DARABONBA_PTR_GET(credentialContent_, UpdateCredentialRequest::CredentialContent) };
    inline UpdateCredentialRequest& setCredentialContent(const UpdateCredentialRequest::CredentialContent & credentialContent) { DARABONBA_PTR_SET_VALUE(credentialContent_, credentialContent) };
    inline UpdateCredentialRequest& setCredentialContent(UpdateCredentialRequest::CredentialContent && credentialContent) { DARABONBA_PTR_SET_RVALUE(credentialContent_, credentialContent) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline UpdateCredentialRequest& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline UpdateCredentialRequest& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // 凭据的内容。
    shared_ptr<UpdateCredentialRequest::CredentialContent> credentialContent_ {};
    // 凭据ID。
    // 
    // This parameter is required.
    shared_ptr<string> credentialId_ {};
    // 凭据名称。
    shared_ptr<string> credentialName_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
