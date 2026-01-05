// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryMessageAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    QueryMessageAppResponseBody() = default ;
    QueryMessageAppResponseBody(const QueryMessageAppResponseBody &) = default ;
    QueryMessageAppResponseBody(QueryMessageAppResponseBody &&) = default ;
    QueryMessageAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageAppResponseBody() = default ;
    QueryMessageAppResponseBody& operator=(const QueryMessageAppResponseBody &) = default ;
    QueryMessageAppResponseBody& operator=(QueryMessageAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AppList, appList_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AppList, appList_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppList& obj) { 
          DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AppList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AppList() = default ;
        AppList(const AppList &) = default ;
        AppList(AppList &&) = default ;
        AppList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppList() = default ;
        AppList& operator=(const AppList &) = default ;
        AppList& operator=(AppList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appConfig_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->createTime_ == nullptr && this->extension_ == nullptr && this->status_ == nullptr; };
        // appConfig Field Functions 
        bool hasAppConfig() const { return this->appConfig_ != nullptr;};
        void deleteAppConfig() { this->appConfig_ = nullptr;};
        inline const map<string, string> & getAppConfig() const { DARABONBA_PTR_GET_CONST(appConfig_, map<string, string>) };
        inline map<string, string> getAppConfig() { DARABONBA_PTR_GET(appConfig_, map<string, string>) };
        inline AppList& setAppConfig(const map<string, string> & appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };
        inline AppList& setAppConfig(map<string, string> && appConfig) { DARABONBA_PTR_SET_RVALUE(appConfig_, appConfig) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline AppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline AppList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline const map<string, string> & getExtension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
        inline map<string, string> getExtension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
        inline AppList& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
        inline AppList& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline AppList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The configurations of the application.
        shared_ptr<map<string, string>> appConfig_ {};
        // The ID of the interactive messaging application.
        shared_ptr<string> appId_ {};
        // The name of the interactive messaging application.
        shared_ptr<string> appName_ {};
        // The time when the interactive messaging application was created. The time is displayed in UTC.
        shared_ptr<int64_t> createTime_ {};
        // The extended field.
        shared_ptr<map<string, string>> extension_ {};
        // The status of the interactive message application. A value of **1** indicates that the application is normal.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->appList_ == nullptr
        && this->hasMore_ == nullptr && this->totalCount_ == nullptr; };
      // appList Field Functions 
      bool hasAppList() const { return this->appList_ != nullptr;};
      void deleteAppList() { this->appList_ = nullptr;};
      inline const vector<Result::AppList> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<Result::AppList>) };
      inline vector<Result::AppList> getAppList() { DARABONBA_PTR_GET(appList_, vector<Result::AppList>) };
      inline Result& setAppList(const vector<Result::AppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
      inline Result& setAppList(vector<Result::AppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Result& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Result& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Details about the interactive messaging applications.
      shared_ptr<vector<Result::AppList>> appList_ {};
      // Indicates whether the current page is followed by another page. Valid values:
      // 
      // *   true: The current page is followed by another page.
      // *   false: The current page is not followed by another page.
      shared_ptr<bool> hasMore_ {};
      // The total number of applications returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMessageAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryMessageAppResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryMessageAppResponseBody::Result>) };
    inline vector<QueryMessageAppResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryMessageAppResponseBody::Result>) };
    inline QueryMessageAppResponseBody& setResult(const vector<QueryMessageAppResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryMessageAppResponseBody& setResult(vector<QueryMessageAppResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<QueryMessageAppResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
