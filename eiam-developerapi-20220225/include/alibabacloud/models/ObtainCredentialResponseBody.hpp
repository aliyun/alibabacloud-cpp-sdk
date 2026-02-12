// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ObtainCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(credentialContent, credentialContent_);
      DARABONBA_PTR_TO_JSON(credentialCreationType, credentialCreationType_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(credentialIdentifier, credentialIdentifier_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(credentialScenarioLabel, credentialScenarioLabel_);
      DARABONBA_PTR_TO_JSON(credentialSubjectId, credentialSubjectId_);
      DARABONBA_PTR_TO_JSON(credentialSubjectType, credentialSubjectType_);
      DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(credentialContent, credentialContent_);
      DARABONBA_PTR_FROM_JSON(credentialCreationType, credentialCreationType_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(credentialIdentifier, credentialIdentifier_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(credentialScenarioLabel, credentialScenarioLabel_);
      DARABONBA_PTR_FROM_JSON(credentialSubjectId, credentialSubjectId_);
      DARABONBA_PTR_FROM_JSON(credentialSubjectType, credentialSubjectType_);
      DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
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
    class CredentialContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CredentialContent& obj) { 
        DARABONBA_PTR_TO_JSON(apiKeyContent, apiKeyContent_);
        DARABONBA_PTR_TO_JSON(oauthClientContent, oauthClientContent_);
      };
      friend void from_json(const Darabonba::Json& j, CredentialContent& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyContent, apiKeyContent_);
        DARABONBA_PTR_FROM_JSON(oauthClientContent, oauthClientContent_);
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
      class OauthClientContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OauthClientContent& obj) { 
          DARABONBA_PTR_TO_JSON(clientId, clientId_);
          DARABONBA_PTR_TO_JSON(clientSecret, clientSecret_);
        };
        friend void from_json(const Darabonba::Json& j, OauthClientContent& obj) { 
          DARABONBA_PTR_FROM_JSON(clientId, clientId_);
          DARABONBA_PTR_FROM_JSON(clientSecret, clientSecret_);
        };
        OauthClientContent() = default ;
        OauthClientContent(const OauthClientContent &) = default ;
        OauthClientContent(OauthClientContent &&) = default ;
        OauthClientContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OauthClientContent() = default ;
        OauthClientContent& operator=(const OauthClientContent &) = default ;
        OauthClientContent& operator=(OauthClientContent &&) = default ;
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
        inline OauthClientContent& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // clientSecret Field Functions 
        bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
        void deleteClientSecret() { this->clientSecret_ = nullptr;};
        inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
        inline OauthClientContent& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      protected:
        // OAuth协议的client_id
        shared_ptr<string> clientId_ {};
        shared_ptr<string> clientSecret_ {};
      };

      class ApiKeyContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiKeyContent& obj) { 
          DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        };
        friend void from_json(const Darabonba::Json& j, ApiKeyContent& obj) { 
          DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
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
        && this->oauthClientContent_ == nullptr; };
      // apiKeyContent Field Functions 
      bool hasApiKeyContent() const { return this->apiKeyContent_ != nullptr;};
      void deleteApiKeyContent() { this->apiKeyContent_ = nullptr;};
      inline const CredentialContent::ApiKeyContent & getApiKeyContent() const { DARABONBA_PTR_GET_CONST(apiKeyContent_, CredentialContent::ApiKeyContent) };
      inline CredentialContent::ApiKeyContent getApiKeyContent() { DARABONBA_PTR_GET(apiKeyContent_, CredentialContent::ApiKeyContent) };
      inline CredentialContent& setApiKeyContent(const CredentialContent::ApiKeyContent & apiKeyContent) { DARABONBA_PTR_SET_VALUE(apiKeyContent_, apiKeyContent) };
      inline CredentialContent& setApiKeyContent(CredentialContent::ApiKeyContent && apiKeyContent) { DARABONBA_PTR_SET_RVALUE(apiKeyContent_, apiKeyContent) };


      // oauthClientContent Field Functions 
      bool hasOauthClientContent() const { return this->oauthClientContent_ != nullptr;};
      void deleteOauthClientContent() { this->oauthClientContent_ = nullptr;};
      inline const CredentialContent::OauthClientContent & getOauthClientContent() const { DARABONBA_PTR_GET_CONST(oauthClientContent_, CredentialContent::OauthClientContent) };
      inline CredentialContent::OauthClientContent getOauthClientContent() { DARABONBA_PTR_GET(oauthClientContent_, CredentialContent::OauthClientContent) };
      inline CredentialContent& setOauthClientContent(const CredentialContent::OauthClientContent & oauthClientContent) { DARABONBA_PTR_SET_VALUE(oauthClientContent_, oauthClientContent) };
      inline CredentialContent& setOauthClientContent(CredentialContent::OauthClientContent && oauthClientContent) { DARABONBA_PTR_SET_RVALUE(oauthClientContent_, oauthClientContent) };


    protected:
      shared_ptr<CredentialContent::ApiKeyContent> apiKeyContent_ {};
      // OAuth客户端认证凭证类型的凭据内容。
      shared_ptr<CredentialContent::OauthClientContent> oauthClientContent_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->credentialContent_ == nullptr && this->credentialCreationType_ == nullptr && this->credentialId_ == nullptr && this->credentialIdentifier_ == nullptr && this->credentialName_ == nullptr
        && this->credentialScenarioLabel_ == nullptr && this->credentialSubjectId_ == nullptr && this->credentialSubjectType_ == nullptr && this->credentialType_ == nullptr && this->description_ == nullptr
        && this->instanceId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ObtainCredentialResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // credentialContent Field Functions 
    bool hasCredentialContent() const { return this->credentialContent_ != nullptr;};
    void deleteCredentialContent() { this->credentialContent_ = nullptr;};
    inline const ObtainCredentialResponseBody::CredentialContent & getCredentialContent() const { DARABONBA_PTR_GET_CONST(credentialContent_, ObtainCredentialResponseBody::CredentialContent) };
    inline ObtainCredentialResponseBody::CredentialContent getCredentialContent() { DARABONBA_PTR_GET(credentialContent_, ObtainCredentialResponseBody::CredentialContent) };
    inline ObtainCredentialResponseBody& setCredentialContent(const ObtainCredentialResponseBody::CredentialContent & credentialContent) { DARABONBA_PTR_SET_VALUE(credentialContent_, credentialContent) };
    inline ObtainCredentialResponseBody& setCredentialContent(ObtainCredentialResponseBody::CredentialContent && credentialContent) { DARABONBA_PTR_SET_RVALUE(credentialContent_, credentialContent) };


    // credentialCreationType Field Functions 
    bool hasCredentialCreationType() const { return this->credentialCreationType_ != nullptr;};
    void deleteCredentialCreationType() { this->credentialCreationType_ = nullptr;};
    inline string getCredentialCreationType() const { DARABONBA_PTR_GET_DEFAULT(credentialCreationType_, "") };
    inline ObtainCredentialResponseBody& setCredentialCreationType(string credentialCreationType) { DARABONBA_PTR_SET_VALUE(credentialCreationType_, credentialCreationType) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline ObtainCredentialResponseBody& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialIdentifier Field Functions 
    bool hasCredentialIdentifier() const { return this->credentialIdentifier_ != nullptr;};
    void deleteCredentialIdentifier() { this->credentialIdentifier_ = nullptr;};
    inline string getCredentialIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialIdentifier_, "") };
    inline ObtainCredentialResponseBody& setCredentialIdentifier(string credentialIdentifier) { DARABONBA_PTR_SET_VALUE(credentialIdentifier_, credentialIdentifier) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline ObtainCredentialResponseBody& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // credentialScenarioLabel Field Functions 
    bool hasCredentialScenarioLabel() const { return this->credentialScenarioLabel_ != nullptr;};
    void deleteCredentialScenarioLabel() { this->credentialScenarioLabel_ = nullptr;};
    inline string getCredentialScenarioLabel() const { DARABONBA_PTR_GET_DEFAULT(credentialScenarioLabel_, "") };
    inline ObtainCredentialResponseBody& setCredentialScenarioLabel(string credentialScenarioLabel) { DARABONBA_PTR_SET_VALUE(credentialScenarioLabel_, credentialScenarioLabel) };


    // credentialSubjectId Field Functions 
    bool hasCredentialSubjectId() const { return this->credentialSubjectId_ != nullptr;};
    void deleteCredentialSubjectId() { this->credentialSubjectId_ = nullptr;};
    inline string getCredentialSubjectId() const { DARABONBA_PTR_GET_DEFAULT(credentialSubjectId_, "") };
    inline ObtainCredentialResponseBody& setCredentialSubjectId(string credentialSubjectId) { DARABONBA_PTR_SET_VALUE(credentialSubjectId_, credentialSubjectId) };


    // credentialSubjectType Field Functions 
    bool hasCredentialSubjectType() const { return this->credentialSubjectType_ != nullptr;};
    void deleteCredentialSubjectType() { this->credentialSubjectType_ = nullptr;};
    inline string getCredentialSubjectType() const { DARABONBA_PTR_GET_DEFAULT(credentialSubjectType_, "") };
    inline ObtainCredentialResponseBody& setCredentialSubjectType(string credentialSubjectType) { DARABONBA_PTR_SET_VALUE(credentialSubjectType_, credentialSubjectType) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline ObtainCredentialResponseBody& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ObtainCredentialResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ObtainCredentialResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ObtainCredentialResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ObtainCredentialResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // 云角色创建时间
    shared_ptr<int64_t> createTime_ {};
    // 凭据的内容。
    shared_ptr<ObtainCredentialResponseBody::CredentialContent> credentialContent_ {};
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
    // 凭据所属的主体ID。
    shared_ptr<string> credentialSubjectId_ {};
    // 凭据所属的主体类型。
    shared_ptr<string> credentialSubjectType_ {};
    // 凭据类型。
    shared_ptr<string> credentialType_ {};
    // 描述
    shared_ptr<string> description_ {};
    // EIAM实例ID。
    shared_ptr<string> instanceId_ {};
    // 凭据状态
    shared_ptr<string> status_ {};
    // 云角色更新时间
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
