// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACETASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListTraceTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTraceTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTraceTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListTraceTasksRequest() = default ;
    ListTraceTasksRequest(const ListTraceTasksRequest &) = default ;
    ListTraceTasksRequest(ListTraceTasksRequest &&) = default ;
    ListTraceTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTraceTasksRequest() = default ;
    ListTraceTasksRequest& operator=(const ListTraceTasksRequest &) = default ;
    ListTraceTasksRequest& operator=(ListTraceTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->diagnoseId_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr && this->taskId_ == nullptr && this->traceId_ == nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline ListTraceTasksRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline ListTraceTasksRequest& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListTraceTasksRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTraceTasksRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListTraceTasksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTraceTasksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTraceTasksRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListTraceTasksRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListTraceTasksRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> clientIp_ {};
    shared_ptr<string> diagnoseId_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
