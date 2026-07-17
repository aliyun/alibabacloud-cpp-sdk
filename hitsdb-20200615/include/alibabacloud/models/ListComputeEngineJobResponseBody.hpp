// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEENGINEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEENGINEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListComputeEngineJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeEngineJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeEngineJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListComputeEngineJobResponseBody() = default ;
    ListComputeEngineJobResponseBody(const ListComputeEngineJobResponseBody &) = default ;
    ListComputeEngineJobResponseBody(ListComputeEngineJobResponseBody &&) = default ;
    ListComputeEngineJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeEngineJobResponseBody() = default ;
    ListComputeEngineJobResponseBody& operator=(const ListComputeEngineJobResponseBody &) = default ;
    ListComputeEngineJobResponseBody& operator=(ListComputeEngineJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobList& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(StartedAt, startedAt_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, JobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(StartedAt, startedAt_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      JobList() = default ;
      JobList(const JobList &) = default ;
      JobList(JobList &&) = default ;
      JobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobList() = default ;
      JobList& operator=(const JobList &) = default ;
      JobList& operator=(JobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->createTime_ == nullptr && this->endpoint_ == nullptr && this->extraInfo_ == nullptr && this->finishTime_ == nullptr && this->jobId_ == nullptr
        && this->message_ == nullptr && this->reason_ == nullptr && this->startedAt_ == nullptr && this->state_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline JobList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline JobList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline JobList& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
      Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
      inline JobList& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
      inline JobList& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline JobList& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline JobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline JobList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // startedAt Field Functions 
      bool hasStartedAt() const { return this->startedAt_ != nullptr;};
      void deleteStartedAt() { this->startedAt_ = nullptr;};
      inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
      inline JobList& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline JobList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> appName_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> endpoint_ {};
      Darabonba::Json extraInfo_ {};
      shared_ptr<int64_t> finishTime_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> startedAt_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->jobList_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListComputeEngineJobResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const vector<ListComputeEngineJobResponseBody::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<ListComputeEngineJobResponseBody::JobList>) };
    inline vector<ListComputeEngineJobResponseBody::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<ListComputeEngineJobResponseBody::JobList>) };
    inline ListComputeEngineJobResponseBody& setJobList(const vector<ListComputeEngineJobResponseBody::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline ListComputeEngineJobResponseBody& setJobList(vector<ListComputeEngineJobResponseBody::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListComputeEngineJobResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListComputeEngineJobResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComputeEngineJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListComputeEngineJobResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<ListComputeEngineJobResponseBody::JobList>> jobList_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
