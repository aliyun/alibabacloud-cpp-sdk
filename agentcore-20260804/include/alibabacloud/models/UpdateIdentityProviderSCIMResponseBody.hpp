// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateIdentityProviderSCIMResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateIdentityProviderSCIMResponseBody() = default ;
    UpdateIdentityProviderSCIMResponseBody(const UpdateIdentityProviderSCIMResponseBody &) = default ;
    UpdateIdentityProviderSCIMResponseBody(UpdateIdentityProviderSCIMResponseBody &&) = default ;
    UpdateIdentityProviderSCIMResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderSCIMResponseBody() = default ;
    UpdateIdentityProviderSCIMResponseBody& operator=(const UpdateIdentityProviderSCIMResponseBody &) = default ;
    UpdateIdentityProviderSCIMResponseBody& operator=(UpdateIdentityProviderSCIMResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_TO_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_TO_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(operationStatus, operationStatus_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(saml, saml_);
        DARABONBA_PTR_TO_JSON(scimStatus, scimStatus_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(operationStatus, operationStatus_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(saml, saml_);
        DARABONBA_PTR_FROM_JSON(scimStatus, scimStatus_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Saml : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Saml& obj) { 
          DARABONBA_PTR_TO_JSON(bindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_TO_JSON(x509Certificates, x509Certificates_);
        };
        friend void from_json(const Darabonba::Json& j, Saml& obj) { 
          DARABONBA_PTR_FROM_JSON(bindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_FROM_JSON(x509Certificates, x509Certificates_);
        };
        Saml() = default ;
        Saml(const Saml &) = default ;
        Saml(Saml &&) = default ;
        Saml(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Saml() = default ;
        Saml& operator=(const Saml &) = default ;
        Saml& operator=(Saml &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->x509Certificates_ == nullptr; };
        // bindingType Field Functions 
        bool hasBindingType() const { return this->bindingType_ != nullptr;};
        void deleteBindingType() { this->bindingType_ = nullptr;};
        inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
        inline Saml& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Saml& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Saml& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


        // x509Certificates Field Functions 
        bool hasX509Certificates() const { return this->x509Certificates_ != nullptr;};
        void deleteX509Certificates() { this->x509Certificates_ = nullptr;};
        inline const vector<string> & getX509Certificates() const { DARABONBA_PTR_GET_CONST(x509Certificates_, vector<string>) };
        inline vector<string> getX509Certificates() { DARABONBA_PTR_GET(x509Certificates_, vector<string>) };
        inline Saml& setX509Certificates(const vector<string> & x509Certificates) { DARABONBA_PTR_SET_VALUE(x509Certificates_, x509Certificates) };
        inline Saml& setX509Certificates(vector<string> && x509Certificates) { DARABONBA_PTR_SET_RVALUE(x509Certificates_, x509Certificates) };


      protected:
        // The SAML binding type. Valid values: HTTP-Redirect and HTTP-POST. This parameter is required when you manually enter the configuration. The query returns the short name.
        shared_ptr<string> bindingType_ {};
        // The entity ID of the IdP. This parameter is required when you manually enter the configuration. It cannot be empty and cannot exceed 2,048 characters. Existing configurations cannot be replaced. This is different from the entity ID of the SP returned by the SP query.
        shared_ptr<string> entityId_ {};
        // The logon URL of the IdP. This parameter is required when you manually enter the configuration. It must be an absolute HTTPS URL and cannot contain user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
        // The list of IdP signing certificates. When you manually enter the configuration, this parameter is required and must be a non-empty array. Use PEM X.509 certificate text. The current validity period is verified. A maximum of two certificates are allowed after deduplication.
        shared_ptr<vector<string>> x509Certificates_ {};
      };

      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(binding, binding_);
          DARABONBA_PTR_TO_JSON(certificates, certificates_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(binding, binding_);
          DARABONBA_PTR_FROM_JSON(certificates, certificates_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->binding_ == nullptr
        && this->certificates_ == nullptr && this->entityId_ == nullptr && this->loginUrl_ == nullptr; };
        // binding Field Functions 
        bool hasBinding() const { return this->binding_ != nullptr;};
        void deleteBinding() { this->binding_ = nullptr;};
        inline string getBinding() const { DARABONBA_PTR_GET_DEFAULT(binding_, "") };
        inline Metadata& setBinding(string binding) { DARABONBA_PTR_SET_VALUE(binding_, binding) };


        // certificates Field Functions 
        bool hasCertificates() const { return this->certificates_ != nullptr;};
        void deleteCertificates() { this->certificates_ = nullptr;};
        inline string getCertificates() const { DARABONBA_PTR_GET_DEFAULT(certificates_, "") };
        inline Metadata& setCertificates(string certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Metadata& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Metadata& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


      protected:
        // The canonical SAML binding identifier. It is the SAML binding URI in the historical metadata snapshot. For CustomSSO updates, use saml.bindingType.
        shared_ptr<string> binding_ {};
        // The canonical SAML certificate content. It is the certificate string in the historical metadata snapshot. To edit the configuration, use saml.x509Certificates and do not submit the old metadata.
        shared_ptr<string> certificates_ {};
        // The entity ID of the IdP. This parameter is required when you manually enter the configuration. It cannot be empty and cannot exceed 2,048 characters. Existing configurations cannot be replaced. This is different from the entity ID of the SP returned by the SP query.
        shared_ptr<string> entityId_ {};
        // The logon URL of the IdP. This parameter is required when you manually enter the configuration. It must be an absolute HTTPS URL and cannot contain user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
      };

      class Configuration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
          DARABONBA_PTR_TO_JSON(bindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_TO_JSON(ssoStatus, ssoStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
          DARABONBA_PTR_FROM_JSON(bindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_FROM_JSON(ssoStatus, ssoStatus_);
        };
        Configuration() = default ;
        Configuration(const Configuration &) = default ;
        Configuration(Configuration &&) = default ;
        Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configuration() = default ;
        Configuration& operator=(const Configuration &) = default ;
        Configuration& operator=(Configuration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->ssoStatus_ == nullptr; };
        // bindingType Field Functions 
        bool hasBindingType() const { return this->bindingType_ != nullptr;};
        void deleteBindingType() { this->bindingType_ = nullptr;};
        inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
        inline Configuration& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Configuration& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Configuration& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


        // ssoStatus Field Functions 
        bool hasSsoStatus() const { return this->ssoStatus_ != nullptr;};
        void deleteSsoStatus() { this->ssoStatus_ = nullptr;};
        inline string getSsoStatus() const { DARABONBA_PTR_GET_DEFAULT(ssoStatus_, "") };
        inline Configuration& setSsoStatus(string ssoStatus) { DARABONBA_PTR_SET_VALUE(ssoStatus_, ssoStatus) };


      protected:
        // The SAML binding type. Valid values: HTTP-Redirect and HTTP-POST. This parameter is required when you manually enter the configuration. The query returns the short name.
        shared_ptr<string> bindingType_ {};
        // The entity ID of the IdP. This parameter is required when you manually enter the configuration. It cannot be empty and cannot exceed 2,048 characters. Existing configurations cannot be replaced. This is different from the entity ID of the SP returned by the SP query.
        shared_ptr<string> entityId_ {};
        // The logon URL of the IdP. This parameter is required when you manually enter the configuration. It must be an absolute HTTPS URL and cannot contain user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
        // The actual SSO logon status of AgentIdentity. The actual switch value is Enabled or Disabled, which is not equivalent to the expected loginEnabled value saved in AC.
        shared_ptr<string> ssoStatus_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->createdAt_ == nullptr && this->eventSubscriptionCallbackUrl_ == nullptr && this->identityProviderType_ == nullptr && this->loginCallbackUrl_ == nullptr && this->loginEnabled_ == nullptr
        && this->metadata_ == nullptr && this->operationStatus_ == nullptr && this->protocol_ == nullptr && this->saml_ == nullptr && this->scimStatus_ == nullptr
        && this->status_ == nullptr && this->syncEnabled_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const Data::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Data::Configuration) };
      inline Data::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Data::Configuration) };
      inline Data& setConfiguration(const Data::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline Data& setConfiguration(Data::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // eventSubscriptionCallbackUrl Field Functions 
      bool hasEventSubscriptionCallbackUrl() const { return this->eventSubscriptionCallbackUrl_ != nullptr;};
      void deleteEventSubscriptionCallbackUrl() { this->eventSubscriptionCallbackUrl_ = nullptr;};
      inline string getEventSubscriptionCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventSubscriptionCallbackUrl_, "") };
      inline Data& setEventSubscriptionCallbackUrl(string eventSubscriptionCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventSubscriptionCallbackUrl_, eventSubscriptionCallbackUrl) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline Data& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // loginCallbackUrl Field Functions 
      bool hasLoginCallbackUrl() const { return this->loginCallbackUrl_ != nullptr;};
      void deleteLoginCallbackUrl() { this->loginCallbackUrl_ = nullptr;};
      inline string getLoginCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(loginCallbackUrl_, "") };
      inline Data& setLoginCallbackUrl(string loginCallbackUrl) { DARABONBA_PTR_SET_VALUE(loginCallbackUrl_, loginCallbackUrl) };


      // loginEnabled Field Functions 
      bool hasLoginEnabled() const { return this->loginEnabled_ != nullptr;};
      void deleteLoginEnabled() { this->loginEnabled_ = nullptr;};
      inline bool getLoginEnabled() const { DARABONBA_PTR_GET_DEFAULT(loginEnabled_, false) };
      inline Data& setLoginEnabled(bool loginEnabled) { DARABONBA_PTR_SET_VALUE(loginEnabled_, loginEnabled) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Data::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Data::Metadata) };
      inline Data::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Data::Metadata) };
      inline Data& setMetadata(const Data::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Data::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // operationStatus Field Functions 
      bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
      void deleteOperationStatus() { this->operationStatus_ = nullptr;};
      inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
      inline Data& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // saml Field Functions 
      bool hasSaml() const { return this->saml_ != nullptr;};
      void deleteSaml() { this->saml_ = nullptr;};
      inline const Data::Saml & getSaml() const { DARABONBA_PTR_GET_CONST(saml_, Data::Saml) };
      inline Data::Saml getSaml() { DARABONBA_PTR_GET(saml_, Data::Saml) };
      inline Data& setSaml(const Data::Saml & saml) { DARABONBA_PTR_SET_VALUE(saml_, saml) };
      inline Data& setSaml(Data::Saml && saml) { DARABONBA_PTR_SET_RVALUE(saml_, saml) };


      // scimStatus Field Functions 
      bool hasScimStatus() const { return this->scimStatus_ != nullptr;};
      void deleteScimStatus() { this->scimStatus_ = nullptr;};
      inline string getScimStatus() const { DARABONBA_PTR_GET_DEFAULT(scimStatus_, "") };
      inline Data& setScimStatus(string scimStatus) { DARABONBA_PTR_SET_VALUE(scimStatus_, scimStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Data& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The actual upstream configuration. The actual SAML configuration is read back on demand only in GetIdentityProvider. SCIM query and prepare operations return the actual receiving status and URL.
      shared_ptr<Data::Configuration> configuration_ {};
      // The creation time recorded by the server.
      shared_ptr<string> createdAt_ {};
      // The event subscription callback URL. CustomSSO returns an empty string. You can obtain the SCIM receiving address through the SCIM query or prepare API. The example shows a JSON empty string "". The actual value does not contain double quotes.
      shared_ptr<string> eventSubscriptionCallbackUrl_ {};
      // The identity provider type. General CRUD operations support DingTalk, Feishu, and CustomSSO. SP queries only support CustomSSO. The SCIM path fixedly uses the CustomSSO shared pool.
      shared_ptr<string> identityProviderType_ {};
      // The logon callback URL. CustomSSO returns an empty string. You should obtain the ACS URL for SAML through the SP query API. The example shows a JSON empty string "". The actual value does not contain double quotes.
      shared_ptr<string> loginCallbackUrl_ {};
      // The logon switch. Do not set this parameter to true during CustomSSO initialization. You must save a valid SAML configuration before enabling it. Disabling it does not delete the configuration. When an asynchronous failure occurs, this expected value does not mean that it has taken effect on the upstream.
      shared_ptr<bool> loginEnabled_ {};
      // The standard IdP metadata. Vendor parameters are used for DingTalk and Feishu. CustomSSO updates use protocol and saml, and do not accept this field. The return value does not contain vendor keys.
      shared_ptr<Data::Metadata> metadata_ {};
      // PENDING/RUNNING 时轮询 GetIdentityProviderSCIM；保留失败、暂停和取消事实，不表示 SAML 状态。
      shared_ptr<string> operationStatus_ {};
      // The logon protocol. Currently, only SAML is supported. This field may not be returned if no valid configuration is saved. OIDC placeholder initialization is not supported.
      shared_ptr<string> protocol_ {};
      // The SAML logon configuration. The input supports either XML or complete manual entry. The query returns the standardized configuration and does not echo the original XML. This field can be omitted if it is not configured.
      shared_ptr<Data::Saml> saml_ {};
      // 独立 SCIM 状态；不改变原 status 的共享资源及登录配置含义。与查询接口的 data.status 对应。
      shared_ptr<string> scimStatus_ {};
      // The operation status of shared resources and logon configurations. It indicates the user pool lifecycle and logon configuration task status of CustomSSO, and does not represent the SCIM operation result. Query GetIdentityProviderSCIM.operationStatus for the SCIM switch result. You cannot use this field to determine whether all protocols are configured.
      shared_ptr<string> status_ {};
      // Do not set this parameter to true during CustomSSO initialization. You can only update it later by calling UpdateIdentityProviderSCIM. Determine the result based on operationStatus.
      shared_ptr<bool> syncEnabled_ {};
      // The last update time recorded by the server.
      shared_ptr<string> updatedAt_ {};
      // The ID of the target workspace. This parameter is required. The request region must be the same as the region of the target workspace.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateIdentityProviderSCIMResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateIdentityProviderSCIMResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateIdentityProviderSCIMResponseBody::Data) };
    inline UpdateIdentityProviderSCIMResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateIdentityProviderSCIMResponseBody::Data) };
    inline UpdateIdentityProviderSCIMResponseBody& setData(const UpdateIdentityProviderSCIMResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateIdentityProviderSCIMResponseBody& setData(UpdateIdentityProviderSCIMResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateIdentityProviderSCIMResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateIdentityProviderSCIMResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateIdentityProviderSCIMResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateIdentityProviderSCIMResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business result code. If the request fails, handle the error based on the HTTP status code and the message.
    shared_ptr<string> code_ {};
    // The shared binding after the request is accepted. The status indicates the status of shared resources and logon configurations, not the status of this SCIM task. Query GetIdentityProviderSCIM.operationStatus for the execution result.
    shared_ptr<UpdateIdentityProviderSCIMResponseBody::Data> data_ {};
    // The HTTP status code. It indicates the processing status of this request and is not equivalent to the final result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Task result message. It is the request acceptance or error message. For asynchronous tasks, you must check task result by calling the corresponding query API.
    shared_ptr<string> message_ {};
    // The request ID. It is used to associate this call with troubleshooting. Retain it when a failure occurs.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates that the request is processed successfully. For asynchronous writes, you must continue to query the task result.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
