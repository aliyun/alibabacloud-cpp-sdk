// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
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
  class ListIdentityProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody(ListIdentityProvidersResponseBody &&) = default ;
    ListIdentityProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody& operator=(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody& operator=(ListIdentityProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_TO_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_TO_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(saml, saml_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_TO_JSON(syncScope, syncScope_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(saml, saml_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_FROM_JSON(syncScope, syncScope_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SyncScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SyncScope& obj) { 
          DARABONBA_PTR_TO_JSON(departmentIds, departmentIds_);
          DARABONBA_PTR_TO_JSON(mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, SyncScope& obj) { 
          DARABONBA_PTR_FROM_JSON(departmentIds, departmentIds_);
          DARABONBA_PTR_FROM_JSON(mode, mode_);
        };
        SyncScope() = default ;
        SyncScope(const SyncScope &) = default ;
        SyncScope(SyncScope &&) = default ;
        SyncScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SyncScope() = default ;
        SyncScope& operator=(const SyncScope &) = default ;
        SyncScope& operator=(SyncScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->departmentIds_ == nullptr
        && this->mode_ == nullptr; };
        // departmentIds Field Functions 
        bool hasDepartmentIds() const { return this->departmentIds_ != nullptr;};
        void deleteDepartmentIds() { this->departmentIds_ = nullptr;};
        inline const vector<string> & getDepartmentIds() const { DARABONBA_PTR_GET_CONST(departmentIds_, vector<string>) };
        inline vector<string> getDepartmentIds() { DARABONBA_PTR_GET(departmentIds_, vector<string>) };
        inline SyncScope& setDepartmentIds(const vector<string> & departmentIds) { DARABONBA_PTR_SET_VALUE(departmentIds_, departmentIds) };
        inline SyncScope& setDepartmentIds(vector<string> && departmentIds) { DARABONBA_PTR_SET_RVALUE(departmentIds_, departmentIds) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline SyncScope& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        // When the mode is SelectedDepartments, it must contain at least one non-empty department ID obtained from ListIdentityProviderDepartments. When the mode is AllAuthorized, pass an empty array or omit this field.
        shared_ptr<vector<string>> departmentIds_ {};
        // Valid values:
        // - AllAuthorized: The full authorization scope, limited by the application address book authorization.
        // - SelectedDepartments: The selected departments and all their sub-departments.
        // You must provide a valid mode when explicitly submitting syncScope. The backend verifies the mode.
        shared_ptr<string> mode_ {};
      };

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
        // HTTP-Redirect or HTTP-POST. Required for manual entry. Queries return the short name.
        shared_ptr<string> bindingType_ {};
        // Required for manual entry. It must be non-empty and contain a maximum of 2,048 characters. Existing configurations cannot be changed. This is different from the local entity ID returned in SP queries.
        shared_ptr<string> entityId_ {};
        // Required for manual entry. It must be an absolute HTTPS URL without user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
        // A non-empty array is required for manual entry. Use PEM X.509 certificate text. The current validity period is verified. A maximum of two certificates are allowed after deduplication.
        shared_ptr<vector<string>> x509Certificates_ {};
      };

      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(appId, appId_);
          DARABONBA_PTR_TO_JSON(appKey, appKey_);
          DARABONBA_PTR_TO_JSON(binding, binding_);
          DARABONBA_PTR_TO_JSON(certificates, certificates_);
          DARABONBA_PTR_TO_JSON(corpId, corpId_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(appId, appId_);
          DARABONBA_PTR_FROM_JSON(appKey, appKey_);
          DARABONBA_PTR_FROM_JSON(binding, binding_);
          DARABONBA_PTR_FROM_JSON(certificates, certificates_);
          DARABONBA_PTR_FROM_JSON(corpId, corpId_);
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
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appKey_ == nullptr && this->binding_ == nullptr && this->certificates_ == nullptr && this->corpId_ == nullptr && this->entityId_ == nullptr
        && this->loginUrl_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Metadata& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
        inline Metadata& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


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


        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline Metadata& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


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
        // The App ID of the Lark application. Required when the binding type is Feishu.
        shared_ptr<string> appId_ {};
        // The AppKey of the DingTalk application. Required when the binding type is DingTalk.
        shared_ptr<string> appKey_ {};
        // The SAML binding URI in the historical metadata snapshot. Use saml.bindingType for CustomSSO updates.
        shared_ptr<string> binding_ {};
        // The certificate string in the historical metadata snapshot. Use saml.x509Certificates to edit the configuration. Do not submit the old metadata.
        shared_ptr<string> certificates_ {};
        // The CorpId of the DingTalk enterprise. Required when the binding type is DingTalk.
        shared_ptr<string> corpId_ {};
        // Required for manual entry. It must be non-empty and contain a maximum of 2,048 characters. Existing configurations cannot be changed. This is different from the local entity ID returned in SP queries.
        shared_ptr<string> entityId_ {};
        // Required for manual entry. It must be an absolute HTTPS URL without user credentials or fragments.
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
        // HTTP-Redirect or HTTP-POST. Required for manual entry. Queries return the short name.
        shared_ptr<string> bindingType_ {};
        // Required for manual entry. It must be non-empty and contain a maximum of 2,048 characters. Existing configurations cannot be changed. This is different from the local entity ID returned in SP queries.
        shared_ptr<string> entityId_ {};
        // Required for manual entry. It must be an absolute HTTPS URL without user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
        // The actual switch value is Enabled or Disabled. This is not equivalent to the expected loginEnabled value saved in AC.
        shared_ptr<string> ssoStatus_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->createdAt_ == nullptr && this->eventSubscriptionCallbackUrl_ == nullptr && this->identityProviderType_ == nullptr && this->loginCallbackUrl_ == nullptr && this->loginEnabled_ == nullptr
        && this->metadata_ == nullptr && this->protocol_ == nullptr && this->saml_ == nullptr && this->status_ == nullptr && this->syncEnabled_ == nullptr
        && this->syncScope_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const Items::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Items::Configuration) };
      inline Items::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Items::Configuration) };
      inline Items& setConfiguration(const Items::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline Items& setConfiguration(Items::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // eventSubscriptionCallbackUrl Field Functions 
      bool hasEventSubscriptionCallbackUrl() const { return this->eventSubscriptionCallbackUrl_ != nullptr;};
      void deleteEventSubscriptionCallbackUrl() { this->eventSubscriptionCallbackUrl_ = nullptr;};
      inline string getEventSubscriptionCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventSubscriptionCallbackUrl_, "") };
      inline Items& setEventSubscriptionCallbackUrl(string eventSubscriptionCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventSubscriptionCallbackUrl_, eventSubscriptionCallbackUrl) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline Items& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // loginCallbackUrl Field Functions 
      bool hasLoginCallbackUrl() const { return this->loginCallbackUrl_ != nullptr;};
      void deleteLoginCallbackUrl() { this->loginCallbackUrl_ = nullptr;};
      inline string getLoginCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(loginCallbackUrl_, "") };
      inline Items& setLoginCallbackUrl(string loginCallbackUrl) { DARABONBA_PTR_SET_VALUE(loginCallbackUrl_, loginCallbackUrl) };


      // loginEnabled Field Functions 
      bool hasLoginEnabled() const { return this->loginEnabled_ != nullptr;};
      void deleteLoginEnabled() { this->loginEnabled_ = nullptr;};
      inline bool getLoginEnabled() const { DARABONBA_PTR_GET_DEFAULT(loginEnabled_, false) };
      inline Items& setLoginEnabled(bool loginEnabled) { DARABONBA_PTR_SET_VALUE(loginEnabled_, loginEnabled) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Items::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Items::Metadata) };
      inline Items::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Items::Metadata) };
      inline Items& setMetadata(const Items::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Items& setMetadata(Items::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Items& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // saml Field Functions 
      bool hasSaml() const { return this->saml_ != nullptr;};
      void deleteSaml() { this->saml_ = nullptr;};
      inline const Items::Saml & getSaml() const { DARABONBA_PTR_GET_CONST(saml_, Items::Saml) };
      inline Items::Saml getSaml() { DARABONBA_PTR_GET(saml_, Items::Saml) };
      inline Items& setSaml(const Items::Saml & saml) { DARABONBA_PTR_SET_VALUE(saml_, saml) };
      inline Items& setSaml(Items::Saml && saml) { DARABONBA_PTR_SET_RVALUE(saml_, saml) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Items& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


      // syncScope Field Functions 
      bool hasSyncScope() const { return this->syncScope_ != nullptr;};
      void deleteSyncScope() { this->syncScope_ = nullptr;};
      inline const Items::SyncScope & getSyncScope() const { DARABONBA_PTR_GET_CONST(syncScope_, Items::SyncScope) };
      inline Items::SyncScope getSyncScope() { DARABONBA_PTR_GET(syncScope_, Items::SyncScope) };
      inline Items& setSyncScope(const Items::SyncScope & syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };
      inline Items& setSyncScope(Items::SyncScope && syncScope) { DARABONBA_PTR_SET_RVALUE(syncScope_, syncScope) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The actual SAML configuration is read on demand only by GetIdentityProvider. SCIM queries and preparations return the actual received status and URLs.
      shared_ptr<Items::Configuration> configuration_ {};
      // The creation time in UTC format based on RFC 3339.
      shared_ptr<string> createdAt_ {};
      // The event subscription callback URL. You must configure this URL in the external identity provider application to receive organization change events. An empty string is returned if the user pool is not activated.
      shared_ptr<string> eventSubscriptionCallbackUrl_ {};
      // The type of the external identity provider. Valid values: DingTalk, Feishu.
      shared_ptr<string> identityProviderType_ {};
      // The logon callback URL. You must configure this URL in the external identity provider application. An empty string is returned if the user pool is not activated.
      shared_ptr<string> loginCallbackUrl_ {};
      // Specifies whether workspace users are allowed to log on through this external identity provider.
      shared_ptr<bool> loginEnabled_ {};
      // The application configuration of the external identity provider. Application secret configurations are not returned.
      shared_ptr<Items::Metadata> metadata_ {};
      // Only SAML is currently supported. This field may not be returned if no valid configuration is saved. OIDC placeholder initialization is not supported.
      shared_ptr<string> protocol_ {};
      // The input supports either XML or complete manual entry. Queries return the standardized configuration and do not echo the original XML. This field can be omitted if it is not configured.
      shared_ptr<Items::Saml> saml_ {};
      // The binding status. Valid values:
      // - CONFIGURED: The configuration is accepted and waiting for user pool activation.
      // - SYNCING: Organization members are being synchronized.
      // - SYNCED: Organization member synchronization is complete.
      // - READY: The binding is in effect.
      // - SYNC_FAILED: Organization member synchronization failed.
      // - UPDATING: The configuration is being updated.
      // - UPDATE_FAILED: Configuration update failed.
      // - DISCONNECTING: The binding is being disconnected.
      // - DISCONNECT_FAILED: Disconnection failed.
      shared_ptr<string> status_ {};
      // Specifies whether to enable organization member synchronization. If enabled, organization members are synchronized as workspace users by this external identity provider.
      shared_ptr<bool> syncEnabled_ {};
      // Follows the department-based synchronization scope definition. If omitted during creation, the default value is AllAuthorized, and the first provider synchronization is determined by syncOnBind. If omitted or set to null during an update, the original value is retained. Updating the saved scope does not automatically trigger full synchronization.
      shared_ptr<Items::SyncScope> syncScope_ {};
      // The time of the last modification in UTC format based on RFC 3339.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIdentityProvidersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIdentityProvidersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListIdentityProvidersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListIdentityProvidersResponseBody::Items>) };
    inline vector<ListIdentityProvidersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListIdentityProvidersResponseBody::Items>) };
    inline ListIdentityProvidersResponseBody& setItems(const vector<ListIdentityProvidersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListIdentityProvidersResponseBody& setItems(vector<ListIdentityProvidersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIdentityProvidersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIdentityProvidersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIdentityProvidersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIdentityProvidersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIdentityProvidersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of external identity providers.
    shared_ptr<vector<ListIdentityProvidersResponseBody::Items>> items_ {};
    // The maximum number of records per page that takes effect in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The response message. An error description is returned if the request fails.
    shared_ptr<string> message_ {};
    // The cursor for the next page. Empty if there is no next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of external identity providers that match the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
