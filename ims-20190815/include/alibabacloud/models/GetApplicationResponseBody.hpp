// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationResponseBody() = default ;
    GetApplicationResponseBody(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody(GetApplicationResponseBody &&) = default ;
    GetApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBody() = default ;
    GetApplicationResponseBody& operator=(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody& operator=(GetApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Application : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Application& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTokenValidity, accessTokenValidity_);
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DelegatedScope, delegatedScope_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(IsMultiTenant, isMultiTenant_);
        DARABONBA_PTR_TO_JSON(ProtocolVersion, protocolVersion_);
        DARABONBA_PTR_TO_JSON(RedirectUris, redirectUris_);
        DARABONBA_PTR_TO_JSON(RefreshTokenValidity, refreshTokenValidity_);
        DARABONBA_PTR_TO_JSON(SecretRequired, secretRequired_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTokenValidity, accessTokenValidity_);
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DelegatedScope, delegatedScope_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(IsMultiTenant, isMultiTenant_);
        DARABONBA_PTR_FROM_JSON(ProtocolVersion, protocolVersion_);
        DARABONBA_PTR_FROM_JSON(RedirectUris, redirectUris_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenValidity, refreshTokenValidity_);
        DARABONBA_PTR_FROM_JSON(SecretRequired, secretRequired_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      Application() = default ;
      Application(const Application &) = default ;
      Application(Application &&) = default ;
      Application(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Application() = default ;
      Application& operator=(const Application &) = default ;
      Application& operator=(Application &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RedirectUris : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RedirectUris& obj) { 
          DARABONBA_PTR_TO_JSON(RedirectUri, redirectUri_);
        };
        friend void from_json(const Darabonba::Json& j, RedirectUris& obj) { 
          DARABONBA_PTR_FROM_JSON(RedirectUri, redirectUri_);
        };
        RedirectUris() = default ;
        RedirectUris(const RedirectUris &) = default ;
        RedirectUris(RedirectUris &&) = default ;
        RedirectUris(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RedirectUris() = default ;
        RedirectUris& operator=(const RedirectUris &) = default ;
        RedirectUris& operator=(RedirectUris &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->redirectUri_ == nullptr; };
        // redirectUri Field Functions 
        bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
        void deleteRedirectUri() { this->redirectUri_ = nullptr;};
        inline const vector<string> & getRedirectUri() const { DARABONBA_PTR_GET_CONST(redirectUri_, vector<string>) };
        inline vector<string> getRedirectUri() { DARABONBA_PTR_GET(redirectUri_, vector<string>) };
        inline RedirectUris& setRedirectUri(const vector<string> & redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };
        inline RedirectUris& setRedirectUri(vector<string> && redirectUri) { DARABONBA_PTR_SET_RVALUE(redirectUri_, redirectUri) };


      protected:
        shared_ptr<vector<string>> redirectUri_ {};
      };

      class DelegatedScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DelegatedScope& obj) { 
          DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
        };
        friend void from_json(const Darabonba::Json& j, DelegatedScope& obj) { 
          DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
        };
        DelegatedScope() = default ;
        DelegatedScope(const DelegatedScope &) = default ;
        DelegatedScope(DelegatedScope &&) = default ;
        DelegatedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DelegatedScope() = default ;
        DelegatedScope& operator=(const DelegatedScope &) = default ;
        DelegatedScope& operator=(DelegatedScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PredefinedScopes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PredefinedScopes& obj) { 
            DARABONBA_PTR_TO_JSON(PredefinedScope, predefinedScope_);
          };
          friend void from_json(const Darabonba::Json& j, PredefinedScopes& obj) { 
            DARABONBA_PTR_FROM_JSON(PredefinedScope, predefinedScope_);
          };
          PredefinedScopes() = default ;
          PredefinedScopes(const PredefinedScopes &) = default ;
          PredefinedScopes(PredefinedScopes &&) = default ;
          PredefinedScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PredefinedScopes() = default ;
          PredefinedScopes& operator=(const PredefinedScopes &) = default ;
          PredefinedScopes& operator=(PredefinedScopes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PredefinedScope : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PredefinedScope& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Required, required_);
            };
            friend void from_json(const Darabonba::Json& j, PredefinedScope& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Required, required_);
            };
            PredefinedScope() = default ;
            PredefinedScope(const PredefinedScope &) = default ;
            PredefinedScope(PredefinedScope &&) = default ;
            PredefinedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PredefinedScope() = default ;
            PredefinedScope& operator=(const PredefinedScope &) = default ;
            PredefinedScope& operator=(PredefinedScope &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->required_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline PredefinedScope& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline PredefinedScope& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // required Field Functions 
            bool hasRequired() const { return this->required_ != nullptr;};
            void deleteRequired() { this->required_ = nullptr;};
            inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
            inline PredefinedScope& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          protected:
            // The description of the permission.
            shared_ptr<string> description_ {};
            // The name of the permission.
            shared_ptr<string> name_ {};
            // Indicates whether the permission is automatically selected by default when you install the application. Valid values:
            // 
            // *   true
            // *   false
            // 
            // `openid` is required by default.
            shared_ptr<bool> required_ {};
          };

          virtual bool empty() const override { return this->predefinedScope_ == nullptr; };
          // predefinedScope Field Functions 
          bool hasPredefinedScope() const { return this->predefinedScope_ != nullptr;};
          void deletePredefinedScope() { this->predefinedScope_ = nullptr;};
          inline const vector<PredefinedScopes::PredefinedScope> & getPredefinedScope() const { DARABONBA_PTR_GET_CONST(predefinedScope_, vector<PredefinedScopes::PredefinedScope>) };
          inline vector<PredefinedScopes::PredefinedScope> getPredefinedScope() { DARABONBA_PTR_GET(predefinedScope_, vector<PredefinedScopes::PredefinedScope>) };
          inline PredefinedScopes& setPredefinedScope(const vector<PredefinedScopes::PredefinedScope> & predefinedScope) { DARABONBA_PTR_SET_VALUE(predefinedScope_, predefinedScope) };
          inline PredefinedScopes& setPredefinedScope(vector<PredefinedScopes::PredefinedScope> && predefinedScope) { DARABONBA_PTR_SET_RVALUE(predefinedScope_, predefinedScope) };


        protected:
          shared_ptr<vector<PredefinedScopes::PredefinedScope>> predefinedScope_ {};
        };

        virtual bool empty() const override { return this->predefinedScopes_ == nullptr; };
        // predefinedScopes Field Functions 
        bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
        void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
        inline const DelegatedScope::PredefinedScopes & getPredefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, DelegatedScope::PredefinedScopes) };
        inline DelegatedScope::PredefinedScopes getPredefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, DelegatedScope::PredefinedScopes) };
        inline DelegatedScope& setPredefinedScopes(const DelegatedScope::PredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
        inline DelegatedScope& setPredefinedScopes(DelegatedScope::PredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


      protected:
        // The information about the permissions that are granted on the application.
        shared_ptr<DelegatedScope::PredefinedScopes> predefinedScopes_ {};
      };

      virtual bool empty() const override { return this->accessTokenValidity_ == nullptr
        && this->accountId_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->appType_ == nullptr && this->createDate_ == nullptr
        && this->delegatedScope_ == nullptr && this->displayName_ == nullptr && this->isMultiTenant_ == nullptr && this->protocolVersion_ == nullptr && this->redirectUris_ == nullptr
        && this->refreshTokenValidity_ == nullptr && this->secretRequired_ == nullptr && this->updateDate_ == nullptr; };
      // accessTokenValidity Field Functions 
      bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
      void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
      inline int32_t getAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, 0) };
      inline Application& setAccessTokenValidity(int32_t accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Application& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Application& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Application& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Application& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Application& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // delegatedScope Field Functions 
      bool hasDelegatedScope() const { return this->delegatedScope_ != nullptr;};
      void deleteDelegatedScope() { this->delegatedScope_ = nullptr;};
      inline const Application::DelegatedScope & getDelegatedScope() const { DARABONBA_PTR_GET_CONST(delegatedScope_, Application::DelegatedScope) };
      inline Application::DelegatedScope getDelegatedScope() { DARABONBA_PTR_GET(delegatedScope_, Application::DelegatedScope) };
      inline Application& setDelegatedScope(const Application::DelegatedScope & delegatedScope) { DARABONBA_PTR_SET_VALUE(delegatedScope_, delegatedScope) };
      inline Application& setDelegatedScope(Application::DelegatedScope && delegatedScope) { DARABONBA_PTR_SET_RVALUE(delegatedScope_, delegatedScope) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Application& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // isMultiTenant Field Functions 
      bool hasIsMultiTenant() const { return this->isMultiTenant_ != nullptr;};
      void deleteIsMultiTenant() { this->isMultiTenant_ = nullptr;};
      inline bool getIsMultiTenant() const { DARABONBA_PTR_GET_DEFAULT(isMultiTenant_, false) };
      inline Application& setIsMultiTenant(bool isMultiTenant) { DARABONBA_PTR_SET_VALUE(isMultiTenant_, isMultiTenant) };


      // protocolVersion Field Functions 
      bool hasProtocolVersion() const { return this->protocolVersion_ != nullptr;};
      void deleteProtocolVersion() { this->protocolVersion_ = nullptr;};
      inline string getProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(protocolVersion_, "") };
      inline Application& setProtocolVersion(string protocolVersion) { DARABONBA_PTR_SET_VALUE(protocolVersion_, protocolVersion) };


      // redirectUris Field Functions 
      bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
      void deleteRedirectUris() { this->redirectUris_ = nullptr;};
      inline const Application::RedirectUris & getRedirectUris() const { DARABONBA_PTR_GET_CONST(redirectUris_, Application::RedirectUris) };
      inline Application::RedirectUris getRedirectUris() { DARABONBA_PTR_GET(redirectUris_, Application::RedirectUris) };
      inline Application& setRedirectUris(const Application::RedirectUris & redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };
      inline Application& setRedirectUris(Application::RedirectUris && redirectUris) { DARABONBA_PTR_SET_RVALUE(redirectUris_, redirectUris) };


      // refreshTokenValidity Field Functions 
      bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
      void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
      inline int32_t getRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, 0) };
      inline Application& setRefreshTokenValidity(int32_t refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


      // secretRequired Field Functions 
      bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
      void deleteSecretRequired() { this->secretRequired_ = nullptr;};
      inline bool getSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
      inline Application& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Application& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The validity period of the access token. Unit: seconds.
      shared_ptr<int32_t> accessTokenValidity_ {};
      // The ID of the Alibaba Cloud account to which the application belongs.
      shared_ptr<string> accountId_ {};
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The type of the application. Valid values:
      // 
      // *   WebApp: a web application.
      // *   NativeApp: a native application that runs on an operating system, such as a desktop or mobile operating system.
      // *   ServerApp: an application that can access Alibaba Cloud services without the need for user logon. Only applications that synchronize user information based on the System for Cross-domain Identity Management (SCIM) protocol are supported.
      shared_ptr<string> appType_ {};
      // The creation time.
      shared_ptr<string> createDate_ {};
      // The information about the permissions that are granted on the application.
      shared_ptr<Application::DelegatedScope> delegatedScope_ {};
      // The display name of the application.
      shared_ptr<string> displayName_ {};
      // Indicates whether the application can be installed by using other Alibaba Cloud accounts.
      shared_ptr<bool> isMultiTenant_ {};
      shared_ptr<string> protocolVersion_ {};
      // The callback URL.
      shared_ptr<Application::RedirectUris> redirectUris_ {};
      // The validity period of the refresh token. Unit: seconds.
      shared_ptr<int32_t> refreshTokenValidity_ {};
      // Indicates whether a secret is required.
      shared_ptr<bool> secretRequired_ {};
      // The update time.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->application_ == nullptr
        && this->requestId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const GetApplicationResponseBody::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody::Application getApplication() { DARABONBA_PTR_GET(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody& setApplication(const GetApplicationResponseBody::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline GetApplicationResponseBody& setApplication(GetApplicationResponseBody::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application.
    shared_ptr<GetApplicationResponseBody::Application> application_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
