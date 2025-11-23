// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTimeBegin, startTimeBegin_);
      DARABONBA_PTR_TO_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(UseBizDate, useBizDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTimeBegin, startTimeBegin_);
      DARABONBA_PTR_FROM_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(UseBizDate, useBizDate_);
    };
    ListTaskFlowInstanceRequest() = default ;
    ListTaskFlowInstanceRequest(const ListTaskFlowInstanceRequest &) = default ;
    ListTaskFlowInstanceRequest(ListTaskFlowInstanceRequest &&) = default ;
    ListTaskFlowInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowInstanceRequest() = default ;
    ListTaskFlowInstanceRequest& operator=(const ListTaskFlowInstanceRequest &) = default ;
    ListTaskFlowInstanceRequest& operator=(ListTaskFlowInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->startTimeBegin_ == nullptr && return this->startTimeEnd_ == nullptr && return this->status_ == nullptr
        && return this->tid_ == nullptr && return this->triggerType_ == nullptr && return this->useBizDate_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ListTaskFlowInstanceRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListTaskFlowInstanceRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskFlowInstanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTimeBegin Field Functions 
    bool hasStartTimeBegin() const { return this->startTimeBegin_ != nullptr;};
    void deleteStartTimeBegin() { this->startTimeBegin_ = nullptr;};
    inline string startTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(startTimeBegin_, "") };
    inline ListTaskFlowInstanceRequest& setStartTimeBegin(string startTimeBegin) { DARABONBA_PTR_SET_VALUE(startTimeBegin_, startTimeBegin) };


    // startTimeEnd Field Functions 
    bool hasStartTimeEnd() const { return this->startTimeEnd_ != nullptr;};
    void deleteStartTimeEnd() { this->startTimeEnd_ = nullptr;};
    inline string startTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startTimeEnd_, "") };
    inline ListTaskFlowInstanceRequest& setStartTimeEnd(string startTimeEnd) { DARABONBA_PTR_SET_VALUE(startTimeEnd_, startTimeEnd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListTaskFlowInstanceRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListTaskFlowInstanceRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int32_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
    inline ListTaskFlowInstanceRequest& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // useBizDate Field Functions 
    bool hasUseBizDate() const { return this->useBizDate_ != nullptr;};
    void deleteUseBizDate() { this->useBizDate_ = nullptr;};
    inline bool useBizDate() const { DARABONBA_PTR_GET_DEFAULT(useBizDate_, false) };
    inline ListTaskFlowInstanceRequest& setUseBizDate(bool useBizDate) { DARABONBA_PTR_SET_VALUE(useBizDate_, useBizDate) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to obtain the ID of the task flow.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range to query the execution records of the task flow. Specify the time in the yyyy-MM-DD format.
    std::shared_ptr<string> startTimeBegin_ = nullptr;
    // The end of the time range to query the execution records of the task flow. Specify the time in the yyyy-MM-DD format.
    std::shared_ptr<string> startTimeEnd_ = nullptr;
    // The running status of the task node. Valid values:
    // 
    // - **0**: Waiting for scheduling
    // 
    // - **1**: Running
    // 
    // - **2**: Suspend
    // 
    // - **3**: Failed to run
    // 
    // - **4**: Run successfully
    // 
    // - **5**: Completed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The mode in which the task flow is triggered. Valid values:
    // 
    // *   **0**: The task flow is automatically triggered based on periodic scheduling.
    // *   **1**: The task flow is manually triggered.
    std::shared_ptr<int32_t> triggerType_ = nullptr;
    // Adjust filter conditions:
    // 
    // - true: StartTimeBegin and StartTimeEnd are the time range for filtering services.
    // 
    // - false: StartTimeBegin and StartTimeEnd are the time range for the task to run.
    std::shared_ptr<bool> useBizDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
