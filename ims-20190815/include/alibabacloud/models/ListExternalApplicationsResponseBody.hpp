// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODY_HPP_
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
  class ListExternalApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalApplications, externalApplications_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalApplications, externalApplications_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListExternalApplicationsResponseBody() = default ;
    ListExternalApplicationsResponseBody(const ListExternalApplicationsResponseBody &) = default ;
    ListExternalApplicationsResponseBody(ListExternalApplicationsResponseBody &&) = default ;
    ListExternalApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalApplicationsResponseBody() = default ;
    ListExternalApplicationsResponseBody& operator=(const ListExternalApplicationsResponseBody &) = default ;
    ListExternalApplicationsResponseBody& operator=(ListExternalApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExternalApplications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExternalApplications& obj) { 
        DARABONBA_PTR_TO_JSON(ExternalApplication, externalApplication_);
      };
      friend void from_json(const Darabonba::Json& j, ExternalApplications& obj) { 
        DARABONBA_PTR_FROM_JSON(ExternalApplication, externalApplication_);
      };
      ExternalApplications() = default ;
      ExternalApplications(const ExternalApplications &) = default ;
      ExternalApplications(ExternalApplications &&) = default ;
      ExternalApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExternalApplications() = default ;
      ExternalApplications& operator=(const ExternalApplications &) = default ;
      ExternalApplications& operator=(ExternalApplications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExternalApplication : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExternalApplication& obj) { 
          DARABONBA_PTR_TO_JSON(AppPrincipalName, appPrincipalName_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(DelegatedScope, delegatedScope_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(ForeignAppId, foreignAppId_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, ExternalApplication& obj) { 
          DARABONBA_PTR_FROM_JSON(AppPrincipalName, appPrincipalName_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(DelegatedScope, delegatedScope_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(ForeignAppId, foreignAppId_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        ExternalApplication() = default ;
        ExternalApplication(const ExternalApplication &) = default ;
        ExternalApplication(ExternalApplication &&) = default ;
        ExternalApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExternalApplication() = default ;
        ExternalApplication& operator=(const ExternalApplication &) = default ;
        ExternalApplication& operator=(ExternalApplication &&) = default ;
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
          // The information about the permissions that are granted to the external application.
          shared_ptr<DelegatedScope::PredefinedScopes> predefinedScopes_ {};
        };

        virtual bool empty() const override { return this->appPrincipalName_ == nullptr
        && this->createDate_ == nullptr && this->delegatedScope_ == nullptr && this->displayName_ == nullptr && this->foreignAppId_ == nullptr && this->tenantId_ == nullptr
        && this->updateDate_ == nullptr; };
        // appPrincipalName Field Functions 
        bool hasAppPrincipalName() const { return this->appPrincipalName_ != nullptr;};
        void deleteAppPrincipalName() { this->appPrincipalName_ = nullptr;};
        inline string getAppPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(appPrincipalName_, "") };
        inline ExternalApplication& setAppPrincipalName(string appPrincipalName) { DARABONBA_PTR_SET_VALUE(appPrincipalName_, appPrincipalName) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline ExternalApplication& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // delegatedScope Field Functions 
        bool hasDelegatedScope() const { return this->delegatedScope_ != nullptr;};
        void deleteDelegatedScope() { this->delegatedScope_ = nullptr;};
        inline const ExternalApplication::DelegatedScope & getDelegatedScope() const { DARABONBA_PTR_GET_CONST(delegatedScope_, ExternalApplication::DelegatedScope) };
        inline ExternalApplication::DelegatedScope getDelegatedScope() { DARABONBA_PTR_GET(delegatedScope_, ExternalApplication::DelegatedScope) };
        inline ExternalApplication& setDelegatedScope(const ExternalApplication::DelegatedScope & delegatedScope) { DARABONBA_PTR_SET_VALUE(delegatedScope_, delegatedScope) };
        inline ExternalApplication& setDelegatedScope(ExternalApplication::DelegatedScope && delegatedScope) { DARABONBA_PTR_SET_RVALUE(delegatedScope_, delegatedScope) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ExternalApplication& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // foreignAppId Field Functions 
        bool hasForeignAppId() const { return this->foreignAppId_ != nullptr;};
        void deleteForeignAppId() { this->foreignAppId_ = nullptr;};
        inline string getForeignAppId() const { DARABONBA_PTR_GET_DEFAULT(foreignAppId_, "") };
        inline ExternalApplication& setForeignAppId(string foreignAppId) { DARABONBA_PTR_SET_VALUE(foreignAppId_, foreignAppId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline ExternalApplication& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline ExternalApplication& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        // The name of the external application principal. The value is in the `<app_name>@app.<account_id>.onaliyun.com` format.
        shared_ptr<string> appPrincipalName_ {};
        // The time when the external application was installed. The value is a timestamp.
        shared_ptr<string> createDate_ {};
        // The information about the permissions that are granted to the external application.
        shared_ptr<ExternalApplication::DelegatedScope> delegatedScope_ {};
        // The display name of the external application.
        shared_ptr<string> displayName_ {};
        // The ID of the external application.
        shared_ptr<string> foreignAppId_ {};
        // The ID of the Alibaba Cloud account for which the external application was installed.
        shared_ptr<string> tenantId_ {};
        // The update time of the external application. The value is a timestamp.
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->externalApplication_ == nullptr; };
      // externalApplication Field Functions 
      bool hasExternalApplication() const { return this->externalApplication_ != nullptr;};
      void deleteExternalApplication() { this->externalApplication_ = nullptr;};
      inline const vector<ExternalApplications::ExternalApplication> & getExternalApplication() const { DARABONBA_PTR_GET_CONST(externalApplication_, vector<ExternalApplications::ExternalApplication>) };
      inline vector<ExternalApplications::ExternalApplication> getExternalApplication() { DARABONBA_PTR_GET(externalApplication_, vector<ExternalApplications::ExternalApplication>) };
      inline ExternalApplications& setExternalApplication(const vector<ExternalApplications::ExternalApplication> & externalApplication) { DARABONBA_PTR_SET_VALUE(externalApplication_, externalApplication) };
      inline ExternalApplications& setExternalApplication(vector<ExternalApplications::ExternalApplication> && externalApplication) { DARABONBA_PTR_SET_RVALUE(externalApplication_, externalApplication) };


    protected:
      shared_ptr<vector<ExternalApplications::ExternalApplication>> externalApplication_ {};
    };

    virtual bool empty() const override { return this->externalApplications_ == nullptr
        && this->isTruncated_ == nullptr && this->marker_ == nullptr && this->requestId_ == nullptr; };
    // externalApplications Field Functions 
    bool hasExternalApplications() const { return this->externalApplications_ != nullptr;};
    void deleteExternalApplications() { this->externalApplications_ = nullptr;};
    inline const ListExternalApplicationsResponseBody::ExternalApplications & getExternalApplications() const { DARABONBA_PTR_GET_CONST(externalApplications_, ListExternalApplicationsResponseBody::ExternalApplications) };
    inline ListExternalApplicationsResponseBody::ExternalApplications getExternalApplications() { DARABONBA_PTR_GET(externalApplications_, ListExternalApplicationsResponseBody::ExternalApplications) };
    inline ListExternalApplicationsResponseBody& setExternalApplications(const ListExternalApplicationsResponseBody::ExternalApplications & externalApplications) { DARABONBA_PTR_SET_VALUE(externalApplications_, externalApplications) };
    inline ListExternalApplicationsResponseBody& setExternalApplications(ListExternalApplicationsResponseBody::ExternalApplications && externalApplications) { DARABONBA_PTR_SET_RVALUE(externalApplications_, externalApplications) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListExternalApplicationsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListExternalApplicationsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExternalApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the external applications.
    shared_ptr<ListExternalApplicationsResponseBody::ExternalApplications> externalApplications_ {};
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // >  This parameter is returned only when `IsTruncated` is `true`.
    shared_ptr<string> marker_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
