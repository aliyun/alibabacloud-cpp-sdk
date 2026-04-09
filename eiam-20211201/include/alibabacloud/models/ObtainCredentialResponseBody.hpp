// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ObtainCredentialResponseBody() = default ;
    ObtainCredentialResponseBody(const ObtainCredentialResponseBody &) = default ;
    ObtainCredentialResponseBody(ObtainCredentialResponseBody &&) = default ;
    ObtainCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainCredentialResponseBody() = default ;
    ObtainCredentialResponseBody& operator=(const ObtainCredentialResponseBody &) = default ;
    ObtainCredentialResponseBody& operator=(ObtainCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Credential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credential& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CredentialContent, credentialContent_);
        DARABONBA_PTR_TO_JSON(CredentialCreationType, credentialCreationType_);
        DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
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
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Credential& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CredentialContent, credentialContent_);
        DARABONBA_PTR_FROM_JSON(CredentialCreationType, credentialCreationType_);
        DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
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
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Credential() = default ;
      Credential(const Credential &) = default ;
      Credential(Credential &&) = default ;
      Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credential() = default ;
      Credential& operator=(const Credential &) = default ;
      Credential& operator=(Credential &&) = default ;
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
          // OAuth协议的client_id
          shared_ptr<string> clientId_ {};
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
        shared_ptr<CredentialContent::ApiKeyContent> apiKeyContent_ {};
        // OAuth客户端认证凭证类型的凭据内容。
        shared_ptr<CredentialContent::OAuthClientContent> OAuthClientContent_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->credentialContent_ == nullptr && this->credentialCreationType_ == nullptr && this->credentialId_ == nullptr && this->credentialIdentifier_ == nullptr && this->credentialName_ == nullptr
        && this->credentialScenarioLabel_ == nullptr && this->credentialSharingScope_ == nullptr && this->credentialSubjectId_ == nullptr && this->credentialSubjectType_ == nullptr && this->credentialType_ == nullptr
        && this->description_ == nullptr && this->exclusiveUserId_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Credential& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialContent Field Functions 
      bool hasCredentialContent() const { return this->credentialContent_ != nullptr;};
      void deleteCredentialContent() { this->credentialContent_ = nullptr;};
      inline const Credential::CredentialContent & getCredentialContent() const { DARABONBA_PTR_GET_CONST(credentialContent_, Credential::CredentialContent) };
      inline Credential::CredentialContent getCredentialContent() { DARABONBA_PTR_GET(credentialContent_, Credential::CredentialContent) };
      inline Credential& setCredentialContent(const Credential::CredentialContent & credentialContent) { DARABONBA_PTR_SET_VALUE(credentialContent_, credentialContent) };
      inline Credential& setCredentialContent(Credential::CredentialContent && credentialContent) { DARABONBA_PTR_SET_RVALUE(credentialContent_, credentialContent) };


      // credentialCreationType Field Functions 
      bool hasCredentialCreationType() const { return this->credentialCreationType_ != nullptr;};
      void deleteCredentialCreationType() { this->credentialCreationType_ = nullptr;};
      inline string getCredentialCreationType() const { DARABONBA_PTR_GET_DEFAULT(credentialCreationType_, "") };
      inline Credential& setCredentialCreationType(string credentialCreationType) { DARABONBA_PTR_SET_VALUE(credentialCreationType_, credentialCreationType) };


      // credentialId Field Functions 
      bool hasCredentialId() const { return this->credentialId_ != nullptr;};
      void deleteCredentialId() { this->credentialId_ = nullptr;};
      inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
      inline Credential& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


      // credentialIdentifier Field Functions 
      bool hasCredentialIdentifier() const { return this->credentialIdentifier_ != nullptr;};
      void deleteCredentialIdentifier() { this->credentialIdentifier_ = nullptr;};
      inline string getCredentialIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialIdentifier_, "") };
      inline Credential& setCredentialIdentifier(string credentialIdentifier) { DARABONBA_PTR_SET_VALUE(credentialIdentifier_, credentialIdentifier) };


      // credentialName Field Functions 
      bool hasCredentialName() const { return this->credentialName_ != nullptr;};
      void deleteCredentialName() { this->credentialName_ = nullptr;};
      inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
      inline Credential& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


      // credentialScenarioLabel Field Functions 
      bool hasCredentialScenarioLabel() const { return this->credentialScenarioLabel_ != nullptr;};
      void deleteCredentialScenarioLabel() { this->credentialScenarioLabel_ = nullptr;};
      inline string getCredentialScenarioLabel() const { DARABONBA_PTR_GET_DEFAULT(credentialScenarioLabel_, "") };
      inline Credential& setCredentialScenarioLabel(string credentialScenarioLabel) { DARABONBA_PTR_SET_VALUE(credentialScenarioLabel_, credentialScenarioLabel) };


      // credentialSharingScope Field Functions 
      bool hasCredentialSharingScope() const { return this->credentialSharingScope_ != nullptr;};
      void deleteCredentialSharingScope() { this->credentialSharingScope_ = nullptr;};
      inline string getCredentialSharingScope() const { DARABONBA_PTR_GET_DEFAULT(credentialSharingScope_, "") };
      inline Credential& setCredentialSharingScope(string credentialSharingScope) { DARABONBA_PTR_SET_VALUE(credentialSharingScope_, credentialSharingScope) };


      // credentialSubjectId Field Functions 
      bool hasCredentialSubjectId() const { return this->credentialSubjectId_ != nullptr;};
      void deleteCredentialSubjectId() { this->credentialSubjectId_ = nullptr;};
      inline string getCredentialSubjectId() const { DARABONBA_PTR_GET_DEFAULT(credentialSubjectId_, "") };
      inline Credential& setCredentialSubjectId(string credentialSubjectId) { DARABONBA_PTR_SET_VALUE(credentialSubjectId_, credentialSubjectId) };


      // credentialSubjectType Field Functions 
      bool hasCredentialSubjectType() const { return this->credentialSubjectType_ != nullptr;};
      void deleteCredentialSubjectType() { this->credentialSubjectType_ = nullptr;};
      inline string getCredentialSubjectType() const { DARABONBA_PTR_GET_DEFAULT(credentialSubjectType_, "") };
      inline Credential& setCredentialSubjectType(string credentialSubjectType) { DARABONBA_PTR_SET_VALUE(credentialSubjectType_, credentialSubjectType) };


      // credentialType Field Functions 
      bool hasCredentialType() const { return this->credentialType_ != nullptr;};
      void deleteCredentialType() { this->credentialType_ = nullptr;};
      inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
      inline Credential& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Credential& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // exclusiveUserId Field Functions 
      bool hasExclusiveUserId() const { return this->exclusiveUserId_ != nullptr;};
      void deleteExclusiveUserId() { this->exclusiveUserId_ = nullptr;};
      inline string getExclusiveUserId() const { DARABONBA_PTR_GET_DEFAULT(exclusiveUserId_, "") };
      inline Credential& setExclusiveUserId(string exclusiveUserId) { DARABONBA_PTR_SET_VALUE(exclusiveUserId_, exclusiveUserId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Credential& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Credential& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Credential& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 云角色创建时间
      shared_ptr<int64_t> createTime_ {};
      // 凭据的内容。
      shared_ptr<Credential::CredentialContent> credentialContent_ {};
      // 凭据的创建类型。
      shared_ptr<string> credentialCreationType_ {};
      // 凭据ID。
      shared_ptr<string> credentialId_ {};
      // 凭据标识
      shared_ptr<string> credentialIdentifier_ {};
      // 凭据名称
      shared_ptr<string> credentialName_ {};
      // 凭据的使用场景标签。
      shared_ptr<string> credentialScenarioLabel_ {};
      shared_ptr<string> credentialSharingScope_ {};
      // 凭据所属的主体ID。
      shared_ptr<string> credentialSubjectId_ {};
      // 凭据所属的主体类型。
      shared_ptr<string> credentialSubjectType_ {};
      // 凭据类型。
      shared_ptr<string> credentialType_ {};
      // 描述
      shared_ptr<string> description_ {};
      shared_ptr<string> exclusiveUserId_ {};
      // EIAM实例ID。
      shared_ptr<string> instanceId_ {};
      // 凭据状态
      shared_ptr<string> status_ {};
      // 云角色更新时间
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->credential_ == nullptr
        && this->requestId_ == nullptr; };
    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const ObtainCredentialResponseBody::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, ObtainCredentialResponseBody::Credential) };
    inline ObtainCredentialResponseBody::Credential getCredential() { DARABONBA_PTR_GET(credential_, ObtainCredentialResponseBody::Credential) };
    inline ObtainCredentialResponseBody& setCredential(const ObtainCredentialResponseBody::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline ObtainCredentialResponseBody& setCredential(ObtainCredentialResponseBody::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ObtainCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ObtainCredentialResponseBody::Credential> credential_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
