// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListTraceTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTraceTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTraceTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTraceTasksResponseBody() = default ;
    ListTraceTasksResponseBody(const ListTraceTasksResponseBody &) = default ;
    ListTraceTasksResponseBody(ListTraceTasksResponseBody &&) = default ;
    ListTraceTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTraceTasksResponseBody() = default ;
    ListTraceTasksResponseBody& operator=(const ListTraceTasksResponseBody &) = default ;
    ListTraceTasksResponseBody& operator=(ListTraceTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_TO_JSON(ClientAddr, clientAddr_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_TO_JSON(DiagnoseUrl, diagnoseUrl_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(RemainDiagnoseTimes, remainDiagnoseTimes_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TimeConsuming, timeConsuming_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_FROM_JSON(ClientAddr, clientAddr_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_FROM_JSON(DiagnoseUrl, diagnoseUrl_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(RemainDiagnoseTimes, remainDiagnoseTimes_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TimeConsuming, timeConsuming_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->clientAddr_ == nullptr && this->clientIp_ == nullptr && this->createTime_ == nullptr && this->diagnoseId_ == nullptr && this->diagnoseUrl_ == nullptr
        && this->domain_ == nullptr && this->expireTime_ == nullptr && this->remainDiagnoseTimes_ == nullptr && this->state_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->timeConsuming_ == nullptr && this->traceId_ == nullptr; };
      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline string getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
      inline List& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // clientAddr Field Functions 
      bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
      void deleteClientAddr() { this->clientAddr_ = nullptr;};
      inline string getClientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
      inline List& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline List& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // diagnoseId Field Functions 
      bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
      void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
      inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
      inline List& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


      // diagnoseUrl Field Functions 
      bool hasDiagnoseUrl() const { return this->diagnoseUrl_ != nullptr;};
      void deleteDiagnoseUrl() { this->diagnoseUrl_ = nullptr;};
      inline string getDiagnoseUrl() const { DARABONBA_PTR_GET_DEFAULT(diagnoseUrl_, "") };
      inline List& setDiagnoseUrl(string diagnoseUrl) { DARABONBA_PTR_SET_VALUE(diagnoseUrl_, diagnoseUrl) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline List& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline List& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // remainDiagnoseTimes Field Functions 
      bool hasRemainDiagnoseTimes() const { return this->remainDiagnoseTimes_ != nullptr;};
      void deleteRemainDiagnoseTimes() { this->remainDiagnoseTimes_ = nullptr;};
      inline int64_t getRemainDiagnoseTimes() const { DARABONBA_PTR_GET_DEFAULT(remainDiagnoseTimes_, 0L) };
      inline List& setRemainDiagnoseTimes(int64_t remainDiagnoseTimes) { DARABONBA_PTR_SET_VALUE(remainDiagnoseTimes_, remainDiagnoseTimes) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline List& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline List& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // timeConsuming Field Functions 
      bool hasTimeConsuming() const { return this->timeConsuming_ != nullptr;};
      void deleteTimeConsuming() { this->timeConsuming_ = nullptr;};
      inline int64_t getTimeConsuming() const { DARABONBA_PTR_GET_DEFAULT(timeConsuming_, 0L) };
      inline List& setTimeConsuming(int64_t timeConsuming) { DARABONBA_PTR_SET_VALUE(timeConsuming_, timeConsuming) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline List& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<string> aliuid_ {};
      // The IP address of the local DNS server.
      shared_ptr<string> clientAddr_ {};
      // The client IP address.
      shared_ptr<string> clientIp_ {};
      // The time when the report was created. Format: yyyy-MM-dd HH:mm:ss. Time zone: UTC+8.
      shared_ptr<string> createTime_ {};
      // The diagnose ID.
      shared_ptr<string> diagnoseId_ {};
      // The diagnostic URL.
      shared_ptr<string> diagnoseUrl_ {};
      // The domain name to diagnose.
      shared_ptr<string> domain_ {};
      // The expiration time. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> expireTime_ {};
      // The remaining number of available diagnostic attempts.
      shared_ptr<int64_t> remainDiagnoseTimes_ {};
      // The report generation status. Valid values:
      // 
      // - 0: Succeeded.
      // - 1: Failed.
      // - 2: Timed out.
      // - 3: Running.
      // - 4: Waiting.
      shared_ptr<string> state_ {};
      // The status of the diagnostic URL. Valid values:
      // 
      // - 1: active
      // - 0: expired.
      shared_ptr<int64_t> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The time consumed to generate the report.
      shared_ptr<int64_t> timeConsuming_ {};
      // The diagnostic trace ID.
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->list_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListTraceTasksResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListTraceTasksResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListTraceTasksResponseBody::List>) };
    inline vector<ListTraceTasksResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListTraceTasksResponseBody::List>) };
    inline ListTraceTasksResponseBody& setList(const vector<ListTraceTasksResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListTraceTasksResponseBody& setList(vector<ListTraceTasksResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListTraceTasksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTraceTasksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTraceTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of pages.
    shared_ptr<int64_t> count_ {};
    // The returned list information.
    shared_ptr<vector<ListTraceTasksResponseBody::List>> list_ {};
    // The page number, starting from 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The page size. Valid values: any integer from 1 to 1000.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
