// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGTASKGROUPRESPONSEBODYAGGTASKGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETAGGTASKGROUPRESPONSEBODYAGGTASKGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggTaskGroupResponseBodyAggTaskGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAggTaskGroupResponseBodyAggTaskGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggTaskGroupResponseBodyAggTaskGroup& obj) { 
      DARABONBA_PTR_TO_JSON(aggTaskGroupConfig, aggTaskGroupConfig_);
      DARABONBA_PTR_TO_JSON(aggTaskGroupConfigHash, aggTaskGroupConfigHash_);
      DARABONBA_PTR_TO_JSON(aggTaskGroupId, aggTaskGroupId_);
      DARABONBA_PTR_TO_JSON(aggTaskGroupName, aggTaskGroupName_);
      DARABONBA_PTR_TO_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_TO_JSON(delay, delay_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
      DARABONBA_PTR_TO_JSON(maxRetries, maxRetries_);
      DARABONBA_PTR_TO_JSON(maxRunTimeInSeconds, maxRunTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(precheckString, precheckString_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(scheduleMode, scheduleMode_);
      DARABONBA_PTR_TO_JSON(scheduleTimeExpr, scheduleTimeExpr_);
      DARABONBA_PTR_TO_JSON(sourcePrometheusId, sourcePrometheusId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(targetPrometheusId, targetPrometheusId_);
      DARABONBA_PTR_TO_JSON(toTime, toTime_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggTaskGroupResponseBodyAggTaskGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(aggTaskGroupConfig, aggTaskGroupConfig_);
      DARABONBA_PTR_FROM_JSON(aggTaskGroupConfigHash, aggTaskGroupConfigHash_);
      DARABONBA_PTR_FROM_JSON(aggTaskGroupId, aggTaskGroupId_);
      DARABONBA_PTR_FROM_JSON(aggTaskGroupName, aggTaskGroupName_);
      DARABONBA_PTR_FROM_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_FROM_JSON(delay, delay_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
      DARABONBA_PTR_FROM_JSON(maxRetries, maxRetries_);
      DARABONBA_PTR_FROM_JSON(maxRunTimeInSeconds, maxRunTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(precheckString, precheckString_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(scheduleMode, scheduleMode_);
      DARABONBA_PTR_FROM_JSON(scheduleTimeExpr, scheduleTimeExpr_);
      DARABONBA_PTR_FROM_JSON(sourcePrometheusId, sourcePrometheusId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(targetPrometheusId, targetPrometheusId_);
      DARABONBA_PTR_FROM_JSON(toTime, toTime_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetAggTaskGroupResponseBodyAggTaskGroup() = default ;
    GetAggTaskGroupResponseBodyAggTaskGroup(const GetAggTaskGroupResponseBodyAggTaskGroup &) = default ;
    GetAggTaskGroupResponseBodyAggTaskGroup(GetAggTaskGroupResponseBodyAggTaskGroup &&) = default ;
    GetAggTaskGroupResponseBodyAggTaskGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggTaskGroupResponseBodyAggTaskGroup() = default ;
    GetAggTaskGroupResponseBodyAggTaskGroup& operator=(const GetAggTaskGroupResponseBodyAggTaskGroup &) = default ;
    GetAggTaskGroupResponseBodyAggTaskGroup& operator=(GetAggTaskGroupResponseBodyAggTaskGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggTaskGroupConfig_ == nullptr
        && return this->aggTaskGroupConfigHash_ == nullptr && return this->aggTaskGroupId_ == nullptr && return this->aggTaskGroupName_ == nullptr && return this->cronExpr_ == nullptr && return this->delay_ == nullptr
        && return this->description_ == nullptr && return this->fromTime_ == nullptr && return this->maxRetries_ == nullptr && return this->maxRunTimeInSeconds_ == nullptr && return this->precheckString_ == nullptr
        && return this->regionId_ == nullptr && return this->scheduleMode_ == nullptr && return this->scheduleTimeExpr_ == nullptr && return this->sourcePrometheusId_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->targetPrometheusId_ == nullptr && return this->toTime_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // aggTaskGroupConfig Field Functions 
    bool hasAggTaskGroupConfig() const { return this->aggTaskGroupConfig_ != nullptr;};
    void deleteAggTaskGroupConfig() { this->aggTaskGroupConfig_ = nullptr;};
    inline string aggTaskGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfig_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setAggTaskGroupConfig(string aggTaskGroupConfig) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfig_, aggTaskGroupConfig) };


    // aggTaskGroupConfigHash Field Functions 
    bool hasAggTaskGroupConfigHash() const { return this->aggTaskGroupConfigHash_ != nullptr;};
    void deleteAggTaskGroupConfigHash() { this->aggTaskGroupConfigHash_ = nullptr;};
    inline string aggTaskGroupConfigHash() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfigHash_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setAggTaskGroupConfigHash(string aggTaskGroupConfigHash) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfigHash_, aggTaskGroupConfigHash) };


    // aggTaskGroupId Field Functions 
    bool hasAggTaskGroupId() const { return this->aggTaskGroupId_ != nullptr;};
    void deleteAggTaskGroupId() { this->aggTaskGroupId_ = nullptr;};
    inline string aggTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupId_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setAggTaskGroupId(string aggTaskGroupId) { DARABONBA_PTR_SET_VALUE(aggTaskGroupId_, aggTaskGroupId) };


    // aggTaskGroupName Field Functions 
    bool hasAggTaskGroupName() const { return this->aggTaskGroupName_ != nullptr;};
    void deleteAggTaskGroupName() { this->aggTaskGroupName_ = nullptr;};
    inline string aggTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupName_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setAggTaskGroupName(string aggTaskGroupName) { DARABONBA_PTR_SET_VALUE(aggTaskGroupName_, aggTaskGroupName) };


    // cronExpr Field Functions 
    bool hasCronExpr() const { return this->cronExpr_ != nullptr;};
    void deleteCronExpr() { this->cronExpr_ = nullptr;};
    inline string cronExpr() const { DARABONBA_PTR_GET_DEFAULT(cronExpr_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setCronExpr(string cronExpr) { DARABONBA_PTR_SET_VALUE(cronExpr_, cronExpr) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int32_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fromTime Field Functions 
    bool hasFromTime() const { return this->fromTime_ != nullptr;};
    void deleteFromTime() { this->fromTime_ = nullptr;};
    inline int64_t fromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


    // maxRetries Field Functions 
    bool hasMaxRetries() const { return this->maxRetries_ != nullptr;};
    void deleteMaxRetries() { this->maxRetries_ = nullptr;};
    inline int32_t maxRetries() const { DARABONBA_PTR_GET_DEFAULT(maxRetries_, 0) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setMaxRetries(int32_t maxRetries) { DARABONBA_PTR_SET_VALUE(maxRetries_, maxRetries) };


    // maxRunTimeInSeconds Field Functions 
    bool hasMaxRunTimeInSeconds() const { return this->maxRunTimeInSeconds_ != nullptr;};
    void deleteMaxRunTimeInSeconds() { this->maxRunTimeInSeconds_ = nullptr;};
    inline int32_t maxRunTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunTimeInSeconds_, 0) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setMaxRunTimeInSeconds(int32_t maxRunTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunTimeInSeconds_, maxRunTimeInSeconds) };


    // precheckString Field Functions 
    bool hasPrecheckString() const { return this->precheckString_ != nullptr;};
    void deletePrecheckString() { this->precheckString_ = nullptr;};
    inline string precheckString() const { DARABONBA_PTR_GET_DEFAULT(precheckString_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setPrecheckString(string precheckString) { DARABONBA_PTR_SET_VALUE(precheckString_, precheckString) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scheduleMode Field Functions 
    bool hasScheduleMode() const { return this->scheduleMode_ != nullptr;};
    void deleteScheduleMode() { this->scheduleMode_ = nullptr;};
    inline string scheduleMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleMode_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setScheduleMode(string scheduleMode) { DARABONBA_PTR_SET_VALUE(scheduleMode_, scheduleMode) };


    // scheduleTimeExpr Field Functions 
    bool hasScheduleTimeExpr() const { return this->scheduleTimeExpr_ != nullptr;};
    void deleteScheduleTimeExpr() { this->scheduleTimeExpr_ = nullptr;};
    inline string scheduleTimeExpr() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimeExpr_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setScheduleTimeExpr(string scheduleTimeExpr) { DARABONBA_PTR_SET_VALUE(scheduleTimeExpr_, scheduleTimeExpr) };


    // sourcePrometheusId Field Functions 
    bool hasSourcePrometheusId() const { return this->sourcePrometheusId_ != nullptr;};
    void deleteSourcePrometheusId() { this->sourcePrometheusId_ = nullptr;};
    inline string sourcePrometheusId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrometheusId_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setSourcePrometheusId(string sourcePrometheusId) { DARABONBA_PTR_SET_VALUE(sourcePrometheusId_, sourcePrometheusId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetAggTaskGroupResponseBodyAggTaskGroupTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetAggTaskGroupResponseBodyAggTaskGroupTags>) };
    inline vector<Models::GetAggTaskGroupResponseBodyAggTaskGroupTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetAggTaskGroupResponseBodyAggTaskGroupTags>) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setTags(const vector<Models::GetAggTaskGroupResponseBodyAggTaskGroupTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setTags(vector<Models::GetAggTaskGroupResponseBodyAggTaskGroupTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetPrometheusId Field Functions 
    bool hasTargetPrometheusId() const { return this->targetPrometheusId_ != nullptr;};
    void deleteTargetPrometheusId() { this->targetPrometheusId_ = nullptr;};
    inline string targetPrometheusId() const { DARABONBA_PTR_GET_DEFAULT(targetPrometheusId_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setTargetPrometheusId(string targetPrometheusId) { DARABONBA_PTR_SET_VALUE(targetPrometheusId_, targetPrometheusId) };


    // toTime Field Functions 
    bool hasToTime() const { return this->toTime_ != nullptr;};
    void deleteToTime() { this->toTime_ = nullptr;};
    inline int64_t toTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAggTaskGroupResponseBodyAggTaskGroup& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> aggTaskGroupConfig_ = nullptr;
    std::shared_ptr<string> aggTaskGroupConfigHash_ = nullptr;
    std::shared_ptr<string> aggTaskGroupId_ = nullptr;
    std::shared_ptr<string> aggTaskGroupName_ = nullptr;
    std::shared_ptr<string> cronExpr_ = nullptr;
    std::shared_ptr<int32_t> delay_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> fromTime_ = nullptr;
    std::shared_ptr<int32_t> maxRetries_ = nullptr;
    std::shared_ptr<int32_t> maxRunTimeInSeconds_ = nullptr;
    std::shared_ptr<string> precheckString_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> scheduleMode_ = nullptr;
    std::shared_ptr<string> scheduleTimeExpr_ = nullptr;
    std::shared_ptr<string> sourcePrometheusId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetAggTaskGroupResponseBodyAggTaskGroupTags>> tags_ = nullptr;
    std::shared_ptr<string> targetPrometheusId_ = nullptr;
    std::shared_ptr<int64_t> toTime_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
