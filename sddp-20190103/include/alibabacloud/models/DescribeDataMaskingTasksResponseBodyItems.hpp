// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGTASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGTASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataMaskingTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataMaskingTasksResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDataMaskingTasksResponseBodyItems& obj) { 
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
    DescribeDataMaskingTasksResponseBodyItems() = default ;
    DescribeDataMaskingTasksResponseBodyItems(const DescribeDataMaskingTasksResponseBodyItems &) = default ;
    DescribeDataMaskingTasksResponseBodyItems(DescribeDataMaskingTasksResponseBodyItems &&) = default ;
    DescribeDataMaskingTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataMaskingTasksResponseBodyItems() = default ;
    DescribeDataMaskingTasksResponseBodyItems& operator=(const DescribeDataMaskingTasksResponseBodyItems &) = default ;
    DescribeDataMaskingTasksResponseBodyItems& operator=(DescribeDataMaskingTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstMemberAccount_ == nullptr
        && return this->dstPath_ == nullptr && return this->dstType_ == nullptr && return this->dstTypeCode_ == nullptr && return this->gmtCreate_ == nullptr && return this->hasUnfinishProcess_ == nullptr
        && return this->id_ == nullptr && return this->originalTable_ == nullptr && return this->owner_ == nullptr && return this->runCount_ == nullptr && return this->srcMemberAccount_ == nullptr
        && return this->srcPath_ == nullptr && return this->srcType_ == nullptr && return this->srcTypeCode_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr
        && return this->taskName_ == nullptr && return this->triggerType_ == nullptr; };
    // dstMemberAccount Field Functions 
    bool hasDstMemberAccount() const { return this->dstMemberAccount_ != nullptr;};
    void deleteDstMemberAccount() { this->dstMemberAccount_ = nullptr;};
    inline int64_t dstMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(dstMemberAccount_, 0L) };
    inline DescribeDataMaskingTasksResponseBodyItems& setDstMemberAccount(int64_t dstMemberAccount) { DARABONBA_PTR_SET_VALUE(dstMemberAccount_, dstMemberAccount) };


    // dstPath Field Functions 
    bool hasDstPath() const { return this->dstPath_ != nullptr;};
    void deleteDstPath() { this->dstPath_ = nullptr;};
    inline string dstPath() const { DARABONBA_PTR_GET_DEFAULT(dstPath_, "") };
    inline DescribeDataMaskingTasksResponseBodyItems& setDstPath(string dstPath) { DARABONBA_PTR_SET_VALUE(dstPath_, dstPath) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline int32_t dstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, 0) };
    inline DescribeDataMaskingTasksResponseBodyItems& setDstType(int32_t dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // dstTypeCode Field Functions 
    bool hasDstTypeCode() const { return this->dstTypeCode_ != nullptr;};
    void deleteDstTypeCode() { this->dstTypeCode_ = nullptr;};
    inline string dstTypeCode() const { DARABONBA_PTR_GET_DEFAULT(dstTypeCode_, "") };
    inline DescribeDataMaskingTasksResponseBodyItems& setDstTypeCode(string dstTypeCode) { DARABONBA_PTR_SET_VALUE(dstTypeCode_, dstTypeCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDataMaskingTasksResponseBodyItems& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // hasUnfinishProcess Field Functions 
    bool hasHasUnfinishProcess() const { return this->hasUnfinishProcess_ != nullptr;};
    void deleteHasUnfinishProcess() { this->hasUnfinishProcess_ = nullptr;};
    inline bool hasUnfinishProcess() const { DARABONBA_PTR_GET_DEFAULT(hasUnfinishProcess_, false) };
    inline DescribeDataMaskingTasksResponseBodyItems& setHasUnfinishProcess(bool hasUnfinishProcess) { DARABONBA_PTR_SET_VALUE(hasUnfinishProcess_, hasUnfinishProcess) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataMaskingTasksResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // originalTable Field Functions 
    bool hasOriginalTable() const { return this->originalTable_ != nullptr;};
    void deleteOriginalTable() { this->originalTable_ = nullptr;};
    inline bool originalTable() const { DARABONBA_PTR_GET_DEFAULT(originalTable_, false) };
    inline DescribeDataMaskingTasksResponseBodyItems& setOriginalTable(bool originalTable) { DARABONBA_PTR_SET_VALUE(originalTable_, originalTable) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeDataMaskingTasksResponseBodyItems& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // runCount Field Functions 
    bool hasRunCount() const { return this->runCount_ != nullptr;};
    void deleteRunCount() { this->runCount_ = nullptr;};
    inline int32_t runCount() const { DARABONBA_PTR_GET_DEFAULT(runCount_, 0) };
    inline DescribeDataMaskingTasksResponseBodyItems& setRunCount(int32_t runCount) { DARABONBA_PTR_SET_VALUE(runCount_, runCount) };


    // srcMemberAccount Field Functions 
    bool hasSrcMemberAccount() const { return this->srcMemberAccount_ != nullptr;};
    void deleteSrcMemberAccount() { this->srcMemberAccount_ = nullptr;};
    inline int64_t srcMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(srcMemberAccount_, 0L) };
    inline DescribeDataMaskingTasksResponseBodyItems& setSrcMemberAccount(int64_t srcMemberAccount) { DARABONBA_PTR_SET_VALUE(srcMemberAccount_, srcMemberAccount) };


    // srcPath Field Functions 
    bool hasSrcPath() const { return this->srcPath_ != nullptr;};
    void deleteSrcPath() { this->srcPath_ = nullptr;};
    inline string srcPath() const { DARABONBA_PTR_GET_DEFAULT(srcPath_, "") };
    inline DescribeDataMaskingTasksResponseBodyItems& setSrcPath(string srcPath) { DARABONBA_PTR_SET_VALUE(srcPath_, srcPath) };


    // srcType Field Functions 
    bool hasSrcType() const { return this->srcType_ != nullptr;};
    void deleteSrcType() { this->srcType_ = nullptr;};
    inline int32_t srcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, 0) };
    inline DescribeDataMaskingTasksResponseBodyItems& setSrcType(int32_t srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    // srcTypeCode Field Functions 
    bool hasSrcTypeCode() const { return this->srcTypeCode_ != nullptr;};
    void deleteSrcTypeCode() { this->srcTypeCode_ = nullptr;};
    inline string srcTypeCode() const { DARABONBA_PTR_GET_DEFAULT(srcTypeCode_, "") };
    inline DescribeDataMaskingTasksResponseBodyItems& setSrcTypeCode(string srcTypeCode) { DARABONBA_PTR_SET_VALUE(srcTypeCode_, srcTypeCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDataMaskingTasksResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDataMaskingTasksResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeDataMaskingTasksResponseBodyItems& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int32_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
    inline DescribeDataMaskingTasksResponseBodyItems& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The member account to which the desensitization target belongs.
    std::shared_ptr<int64_t> dstMemberAccount_ = nullptr;
    // The destination path.
    std::shared_ptr<string> dstPath_ = nullptr;
    // The service to which the data to be de-identified belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int32_t> dstType_ = nullptr;
    // The type of the service to which the de-identified data belongs. Valid values: **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> dstTypeCode_ = nullptr;
    // The time when the de-identification task is created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Indicates whether the de-identification task is running.
    std::shared_ptr<bool> hasUnfinishProcess_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the source table is de-identified.
    std::shared_ptr<bool> originalTable_ = nullptr;
    // The user who created the de-identification task.
    std::shared_ptr<string> owner_ = nullptr;
    // The number of times that the de-identification task is run.
    std::shared_ptr<int32_t> runCount_ = nullptr;
    // The member account to which the desensitization source belongs.
    std::shared_ptr<int64_t> srcMemberAccount_ = nullptr;
    // The source path.
    std::shared_ptr<string> srcPath_ = nullptr;
    // The type of the service to which the data to be de-identified belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int32_t> srcType_ = nullptr;
    // The type of the service to which the data to be de-identified belongs. Valid values: **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> srcTypeCode_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The mode in which the de-identification task is run. Valid values:
    // 
    // *   **1**: manual
    // *   **2**: scheduled
    // *   **3**: manual and scheduled
    std::shared_ptr<int32_t> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
