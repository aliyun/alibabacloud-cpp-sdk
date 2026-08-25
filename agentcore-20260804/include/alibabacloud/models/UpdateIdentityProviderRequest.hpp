// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
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
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
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
        // The App ID of the Lark application. This parameter is required when the binding type is Feishu.
        shared_ptr<string> appId_ {};
        // The AppKey of the DingTalk application. This parameter is required when the binding type is DingTalk.
        shared_ptr<string> appKey_ {};
        // Required. The secret of the external identity provider application. This parameter is write-only and is not returned by query operations.
        shared_ptr<string> appSecret_ {};
        // The CorpId of the DingTalk organization. This parameter is required when the binding type is DingTalk.
        shared_ptr<string> corpId_ {};
        // The data encryption key for event subscriptions. The value must be consistent with the one configured in the external identity provider application. This parameter is write-only and is not returned by query operations.
        shared_ptr<string> encryptKey_ {};
        // The verification token for event subscriptions. The value must be consistent with the one configured in the external identity provider application. This parameter is write-only and is not returned by query operations.
        shared_ptr<string> verificationToken_ {};
      };

      virtual bool empty() const override { return this->loginEnabled_ == nullptr
        && this->metadata_ == nullptr && this->syncEnabled_ == nullptr; };
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


    protected:
      // Specifies whether workspace users are allowed to log on through this external identity provider.
      shared_ptr<bool> loginEnabled_ {};
      // The new application configuration of the external identity provider. If not specified, the existing configuration remains unchanged.
      shared_ptr<Body::Metadata> metadata_ {};
      // Specifies whether to enable organization member synchronization. After this feature is enabled, the external identity provider synchronizes organization members as workspace users.
      shared_ptr<bool> syncEnabled_ {};
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
    // The request body for updating the external identity provider.
    shared_ptr<UpdateIdentityProviderRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
