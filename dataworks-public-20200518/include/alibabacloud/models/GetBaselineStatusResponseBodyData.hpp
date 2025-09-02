// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINESTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINESTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBaselineStatusResponseBodyDataBlockInstance.hpp>
#include <alibabacloud/models/GetBaselineStatusResponseBodyDataLastInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(BlockInstance, blockInstance_);
      DARABONBA_PTR_TO_JSON(Buffer, buffer_);
      DARABONBA_PTR_TO_JSON(EndCast, endCast_);
      DARABONBA_PTR_TO_JSON(ExpTime, expTime_);
      DARABONBA_PTR_TO_JSON(FinishStatus, finishStatus_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_TO_JSON(LastInstance, lastInstance_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SlaTime, slaTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(BlockInstance, blockInstance_);
      DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
      DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
      DARABONBA_PTR_FROM_JSON(ExpTime, expTime_);
      DARABONBA_PTR_FROM_JSON(FinishStatus, finishStatus_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_FROM_JSON(LastInstance, lastInstance_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SlaTime, slaTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetBaselineStatusResponseBodyData() = default ;
    GetBaselineStatusResponseBodyData(const GetBaselineStatusResponseBodyData &) = default ;
    GetBaselineStatusResponseBodyData(GetBaselineStatusResponseBodyData &&) = default ;
    GetBaselineStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineStatusResponseBodyData() = default ;
    GetBaselineStatusResponseBodyData& operator=(const GetBaselineStatusResponseBodyData &) = default ;
    GetBaselineStatusResponseBodyData& operator=(GetBaselineStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->baselineName_ != nullptr && this->bizdate_ != nullptr && this->blockInstance_ != nullptr && this->buffer_ != nullptr && this->endCast_ != nullptr
        && this->expTime_ != nullptr && this->finishStatus_ != nullptr && this->finishTime_ != nullptr && this->inGroupId_ != nullptr && this->lastInstance_ != nullptr
        && this->owner_ != nullptr && this->priority_ != nullptr && this->projectId_ != nullptr && this->slaTime_ != nullptr && this->status_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetBaselineStatusResponseBodyData& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline GetBaselineStatusResponseBodyData& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline GetBaselineStatusResponseBodyData& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // blockInstance Field Functions 
    bool hasBlockInstance() const { return this->blockInstance_ != nullptr;};
    void deleteBlockInstance() { this->blockInstance_ = nullptr;};
    inline const Models::GetBaselineStatusResponseBodyDataBlockInstance & blockInstance() const { DARABONBA_PTR_GET_CONST(blockInstance_, Models::GetBaselineStatusResponseBodyDataBlockInstance) };
    inline Models::GetBaselineStatusResponseBodyDataBlockInstance blockInstance() { DARABONBA_PTR_GET(blockInstance_, Models::GetBaselineStatusResponseBodyDataBlockInstance) };
    inline GetBaselineStatusResponseBodyData& setBlockInstance(const Models::GetBaselineStatusResponseBodyDataBlockInstance & blockInstance) { DARABONBA_PTR_SET_VALUE(blockInstance_, blockInstance) };
    inline GetBaselineStatusResponseBodyData& setBlockInstance(Models::GetBaselineStatusResponseBodyDataBlockInstance && blockInstance) { DARABONBA_PTR_SET_RVALUE(blockInstance_, blockInstance) };


    // buffer Field Functions 
    bool hasBuffer() const { return this->buffer_ != nullptr;};
    void deleteBuffer() { this->buffer_ = nullptr;};
    inline float buffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0.0) };
    inline GetBaselineStatusResponseBodyData& setBuffer(float buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


    // endCast Field Functions 
    bool hasEndCast() const { return this->endCast_ != nullptr;};
    void deleteEndCast() { this->endCast_ = nullptr;};
    inline int64_t endCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
    inline GetBaselineStatusResponseBodyData& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


    // expTime Field Functions 
    bool hasExpTime() const { return this->expTime_ != nullptr;};
    void deleteExpTime() { this->expTime_ = nullptr;};
    inline int64_t expTime() const { DARABONBA_PTR_GET_DEFAULT(expTime_, 0L) };
    inline GetBaselineStatusResponseBodyData& setExpTime(int64_t expTime) { DARABONBA_PTR_SET_VALUE(expTime_, expTime) };


    // finishStatus Field Functions 
    bool hasFinishStatus() const { return this->finishStatus_ != nullptr;};
    void deleteFinishStatus() { this->finishStatus_ = nullptr;};
    inline string finishStatus() const { DARABONBA_PTR_GET_DEFAULT(finishStatus_, "") };
    inline GetBaselineStatusResponseBodyData& setFinishStatus(string finishStatus) { DARABONBA_PTR_SET_VALUE(finishStatus_, finishStatus) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetBaselineStatusResponseBodyData& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // inGroupId Field Functions 
    bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
    void deleteInGroupId() { this->inGroupId_ = nullptr;};
    inline int32_t inGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
    inline GetBaselineStatusResponseBodyData& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


    // lastInstance Field Functions 
    bool hasLastInstance() const { return this->lastInstance_ != nullptr;};
    void deleteLastInstance() { this->lastInstance_ = nullptr;};
    inline const Models::GetBaselineStatusResponseBodyDataLastInstance & lastInstance() const { DARABONBA_PTR_GET_CONST(lastInstance_, Models::GetBaselineStatusResponseBodyDataLastInstance) };
    inline Models::GetBaselineStatusResponseBodyDataLastInstance lastInstance() { DARABONBA_PTR_GET(lastInstance_, Models::GetBaselineStatusResponseBodyDataLastInstance) };
    inline GetBaselineStatusResponseBodyData& setLastInstance(const Models::GetBaselineStatusResponseBodyDataLastInstance & lastInstance) { DARABONBA_PTR_SET_VALUE(lastInstance_, lastInstance) };
    inline GetBaselineStatusResponseBodyData& setLastInstance(Models::GetBaselineStatusResponseBodyDataLastInstance && lastInstance) { DARABONBA_PTR_SET_RVALUE(lastInstance_, lastInstance) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetBaselineStatusResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetBaselineStatusResponseBodyData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBaselineStatusResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // slaTime Field Functions 
    bool hasSlaTime() const { return this->slaTime_ != nullptr;};
    void deleteSlaTime() { this->slaTime_ = nullptr;};
    inline int64_t slaTime() const { DARABONBA_PTR_GET_DEFAULT(slaTime_, 0L) };
    inline GetBaselineStatusResponseBodyData& setSlaTime(int64_t slaTime) { DARABONBA_PTR_SET_VALUE(slaTime_, slaTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBaselineStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the baseline.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The data timestamp of the baseline instance.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The information about the key instance.
    std::shared_ptr<Models::GetBaselineStatusResponseBodyDataBlockInstance> blockInstance_ = nullptr;
    // The margin of the baseline instance. Unit: seconds.
    std::shared_ptr<float> buffer_ = nullptr;
    // The timestamp of the predicted time when the baseline instance finished running.
    std::shared_ptr<int64_t> endCast_ = nullptr;
    // The timestamp of the alerting time of the baseline instance.
    std::shared_ptr<int64_t> expTime_ = nullptr;
    // The status of the baseline instance. Valid values: UNFINISH and FINISH. The value UNFINISH indicates that the baseline instance is still running. The value FINISH indicates that the baseline instance finishes running.
    std::shared_ptr<string> finishStatus_ = nullptr;
    // The timestamp of the actual time when the baseline instance finished running. This parameter is returned if the value of the FinishStatus parameter is FINISH.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The ID of the scheduling cycle of the baseline instance. For a baseline instance that is scheduled by day, the value of this parameter is 1. For a baseline instance that is scheduled by hour, the value of this parameter ranges from 1 to 24.
    std::shared_ptr<int32_t> inGroupId_ = nullptr;
    // The information about the last generated instance.
    std::shared_ptr<Models::GetBaselineStatusResponseBodyDataLastInstance> lastInstance_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: 1, 2, 5, 7, and 8.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the workspace to which the baseline belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The timestamp of the committed completion time of the baseline instance.
    std::shared_ptr<int64_t> slaTime_ = nullptr;
    // The status of the baseline. Valid values: ERROR, SAFE, DANGEROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes finish running before the alerting time. The value DANGEROUS indicates that nodes are still running after the alerting time but before the committed completion time. The value OVER indicates that nodes are still running after the committed completion time.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
