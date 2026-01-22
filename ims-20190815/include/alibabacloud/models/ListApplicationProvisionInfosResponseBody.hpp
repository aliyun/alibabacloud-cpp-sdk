// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODY_HPP_
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
  class ListApplicationProvisionInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationProvisionInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationProvisionInfos, applicationProvisionInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationProvisionInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationProvisionInfos, applicationProvisionInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApplicationProvisionInfosResponseBody() = default ;
    ListApplicationProvisionInfosResponseBody(const ListApplicationProvisionInfosResponseBody &) = default ;
    ListApplicationProvisionInfosResponseBody(ListApplicationProvisionInfosResponseBody &&) = default ;
    ListApplicationProvisionInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationProvisionInfosResponseBody() = default ;
    ListApplicationProvisionInfosResponseBody& operator=(const ListApplicationProvisionInfosResponseBody &) = default ;
    ListApplicationProvisionInfosResponseBody& operator=(ListApplicationProvisionInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationProvisionInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationProvisionInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationProvisionInfo, applicationProvisionInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationProvisionInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationProvisionInfo, applicationProvisionInfo_);
      };
      ApplicationProvisionInfos() = default ;
      ApplicationProvisionInfos(const ApplicationProvisionInfos &) = default ;
      ApplicationProvisionInfos(ApplicationProvisionInfos &&) = default ;
      ApplicationProvisionInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationProvisionInfos() = default ;
      ApplicationProvisionInfos& operator=(const ApplicationProvisionInfos &) = default ;
      ApplicationProvisionInfos& operator=(ApplicationProvisionInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApplicationProvisionInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationProvisionInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(DelegatedScope, delegatedScope_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationProvisionInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(DelegatedScope, delegatedScope_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        ApplicationProvisionInfo() = default ;
        ApplicationProvisionInfo(const ApplicationProvisionInfo &) = default ;
        ApplicationProvisionInfo(ApplicationProvisionInfo &&) = default ;
        ApplicationProvisionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationProvisionInfo() = default ;
        ApplicationProvisionInfo& operator=(const ApplicationProvisionInfo &) = default ;
        ApplicationProvisionInfo& operator=(ApplicationProvisionInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
              };
              friend void from_json(const Darabonba::Json& j, PredefinedScope& obj) { 
                DARABONBA_PTR_FROM_JSON(Description, description_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
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
        && this->name_ == nullptr; };
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


            protected:
              // The description of the permission.
              shared_ptr<string> description_ {};
              // The name of the permission.
              shared_ptr<string> name_ {};
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
          // The information about the permissions that are granted to the application.
          shared_ptr<DelegatedScope::PredefinedScopes> predefinedScopes_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->createDate_ == nullptr && this->delegatedScope_ == nullptr && this->displayName_ == nullptr
        && this->updateDate_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline ApplicationProvisionInfo& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline ApplicationProvisionInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline ApplicationProvisionInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline ApplicationProvisionInfo& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // delegatedScope Field Functions 
        bool hasDelegatedScope() const { return this->delegatedScope_ != nullptr;};
        void deleteDelegatedScope() { this->delegatedScope_ = nullptr;};
        inline const ApplicationProvisionInfo::DelegatedScope & getDelegatedScope() const { DARABONBA_PTR_GET_CONST(delegatedScope_, ApplicationProvisionInfo::DelegatedScope) };
        inline ApplicationProvisionInfo::DelegatedScope getDelegatedScope() { DARABONBA_PTR_GET(delegatedScope_, ApplicationProvisionInfo::DelegatedScope) };
        inline ApplicationProvisionInfo& setDelegatedScope(const ApplicationProvisionInfo::DelegatedScope & delegatedScope) { DARABONBA_PTR_SET_VALUE(delegatedScope_, delegatedScope) };
        inline ApplicationProvisionInfo& setDelegatedScope(ApplicationProvisionInfo::DelegatedScope && delegatedScope) { DARABONBA_PTR_SET_RVALUE(delegatedScope_, delegatedScope) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ApplicationProvisionInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline ApplicationProvisionInfo& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> accountId_ {};
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The time when the application was installed. The value is a timestamp.
        shared_ptr<string> createDate_ {};
        // The information about the permissions that are granted to the application.
        shared_ptr<ApplicationProvisionInfo::DelegatedScope> delegatedScope_ {};
        // The display name of the application.
        shared_ptr<string> displayName_ {};
        // The update time. The value is a timestamp.
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->applicationProvisionInfo_ == nullptr; };
      // applicationProvisionInfo Field Functions 
      bool hasApplicationProvisionInfo() const { return this->applicationProvisionInfo_ != nullptr;};
      void deleteApplicationProvisionInfo() { this->applicationProvisionInfo_ = nullptr;};
      inline const vector<ApplicationProvisionInfos::ApplicationProvisionInfo> & getApplicationProvisionInfo() const { DARABONBA_PTR_GET_CONST(applicationProvisionInfo_, vector<ApplicationProvisionInfos::ApplicationProvisionInfo>) };
      inline vector<ApplicationProvisionInfos::ApplicationProvisionInfo> getApplicationProvisionInfo() { DARABONBA_PTR_GET(applicationProvisionInfo_, vector<ApplicationProvisionInfos::ApplicationProvisionInfo>) };
      inline ApplicationProvisionInfos& setApplicationProvisionInfo(const vector<ApplicationProvisionInfos::ApplicationProvisionInfo> & applicationProvisionInfo) { DARABONBA_PTR_SET_VALUE(applicationProvisionInfo_, applicationProvisionInfo) };
      inline ApplicationProvisionInfos& setApplicationProvisionInfo(vector<ApplicationProvisionInfos::ApplicationProvisionInfo> && applicationProvisionInfo) { DARABONBA_PTR_SET_RVALUE(applicationProvisionInfo_, applicationProvisionInfo) };


    protected:
      shared_ptr<vector<ApplicationProvisionInfos::ApplicationProvisionInfo>> applicationProvisionInfo_ {};
    };

    virtual bool empty() const override { return this->applicationProvisionInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationProvisionInfos Field Functions 
    bool hasApplicationProvisionInfos() const { return this->applicationProvisionInfos_ != nullptr;};
    void deleteApplicationProvisionInfos() { this->applicationProvisionInfos_ = nullptr;};
    inline const ListApplicationProvisionInfosResponseBody::ApplicationProvisionInfos & getApplicationProvisionInfos() const { DARABONBA_PTR_GET_CONST(applicationProvisionInfos_, ListApplicationProvisionInfosResponseBody::ApplicationProvisionInfos) };
    inline ListApplicationProvisionInfosResponseBody::ApplicationProvisionInfos getApplicationProvisionInfos() { DARABONBA_PTR_GET(applicationProvisionInfos_, ListApplicationProvisionInfosResponseBody::ApplicationProvisionInfos) };
    inline ListApplicationProvisionInfosResponseBody& setApplicationProvisionInfos(const ListApplicationProvisionInfosResponseBody::ApplicationProvisionInfos & applicationProvisionInfos) { DARABONBA_PTR_SET_VALUE(applicationProvisionInfos_, applicationProvisionInfos) };
    inline ListApplicationProvisionInfosResponseBody& setApplicationProvisionInfos(ListApplicationProvisionInfosResponseBody::ApplicationProvisionInfos && applicationProvisionInfos) { DARABONBA_PTR_SET_RVALUE(applicationProvisionInfos_, applicationProvisionInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationProvisionInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the installed applications.
    shared_ptr<ListApplicationProvisionInfosResponseBody::ApplicationProvisionInfos> applicationProvisionInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
