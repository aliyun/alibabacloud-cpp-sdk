// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataMaskingTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataMaskingTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataMaskingTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataMaskingTasksResponseBody() = default ;
    DescribeDataMaskingTasksResponseBody(const DescribeDataMaskingTasksResponseBody &) = default ;
    DescribeDataMaskingTasksResponseBody(DescribeDataMaskingTasksResponseBody &&) = default ;
    DescribeDataMaskingTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataMaskingTasksResponseBody() = default ;
    DescribeDataMaskingTasksResponseBody& operator=(const DescribeDataMaskingTasksResponseBody &) = default ;
    DescribeDataMaskingTasksResponseBody& operator=(DescribeDataMaskingTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DstMemberAccount, dstMemberAccount_);
        DARABONBA_PTR_TO_JSON(DstPath, dstPath_);
        DARABONBA_PTR_TO_JSON(DstType, dstType_);
        DARABONBA_PTR_TO_JSON(DstTypeCode, dstTypeCode_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(HasUnfinishProcess, hasUnfinishProcess_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(OriginalTable, originalTable_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RunCount, runCount_);
        DARABONBA_PTR_TO_JSON(SrcMemberAccount, srcMemberAccount_);
        DARABONBA_PTR_TO_JSON(SrcPath, srcPath_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
        DARABONBA_PTR_TO_JSON(SrcTypeCode, srcTypeCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DstMemberAccount, dstMemberAccount_);
        DARABONBA_PTR_FROM_JSON(DstPath, dstPath_);
        DARABONBA_PTR_FROM_JSON(DstType, dstType_);
        DARABONBA_PTR_FROM_JSON(DstTypeCode, dstTypeCode_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(HasUnfinishProcess, hasUnfinishProcess_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(OriginalTable, originalTable_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RunCount, runCount_);
        DARABONBA_PTR_FROM_JSON(SrcMemberAccount, srcMemberAccount_);
        DARABONBA_PTR_FROM_JSON(SrcPath, srcPath_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
        DARABONBA_PTR_FROM_JSON(SrcTypeCode, srcTypeCode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dstMemberAccount_ == nullptr
        && this->dstPath_ == nullptr && this->dstType_ == nullptr && this->dstTypeCode_ == nullptr && this->gmtCreate_ == nullptr && this->hasUnfinishProcess_ == nullptr
        && this->id_ == nullptr && this->originalTable_ == nullptr && this->owner_ == nullptr && this->runCount_ == nullptr && this->srcMemberAccount_ == nullptr
        && this->srcPath_ == nullptr && this->srcType_ == nullptr && this->srcTypeCode_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->triggerType_ == nullptr; };
      // dstMemberAccount Field Functions 
      bool hasDstMemberAccount() const { return this->dstMemberAccount_ != nullptr;};
      void deleteDstMemberAccount() { this->dstMemberAccount_ = nullptr;};
      inline int64_t getDstMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(dstMemberAccount_, 0L) };
      inline Items& setDstMemberAccount(int64_t dstMemberAccount) { DARABONBA_PTR_SET_VALUE(dstMemberAccount_, dstMemberAccount) };


      // dstPath Field Functions 
      bool hasDstPath() const { return this->dstPath_ != nullptr;};
      void deleteDstPath() { this->dstPath_ = nullptr;};
      inline string getDstPath() const { DARABONBA_PTR_GET_DEFAULT(dstPath_, "") };
      inline Items& setDstPath(string dstPath) { DARABONBA_PTR_SET_VALUE(dstPath_, dstPath) };


      // dstType Field Functions 
      bool hasDstType() const { return this->dstType_ != nullptr;};
      void deleteDstType() { this->dstType_ = nullptr;};
      inline int32_t getDstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, 0) };
      inline Items& setDstType(int32_t dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


      // dstTypeCode Field Functions 
      bool hasDstTypeCode() const { return this->dstTypeCode_ != nullptr;};
      void deleteDstTypeCode() { this->dstTypeCode_ = nullptr;};
      inline string getDstTypeCode() const { DARABONBA_PTR_GET_DEFAULT(dstTypeCode_, "") };
      inline Items& setDstTypeCode(string dstTypeCode) { DARABONBA_PTR_SET_VALUE(dstTypeCode_, dstTypeCode) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Items& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // hasUnfinishProcess Field Functions 
      bool hasHasUnfinishProcess() const { return this->hasUnfinishProcess_ != nullptr;};
      void deleteHasUnfinishProcess() { this->hasUnfinishProcess_ = nullptr;};
      inline bool getHasUnfinishProcess() const { DARABONBA_PTR_GET_DEFAULT(hasUnfinishProcess_, false) };
      inline Items& setHasUnfinishProcess(bool hasUnfinishProcess) { DARABONBA_PTR_SET_VALUE(hasUnfinishProcess_, hasUnfinishProcess) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // originalTable Field Functions 
      bool hasOriginalTable() const { return this->originalTable_ != nullptr;};
      void deleteOriginalTable() { this->originalTable_ = nullptr;};
      inline bool getOriginalTable() const { DARABONBA_PTR_GET_DEFAULT(originalTable_, false) };
      inline Items& setOriginalTable(bool originalTable) { DARABONBA_PTR_SET_VALUE(originalTable_, originalTable) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Items& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // runCount Field Functions 
      bool hasRunCount() const { return this->runCount_ != nullptr;};
      void deleteRunCount() { this->runCount_ = nullptr;};
      inline int32_t getRunCount() const { DARABONBA_PTR_GET_DEFAULT(runCount_, 0) };
      inline Items& setRunCount(int32_t runCount) { DARABONBA_PTR_SET_VALUE(runCount_, runCount) };


      // srcMemberAccount Field Functions 
      bool hasSrcMemberAccount() const { return this->srcMemberAccount_ != nullptr;};
      void deleteSrcMemberAccount() { this->srcMemberAccount_ = nullptr;};
      inline int64_t getSrcMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(srcMemberAccount_, 0L) };
      inline Items& setSrcMemberAccount(int64_t srcMemberAccount) { DARABONBA_PTR_SET_VALUE(srcMemberAccount_, srcMemberAccount) };


      // srcPath Field Functions 
      bool hasSrcPath() const { return this->srcPath_ != nullptr;};
      void deleteSrcPath() { this->srcPath_ = nullptr;};
      inline string getSrcPath() const { DARABONBA_PTR_GET_DEFAULT(srcPath_, "") };
      inline Items& setSrcPath(string srcPath) { DARABONBA_PTR_SET_VALUE(srcPath_, srcPath) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline int32_t getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, 0) };
      inline Items& setSrcType(int32_t srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


      // srcTypeCode Field Functions 
      bool hasSrcTypeCode() const { return this->srcTypeCode_ != nullptr;};
      void deleteSrcTypeCode() { this->srcTypeCode_ = nullptr;};
      inline string getSrcTypeCode() const { DARABONBA_PTR_GET_DEFAULT(srcTypeCode_, "") };
      inline Items& setSrcTypeCode(string srcTypeCode) { DARABONBA_PTR_SET_VALUE(srcTypeCode_, srcTypeCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Items& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline int32_t getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
      inline Items& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // The member account to which the desensitization target belongs.
      shared_ptr<int64_t> dstMemberAccount_ {};
      // The destination path.
      shared_ptr<string> dstPath_ {};
      // The service to which the data to be de-identified belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
      shared_ptr<int32_t> dstType_ {};
      // The type of the service to which the de-identified data belongs. Valid values: **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> dstTypeCode_ {};
      // The time when the de-identification task is created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // Indicates whether the de-identification task is running.
      shared_ptr<bool> hasUnfinishProcess_ {};
      // The task ID.
      shared_ptr<int64_t> id_ {};
      // Indicates whether the source table is de-identified.
      shared_ptr<bool> originalTable_ {};
      // The user who created the de-identification task.
      shared_ptr<string> owner_ {};
      // The number of times that the de-identification task is run.
      shared_ptr<int32_t> runCount_ {};
      // The member account to which the desensitization source belongs.
      shared_ptr<int64_t> srcMemberAccount_ {};
      // The source path.
      shared_ptr<string> srcPath_ {};
      // The type of the service to which the data to be de-identified belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
      shared_ptr<int32_t> srcType_ {};
      // The type of the service to which the data to be de-identified belongs. Valid values: **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> srcTypeCode_ {};
      // The status of the task. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      shared_ptr<int32_t> status_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // The mode in which the de-identification task is run. Valid values:
      // 
      // *   **1**: manual
      // *   **2**: scheduled
      // *   **3**: manual and scheduled
      shared_ptr<int32_t> triggerType_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataMaskingTasksResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataMaskingTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataMaskingTasksResponseBody::Items>) };
    inline vector<DescribeDataMaskingTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataMaskingTasksResponseBody::Items>) };
    inline DescribeDataMaskingTasksResponseBody& setItems(const vector<DescribeDataMaskingTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataMaskingTasksResponseBody& setItems(vector<DescribeDataMaskingTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataMaskingTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataMaskingTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataMaskingTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // A list of de-identification tasks.
    shared_ptr<vector<DescribeDataMaskingTasksResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
