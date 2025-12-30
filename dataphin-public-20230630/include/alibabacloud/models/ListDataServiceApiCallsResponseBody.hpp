// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSRESPONSEBODY_HPP_
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
  class ListDataServiceApiCallsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServiceApiCallsResponseBody() = default ;
    ListDataServiceApiCallsResponseBody(const ListDataServiceApiCallsResponseBody &) = default ;
    ListDataServiceApiCallsResponseBody(ListDataServiceApiCallsResponseBody &&) = default ;
    ListDataServiceApiCallsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallsResponseBody() = default ;
    ListDataServiceApiCallsResponseBody& operator=(const ListDataServiceApiCallsResponseBody &) = default ;
    ListDataServiceApiCallsResponseBody& operator=(ListDataServiceApiCallsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(CallLogList, callLogList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CallLogList, callLogList_);
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
      class CallLogList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallLogList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
          DARABONBA_PTR_TO_JSON(BizCodeDescription, bizCodeDescription_);
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(CostTime, costTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(ExecuteCostTime, executeCostTime_);
          DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
          DARABONBA_PTR_TO_JSON(HttpStatusDescription, httpStatusDescription_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(RequestParameter, requestParameter_);
          DARABONBA_PTR_TO_JSON(RequestSize, requestSize_);
          DARABONBA_PTR_TO_JSON(ResponseParameter, responseParameter_);
          DARABONBA_PTR_TO_JSON(ResponseSize, responseSize_);
          DARABONBA_PTR_TO_JSON(ResultCount, resultCount_);
          DARABONBA_PTR_TO_JSON(Sql, sql_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Successful, successful_);
        };
        friend void from_json(const Darabonba::Json& j, CallLogList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
          DARABONBA_PTR_FROM_JSON(BizCodeDescription, bizCodeDescription_);
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(ExecuteCostTime, executeCostTime_);
          DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
          DARABONBA_PTR_FROM_JSON(HttpStatusDescription, httpStatusDescription_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(RequestParameter, requestParameter_);
          DARABONBA_PTR_FROM_JSON(RequestSize, requestSize_);
          DARABONBA_PTR_FROM_JSON(ResponseParameter, responseParameter_);
          DARABONBA_PTR_FROM_JSON(ResponseSize, responseSize_);
          DARABONBA_PTR_FROM_JSON(ResultCount, resultCount_);
          DARABONBA_PTR_FROM_JSON(Sql, sql_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Successful, successful_);
        };
        CallLogList() = default ;
        CallLogList(const CallLogList &) = default ;
        CallLogList(CallLogList &&) = default ;
        CallLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallLogList() = default ;
        CallLogList& operator=(const CallLogList &) = default ;
        CallLogList& operator=(CallLogList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->appKey_ == nullptr && this->appName_ == nullptr && this->bizCode_ == nullptr && this->bizCodeDescription_ == nullptr
        && this->clientIp_ == nullptr && this->costTime_ == nullptr && this->endTime_ == nullptr && this->env_ == nullptr && this->executeCostTime_ == nullptr
        && this->executeMode_ == nullptr && this->httpStatusCode_ == nullptr && this->httpStatusDescription_ == nullptr && this->jobId_ == nullptr && this->projectId_ == nullptr
        && this->projectName_ == nullptr && this->requestId_ == nullptr && this->requestParameter_ == nullptr && this->requestSize_ == nullptr && this->responseParameter_ == nullptr
        && this->responseSize_ == nullptr && this->resultCount_ == nullptr && this->sql_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->successful_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline CallLogList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline CallLogList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
        inline CallLogList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline CallLogList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // bizCode Field Functions 
        bool hasBizCode() const { return this->bizCode_ != nullptr;};
        void deleteBizCode() { this->bizCode_ = nullptr;};
        inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
        inline CallLogList& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


        // bizCodeDescription Field Functions 
        bool hasBizCodeDescription() const { return this->bizCodeDescription_ != nullptr;};
        void deleteBizCodeDescription() { this->bizCodeDescription_ = nullptr;};
        inline string getBizCodeDescription() const { DARABONBA_PTR_GET_DEFAULT(bizCodeDescription_, "") };
        inline CallLogList& setBizCodeDescription(string bizCodeDescription) { DARABONBA_PTR_SET_VALUE(bizCodeDescription_, bizCodeDescription) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline CallLogList& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // costTime Field Functions 
        bool hasCostTime() const { return this->costTime_ != nullptr;};
        void deleteCostTime() { this->costTime_ = nullptr;};
        inline int32_t getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0) };
        inline CallLogList& setCostTime(int32_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline CallLogList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline int32_t getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, 0) };
        inline CallLogList& setEnv(int32_t env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // executeCostTime Field Functions 
        bool hasExecuteCostTime() const { return this->executeCostTime_ != nullptr;};
        void deleteExecuteCostTime() { this->executeCostTime_ = nullptr;};
        inline int32_t getExecuteCostTime() const { DARABONBA_PTR_GET_DEFAULT(executeCostTime_, 0) };
        inline CallLogList& setExecuteCostTime(int32_t executeCostTime) { DARABONBA_PTR_SET_VALUE(executeCostTime_, executeCostTime) };


        // executeMode Field Functions 
        bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
        void deleteExecuteMode() { this->executeMode_ = nullptr;};
        inline int32_t getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, 0) };
        inline CallLogList& setExecuteMode(int32_t executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


        // httpStatusCode Field Functions 
        bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
        void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
        inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
        inline CallLogList& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


        // httpStatusDescription Field Functions 
        bool hasHttpStatusDescription() const { return this->httpStatusDescription_ != nullptr;};
        void deleteHttpStatusDescription() { this->httpStatusDescription_ = nullptr;};
        inline string getHttpStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(httpStatusDescription_, "") };
        inline CallLogList& setHttpStatusDescription(string httpStatusDescription) { DARABONBA_PTR_SET_VALUE(httpStatusDescription_, httpStatusDescription) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline CallLogList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
        inline CallLogList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline CallLogList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline CallLogList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // requestParameter Field Functions 
        bool hasRequestParameter() const { return this->requestParameter_ != nullptr;};
        void deleteRequestParameter() { this->requestParameter_ = nullptr;};
        inline string getRequestParameter() const { DARABONBA_PTR_GET_DEFAULT(requestParameter_, "") };
        inline CallLogList& setRequestParameter(string requestParameter) { DARABONBA_PTR_SET_VALUE(requestParameter_, requestParameter) };


        // requestSize Field Functions 
        bool hasRequestSize() const { return this->requestSize_ != nullptr;};
        void deleteRequestSize() { this->requestSize_ = nullptr;};
        inline int32_t getRequestSize() const { DARABONBA_PTR_GET_DEFAULT(requestSize_, 0) };
        inline CallLogList& setRequestSize(int32_t requestSize) { DARABONBA_PTR_SET_VALUE(requestSize_, requestSize) };


        // responseParameter Field Functions 
        bool hasResponseParameter() const { return this->responseParameter_ != nullptr;};
        void deleteResponseParameter() { this->responseParameter_ = nullptr;};
        inline string getResponseParameter() const { DARABONBA_PTR_GET_DEFAULT(responseParameter_, "") };
        inline CallLogList& setResponseParameter(string responseParameter) { DARABONBA_PTR_SET_VALUE(responseParameter_, responseParameter) };


        // responseSize Field Functions 
        bool hasResponseSize() const { return this->responseSize_ != nullptr;};
        void deleteResponseSize() { this->responseSize_ = nullptr;};
        inline int32_t getResponseSize() const { DARABONBA_PTR_GET_DEFAULT(responseSize_, 0) };
        inline CallLogList& setResponseSize(int32_t responseSize) { DARABONBA_PTR_SET_VALUE(responseSize_, responseSize) };


        // resultCount Field Functions 
        bool hasResultCount() const { return this->resultCount_ != nullptr;};
        void deleteResultCount() { this->resultCount_ = nullptr;};
        inline int32_t getResultCount() const { DARABONBA_PTR_GET_DEFAULT(resultCount_, 0) };
        inline CallLogList& setResultCount(int32_t resultCount) { DARABONBA_PTR_SET_VALUE(resultCount_, resultCount) };


        // sql Field Functions 
        bool hasSql() const { return this->sql_ != nullptr;};
        void deleteSql() { this->sql_ = nullptr;};
        inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
        inline CallLogList& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline CallLogList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline CallLogList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // successful Field Functions 
        bool hasSuccessful() const { return this->successful_ != nullptr;};
        void deleteSuccessful() { this->successful_ = nullptr;};
        inline bool getSuccessful() const { DARABONBA_PTR_GET_DEFAULT(successful_, false) };
        inline CallLogList& setSuccessful(bool successful) { DARABONBA_PTR_SET_VALUE(successful_, successful) };


      protected:
        shared_ptr<int64_t> apiId_ {};
        shared_ptr<string> apiName_ {};
        shared_ptr<int64_t> appKey_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<string> bizCode_ {};
        shared_ptr<string> bizCodeDescription_ {};
        shared_ptr<string> clientIp_ {};
        shared_ptr<int32_t> costTime_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<int32_t> env_ {};
        shared_ptr<int32_t> executeCostTime_ {};
        shared_ptr<int32_t> executeMode_ {};
        shared_ptr<string> httpStatusCode_ {};
        shared_ptr<string> httpStatusDescription_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<int32_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<string> requestParameter_ {};
        shared_ptr<int32_t> requestSize_ {};
        shared_ptr<string> responseParameter_ {};
        shared_ptr<int32_t> responseSize_ {};
        shared_ptr<int32_t> resultCount_ {};
        shared_ptr<string> sql_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<bool> successful_ {};
      };

      virtual bool empty() const override { return this->callLogList_ == nullptr
        && this->totalCount_ == nullptr; };
      // callLogList Field Functions 
      bool hasCallLogList() const { return this->callLogList_ != nullptr;};
      void deleteCallLogList() { this->callLogList_ = nullptr;};
      inline const vector<PageResult::CallLogList> & getCallLogList() const { DARABONBA_PTR_GET_CONST(callLogList_, vector<PageResult::CallLogList>) };
      inline vector<PageResult::CallLogList> getCallLogList() { DARABONBA_PTR_GET(callLogList_, vector<PageResult::CallLogList>) };
      inline PageResult& setCallLogList(const vector<PageResult::CallLogList> & callLogList) { DARABONBA_PTR_SET_VALUE(callLogList_, callLogList) };
      inline PageResult& setCallLogList(vector<PageResult::CallLogList> && callLogList) { DARABONBA_PTR_SET_RVALUE(callLogList_, callLogList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::CallLogList>> callLogList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataServiceApiCallsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServiceApiCallsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataServiceApiCallsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDataServiceApiCallsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDataServiceApiCallsResponseBody::PageResult) };
    inline ListDataServiceApiCallsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDataServiceApiCallsResponseBody::PageResult) };
    inline ListDataServiceApiCallsResponseBody& setPageResult(const ListDataServiceApiCallsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDataServiceApiCallsResponseBody& setPageResult(ListDataServiceApiCallsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceApiCallsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServiceApiCallsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataServiceApiCallsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
