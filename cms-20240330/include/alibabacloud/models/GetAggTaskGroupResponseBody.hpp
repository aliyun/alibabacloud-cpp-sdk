// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGTASKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGTASKGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAggTaskGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aggTaskGroup, aggTaskGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aggTaskGroup, aggTaskGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetAggTaskGroupResponseBody() = default ;
    GetAggTaskGroupResponseBody(const GetAggTaskGroupResponseBody &) = default ;
    GetAggTaskGroupResponseBody(GetAggTaskGroupResponseBody &&) = default ;
    GetAggTaskGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggTaskGroupResponseBody() = default ;
    GetAggTaskGroupResponseBody& operator=(const GetAggTaskGroupResponseBody &) = default ;
    GetAggTaskGroupResponseBody& operator=(GetAggTaskGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AggTaskGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AggTaskGroup& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AggTaskGroup& obj) { 
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
      AggTaskGroup() = default ;
      AggTaskGroup(const AggTaskGroup &) = default ;
      AggTaskGroup(AggTaskGroup &&) = default ;
      AggTaskGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AggTaskGroup() = default ;
      AggTaskGroup& operator=(const AggTaskGroup &) = default ;
      AggTaskGroup& operator=(AggTaskGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Key of the resource group tag.
        shared_ptr<string> key_ {};
        // The value of the resource group tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aggTaskGroupConfig_ == nullptr
        && this->aggTaskGroupConfigHash_ == nullptr && this->aggTaskGroupId_ == nullptr && this->aggTaskGroupName_ == nullptr && this->cronExpr_ == nullptr && this->delay_ == nullptr
        && this->description_ == nullptr && this->fromTime_ == nullptr && this->maxRetries_ == nullptr && this->maxRunTimeInSeconds_ == nullptr && this->precheckString_ == nullptr
        && this->regionId_ == nullptr && this->scheduleMode_ == nullptr && this->scheduleTimeExpr_ == nullptr && this->sourcePrometheusId_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->targetPrometheusId_ == nullptr && this->toTime_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // aggTaskGroupConfig Field Functions 
      bool hasAggTaskGroupConfig() const { return this->aggTaskGroupConfig_ != nullptr;};
      void deleteAggTaskGroupConfig() { this->aggTaskGroupConfig_ = nullptr;};
      inline string getAggTaskGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfig_, "") };
      inline AggTaskGroup& setAggTaskGroupConfig(string aggTaskGroupConfig) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfig_, aggTaskGroupConfig) };


      // aggTaskGroupConfigHash Field Functions 
      bool hasAggTaskGroupConfigHash() const { return this->aggTaskGroupConfigHash_ != nullptr;};
      void deleteAggTaskGroupConfigHash() { this->aggTaskGroupConfigHash_ = nullptr;};
      inline string getAggTaskGroupConfigHash() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfigHash_, "") };
      inline AggTaskGroup& setAggTaskGroupConfigHash(string aggTaskGroupConfigHash) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfigHash_, aggTaskGroupConfigHash) };


      // aggTaskGroupId Field Functions 
      bool hasAggTaskGroupId() const { return this->aggTaskGroupId_ != nullptr;};
      void deleteAggTaskGroupId() { this->aggTaskGroupId_ = nullptr;};
      inline string getAggTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupId_, "") };
      inline AggTaskGroup& setAggTaskGroupId(string aggTaskGroupId) { DARABONBA_PTR_SET_VALUE(aggTaskGroupId_, aggTaskGroupId) };


      // aggTaskGroupName Field Functions 
      bool hasAggTaskGroupName() const { return this->aggTaskGroupName_ != nullptr;};
      void deleteAggTaskGroupName() { this->aggTaskGroupName_ = nullptr;};
      inline string getAggTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupName_, "") };
      inline AggTaskGroup& setAggTaskGroupName(string aggTaskGroupName) { DARABONBA_PTR_SET_VALUE(aggTaskGroupName_, aggTaskGroupName) };


      // cronExpr Field Functions 
      bool hasCronExpr() const { return this->cronExpr_ != nullptr;};
      void deleteCronExpr() { this->cronExpr_ = nullptr;};
      inline string getCronExpr() const { DARABONBA_PTR_GET_DEFAULT(cronExpr_, "") };
      inline AggTaskGroup& setCronExpr(string cronExpr) { DARABONBA_PTR_SET_VALUE(cronExpr_, cronExpr) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int32_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
      inline AggTaskGroup& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AggTaskGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fromTime Field Functions 
      bool hasFromTime() const { return this->fromTime_ != nullptr;};
      void deleteFromTime() { this->fromTime_ = nullptr;};
      inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
      inline AggTaskGroup& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


      // maxRetries Field Functions 
      bool hasMaxRetries() const { return this->maxRetries_ != nullptr;};
      void deleteMaxRetries() { this->maxRetries_ = nullptr;};
      inline int32_t getMaxRetries() const { DARABONBA_PTR_GET_DEFAULT(maxRetries_, 0) };
      inline AggTaskGroup& setMaxRetries(int32_t maxRetries) { DARABONBA_PTR_SET_VALUE(maxRetries_, maxRetries) };


      // maxRunTimeInSeconds Field Functions 
      bool hasMaxRunTimeInSeconds() const { return this->maxRunTimeInSeconds_ != nullptr;};
      void deleteMaxRunTimeInSeconds() { this->maxRunTimeInSeconds_ = nullptr;};
      inline int32_t getMaxRunTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunTimeInSeconds_, 0) };
      inline AggTaskGroup& setMaxRunTimeInSeconds(int32_t maxRunTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunTimeInSeconds_, maxRunTimeInSeconds) };


      // precheckString Field Functions 
      bool hasPrecheckString() const { return this->precheckString_ != nullptr;};
      void deletePrecheckString() { this->precheckString_ = nullptr;};
      inline string getPrecheckString() const { DARABONBA_PTR_GET_DEFAULT(precheckString_, "") };
      inline AggTaskGroup& setPrecheckString(string precheckString) { DARABONBA_PTR_SET_VALUE(precheckString_, precheckString) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AggTaskGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scheduleMode Field Functions 
      bool hasScheduleMode() const { return this->scheduleMode_ != nullptr;};
      void deleteScheduleMode() { this->scheduleMode_ = nullptr;};
      inline string getScheduleMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleMode_, "") };
      inline AggTaskGroup& setScheduleMode(string scheduleMode) { DARABONBA_PTR_SET_VALUE(scheduleMode_, scheduleMode) };


      // scheduleTimeExpr Field Functions 
      bool hasScheduleTimeExpr() const { return this->scheduleTimeExpr_ != nullptr;};
      void deleteScheduleTimeExpr() { this->scheduleTimeExpr_ = nullptr;};
      inline string getScheduleTimeExpr() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimeExpr_, "") };
      inline AggTaskGroup& setScheduleTimeExpr(string scheduleTimeExpr) { DARABONBA_PTR_SET_VALUE(scheduleTimeExpr_, scheduleTimeExpr) };


      // sourcePrometheusId Field Functions 
      bool hasSourcePrometheusId() const { return this->sourcePrometheusId_ != nullptr;};
      void deleteSourcePrometheusId() { this->sourcePrometheusId_ = nullptr;};
      inline string getSourcePrometheusId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrometheusId_, "") };
      inline AggTaskGroup& setSourcePrometheusId(string sourcePrometheusId) { DARABONBA_PTR_SET_VALUE(sourcePrometheusId_, sourcePrometheusId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AggTaskGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AggTaskGroup::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AggTaskGroup::Tags>) };
      inline vector<AggTaskGroup::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AggTaskGroup::Tags>) };
      inline AggTaskGroup& setTags(const vector<AggTaskGroup::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AggTaskGroup& setTags(vector<AggTaskGroup::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // targetPrometheusId Field Functions 
      bool hasTargetPrometheusId() const { return this->targetPrometheusId_ != nullptr;};
      void deleteTargetPrometheusId() { this->targetPrometheusId_ = nullptr;};
      inline string getTargetPrometheusId() const { DARABONBA_PTR_GET_DEFAULT(targetPrometheusId_, "") };
      inline AggTaskGroup& setTargetPrometheusId(string targetPrometheusId) { DARABONBA_PTR_SET_VALUE(targetPrometheusId_, targetPrometheusId) };


      // toTime Field Functions 
      bool hasToTime() const { return this->toTime_ != nullptr;};
      void deleteToTime() { this->toTime_ = nullptr;};
      inline int64_t getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
      inline AggTaskGroup& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AggTaskGroup& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AggTaskGroup& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Aggregation task group configuration.
      shared_ptr<string> aggTaskGroupConfig_ {};
      // Summary of the aggregation task group configuration.
      shared_ptr<string> aggTaskGroupConfigHash_ {};
      // ID of the aggregation task group.
      shared_ptr<string> aggTaskGroupId_ {};
      // Name of the aggregation task group.
      shared_ptr<string> aggTaskGroupName_ {};
      // Scheduling expression for the aggregation task group when the scheduling mode is \\"Cron\\".
      shared_ptr<string> cronExpr_ {};
      // Fixed delay time (in seconds) for scheduling.
      shared_ptr<int32_t> delay_ {};
      // Description of the aggregation task group.
      shared_ptr<string> description_ {};
      // Second-level timestamp corresponding to the start time of scheduling (not yet effective).
      shared_ptr<int64_t> fromTime_ {};
      // Maximum number of retries for executing the aggregation task.
      shared_ptr<int32_t> maxRetries_ {};
      // Maximum retry time for executing the aggregation task.
      shared_ptr<int32_t> maxRunTimeInSeconds_ {};
      // Pre-check configuration.
      shared_ptr<string> precheckString_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Scheduling mode.
      shared_ptr<string> scheduleMode_ {};
      // Scheduling time expression.
      shared_ptr<string> scheduleTimeExpr_ {};
      // ID of the source Prometheus instance for the aggregation task group.
      shared_ptr<string> sourcePrometheusId_ {};
      // Status of the aggregation task group.
      shared_ptr<string> status_ {};
      // Resource group tags
      shared_ptr<vector<AggTaskGroup::Tags>> tags_ {};
      // The target Prometheus instance ID of the aggregation task group.
      shared_ptr<string> targetPrometheusId_ {};
      // The second-level timestamp corresponding to the end time of the scheduling.
      shared_ptr<int64_t> toTime_ {};
      // The update time (timestamp) of the aggregation task group.
      shared_ptr<string> updateTime_ {};
      // The user to whom the aggregation task group belongs.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->aggTaskGroup_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // aggTaskGroup Field Functions 
    bool hasAggTaskGroup() const { return this->aggTaskGroup_ != nullptr;};
    void deleteAggTaskGroup() { this->aggTaskGroup_ = nullptr;};
    inline const GetAggTaskGroupResponseBody::AggTaskGroup & getAggTaskGroup() const { DARABONBA_PTR_GET_CONST(aggTaskGroup_, GetAggTaskGroupResponseBody::AggTaskGroup) };
    inline GetAggTaskGroupResponseBody::AggTaskGroup getAggTaskGroup() { DARABONBA_PTR_GET(aggTaskGroup_, GetAggTaskGroupResponseBody::AggTaskGroup) };
    inline GetAggTaskGroupResponseBody& setAggTaskGroup(const GetAggTaskGroupResponseBody::AggTaskGroup & aggTaskGroup) { DARABONBA_PTR_SET_VALUE(aggTaskGroup_, aggTaskGroup) };
    inline GetAggTaskGroupResponseBody& setAggTaskGroup(GetAggTaskGroupResponseBody::AggTaskGroup && aggTaskGroup) { DARABONBA_PTR_SET_RVALUE(aggTaskGroup_, aggTaskGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggTaskGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAggTaskGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Aggregation task group.
    shared_ptr<GetAggTaskGroupResponseBody::AggTaskGroup> aggTaskGroup_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Whether the request was successful
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
