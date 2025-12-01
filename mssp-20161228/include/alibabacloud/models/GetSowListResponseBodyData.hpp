// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOWLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSOWLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSowListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSowListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(OperateRemark, operateRemark_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskTypeName, taskTypeName_);
      DARABONBA_PTR_TO_JSON(WorkOrderName, workOrderName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSowListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(OperateRemark, operateRemark_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskTypeName, taskTypeName_);
      DARABONBA_PTR_FROM_JSON(WorkOrderName, workOrderName_);
    };
    GetSowListResponseBodyData() = default ;
    GetSowListResponseBodyData(const GetSowListResponseBodyData &) = default ;
    GetSowListResponseBodyData(GetSowListResponseBodyData &&) = default ;
    GetSowListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSowListResponseBodyData() = default ;
    GetSowListResponseBodyData& operator=(const GetSowListResponseBodyData &) = default ;
    GetSowListResponseBodyData& operator=(GetSowListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && return this->operateRemark_ == nullptr && return this->progress_ == nullptr && return this->recordCount_ == nullptr && return this->startTime_ == nullptr && return this->taskTypeName_ == nullptr
        && return this->workOrderName_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetSowListResponseBodyData& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // operateRemark Field Functions 
    bool hasOperateRemark() const { return this->operateRemark_ != nullptr;};
    void deleteOperateRemark() { this->operateRemark_ = nullptr;};
    inline string operateRemark() const { DARABONBA_PTR_GET_DEFAULT(operateRemark_, "") };
    inline GetSowListResponseBodyData& setOperateRemark(string operateRemark) { DARABONBA_PTR_SET_VALUE(operateRemark_, operateRemark) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline GetSowListResponseBodyData& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int32_t recordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0) };
    inline GetSowListResponseBodyData& setRecordCount(int32_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetSowListResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskTypeName Field Functions 
    bool hasTaskTypeName() const { return this->taskTypeName_ != nullptr;};
    void deleteTaskTypeName() { this->taskTypeName_ = nullptr;};
    inline string taskTypeName() const { DARABONBA_PTR_GET_DEFAULT(taskTypeName_, "") };
    inline GetSowListResponseBodyData& setTaskTypeName(string taskTypeName) { DARABONBA_PTR_SET_VALUE(taskTypeName_, taskTypeName) };


    // workOrderName Field Functions 
    bool hasWorkOrderName() const { return this->workOrderName_ != nullptr;};
    void deleteWorkOrderName() { this->workOrderName_ = nullptr;};
    inline string workOrderName() const { DARABONBA_PTR_GET_DEFAULT(workOrderName_, "") };
    inline GetSowListResponseBodyData& setWorkOrderName(string workOrderName) { DARABONBA_PTR_SET_VALUE(workOrderName_, workOrderName) };


  protected:
    // Completion time.
    std::shared_ptr<string> completeTime_ = nullptr;
    // Operation remarks.
    std::shared_ptr<string> operateRemark_ = nullptr;
    // Progress.
    std::shared_ptr<string> progress_ = nullptr;
    // Record count.
    std::shared_ptr<int32_t> recordCount_ = nullptr;
    // Start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // Task type.
    std::shared_ptr<string> taskTypeName_ = nullptr;
    // Work order name.
    std::shared_ptr<string> workOrderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
