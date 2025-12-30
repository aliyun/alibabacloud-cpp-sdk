// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiCallStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServiceApiCallStatisticsResponseBody() = default ;
    ListDataServiceApiCallStatisticsResponseBody(const ListDataServiceApiCallStatisticsResponseBody &) = default ;
    ListDataServiceApiCallStatisticsResponseBody(ListDataServiceApiCallStatisticsResponseBody &&) = default ;
    ListDataServiceApiCallStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallStatisticsResponseBody() = default ;
    ListDataServiceApiCallStatisticsResponseBody& operator=(const ListDataServiceApiCallStatisticsResponseBody &) = default ;
    ListDataServiceApiCallStatisticsResponseBody& operator=(ListDataServiceApiCallStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(CallStatisticsList, callStatisticsList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CallStatisticsList, callStatisticsList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CallStatisticsList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallStatisticsList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(AppNameList, appNameList_);
          DARABONBA_PTR_TO_JSON(AuthorizedAppCount, authorizedAppCount_);
          DARABONBA_PTR_TO_JSON(AvgResponseTime, avgResponseTime_);
          DARABONBA_PTR_TO_JSON(CallCount, callCount_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
          DARABONBA_PTR_TO_JSON(LastCallTime, lastCallTime_);
          DARABONBA_PTR_TO_JSON(OfflineRate, offlineRate_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
        };
        friend void from_json(const Darabonba::Json& j, CallStatisticsList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(AppNameList, appNameList_);
          DARABONBA_PTR_FROM_JSON(AuthorizedAppCount, authorizedAppCount_);
          DARABONBA_PTR_FROM_JSON(AvgResponseTime, avgResponseTime_);
          DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
          DARABONBA_PTR_FROM_JSON(LastCallTime, lastCallTime_);
          DARABONBA_PTR_FROM_JSON(OfflineRate, offlineRate_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
        };
        CallStatisticsList() = default ;
        CallStatisticsList(const CallStatisticsList &) = default ;
        CallStatisticsList(CallStatisticsList &&) = default ;
        CallStatisticsList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallStatisticsList() = default ;
        CallStatisticsList& operator=(const CallStatisticsList &) = default ;
        CallStatisticsList& operator=(CallStatisticsList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->appNameList_ == nullptr && this->authorizedAppCount_ == nullptr && this->avgResponseTime_ == nullptr && this->callCount_ == nullptr
        && this->creator_ == nullptr && this->errorCount_ == nullptr && this->errorRate_ == nullptr && this->lastCallTime_ == nullptr && this->offlineRate_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->sqlId_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline CallStatisticsList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline CallStatisticsList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // appNameList Field Functions 
        bool hasAppNameList() const { return this->appNameList_ != nullptr;};
        void deleteAppNameList() { this->appNameList_ = nullptr;};
        inline const vector<string> & getAppNameList() const { DARABONBA_PTR_GET_CONST(appNameList_, vector<string>) };
        inline vector<string> getAppNameList() { DARABONBA_PTR_GET(appNameList_, vector<string>) };
        inline CallStatisticsList& setAppNameList(const vector<string> & appNameList) { DARABONBA_PTR_SET_VALUE(appNameList_, appNameList) };
        inline CallStatisticsList& setAppNameList(vector<string> && appNameList) { DARABONBA_PTR_SET_RVALUE(appNameList_, appNameList) };


        // authorizedAppCount Field Functions 
        bool hasAuthorizedAppCount() const { return this->authorizedAppCount_ != nullptr;};
        void deleteAuthorizedAppCount() { this->authorizedAppCount_ = nullptr;};
        inline int32_t getAuthorizedAppCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedAppCount_, 0) };
        inline CallStatisticsList& setAuthorizedAppCount(int32_t authorizedAppCount) { DARABONBA_PTR_SET_VALUE(authorizedAppCount_, authorizedAppCount) };


        // avgResponseTime Field Functions 
        bool hasAvgResponseTime() const { return this->avgResponseTime_ != nullptr;};
        void deleteAvgResponseTime() { this->avgResponseTime_ = nullptr;};
        inline double getAvgResponseTime() const { DARABONBA_PTR_GET_DEFAULT(avgResponseTime_, 0.0) };
        inline CallStatisticsList& setAvgResponseTime(double avgResponseTime) { DARABONBA_PTR_SET_VALUE(avgResponseTime_, avgResponseTime) };


        // callCount Field Functions 
        bool hasCallCount() const { return this->callCount_ != nullptr;};
        void deleteCallCount() { this->callCount_ = nullptr;};
        inline int64_t getCallCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
        inline CallStatisticsList& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline CallStatisticsList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline string getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, "") };
        inline CallStatisticsList& setErrorCount(string errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


        // errorRate Field Functions 
        bool hasErrorRate() const { return this->errorRate_ != nullptr;};
        void deleteErrorRate() { this->errorRate_ = nullptr;};
        inline string getErrorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, "") };
        inline CallStatisticsList& setErrorRate(string errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


        // lastCallTime Field Functions 
        bool hasLastCallTime() const { return this->lastCallTime_ != nullptr;};
        void deleteLastCallTime() { this->lastCallTime_ = nullptr;};
        inline string getLastCallTime() const { DARABONBA_PTR_GET_DEFAULT(lastCallTime_, "") };
        inline CallStatisticsList& setLastCallTime(string lastCallTime) { DARABONBA_PTR_SET_VALUE(lastCallTime_, lastCallTime) };


        // offlineRate Field Functions 
        bool hasOfflineRate() const { return this->offlineRate_ != nullptr;};
        void deleteOfflineRate() { this->offlineRate_ = nullptr;};
        inline string getOfflineRate() const { DARABONBA_PTR_GET_DEFAULT(offlineRate_, "") };
        inline CallStatisticsList& setOfflineRate(string offlineRate) { DARABONBA_PTR_SET_VALUE(offlineRate_, offlineRate) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
        inline CallStatisticsList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline CallStatisticsList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // sqlId Field Functions 
        bool hasSqlId() const { return this->sqlId_ != nullptr;};
        void deleteSqlId() { this->sqlId_ = nullptr;};
        inline int32_t getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, 0) };
        inline CallStatisticsList& setSqlId(int32_t sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


      protected:
        shared_ptr<int64_t> apiId_ {};
        shared_ptr<string> apiName_ {};
        shared_ptr<vector<string>> appNameList_ {};
        shared_ptr<int32_t> authorizedAppCount_ {};
        shared_ptr<double> avgResponseTime_ {};
        shared_ptr<int64_t> callCount_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> errorCount_ {};
        shared_ptr<string> errorRate_ {};
        shared_ptr<string> lastCallTime_ {};
        shared_ptr<string> offlineRate_ {};
        shared_ptr<int32_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<int32_t> sqlId_ {};
      };

      virtual bool empty() const override { return this->callStatisticsList_ == nullptr
        && this->totalCount_ == nullptr; };
      // callStatisticsList Field Functions 
      bool hasCallStatisticsList() const { return this->callStatisticsList_ != nullptr;};
      void deleteCallStatisticsList() { this->callStatisticsList_ = nullptr;};
      inline const vector<PageResult::CallStatisticsList> & getCallStatisticsList() const { DARABONBA_PTR_GET_CONST(callStatisticsList_, vector<PageResult::CallStatisticsList>) };
      inline vector<PageResult::CallStatisticsList> getCallStatisticsList() { DARABONBA_PTR_GET(callStatisticsList_, vector<PageResult::CallStatisticsList>) };
      inline PageResult& setCallStatisticsList(const vector<PageResult::CallStatisticsList> & callStatisticsList) { DARABONBA_PTR_SET_VALUE(callStatisticsList_, callStatisticsList) };
      inline PageResult& setCallStatisticsList(vector<PageResult::CallStatisticsList> && callStatisticsList) { DARABONBA_PTR_SET_RVALUE(callStatisticsList_, callStatisticsList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::CallStatisticsList>> callStatisticsList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataServiceApiCallStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServiceApiCallStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataServiceApiCallStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDataServiceApiCallStatisticsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDataServiceApiCallStatisticsResponseBody::PageResult) };
    inline ListDataServiceApiCallStatisticsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDataServiceApiCallStatisticsResponseBody::PageResult) };
    inline ListDataServiceApiCallStatisticsResponseBody& setPageResult(const ListDataServiceApiCallStatisticsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDataServiceApiCallStatisticsResponseBody& setPageResult(ListDataServiceApiCallStatisticsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceApiCallStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServiceApiCallStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataServiceApiCallStatisticsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
