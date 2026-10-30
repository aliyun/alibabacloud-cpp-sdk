// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
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
  class CreateIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest(CreateIdentityProviderRequest &&) = default ;
    CreateIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest& operator=(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest& operator=(CreateIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_TO_JSON(syncOnBind, syncOnBind_);
        DARABONBA_PTR_TO_JSON(syncScope, syncScope_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_FROM_JSON(syncOnBind, syncOnBind_);
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
        // When the mode is SelectedDepartments, the list must contain at least one non-empty department ID, which should be obtained from ListIdentityProviderDepartments. When the mode is AllAuthorized, pass an empty array or omit this parameter.
        shared_ptr<vector<string>> departmentIds_ {};
        // AllAuthorized: the full authorization scope, which is limited by the application address book authorization. SelectedDepartments: the selected departments and all their sub-departments. When explicitly submitting syncScope, you must provide a valid mode, which is verified by the backend.
        shared_ptr<string> mode_ {};
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
        // The app ID of the Lark application. This parameter is required when the binding type is Feishu.
        shared_ptr<string> appId_ {};
        // The AppKey of the DingTalk application. This parameter is required when the binding type is DingTalk.
        shared_ptr<string> appKey_ {};
        // Required. The secret of the external identity provider application. This parameter is used only for writing and is not returned by query API operations.
        shared_ptr<string> appSecret_ {};
        // The CorpId of the DingTalk enterprise. This parameter is required when the binding type is DingTalk.
        shared_ptr<string> corpId_ {};
        // The data encryption key for event subscription. The value must be the same as the one configured in the external identity provider application. This parameter is used only for writing and is not returned by query API operations.
        shared_ptr<string> encryptKey_ {};
        // The verification token for event subscription. The value must be the same as the one configured in the external identity provider application. This parameter is used only for writing and is not returned by query API operations.
        shared_ptr<string> verificationToken_ {};
      };

      virtual bool empty() const override { return this->identityProviderType_ == nullptr
        && this->loginEnabled_ == nullptr && this->metadata_ == nullptr && this->syncEnabled_ == nullptr && this->syncOnBind_ == nullptr && this->syncScope_ == nullptr; };
      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline Body& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


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


      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Body& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


      // syncOnBind Field Functions 
      bool hasSyncOnBind() const { return this->syncOnBind_ != nullptr;};
      void deleteSyncOnBind() { this->syncOnBind_ = nullptr;};
      inline bool getSyncOnBind() const { DARABONBA_PTR_GET_DEFAULT(syncOnBind_, false) };
      inline Body& setSyncOnBind(bool syncOnBind) { DARABONBA_PTR_SET_VALUE(syncOnBind_, syncOnBind) };


      // syncScope Field Functions 
      bool hasSyncScope() const { return this->syncScope_ != nullptr;};
      void deleteSyncScope() { this->syncScope_ = nullptr;};
      inline const Body::SyncScope & getSyncScope() const { DARABONBA_PTR_GET_CONST(syncScope_, Body::SyncScope) };
      inline Body::SyncScope getSyncScope() { DARABONBA_PTR_GET(syncScope_, Body::SyncScope) };
      inline Body& setSyncScope(const Body::SyncScope & syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };
      inline Body& setSyncScope(Body::SyncScope && syncScope) { DARABONBA_PTR_SET_RVALUE(syncScope_, syncScope) };


    protected:
      // The type of the external identity provider. Valid values: DingTalk and Feishu.
      // 
      // This parameter is required.
      shared_ptr<string> identityProviderType_ {};
      // Specifies whether to allow workspace users to log on through the external identity provider.
      shared_ptr<bool> loginEnabled_ {};
      // The application configuration of the external identity provider. When you bind DingTalk, you must provide appKey, appSecret, and corpId. When you bind Lark, you must provide appId and appSecret.
      shared_ptr<Body::Metadata> metadata_ {};
      // Specifies whether to enable organization member synchronization. If enabled, the external identity provider synchronizes organization members as workspace users.
      shared_ptr<bool> syncEnabled_ {};
      // Controls the first synchronization when DingTalk or Lark is bound. If omitted or set to null, the default value is true. If set to false, only the configuration is saved, and synchronization is explicitly triggered later. CustomSSO does not use the vendor pull link.
      shared_ptr<bool> syncOnBind_ {};
      // Retains the department-based synchronization scope definition. If omitted during creation, the default value is AllAuthorized. The first vendor synchronization is determined by syncOnBind. If omitted or set to null during an update, the original value is retained. Updating and saving the scope does not automatically perform full synchronization.
      shared_ptr<Body::SyncScope> syncScope_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateIdentityProviderRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateIdentityProviderRequest::Body) };
    inline CreateIdentityProviderRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateIdentityProviderRequest::Body) };
    inline CreateIdentityProviderRequest& setBody(const CreateIdentityProviderRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateIdentityProviderRequest& setBody(CreateIdentityProviderRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request content for binding an external identity provider.
    shared_ptr<CreateIdentityProviderRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
