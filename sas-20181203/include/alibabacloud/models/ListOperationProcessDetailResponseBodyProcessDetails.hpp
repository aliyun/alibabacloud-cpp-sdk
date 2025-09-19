// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILRESPONSEBODYPROCESSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILRESPONSEBODYPROCESSDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationProcessDetailResponseBodyProcessDetailsChecks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationProcessDetailResponseBodyProcessDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessDetailResponseBodyProcessDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AssetVendor, assetVendor_);
      DARABONBA_PTR_TO_JSON(Checks, checks_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DetailTaskId, detailTaskId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessDetailResponseBodyProcessDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AssetVendor, assetVendor_);
      DARABONBA_PTR_FROM_JSON(Checks, checks_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DetailTaskId, detailTaskId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListOperationProcessDetailResponseBodyProcessDetails() = default ;
    ListOperationProcessDetailResponseBodyProcessDetails(const ListOperationProcessDetailResponseBodyProcessDetails &) = default ;
    ListOperationProcessDetailResponseBodyProcessDetails(ListOperationProcessDetailResponseBodyProcessDetails &&) = default ;
    ListOperationProcessDetailResponseBodyProcessDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessDetailResponseBodyProcessDetails() = default ;
    ListOperationProcessDetailResponseBodyProcessDetails& operator=(const ListOperationProcessDetailResponseBodyProcessDetails &) = default ;
    ListOperationProcessDetailResponseBodyProcessDetails& operator=(ListOperationProcessDetailResponseBodyProcessDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetSubType_ != nullptr
        && this->assetType_ != nullptr && this->assetVendor_ != nullptr && this->checks_ != nullptr && this->createTime_ != nullptr && this->detailTaskId_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr && this->statusCode_ != nullptr && this->taskId_ != nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // assetVendor Field Functions 
    bool hasAssetVendor() const { return this->assetVendor_ != nullptr;};
    void deleteAssetVendor() { this->assetVendor_ = nullptr;};
    inline int32_t assetVendor() const { DARABONBA_PTR_GET_DEFAULT(assetVendor_, 0) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setAssetVendor(int32_t assetVendor) { DARABONBA_PTR_SET_VALUE(assetVendor_, assetVendor) };


    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<Models::ListOperationProcessDetailResponseBodyProcessDetailsChecks> & checks() const { DARABONBA_PTR_GET_CONST(checks_, vector<Models::ListOperationProcessDetailResponseBodyProcessDetailsChecks>) };
    inline vector<Models::ListOperationProcessDetailResponseBodyProcessDetailsChecks> checks() { DARABONBA_PTR_GET(checks_, vector<Models::ListOperationProcessDetailResponseBodyProcessDetailsChecks>) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setChecks(const vector<Models::ListOperationProcessDetailResponseBodyProcessDetailsChecks> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setChecks(vector<Models::ListOperationProcessDetailResponseBodyProcessDetailsChecks> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detailTaskId Field Functions 
    bool hasDetailTaskId() const { return this->detailTaskId_ != nullptr;};
    void deleteDetailTaskId() { this->detailTaskId_ = nullptr;};
    inline string detailTaskId() const { DARABONBA_PTR_GET_DEFAULT(detailTaskId_, "") };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setDetailTaskId(string detailTaskId) { DARABONBA_PTR_SET_VALUE(detailTaskId_, detailTaskId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOperationProcessDetailResponseBodyProcessDetails& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The subtype of the asset associated with the operation subtask.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of the asset associated with the operation subtask.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The vendor of the asset associated with the operation subtask.
    std::shared_ptr<int32_t> assetVendor_ = nullptr;
    // The check items associated with the operation subtask.
    std::shared_ptr<vector<Models::ListOperationProcessDetailResponseBodyProcessDetailsChecks>> checks_ = nullptr;
    // The timestamp when the task was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the operation subtask.
    std::shared_ptr<string> detailTaskId_ = nullptr;
    // The end timestamp of the operation subtask. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The start timestamp of the operation subtask. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The subtask status code. Enumerated values:
    // 
    // *   0: not started.
    // *   1: running.
    // *   2: successful.
    // *   3: times out.
    // *   4: failed.
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    // The ID of the operation subtask.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
