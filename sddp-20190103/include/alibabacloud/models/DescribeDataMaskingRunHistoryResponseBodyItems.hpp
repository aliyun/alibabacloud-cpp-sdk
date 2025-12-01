// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataMaskingRunHistoryResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataMaskingRunHistoryResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDataMaskingRunHistoryResponseBodyItems& obj) { 
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
    DescribeDataMaskingRunHistoryResponseBodyItems() = default ;
    DescribeDataMaskingRunHistoryResponseBodyItems(const DescribeDataMaskingRunHistoryResponseBodyItems &) = default ;
    DescribeDataMaskingRunHistoryResponseBodyItems(DescribeDataMaskingRunHistoryResponseBodyItems &&) = default ;
    DescribeDataMaskingRunHistoryResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataMaskingRunHistoryResponseBodyItems() = default ;
    DescribeDataMaskingRunHistoryResponseBodyItems& operator=(const DescribeDataMaskingRunHistoryResponseBodyItems &) = default ;
    DescribeDataMaskingRunHistoryResponseBodyItems& operator=(DescribeDataMaskingRunHistoryResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conflictCount_ == nullptr
        && return this->dstType_ == nullptr && return this->dstTypeCode_ == nullptr && return this->endTime_ == nullptr && return this->failCode_ == nullptr && return this->failMsg_ == nullptr
        && return this->hasDownloadFile_ == nullptr && return this->hasSubProcess_ == nullptr && return this->id_ == nullptr && return this->maskingCount_ == nullptr && return this->percentage_ == nullptr
        && return this->runIndex_ == nullptr && return this->srcTableName_ == nullptr && return this->srcType_ == nullptr && return this->srcTypeCode_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->type_ == nullptr; };
    // conflictCount Field Functions 
    bool hasConflictCount() const { return this->conflictCount_ != nullptr;};
    void deleteConflictCount() { this->conflictCount_ = nullptr;};
    inline int64_t conflictCount() const { DARABONBA_PTR_GET_DEFAULT(conflictCount_, 0L) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setConflictCount(int64_t conflictCount) { DARABONBA_PTR_SET_VALUE(conflictCount_, conflictCount) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline int32_t dstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setDstType(int32_t dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // dstTypeCode Field Functions 
    bool hasDstTypeCode() const { return this->dstTypeCode_ != nullptr;};
    void deleteDstTypeCode() { this->dstTypeCode_ = nullptr;};
    inline string dstTypeCode() const { DARABONBA_PTR_GET_DEFAULT(dstTypeCode_, "") };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setDstTypeCode(string dstTypeCode) { DARABONBA_PTR_SET_VALUE(dstTypeCode_, dstTypeCode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // failMsg Field Functions 
    bool hasFailMsg() const { return this->failMsg_ != nullptr;};
    void deleteFailMsg() { this->failMsg_ = nullptr;};
    inline string failMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


    // hasDownloadFile Field Functions 
    bool hasHasDownloadFile() const { return this->hasDownloadFile_ != nullptr;};
    void deleteHasDownloadFile() { this->hasDownloadFile_ = nullptr;};
    inline int32_t hasDownloadFile() const { DARABONBA_PTR_GET_DEFAULT(hasDownloadFile_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setHasDownloadFile(int32_t hasDownloadFile) { DARABONBA_PTR_SET_VALUE(hasDownloadFile_, hasDownloadFile) };


    // hasSubProcess Field Functions 
    bool hasHasSubProcess() const { return this->hasSubProcess_ != nullptr;};
    void deleteHasSubProcess() { this->hasSubProcess_ = nullptr;};
    inline int32_t hasSubProcess() const { DARABONBA_PTR_GET_DEFAULT(hasSubProcess_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setHasSubProcess(int32_t hasSubProcess) { DARABONBA_PTR_SET_VALUE(hasSubProcess_, hasSubProcess) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maskingCount Field Functions 
    bool hasMaskingCount() const { return this->maskingCount_ != nullptr;};
    void deleteMaskingCount() { this->maskingCount_ = nullptr;};
    inline int64_t maskingCount() const { DARABONBA_PTR_GET_DEFAULT(maskingCount_, 0L) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setMaskingCount(int64_t maskingCount) { DARABONBA_PTR_SET_VALUE(maskingCount_, maskingCount) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // runIndex Field Functions 
    bool hasRunIndex() const { return this->runIndex_ != nullptr;};
    void deleteRunIndex() { this->runIndex_ = nullptr;};
    inline int32_t runIndex() const { DARABONBA_PTR_GET_DEFAULT(runIndex_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setRunIndex(int32_t runIndex) { DARABONBA_PTR_SET_VALUE(runIndex_, runIndex) };


    // srcTableName Field Functions 
    bool hasSrcTableName() const { return this->srcTableName_ != nullptr;};
    void deleteSrcTableName() { this->srcTableName_ = nullptr;};
    inline string srcTableName() const { DARABONBA_PTR_GET_DEFAULT(srcTableName_, "") };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setSrcTableName(string srcTableName) { DARABONBA_PTR_SET_VALUE(srcTableName_, srcTableName) };


    // srcType Field Functions 
    bool hasSrcType() const { return this->srcType_ != nullptr;};
    void deleteSrcType() { this->srcType_ = nullptr;};
    inline int32_t srcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setSrcType(int32_t srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    // srcTypeCode Field Functions 
    bool hasSrcTypeCode() const { return this->srcTypeCode_ != nullptr;};
    void deleteSrcTypeCode() { this->srcTypeCode_ = nullptr;};
    inline string srcTypeCode() const { DARABONBA_PTR_GET_DEFAULT(srcTypeCode_, "") };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setSrcTypeCode(string srcTypeCode) { DARABONBA_PTR_SET_VALUE(srcTypeCode_, srcTypeCode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeDataMaskingRunHistoryResponseBodyItems& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of rows that are in conflict with the data to be de-identified in the destination table to which the data to be de-identified is moved.
    std::shared_ptr<int64_t> conflictCount_ = nullptr;
    // The type of the service to which the de-identified data belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int32_t> dstType_ = nullptr;
    // The service that stores the de-identified data. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> dstTypeCode_ = nullptr;
    // The end time of the de-identification task.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The error code that is returned when the de-identification task fails.
    std::shared_ptr<string> failCode_ = nullptr;
    // The reason why the de-identification task fails.
    std::shared_ptr<string> failMsg_ = nullptr;
    // Indicates whether a file is available for download.
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> hasDownloadFile_ = nullptr;
    // The number of created subtasks.
    std::shared_ptr<int32_t> hasSubProcess_ = nullptr;
    // The ID of the task execution record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of rows that are de-identified.
    std::shared_ptr<int64_t> maskingCount_ = nullptr;
    // The progress of the de-identification task.
    std::shared_ptr<int32_t> percentage_ = nullptr;
    // The number of times that the de-identification task is executed.
    std::shared_ptr<int32_t> runIndex_ = nullptr;
    // The name of the source table.
    std::shared_ptr<string> srcTableName_ = nullptr;
    // The type of the service to which the data to be de-identified belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int32_t> srcType_ = nullptr;
    // The service to which the data to be de-identified belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> srcTypeCode_ = nullptr;
    // The time when the de-identification task was executed. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the de-identification task. Valid values:
    // 
    // *   **-1**: waiting
    // *   **0**: being executed
    // *   **1**: executed
    // *   **2**: failed to be executed
    // *   **3**: terminated
    // *   **4**: partially failed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the identification task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The mode in which the de-identification task is executed. Valid values:
    // 
    // *   **1**: manual
    // *   **2**: scheduled
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
