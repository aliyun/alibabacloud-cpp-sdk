// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINESTATUSESRESPONSEBODYDATABASELINESTATUSES_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINESTATUSESRESPONSEBODYDATABASELINESTATUSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselineStatusesResponseBodyDataBaselineStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineStatusesResponseBodyDataBaselineStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Buffer, buffer_);
      DARABONBA_PTR_TO_JSON(EndCast, endCast_);
      DARABONBA_PTR_TO_JSON(ExpTime, expTime_);
      DARABONBA_PTR_TO_JSON(FinishStatus, finishStatus_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SlaTime, slaTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineStatusesResponseBodyDataBaselineStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
      DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
      DARABONBA_PTR_FROM_JSON(ExpTime, expTime_);
      DARABONBA_PTR_FROM_JSON(FinishStatus, finishStatus_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SlaTime, slaTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListBaselineStatusesResponseBodyDataBaselineStatuses() = default ;
    ListBaselineStatusesResponseBodyDataBaselineStatuses(const ListBaselineStatusesResponseBodyDataBaselineStatuses &) = default ;
    ListBaselineStatusesResponseBodyDataBaselineStatuses(ListBaselineStatusesResponseBodyDataBaselineStatuses &&) = default ;
    ListBaselineStatusesResponseBodyDataBaselineStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineStatusesResponseBodyDataBaselineStatuses() = default ;
    ListBaselineStatusesResponseBodyDataBaselineStatuses& operator=(const ListBaselineStatusesResponseBodyDataBaselineStatuses &) = default ;
    ListBaselineStatusesResponseBodyDataBaselineStatuses& operator=(ListBaselineStatusesResponseBodyDataBaselineStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->baselineName_ != nullptr && this->baselineType_ != nullptr && this->bizdate_ != nullptr && this->buffer_ != nullptr && this->endCast_ != nullptr
        && this->expTime_ != nullptr && this->finishStatus_ != nullptr && this->finishTime_ != nullptr && this->inGroupId_ != nullptr && this->owner_ != nullptr
        && this->priority_ != nullptr && this->projectId_ != nullptr && this->slaTime_ != nullptr && this->status_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string baselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // buffer Field Functions 
    bool hasBuffer() const { return this->buffer_ != nullptr;};
    void deleteBuffer() { this->buffer_ = nullptr;};
    inline int64_t buffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setBuffer(int64_t buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


    // endCast Field Functions 
    bool hasEndCast() const { return this->endCast_ != nullptr;};
    void deleteEndCast() { this->endCast_ = nullptr;};
    inline int64_t endCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


    // expTime Field Functions 
    bool hasExpTime() const { return this->expTime_ != nullptr;};
    void deleteExpTime() { this->expTime_ = nullptr;};
    inline int64_t expTime() const { DARABONBA_PTR_GET_DEFAULT(expTime_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setExpTime(int64_t expTime) { DARABONBA_PTR_SET_VALUE(expTime_, expTime) };


    // finishStatus Field Functions 
    bool hasFinishStatus() const { return this->finishStatus_ != nullptr;};
    void deleteFinishStatus() { this->finishStatus_ = nullptr;};
    inline string finishStatus() const { DARABONBA_PTR_GET_DEFAULT(finishStatus_, "") };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setFinishStatus(string finishStatus) { DARABONBA_PTR_SET_VALUE(finishStatus_, finishStatus) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // inGroupId Field Functions 
    bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
    void deleteInGroupId() { this->inGroupId_ = nullptr;};
    inline int32_t inGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // slaTime Field Functions 
    bool hasSlaTime() const { return this->slaTime_ != nullptr;};
    void deleteSlaTime() { this->slaTime_ = nullptr;};
    inline int64_t slaTime() const { DARABONBA_PTR_GET_DEFAULT(slaTime_, 0L) };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setSlaTime(int64_t slaTime) { DARABONBA_PTR_SET_VALUE(slaTime_, slaTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBaselineStatusesResponseBodyDataBaselineStatuses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The type of the baseline, including DAILY and HOURLY. Separate multiple types with commas (,).
    std::shared_ptr<string> baselineType_ = nullptr;
    // The data timestamp.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The margin of the baseline instance. Unit: seconds.
    std::shared_ptr<int64_t> buffer_ = nullptr;
    // The timestamp of the predicted time when the baseline instance finished running.
    std::shared_ptr<int64_t> endCast_ = nullptr;
    // The timestamp of the alerting time of the baseline instance.
    std::shared_ptr<int64_t> expTime_ = nullptr;
    // The status of the baseline instance. Valid values: UNFINISH and FINISH.
    std::shared_ptr<string> finishStatus_ = nullptr;
    // The timestamp of the actual time when the baseline instance finished running. This parameter is returned if the value of the FinishStatus parameter is FINISH.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The ID of the cycle of the baseline instance. Valid values of the ID of an hour-level cycle: [1,24]. The ID of a day-level cycle is 1.
    std::shared_ptr<int32_t> inGroupId_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: {1,3,5,7,8}.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the workspace to which the baseline belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The timestamp of the actual time when the baseline instance finished running.
    std::shared_ptr<int64_t> slaTime_ = nullptr;
    // The status of the baseline. Valid values: ERROR, SAFE, DANGEROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes are run before the alert duration begins. The value DANGEROUS indicates that nodes are still running after the alert duration ends but the committed completion time does not arrive. The value OVER indicates that nodes are still running after the committed completion time.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
