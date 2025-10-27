// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILRESPONSEBODYTASKRECORDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILRESPONSEBODYTASKRECORDDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_TO_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_TO_JSON(LeafTaskId, leafTaskId_);
      DARABONBA_PTR_TO_JSON(LeafTaskStatus, leafTaskStatus_);
      DARABONBA_PTR_TO_JSON(TaskMsg, taskMsg_);
      DARABONBA_PTR_TO_JSON(TaskReportTime, taskReportTime_);
      DARABONBA_PTR_TO_JSON(UnprotectedAssetCount, unprotectedAssetCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_FROM_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_FROM_JSON(LeafTaskId, leafTaskId_);
      DARABONBA_PTR_FROM_JSON(LeafTaskStatus, leafTaskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskMsg, taskMsg_);
      DARABONBA_PTR_FROM_JSON(TaskReportTime, taskReportTime_);
      DARABONBA_PTR_FROM_JSON(UnprotectedAssetCount, unprotectedAssetCount_);
    };
    DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails() = default ;
    DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails(const DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails &) = default ;
    DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails(DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails &&) = default ;
    DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails() = default ;
    DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& operator=(const DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails &) = default ;
    DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& operator=(DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetCount_ == nullptr
        && return this->idcRegion_ == nullptr && return this->leafTaskId_ == nullptr && return this->leafTaskStatus_ == nullptr && return this->taskMsg_ == nullptr && return this->taskReportTime_ == nullptr
        && return this->unprotectedAssetCount_ == nullptr; };
    // assetCount Field Functions 
    bool hasAssetCount() const { return this->assetCount_ != nullptr;};
    void deleteAssetCount() { this->assetCount_ = nullptr;};
    inline int32_t assetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0) };
    inline DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& setAssetCount(int32_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


    // idcRegion Field Functions 
    bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
    void deleteIdcRegion() { this->idcRegion_ = nullptr;};
    inline string idcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
    inline DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


    // leafTaskId Field Functions 
    bool hasLeafTaskId() const { return this->leafTaskId_ != nullptr;};
    void deleteLeafTaskId() { this->leafTaskId_ = nullptr;};
    inline string leafTaskId() const { DARABONBA_PTR_GET_DEFAULT(leafTaskId_, "") };
    inline DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& setLeafTaskId(string leafTaskId) { DARABONBA_PTR_SET_VALUE(leafTaskId_, leafTaskId) };


    // leafTaskStatus Field Functions 
    bool hasLeafTaskStatus() const { return this->leafTaskStatus_ != nullptr;};
    void deleteLeafTaskStatus() { this->leafTaskStatus_ = nullptr;};
    inline string leafTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(leafTaskStatus_, "") };
    inline DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& setLeafTaskStatus(string leafTaskStatus) { DARABONBA_PTR_SET_VALUE(leafTaskStatus_, leafTaskStatus) };


    // taskMsg Field Functions 
    bool hasTaskMsg() const { return this->taskMsg_ != nullptr;};
    void deleteTaskMsg() { this->taskMsg_ = nullptr;};
    inline string taskMsg() const { DARABONBA_PTR_GET_DEFAULT(taskMsg_, "") };
    inline DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& setTaskMsg(string taskMsg) { DARABONBA_PTR_SET_VALUE(taskMsg_, taskMsg) };


    // taskReportTime Field Functions 
    bool hasTaskReportTime() const { return this->taskReportTime_ != nullptr;};
    void deleteTaskReportTime() { this->taskReportTime_ = nullptr;};
    inline int64_t taskReportTime() const { DARABONBA_PTR_GET_DEFAULT(taskReportTime_, 0L) };
    inline DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& setTaskReportTime(int64_t taskReportTime) { DARABONBA_PTR_SET_VALUE(taskReportTime_, taskReportTime) };


    // unprotectedAssetCount Field Functions 
    bool hasUnprotectedAssetCount() const { return this->unprotectedAssetCount_ != nullptr;};
    void deleteUnprotectedAssetCount() { this->unprotectedAssetCount_ = nullptr;};
    inline int32_t unprotectedAssetCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedAssetCount_, 0) };
    inline DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails& setUnprotectedAssetCount(int32_t unprotectedAssetCount) { DARABONBA_PTR_SET_VALUE(unprotectedAssetCount_, unprotectedAssetCount) };


  protected:
    // The total number of assets.
    std::shared_ptr<int32_t> assetCount_ = nullptr;
    // The region of the server in the data center.
    std::shared_ptr<string> idcRegion_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> leafTaskId_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **INIT**: The task is not started.
    // *   **START**: The task is started.
    // *   **MESSAGE_SEND**: The command is sent.
    // *   **SUCCESS**: The task is complete.
    // *   **FAIL**: The task failed.
    // *   **TIMEOUT**: The task timed out.
    std::shared_ptr<string> leafTaskStatus_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> taskMsg_ = nullptr;
    // The timestamp when the task results were reported.
    std::shared_ptr<int64_t> taskReportTime_ = nullptr;
    // The number of unprotected assets.
    std::shared_ptr<int32_t> unprotectedAssetCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
