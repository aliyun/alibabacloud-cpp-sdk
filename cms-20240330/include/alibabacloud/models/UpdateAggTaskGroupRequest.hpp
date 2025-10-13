// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGTASKGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGTASKGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAggTaskGroupRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateAggTaskGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggTaskGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aggTaskGroupConfig, aggTaskGroupConfig_);
      DARABONBA_PTR_TO_JSON(aggTaskGroupConfigType, aggTaskGroupConfigType_);
      DARABONBA_PTR_TO_JSON(aggTaskGroupName, aggTaskGroupName_);
      DARABONBA_PTR_TO_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_TO_JSON(delay, delay_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
      DARABONBA_PTR_TO_JSON(maxRetries, maxRetries_);
      DARABONBA_PTR_TO_JSON(maxRunTimeInSeconds, maxRunTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(precheckString, precheckString_);
      DARABONBA_PTR_TO_JSON(scheduleMode, scheduleMode_);
      DARABONBA_PTR_TO_JSON(scheduleTimeExpr, scheduleTimeExpr_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(targetPrometheusId, targetPrometheusId_);
      DARABONBA_PTR_TO_JSON(toTime, toTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggTaskGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aggTaskGroupConfig, aggTaskGroupConfig_);
      DARABONBA_PTR_FROM_JSON(aggTaskGroupConfigType, aggTaskGroupConfigType_);
      DARABONBA_PTR_FROM_JSON(aggTaskGroupName, aggTaskGroupName_);
      DARABONBA_PTR_FROM_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_FROM_JSON(delay, delay_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
      DARABONBA_PTR_FROM_JSON(maxRetries, maxRetries_);
      DARABONBA_PTR_FROM_JSON(maxRunTimeInSeconds, maxRunTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(precheckString, precheckString_);
      DARABONBA_PTR_FROM_JSON(scheduleMode, scheduleMode_);
      DARABONBA_PTR_FROM_JSON(scheduleTimeExpr, scheduleTimeExpr_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(targetPrometheusId, targetPrometheusId_);
      DARABONBA_PTR_FROM_JSON(toTime, toTime_);
    };
    UpdateAggTaskGroupRequest() = default ;
    UpdateAggTaskGroupRequest(const UpdateAggTaskGroupRequest &) = default ;
    UpdateAggTaskGroupRequest(UpdateAggTaskGroupRequest &&) = default ;
    UpdateAggTaskGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggTaskGroupRequest() = default ;
    UpdateAggTaskGroupRequest& operator=(const UpdateAggTaskGroupRequest &) = default ;
    UpdateAggTaskGroupRequest& operator=(UpdateAggTaskGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggTaskGroupConfig_ == nullptr
        && return this->aggTaskGroupConfigType_ == nullptr && return this->aggTaskGroupName_ == nullptr && return this->cronExpr_ == nullptr && return this->delay_ == nullptr && return this->description_ == nullptr
        && return this->fromTime_ == nullptr && return this->maxRetries_ == nullptr && return this->maxRunTimeInSeconds_ == nullptr && return this->precheckString_ == nullptr && return this->scheduleMode_ == nullptr
        && return this->scheduleTimeExpr_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->targetPrometheusId_ == nullptr && return this->toTime_ == nullptr; };
    // aggTaskGroupConfig Field Functions 
    bool hasAggTaskGroupConfig() const { return this->aggTaskGroupConfig_ != nullptr;};
    void deleteAggTaskGroupConfig() { this->aggTaskGroupConfig_ = nullptr;};
    inline string aggTaskGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfig_, "") };
    inline UpdateAggTaskGroupRequest& setAggTaskGroupConfig(string aggTaskGroupConfig) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfig_, aggTaskGroupConfig) };


    // aggTaskGroupConfigType Field Functions 
    bool hasAggTaskGroupConfigType() const { return this->aggTaskGroupConfigType_ != nullptr;};
    void deleteAggTaskGroupConfigType() { this->aggTaskGroupConfigType_ = nullptr;};
    inline string aggTaskGroupConfigType() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfigType_, "") };
    inline UpdateAggTaskGroupRequest& setAggTaskGroupConfigType(string aggTaskGroupConfigType) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfigType_, aggTaskGroupConfigType) };


    // aggTaskGroupName Field Functions 
    bool hasAggTaskGroupName() const { return this->aggTaskGroupName_ != nullptr;};
    void deleteAggTaskGroupName() { this->aggTaskGroupName_ = nullptr;};
    inline string aggTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupName_, "") };
    inline UpdateAggTaskGroupRequest& setAggTaskGroupName(string aggTaskGroupName) { DARABONBA_PTR_SET_VALUE(aggTaskGroupName_, aggTaskGroupName) };


    // cronExpr Field Functions 
    bool hasCronExpr() const { return this->cronExpr_ != nullptr;};
    void deleteCronExpr() { this->cronExpr_ = nullptr;};
    inline string cronExpr() const { DARABONBA_PTR_GET_DEFAULT(cronExpr_, "") };
    inline UpdateAggTaskGroupRequest& setCronExpr(string cronExpr) { DARABONBA_PTR_SET_VALUE(cronExpr_, cronExpr) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int32_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
    inline UpdateAggTaskGroupRequest& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAggTaskGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fromTime Field Functions 
    bool hasFromTime() const { return this->fromTime_ != nullptr;};
    void deleteFromTime() { this->fromTime_ = nullptr;};
    inline int64_t fromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
    inline UpdateAggTaskGroupRequest& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


    // maxRetries Field Functions 
    bool hasMaxRetries() const { return this->maxRetries_ != nullptr;};
    void deleteMaxRetries() { this->maxRetries_ = nullptr;};
    inline int32_t maxRetries() const { DARABONBA_PTR_GET_DEFAULT(maxRetries_, 0) };
    inline UpdateAggTaskGroupRequest& setMaxRetries(int32_t maxRetries) { DARABONBA_PTR_SET_VALUE(maxRetries_, maxRetries) };


    // maxRunTimeInSeconds Field Functions 
    bool hasMaxRunTimeInSeconds() const { return this->maxRunTimeInSeconds_ != nullptr;};
    void deleteMaxRunTimeInSeconds() { this->maxRunTimeInSeconds_ = nullptr;};
    inline int32_t maxRunTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunTimeInSeconds_, 0) };
    inline UpdateAggTaskGroupRequest& setMaxRunTimeInSeconds(int32_t maxRunTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunTimeInSeconds_, maxRunTimeInSeconds) };


    // precheckString Field Functions 
    bool hasPrecheckString() const { return this->precheckString_ != nullptr;};
    void deletePrecheckString() { this->precheckString_ = nullptr;};
    inline string precheckString() const { DARABONBA_PTR_GET_DEFAULT(precheckString_, "") };
    inline UpdateAggTaskGroupRequest& setPrecheckString(string precheckString) { DARABONBA_PTR_SET_VALUE(precheckString_, precheckString) };


    // scheduleMode Field Functions 
    bool hasScheduleMode() const { return this->scheduleMode_ != nullptr;};
    void deleteScheduleMode() { this->scheduleMode_ = nullptr;};
    inline string scheduleMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleMode_, "") };
    inline UpdateAggTaskGroupRequest& setScheduleMode(string scheduleMode) { DARABONBA_PTR_SET_VALUE(scheduleMode_, scheduleMode) };


    // scheduleTimeExpr Field Functions 
    bool hasScheduleTimeExpr() const { return this->scheduleTimeExpr_ != nullptr;};
    void deleteScheduleTimeExpr() { this->scheduleTimeExpr_ = nullptr;};
    inline string scheduleTimeExpr() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimeExpr_, "") };
    inline UpdateAggTaskGroupRequest& setScheduleTimeExpr(string scheduleTimeExpr) { DARABONBA_PTR_SET_VALUE(scheduleTimeExpr_, scheduleTimeExpr) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAggTaskGroupRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateAggTaskGroupRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateAggTaskGroupRequestTags>) };
    inline vector<UpdateAggTaskGroupRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UpdateAggTaskGroupRequestTags>) };
    inline UpdateAggTaskGroupRequest& setTags(const vector<UpdateAggTaskGroupRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateAggTaskGroupRequest& setTags(vector<UpdateAggTaskGroupRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetPrometheusId Field Functions 
    bool hasTargetPrometheusId() const { return this->targetPrometheusId_ != nullptr;};
    void deleteTargetPrometheusId() { this->targetPrometheusId_ = nullptr;};
    inline string targetPrometheusId() const { DARABONBA_PTR_GET_DEFAULT(targetPrometheusId_, "") };
    inline UpdateAggTaskGroupRequest& setTargetPrometheusId(string targetPrometheusId) { DARABONBA_PTR_SET_VALUE(targetPrometheusId_, targetPrometheusId) };


    // toTime Field Functions 
    bool hasToTime() const { return this->toTime_ != nullptr;};
    void deleteToTime() { this->toTime_ = nullptr;};
    inline int64_t toTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
    inline UpdateAggTaskGroupRequest& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> aggTaskGroupConfig_ = nullptr;
    std::shared_ptr<string> aggTaskGroupConfigType_ = nullptr;
    std::shared_ptr<string> aggTaskGroupName_ = nullptr;
    std::shared_ptr<string> cronExpr_ = nullptr;
    std::shared_ptr<int32_t> delay_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> fromTime_ = nullptr;
    std::shared_ptr<int32_t> maxRetries_ = nullptr;
    std::shared_ptr<int32_t> maxRunTimeInSeconds_ = nullptr;
    std::shared_ptr<string> precheckString_ = nullptr;
    std::shared_ptr<string> scheduleMode_ = nullptr;
    std::shared_ptr<string> scheduleTimeExpr_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<UpdateAggTaskGroupRequestTags>> tags_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetPrometheusId_ = nullptr;
    std::shared_ptr<int64_t> toTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
