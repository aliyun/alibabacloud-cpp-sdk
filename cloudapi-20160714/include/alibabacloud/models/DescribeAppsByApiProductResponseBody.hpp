// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTRESPONSEBODY_HPP_
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
  class DescribeAppsByApiProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsByApiProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApps, authorizedApps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsByApiProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApps, authorizedApps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAppsByApiProductResponseBody() = default ;
    DescribeAppsByApiProductResponseBody(const DescribeAppsByApiProductResponseBody &) = default ;
    DescribeAppsByApiProductResponseBody(DescribeAppsByApiProductResponseBody &&) = default ;
    DescribeAppsByApiProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsByApiProductResponseBody() = default ;
    DescribeAppsByApiProductResponseBody& operator=(const DescribeAppsByApiProductResponseBody &) = default ;
    DescribeAppsByApiProductResponseBody& operator=(DescribeAppsByApiProductResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AuthValidTime, authValidTime_);
          DARABONBA_PTR_TO_JSON(AuthorizedTime, authorizedTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Extend, extend_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizedApp& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AuthValidTime, authValidTime_);
          DARABONBA_PTR_FROM_JSON(AuthorizedTime, authorizedTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Extend, extend_);
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
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->authValidTime_ == nullptr && this->authorizedTime_ == nullptr && this->description_ == nullptr && this->extend_ == nullptr; };
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


        // authValidTime Field Functions 
        bool hasAuthValidTime() const { return this->authValidTime_ != nullptr;};
        void deleteAuthValidTime() { this->authValidTime_ = nullptr;};
        inline string getAuthValidTime() const { DARABONBA_PTR_GET_DEFAULT(authValidTime_, "") };
        inline AuthorizedApp& setAuthValidTime(string authValidTime) { DARABONBA_PTR_SET_VALUE(authValidTime_, authValidTime) };


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


        // extend Field Functions 
        bool hasExtend() const { return this->extend_ != nullptr;};
        void deleteExtend() { this->extend_ = nullptr;};
        inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
        inline AuthorizedApp& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      protected:
        // The application ID.
        shared_ptr<int64_t> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The expiration time of the authorization. The time is in GMT. An empty value indicates that the authorization does not expire.
        shared_ptr<string> authValidTime_ {};
        // The time when the authorization was created. The time is in GMT.
        shared_ptr<string> authorizedTime_ {};
        // The authorization description.
        shared_ptr<string> description_ {};
        // The extended information.
        shared_ptr<string> extend_ {};
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
    inline const DescribeAppsByApiProductResponseBody::AuthorizedApps & getAuthorizedApps() const { DARABONBA_PTR_GET_CONST(authorizedApps_, DescribeAppsByApiProductResponseBody::AuthorizedApps) };
    inline DescribeAppsByApiProductResponseBody::AuthorizedApps getAuthorizedApps() { DARABONBA_PTR_GET(authorizedApps_, DescribeAppsByApiProductResponseBody::AuthorizedApps) };
    inline DescribeAppsByApiProductResponseBody& setAuthorizedApps(const DescribeAppsByApiProductResponseBody::AuthorizedApps & authorizedApps) { DARABONBA_PTR_SET_VALUE(authorizedApps_, authorizedApps) };
    inline DescribeAppsByApiProductResponseBody& setAuthorizedApps(DescribeAppsByApiProductResponseBody::AuthorizedApps && authorizedApps) { DARABONBA_PTR_SET_RVALUE(authorizedApps_, authorizedApps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAppsByApiProductResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppsByApiProductResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppsByApiProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAppsByApiProductResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about authorized applications.
    shared_ptr<DescribeAppsByApiProductResponseBody::AuthorizedApps> authorizedApps_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
