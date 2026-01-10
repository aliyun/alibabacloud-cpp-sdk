// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGEDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPAGEDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPagedInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetPagedInstanceResponseBody() = default ;
    GetPagedInstanceResponseBody(const GetPagedInstanceResponseBody &) = default ;
    GetPagedInstanceResponseBody(GetPagedInstanceResponseBody &&) = default ;
    GetPagedInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPagedInstanceResponseBody() = default ;
    GetPagedInstanceResponseBody& operator=(const GetPagedInstanceResponseBody &) = default ;
    GetPagedInstanceResponseBody& operator=(GetPagedInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
          DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_TO_JSON(DagId, dagId_);
          DARABONBA_PTR_TO_JSON(Delete, delete_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastRunningContext, lastRunningContext_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
          DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_FROM_JSON(DagId, dagId_);
          DARABONBA_PTR_FROM_JSON(Delete, delete_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastRunningContext, lastRunningContext_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessTime_ == nullptr
        && this->checkStatus_ == nullptr && this->dagId_ == nullptr && this->delete_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->historyDagId_ == nullptr && this->id_ == nullptr && this->lastRunningContext_ == nullptr && this->msg_ == nullptr
        && this->status_ == nullptr && this->taskType_ == nullptr && this->tenantId_ == nullptr && this->triggerType_ == nullptr && this->version_ == nullptr; };
        // businessTime Field Functions 
        bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
        void deleteBusinessTime() { this->businessTime_ = nullptr;};
        inline string getBusinessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
        inline Instance& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


        // checkStatus Field Functions 
        bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
        void deleteCheckStatus() { this->checkStatus_ = nullptr;};
        inline int64_t getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0L) };
        inline Instance& setCheckStatus(int64_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


        // dagId Field Functions 
        bool hasDagId() const { return this->dagId_ != nullptr;};
        void deleteDagId() { this->dagId_ = nullptr;};
        inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
        inline Instance& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


        // delete Field Functions 
        bool hasDelete() const { return this->delete_ != nullptr;};
        void deleteDelete() { this->delete_ = nullptr;};
        inline string getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, "") };
        inline Instance& setDelete(string _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Instance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Instance& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Instance& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // historyDagId Field Functions 
        bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
        void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
        inline int64_t getHistoryDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
        inline Instance& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Instance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastRunningContext Field Functions 
        bool hasLastRunningContext() const { return this->lastRunningContext_ != nullptr;};
        void deleteLastRunningContext() { this->lastRunningContext_ = nullptr;};
        inline string getLastRunningContext() const { DARABONBA_PTR_GET_DEFAULT(lastRunningContext_, "") };
        inline Instance& setLastRunningContext(string lastRunningContext) { DARABONBA_PTR_SET_VALUE(lastRunningContext_, lastRunningContext) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline Instance& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Instance& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int64_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
        inline Instance& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Instance& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline int64_t getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0L) };
        inline Instance& setTriggerType(int64_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Instance& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The data timestamp of the task node.
        shared_ptr<string> businessTime_ {};
        // The state of archived data verification. Valid values:
        // 
        // *   **0**: The verification was successful.
        // *   **1**: Inconsistent data was detected.
        // *   **2**: The verification was not performed.
        // *   **3**: The verification is in progress.
        // *   **4**: The verification was interrupted.
        shared_ptr<int64_t> checkStatus_ {};
        // The unique ID of the task flow.
        shared_ptr<int64_t> dagId_ {};
        // Indicates whether the source data is deleted. Valid values:
        // 
        // *   **true**: deletes the jobs in the application group.
        // *   **false**
        shared_ptr<string> delete_ {};
        // The time when the task ended.
        shared_ptr<string> endTime_ {};
        // The time when the task flow was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the task flow was last modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the historical task flow.
        shared_ptr<int64_t> historyDagId_ {};
        // The task flow ID.
        shared_ptr<int64_t> id_ {};
        // The context of the last execution of the task flow.
        shared_ptr<string> lastRunningContext_ {};
        // The details of the current task execution.
        shared_ptr<string> msg_ {};
        // The state of the archiving task.
        // 
        // *   **0**: Pending.
        // *   **1**: Running.
        // *   **2**: Paused.
        // *   **3**: Failed.
        // *   **4**: Succeeded.
        shared_ptr<int64_t> status_ {};
        // The task type. Valid values:
        // 
        // *   **1**: data archiving
        // *   **2**: archived data restoration
        // *   **3**: archived data verification
        shared_ptr<int64_t> taskType_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // The mode in which the task flow is triggered. Valid values:
        // 
        // *   **0**: The task flow was triggered based on a schedule.
        // *   **1**: The task flow was manually triggered.
        shared_ptr<int64_t> triggerType_ {};
        // The version number.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Data::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Data::Instance>) };
      inline vector<Data::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Data::Instance>) };
      inline Data& setInstance(const vector<Data::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Data& setInstance(vector<Data::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      // The information about the task.
      shared_ptr<vector<Data::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr && this->traceId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPagedInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPagedInstanceResponseBody::Data) };
    inline GetPagedInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPagedInstanceResponseBody::Data) };
    inline GetPagedInstanceResponseBody& setData(const GetPagedInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPagedInstanceResponseBody& setData(GetPagedInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPagedInstanceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPagedInstanceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline GetPagedInstanceResponseBody& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetPagedInstanceResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPagedInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPagedInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetPagedInstanceResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetPagedInstanceResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The data returned.
    shared_ptr<GetPagedInstanceResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The page number.
    shared_ptr<int64_t> pageIndex_ {};
    // The number of entries to return on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID. You can use the request ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of instances.
    shared_ptr<int64_t> total_ {};
    // The trace ID, which is used to track the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
