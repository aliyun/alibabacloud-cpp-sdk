// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAuthorizedAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApps, authorizedApps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApps, authorizedApps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAuthorizedAppsResponseBody() = default ;
    DescribeAuthorizedAppsResponseBody(const DescribeAuthorizedAppsResponseBody &) = default ;
    DescribeAuthorizedAppsResponseBody(DescribeAuthorizedAppsResponseBody &&) = default ;
    DescribeAuthorizedAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedAppsResponseBody() = default ;
    DescribeAuthorizedAppsResponseBody& operator=(const DescribeAuthorizedAppsResponseBody &) = default ;
    DescribeAuthorizedAppsResponseBody& operator=(DescribeAuthorizedAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizedApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizedApps& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizedApp, authorizedApp_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizedApps& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizedApp, authorizedApp_);
      };
      AuthorizedApps() = default ;
      AuthorizedApps(const AuthorizedApps &) = default ;
      AuthorizedApps(AuthorizedApps &&) = default ;
      AuthorizedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizedApps() = default ;
      AuthorizedApps& operator=(const AuthorizedApps &) = default ;
      AuthorizedApps& operator=(AuthorizedApps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthorizedApp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizedApp& obj) { 
          DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AuthVaildTime, authVaildTime_);
          DARABONBA_PTR_TO_JSON(AuthorizationSource, authorizationSource_);
          DARABONBA_PTR_TO_JSON(AuthorizedTime, authorizedTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizedApp& obj) { 
          DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AuthVaildTime, authVaildTime_);
          DARABONBA_PTR_FROM_JSON(AuthorizationSource, authorizationSource_);
          DARABONBA_PTR_FROM_JSON(AuthorizedTime, authorizedTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
        };
        AuthorizedApp() = default ;
        AuthorizedApp(const AuthorizedApp &) = default ;
        AuthorizedApp(AuthorizedApp &&) = default ;
        AuthorizedApp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizedApp() = default ;
        AuthorizedApp& operator=(const AuthorizedApp &) = default ;
        AuthorizedApp& operator=(AuthorizedApp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tag& obj) { 
            DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Tag& obj) { 
            DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
          };
          Tag() = default ;
          Tag(const Tag &) = default ;
          Tag(Tag &&) = default ;
          Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tag() = default ;
          Tag& operator=(const Tag &) = default ;
          Tag& operator=(Tag &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagInfo() = default ;
            TagInfo(const TagInfo &) = default ;
            TagInfo(TagInfo &&) = default ;
            TagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagInfo() = default ;
            TagInfo& operator=(const TagInfo &) = default ;
            TagInfo& operator=(TagInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline TagInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagInfo_ == nullptr; };
          // tagInfo Field Functions 
          bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
          void deleteTagInfo() { this->tagInfo_ = nullptr;};
          inline const vector<Tag::TagInfo> & getTagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Tag::TagInfo>) };
          inline vector<Tag::TagInfo> getTagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Tag::TagInfo>) };
          inline Tag& setTagInfo(const vector<Tag::TagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
          inline Tag& setTagInfo(vector<Tag::TagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


        protected:
          shared_ptr<vector<Tag::TagInfo>> tagInfo_ {};
        };

        virtual bool empty() const override { return this->appDescription_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->authVaildTime_ == nullptr && this->authorizationSource_ == nullptr && this->authorizedTime_ == nullptr
        && this->description_ == nullptr && this->operator_ == nullptr && this->stageAlias_ == nullptr && this->stageName_ == nullptr && this->tag_ == nullptr; };
        // appDescription Field Functions 
        bool hasAppDescription() const { return this->appDescription_ != nullptr;};
        void deleteAppDescription() { this->appDescription_ = nullptr;};
        inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
        inline AuthorizedApp& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline AuthorizedApp& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AuthorizedApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // authVaildTime Field Functions 
        bool hasAuthVaildTime() const { return this->authVaildTime_ != nullptr;};
        void deleteAuthVaildTime() { this->authVaildTime_ = nullptr;};
        inline string getAuthVaildTime() const { DARABONBA_PTR_GET_DEFAULT(authVaildTime_, "") };
        inline AuthorizedApp& setAuthVaildTime(string authVaildTime) { DARABONBA_PTR_SET_VALUE(authVaildTime_, authVaildTime) };


        // authorizationSource Field Functions 
        bool hasAuthorizationSource() const { return this->authorizationSource_ != nullptr;};
        void deleteAuthorizationSource() { this->authorizationSource_ = nullptr;};
        inline string getAuthorizationSource() const { DARABONBA_PTR_GET_DEFAULT(authorizationSource_, "") };
        inline AuthorizedApp& setAuthorizationSource(string authorizationSource) { DARABONBA_PTR_SET_VALUE(authorizationSource_, authorizationSource) };


        // authorizedTime Field Functions 
        bool hasAuthorizedTime() const { return this->authorizedTime_ != nullptr;};
        void deleteAuthorizedTime() { this->authorizedTime_ = nullptr;};
        inline string getAuthorizedTime() const { DARABONBA_PTR_GET_DEFAULT(authorizedTime_, "") };
        inline AuthorizedApp& setAuthorizedTime(string authorizedTime) { DARABONBA_PTR_SET_VALUE(authorizedTime_, authorizedTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AuthorizedApp& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline AuthorizedApp& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // stageAlias Field Functions 
        bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
        void deleteStageAlias() { this->stageAlias_ = nullptr;};
        inline string getStageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
        inline AuthorizedApp& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline AuthorizedApp& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const AuthorizedApp::Tag & getTag() const { DARABONBA_PTR_GET_CONST(tag_, AuthorizedApp::Tag) };
        inline AuthorizedApp::Tag getTag() { DARABONBA_PTR_GET(tag_, AuthorizedApp::Tag) };
        inline AuthorizedApp& setTag(const AuthorizedApp::Tag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline AuthorizedApp& setTag(AuthorizedApp::Tag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      protected:
        // The application description.
        shared_ptr<string> appDescription_ {};
        // The application ID, which is generated by the system and globally unique.
        shared_ptr<int64_t> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The application name.
        shared_ptr<string> authVaildTime_ {};
        // The authorization source. Valid values:
        // 
        // *   **CONSOLE**
        // *   **API**
        shared_ptr<string> authorizationSource_ {};
        // The authorization time (UTC).
        shared_ptr<string> authorizedTime_ {};
        // The authorization description.
        shared_ptr<string> description_ {};
        // The authorizer. Valid values:
        // 
        // *   **PROVIDER**: API owner
        // *   **CONSUMER**: API caller
        shared_ptr<string> operator_ {};
        // The environment alias.
        shared_ptr<string> stageAlias_ {};
        // The environment to which the API is published. Valid values:
        // 
        // *   **RELEASE**: the production environment
        // *   **PRE**: the staging environment
        // *   **TEST**: the test environment
        shared_ptr<string> stageName_ {};
        // The key of the tag.
        shared_ptr<AuthorizedApp::Tag> tag_ {};
      };

      virtual bool empty() const override { return this->authorizedApp_ == nullptr; };
      // authorizedApp Field Functions 
      bool hasAuthorizedApp() const { return this->authorizedApp_ != nullptr;};
      void deleteAuthorizedApp() { this->authorizedApp_ = nullptr;};
      inline const vector<AuthorizedApps::AuthorizedApp> & getAuthorizedApp() const { DARABONBA_PTR_GET_CONST(authorizedApp_, vector<AuthorizedApps::AuthorizedApp>) };
      inline vector<AuthorizedApps::AuthorizedApp> getAuthorizedApp() { DARABONBA_PTR_GET(authorizedApp_, vector<AuthorizedApps::AuthorizedApp>) };
      inline AuthorizedApps& setAuthorizedApp(const vector<AuthorizedApps::AuthorizedApp> & authorizedApp) { DARABONBA_PTR_SET_VALUE(authorizedApp_, authorizedApp) };
      inline AuthorizedApps& setAuthorizedApp(vector<AuthorizedApps::AuthorizedApp> && authorizedApp) { DARABONBA_PTR_SET_RVALUE(authorizedApp_, authorizedApp) };


    protected:
      shared_ptr<vector<AuthorizedApps::AuthorizedApp>> authorizedApp_ {};
    };

    virtual bool empty() const override { return this->authorizedApps_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authorizedApps Field Functions 
    bool hasAuthorizedApps() const { return this->authorizedApps_ != nullptr;};
    void deleteAuthorizedApps() { this->authorizedApps_ = nullptr;};
    inline const DescribeAuthorizedAppsResponseBody::AuthorizedApps & getAuthorizedApps() const { DARABONBA_PTR_GET_CONST(authorizedApps_, DescribeAuthorizedAppsResponseBody::AuthorizedApps) };
    inline DescribeAuthorizedAppsResponseBody::AuthorizedApps getAuthorizedApps() { DARABONBA_PTR_GET(authorizedApps_, DescribeAuthorizedAppsResponseBody::AuthorizedApps) };
    inline DescribeAuthorizedAppsResponseBody& setAuthorizedApps(const DescribeAuthorizedAppsResponseBody::AuthorizedApps & authorizedApps) { DARABONBA_PTR_SET_VALUE(authorizedApps_, authorizedApps) };
    inline DescribeAuthorizedAppsResponseBody& setAuthorizedApps(DescribeAuthorizedAppsResponseBody::AuthorizedApps && authorizedApps) { DARABONBA_PTR_SET_RVALUE(authorizedApps_, authorizedApps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAuthorizedAppsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuthorizedAppsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuthorizedAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAuthorizedAppsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorized applications.
    shared_ptr<DescribeAuthorizedAppsResponseBody::AuthorizedApps> authorizedApps_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
