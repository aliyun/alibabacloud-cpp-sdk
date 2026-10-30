// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
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
  class UpdateIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateIdentityProviderRequest() = default ;
    UpdateIdentityProviderRequest(const UpdateIdentityProviderRequest &) = default ;
    UpdateIdentityProviderRequest(UpdateIdentityProviderRequest &&) = default ;
    UpdateIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequest() = default ;
    UpdateIdentityProviderRequest& operator=(const UpdateIdentityProviderRequest &) = default ;
    UpdateIdentityProviderRequest& operator=(UpdateIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(saml, saml_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_TO_JSON(syncScope, syncScope_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(saml, saml_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_FROM_JSON(syncScope, syncScope_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
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
        // The list of department IDs in the synchronization scope, which are obtained from ListIdentityProviderDepartments. In SelectedDepartments mode, you must provide at least one non-empty department ID. In AllAuthorized mode, this field should be omitted or an empty array should be passed.
        shared_ptr<vector<string>> departmentIds_ {};
        // The synchronization scope mode. Valid values: AllAuthorized and SelectedDepartments. AllAuthorized indicates all members within the authorization scope of the application address book. SelectedDepartments indicates the selected departments and all their sub-departments. When explicitly submitting syncScope, you must provide a valid mode.
        shared_ptr<string> mode_ {};
      };

      class Saml : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Saml& obj) { 
          DARABONBA_PTR_TO_JSON(bindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_TO_JSON(metadataXml, metadataXml_);
          DARABONBA_PTR_TO_JSON(x509Certificates, x509Certificates_);
        };
        friend void from_json(const Darabonba::Json& j, Saml& obj) { 
          DARABONBA_PTR_FROM_JSON(bindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_FROM_JSON(metadataXml, metadataXml_);
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
        && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->metadataXml_ == nullptr && this->x509Certificates_ == nullptr; };
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


        // metadataXml Field Functions 
        bool hasMetadataXml() const { return this->metadataXml_ != nullptr;};
        void deleteMetadataXml() { this->metadataXml_ = nullptr;};
        inline string getMetadataXml() const { DARABONBA_PTR_GET_DEFAULT(metadataXml_, "") };
        inline Saml& setMetadataXml(string metadataXml) { DARABONBA_PTR_SET_VALUE(metadataXml_, metadataXml) };


        // x509Certificates Field Functions 
        bool hasX509Certificates() const { return this->x509Certificates_ != nullptr;};
        void deleteX509Certificates() { this->x509Certificates_ = nullptr;};
        inline const vector<string> & getX509Certificates() const { DARABONBA_PTR_GET_CONST(x509Certificates_, vector<string>) };
        inline vector<string> getX509Certificates() { DARABONBA_PTR_GET(x509Certificates_, vector<string>) };
        inline Saml& setX509Certificates(const vector<string> & x509Certificates) { DARABONBA_PTR_SET_VALUE(x509Certificates_, x509Certificates) };
        inline Saml& setX509Certificates(vector<string> && x509Certificates) { DARABONBA_PTR_SET_RVALUE(x509Certificates_, x509Certificates) };


      protected:
        // The binding type when manually entering the SAML configuration. Valid values: HTTP-Redirect and HTTP-POST. This field must be submitted together with entityId, loginUrl, and x509Certificates, and cannot be mixed with metadataXml.
        shared_ptr<string> bindingType_ {};
        // The entity identifier of the enterprise IdP. This field is required when manually entering the configuration. The value must be non-empty and contain up to 2,048 characters, and cannot be changed after saving. This field must be submitted together with loginUrl, bindingType, and x509Certificates, and cannot be mixed with metadataXml.
        shared_ptr<string> entityId_ {};
        // The SSO logon URL of the enterprise IdP. This field is required when manually entering the configuration. The value must be an absolute HTTPS URL without user credentials and fragments. This field must be submitted together with entityId, bindingType, and x509Certificates, and cannot be mixed with metadataXml.
        shared_ptr<string> loginUrl_ {};
        // The original SAML metadata XML text of the enterprise IdP, not a URL or file path. The maximum size is 1 MiB. The text must contain a single EntityDescriptor. DTD and external entities are prohibited. This field cannot be mixed with the four manually entered configuration fields. After saving, queries return the standardized configuration and do not echo the original XML text.
        shared_ptr<string> metadataXml_ {};
        // The list of X.509 signing certificates of the enterprise IdP. When manually entering the configuration, you must provide a non-empty list of up to 10 certificates, and the certificates must be valid. This field must be submitted together with entityId, loginUrl, and bindingType, and cannot be mixed with metadataXml.
        shared_ptr<vector<string>> x509Certificates_ {};
      };

      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(appId, appId_);
          DARABONBA_PTR_TO_JSON(appKey, appKey_);
          DARABONBA_PTR_TO_JSON(appSecret, appSecret_);
          DARABONBA_PTR_TO_JSON(corpId, corpId_);
          DARABONBA_PTR_TO_JSON(encryptKey, encryptKey_);
          DARABONBA_PTR_TO_JSON(verificationToken, verificationToken_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(appId, appId_);
          DARABONBA_PTR_FROM_JSON(appKey, appKey_);
          DARABONBA_PTR_FROM_JSON(appSecret, appSecret_);
          DARABONBA_PTR_FROM_JSON(corpId, corpId_);
          DARABONBA_PTR_FROM_JSON(encryptKey, encryptKey_);
          DARABONBA_PTR_FROM_JSON(verificationToken, verificationToken_);
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
        && this->appKey_ == nullptr && this->appSecret_ == nullptr && this->corpId_ == nullptr && this->encryptKey_ == nullptr && this->verificationToken_ == nullptr; };
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


        // appSecret Field Functions 
        bool hasAppSecret() const { return this->appSecret_ != nullptr;};
        void deleteAppSecret() { this->appSecret_ = nullptr;};
        inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
        inline Metadata& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline Metadata& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // encryptKey Field Functions 
        bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
        void deleteEncryptKey() { this->encryptKey_ = nullptr;};
        inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
        inline Metadata& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


        // verificationToken Field Functions 
        bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
        void deleteVerificationToken() { this->verificationToken_ = nullptr;};
        inline string getVerificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
        inline Metadata& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


      protected:
        // The App ID of the Feishu application. If this field is omitted during an update, the existing value is retained. If explicitly submitted, the value must be non-empty. The merged configuration for Feishu must include this field.
        shared_ptr<string> appId_ {};
        // The AppKey of the DingTalk application. If this field is omitted during an update, the existing value is retained. If explicitly submitted, the value must be non-empty. The merged configuration for DingTalk must include this field.
        shared_ptr<string> appKey_ {};
        // The AppSecret of the DingTalk or Feishu application. If this field is omitted during an update, the existing secret is retained and does not need to be retransmitted each time. If explicitly submitted, the value must be non-empty, and the merged configuration must include this field. This is a sensitive input and is not echoed in queries. The example is a fictitious value.
        shared_ptr<string> appSecret_ {};
        // The CorpId of the organization to which the DingTalk application belongs. If this field is omitted during an update, the existing value is retained. If explicitly submitted, the value must be non-empty and consistent with the organization to which the application belongs. The merged configuration for DingTalk must include this field.
        shared_ptr<string> corpId_ {};
        // The encryption key for vendor event callbacks, which must be consistent with the vendor application configuration. If this field is omitted during an update, the existing value is retained. When incremental synchronization is enabled, the merged configuration must include this field. This is a sensitive input and is not echoed in queries.
        shared_ptr<string> encryptKey_ {};
        // The verification token for vendor event callbacks, which must be consistent with the vendor application configuration. If this field is omitted during an update, the existing value is retained. When incremental synchronization is enabled, the merged configuration must include this field. This is a sensitive input and is not echoed in queries.
        shared_ptr<string> verificationToken_ {};
      };

      virtual bool empty() const override { return this->loginEnabled_ == nullptr
        && this->metadata_ == nullptr && this->protocol_ == nullptr && this->saml_ == nullptr && this->syncEnabled_ == nullptr && this->syncScope_ == nullptr; };
      // loginEnabled Field Functions 
      bool hasLoginEnabled() const { return this->loginEnabled_ != nullptr;};
      void deleteLoginEnabled() { this->loginEnabled_ = nullptr;};
      inline bool getLoginEnabled() const { DARABONBA_PTR_GET_DEFAULT(loginEnabled_, false) };
      inline Body& setLoginEnabled(bool loginEnabled) { DARABONBA_PTR_SET_VALUE(loginEnabled_, loginEnabled) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Body::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Body::Metadata) };
      inline Body::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Body::Metadata) };
      inline Body& setMetadata(const Body::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Body& setMetadata(Body::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Body& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // saml Field Functions 
      bool hasSaml() const { return this->saml_ != nullptr;};
      void deleteSaml() { this->saml_ = nullptr;};
      inline const Body::Saml & getSaml() const { DARABONBA_PTR_GET_CONST(saml_, Body::Saml) };
      inline Body::Saml getSaml() { DARABONBA_PTR_GET(saml_, Body::Saml) };
      inline Body& setSaml(const Body::Saml & saml) { DARABONBA_PTR_SET_VALUE(saml_, saml) };
      inline Body& setSaml(Body::Saml && saml) { DARABONBA_PTR_SET_RVALUE(saml_, saml) };


      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Body& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


      // syncScope Field Functions 
      bool hasSyncScope() const { return this->syncScope_ != nullptr;};
      void deleteSyncScope() { this->syncScope_ = nullptr;};
      inline const Body::SyncScope & getSyncScope() const { DARABONBA_PTR_GET_CONST(syncScope_, Body::SyncScope) };
      inline Body::SyncScope getSyncScope() { DARABONBA_PTR_GET(syncScope_, Body::SyncScope) };
      inline Body& setSyncScope(const Body::SyncScope & syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };
      inline Body& setSyncScope(Body::SyncScope && syncScope) { DARABONBA_PTR_SET_RVALUE(syncScope_, syncScope) };


    protected:
      // Specifies whether to allow logon by using this identity provider. If this field is omitted or set to null during an update, the original value is retained. For CustomSSO, a valid SAML configuration must exist before enabling logon. Disabling logon does not delete the saved SAML or SCIM configuration.
      shared_ptr<bool> loginEnabled_ {};
      // Applies only to DingTalk and Feishu. The application configuration is merged by field. Omitted fields and existing keys retain their original values. Explicitly submitted fields must not be null, empty strings, or blank strings. The merged configuration must meet the complete configuration requirements of the vendor. This field is not accepted for CustomSSO.
      shared_ptr<Body::Metadata> metadata_ {};
      // The logon protocol, which applies only to CustomSSO. Currently, only SAML is supported. This field is not accepted for DingTalk and Feishu. When submitted with a non-empty saml configuration, this field can be omitted and is processed as SAML by the server.
      shared_ptr<string> protocol_ {};
      // Applies only to CustomSSO. You must choose between providing metadataXml and providing the four complete manually entered configuration fields. The two methods cannot be mixed. If a valid configuration already exists, you can also modify only the JIT switches. Saving the configuration does not automatically enable logon.
      shared_ptr<Body::Saml> saml_ {};
      // Applies only to DingTalk and Feishu. This field controls the incremental synchronization of subsequent address book change events. If this field is omitted or set to null during an update, the original value is retained. This field does not control the initial synchronization or manual synchronization. When enabled, the merged metadata must include the encryptKey and verificationToken fields. For CustomSSO, use UpdateIdentityProviderSCIM to manage the synchronization switch.
      shared_ptr<bool> syncEnabled_ {};
      // The address book synchronization scope, which applies only to DingTalk and Feishu. If this field is omitted or set to null, the current scope is retained. Saving the scope does not automatically trigger a full synchronization. This field is not accepted for CustomSSO.
      shared_ptr<Body::SyncScope> syncScope_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateIdentityProviderRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateIdentityProviderRequest::Body) };
    inline UpdateIdentityProviderRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateIdentityProviderRequest::Body) };
    inline UpdateIdentityProviderRequest& setBody(const UpdateIdentityProviderRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateIdentityProviderRequest& setBody(UpdateIdentityProviderRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The configuration fields to be modified. For DingTalk and Feishu, you must submit at least one of the following fields: loginEnabled, syncEnabled, metadata, and syncScope. For CustomSSO, use the protocol, saml, and loginEnabled fields. You cannot submit the vendor metadata, syncEnabled, or syncScope fields.
    shared_ptr<UpdateIdentityProviderRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
