// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYRESPONSEBODY_HPP_
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
  class DescribeDataMaskingRunHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataMaskingRunHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataMaskingRunHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataMaskingRunHistoryResponseBody() = default ;
    DescribeDataMaskingRunHistoryResponseBody(const DescribeDataMaskingRunHistoryResponseBody &) = default ;
    DescribeDataMaskingRunHistoryResponseBody(DescribeDataMaskingRunHistoryResponseBody &&) = default ;
    DescribeDataMaskingRunHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataMaskingRunHistoryResponseBody() = default ;
    DescribeDataMaskingRunHistoryResponseBody& operator=(const DescribeDataMaskingRunHistoryResponseBody &) = default ;
    DescribeDataMaskingRunHistoryResponseBody& operator=(DescribeDataMaskingRunHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ConflictCount, conflictCount_);
        DARABONBA_PTR_TO_JSON(DstType, dstType_);
        DARABONBA_PTR_TO_JSON(DstTypeCode, dstTypeCode_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FailCode, failCode_);
        DARABONBA_PTR_TO_JSON(FailMsg, failMsg_);
        DARABONBA_PTR_TO_JSON(HasDownloadFile, hasDownloadFile_);
        DARABONBA_PTR_TO_JSON(HasSubProcess, hasSubProcess_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaskingCount, maskingCount_);
        DARABONBA_PTR_TO_JSON(Percentage, percentage_);
        DARABONBA_PTR_TO_JSON(RunIndex, runIndex_);
        DARABONBA_PTR_TO_JSON(SrcTableName, srcTableName_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
        DARABONBA_PTR_TO_JSON(SrcTypeCode, srcTypeCode_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ConflictCount, conflictCount_);
        DARABONBA_PTR_FROM_JSON(DstType, dstType_);
        DARABONBA_PTR_FROM_JSON(DstTypeCode, dstTypeCode_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FailCode, failCode_);
        DARABONBA_PTR_FROM_JSON(FailMsg, failMsg_);
        DARABONBA_PTR_FROM_JSON(HasDownloadFile, hasDownloadFile_);
        DARABONBA_PTR_FROM_JSON(HasSubProcess, hasSubProcess_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaskingCount, maskingCount_);
        DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
        DARABONBA_PTR_FROM_JSON(RunIndex, runIndex_);
        DARABONBA_PTR_FROM_JSON(SrcTableName, srcTableName_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
        DARABONBA_PTR_FROM_JSON(SrcTypeCode, srcTypeCode_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->conflictCount_ == nullptr
        && this->dstType_ == nullptr && this->dstTypeCode_ == nullptr && this->endTime_ == nullptr && this->failCode_ == nullptr && this->failMsg_ == nullptr
        && this->hasDownloadFile_ == nullptr && this->hasSubProcess_ == nullptr && this->id_ == nullptr && this->maskingCount_ == nullptr && this->percentage_ == nullptr
        && this->runIndex_ == nullptr && this->srcTableName_ == nullptr && this->srcType_ == nullptr && this->srcTypeCode_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->type_ == nullptr; };
      // conflictCount Field Functions 
      bool hasConflictCount() const { return this->conflictCount_ != nullptr;};
      void deleteConflictCount() { this->conflictCount_ = nullptr;};
      inline int64_t getConflictCount() const { DARABONBA_PTR_GET_DEFAULT(conflictCount_, 0L) };
      inline Items& setConflictCount(int64_t conflictCount) { DARABONBA_PTR_SET_VALUE(conflictCount_, conflictCount) };


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


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Items& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // failCode Field Functions 
      bool hasFailCode() const { return this->failCode_ != nullptr;};
      void deleteFailCode() { this->failCode_ = nullptr;};
      inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
      inline Items& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


      // failMsg Field Functions 
      bool hasFailMsg() const { return this->failMsg_ != nullptr;};
      void deleteFailMsg() { this->failMsg_ = nullptr;};
      inline string getFailMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
      inline Items& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


      // hasDownloadFile Field Functions 
      bool hasHasDownloadFile() const { return this->hasDownloadFile_ != nullptr;};
      void deleteHasDownloadFile() { this->hasDownloadFile_ = nullptr;};
      inline int32_t getHasDownloadFile() const { DARABONBA_PTR_GET_DEFAULT(hasDownloadFile_, 0) };
      inline Items& setHasDownloadFile(int32_t hasDownloadFile) { DARABONBA_PTR_SET_VALUE(hasDownloadFile_, hasDownloadFile) };


      // hasSubProcess Field Functions 
      bool hasHasSubProcess() const { return this->hasSubProcess_ != nullptr;};
      void deleteHasSubProcess() { this->hasSubProcess_ = nullptr;};
      inline int32_t getHasSubProcess() const { DARABONBA_PTR_GET_DEFAULT(hasSubProcess_, 0) };
      inline Items& setHasSubProcess(int32_t hasSubProcess) { DARABONBA_PTR_SET_VALUE(hasSubProcess_, hasSubProcess) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maskingCount Field Functions 
      bool hasMaskingCount() const { return this->maskingCount_ != nullptr;};
      void deleteMaskingCount() { this->maskingCount_ = nullptr;};
      inline int64_t getMaskingCount() const { DARABONBA_PTR_GET_DEFAULT(maskingCount_, 0L) };
      inline Items& setMaskingCount(int64_t maskingCount) { DARABONBA_PTR_SET_VALUE(maskingCount_, maskingCount) };


      // percentage Field Functions 
      bool hasPercentage() const { return this->percentage_ != nullptr;};
      void deletePercentage() { this->percentage_ = nullptr;};
      inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
      inline Items& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


      // runIndex Field Functions 
      bool hasRunIndex() const { return this->runIndex_ != nullptr;};
      void deleteRunIndex() { this->runIndex_ = nullptr;};
      inline int32_t getRunIndex() const { DARABONBA_PTR_GET_DEFAULT(runIndex_, 0) };
      inline Items& setRunIndex(int32_t runIndex) { DARABONBA_PTR_SET_VALUE(runIndex_, runIndex) };


      // srcTableName Field Functions 
      bool hasSrcTableName() const { return this->srcTableName_ != nullptr;};
      void deleteSrcTableName() { this->srcTableName_ = nullptr;};
      inline string getSrcTableName() const { DARABONBA_PTR_GET_DEFAULT(srcTableName_, "") };
      inline Items& setSrcTableName(string srcTableName) { DARABONBA_PTR_SET_VALUE(srcTableName_, srcTableName) };


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


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Items& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Items& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of rows that are in conflict with the data to be de-identified in the destination table to which the data to be de-identified is moved.
      shared_ptr<int64_t> conflictCount_ {};
      // The type of the service to which the de-identified data belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
      shared_ptr<int32_t> dstType_ {};
      // The service that stores the de-identified data. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> dstTypeCode_ {};
      // The end time of the de-identification task.
      shared_ptr<int64_t> endTime_ {};
      // The error code that is returned when the de-identification task fails.
      shared_ptr<string> failCode_ {};
      // The reason why the de-identification task fails.
      shared_ptr<string> failMsg_ {};
      // Indicates whether a file is available for download.
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> hasDownloadFile_ {};
      // The number of created subtasks.
      shared_ptr<int32_t> hasSubProcess_ {};
      // The ID of the task execution record.
      shared_ptr<int64_t> id_ {};
      // The number of rows that are de-identified.
      shared_ptr<int64_t> maskingCount_ {};
      // The progress of the de-identification task.
      shared_ptr<int32_t> percentage_ {};
      // The number of times that the de-identification task is executed.
      shared_ptr<int32_t> runIndex_ {};
      // The name of the source table.
      shared_ptr<string> srcTableName_ {};
      // The type of the service to which the data to be de-identified belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
      shared_ptr<int32_t> srcType_ {};
      // The service to which the data to be de-identified belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> srcTypeCode_ {};
      // The time when the de-identification task was executed. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The status of the de-identification task. Valid values:
      // 
      // *   **-1**: waiting
      // *   **0**: being executed
      // *   **1**: executed
      // *   **2**: failed to be executed
      // *   **3**: terminated
      // *   **4**: partially failed
      shared_ptr<int32_t> status_ {};
      // The ID of the identification task.
      shared_ptr<string> taskId_ {};
      // The mode in which the de-identification task is executed. Valid values:
      // 
      // *   **1**: manual
      // *   **2**: scheduled
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataMaskingRunHistoryResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataMaskingRunHistoryResponseBody::Items>) };
    inline vector<DescribeDataMaskingRunHistoryResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataMaskingRunHistoryResponseBody::Items>) };
    inline DescribeDataMaskingRunHistoryResponseBody& setItems(const vector<DescribeDataMaskingRunHistoryResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataMaskingRunHistoryResponseBody& setItems(vector<DescribeDataMaskingRunHistoryResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataMaskingRunHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The execution information about the de-identification task.
    shared_ptr<vector<DescribeDataMaskingRunHistoryResponseBody::Items>> items_ {};
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
