// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSRESPONSEBODY_HPP_
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
  class ListAggTaskGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggTaskGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aggTaskGroups, aggTaskGroups_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggTaskGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aggTaskGroups, aggTaskGroups_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListAggTaskGroupsResponseBody() = default ;
    ListAggTaskGroupsResponseBody(const ListAggTaskGroupsResponseBody &) = default ;
    ListAggTaskGroupsResponseBody(ListAggTaskGroupsResponseBody &&) = default ;
    ListAggTaskGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggTaskGroupsResponseBody() = default ;
    ListAggTaskGroupsResponseBody& operator=(const ListAggTaskGroupsResponseBody &) = default ;
    ListAggTaskGroupsResponseBody& operator=(ListAggTaskGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AggTaskGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AggTaskGroups& obj) { 
        DARABONBA_PTR_TO_JSON(aggTaskGroupConfigHash, aggTaskGroupConfigHash_);
        DARABONBA_PTR_TO_JSON(aggTaskGroupId, aggTaskGroupId_);
        DARABONBA_PTR_TO_JSON(aggTaskGroupName, aggTaskGroupName_);
        DARABONBA_PTR_TO_JSON(cronExpr, cronExpr_);
        DARABONBA_PTR_TO_JSON(delay, delay_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
        DARABONBA_PTR_TO_JSON(interval, interval_);
        DARABONBA_PTR_TO_JSON(maxRetries, maxRetries_);
        DARABONBA_PTR_TO_JSON(maxRunTimeInSeconds, maxRunTimeInSeconds_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(scheduleMode, scheduleMode_);
        DARABONBA_PTR_TO_JSON(scheduleTimeExpr, scheduleTimeExpr_);
        DARABONBA_PTR_TO_JSON(sourcePrometheusId, sourcePrometheusId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(targetPrometheusId, targetPrometheusId_);
        DARABONBA_PTR_TO_JSON(toTime, toTime_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AggTaskGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(aggTaskGroupConfigHash, aggTaskGroupConfigHash_);
        DARABONBA_PTR_FROM_JSON(aggTaskGroupId, aggTaskGroupId_);
        DARABONBA_PTR_FROM_JSON(aggTaskGroupName, aggTaskGroupName_);
        DARABONBA_PTR_FROM_JSON(cronExpr, cronExpr_);
        DARABONBA_PTR_FROM_JSON(delay, delay_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
        DARABONBA_PTR_FROM_JSON(interval, interval_);
        DARABONBA_PTR_FROM_JSON(maxRetries, maxRetries_);
        DARABONBA_PTR_FROM_JSON(maxRunTimeInSeconds, maxRunTimeInSeconds_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(scheduleMode, scheduleMode_);
        DARABONBA_PTR_FROM_JSON(scheduleTimeExpr, scheduleTimeExpr_);
        DARABONBA_PTR_FROM_JSON(sourcePrometheusId, sourcePrometheusId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(targetPrometheusId, targetPrometheusId_);
        DARABONBA_PTR_FROM_JSON(toTime, toTime_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      AggTaskGroups() = default ;
      AggTaskGroups(const AggTaskGroups &) = default ;
      AggTaskGroups(AggTaskGroups &&) = default ;
      AggTaskGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AggTaskGroups() = default ;
      AggTaskGroups& operator=(const AggTaskGroups &) = default ;
      AggTaskGroups& operator=(AggTaskGroups &&) = default ;
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
        // Value of the resource group tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aggTaskGroupConfigHash_ == nullptr
        && this->aggTaskGroupId_ == nullptr && this->aggTaskGroupName_ == nullptr && this->cronExpr_ == nullptr && this->delay_ == nullptr && this->description_ == nullptr
        && this->fromTime_ == nullptr && this->interval_ == nullptr && this->maxRetries_ == nullptr && this->maxRunTimeInSeconds_ == nullptr && this->regionId_ == nullptr
        && this->scheduleMode_ == nullptr && this->scheduleTimeExpr_ == nullptr && this->sourcePrometheusId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->targetPrometheusId_ == nullptr && this->toTime_ == nullptr && this->updateTime_ == nullptr; };
      // aggTaskGroupConfigHash Field Functions 
      bool hasAggTaskGroupConfigHash() const { return this->aggTaskGroupConfigHash_ != nullptr;};
      void deleteAggTaskGroupConfigHash() { this->aggTaskGroupConfigHash_ = nullptr;};
      inline string getAggTaskGroupConfigHash() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfigHash_, "") };
      inline AggTaskGroups& setAggTaskGroupConfigHash(string aggTaskGroupConfigHash) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfigHash_, aggTaskGroupConfigHash) };


      // aggTaskGroupId Field Functions 
      bool hasAggTaskGroupId() const { return this->aggTaskGroupId_ != nullptr;};
      void deleteAggTaskGroupId() { this->aggTaskGroupId_ = nullptr;};
      inline string getAggTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupId_, "") };
      inline AggTaskGroups& setAggTaskGroupId(string aggTaskGroupId) { DARABONBA_PTR_SET_VALUE(aggTaskGroupId_, aggTaskGroupId) };


      // aggTaskGroupName Field Functions 
      bool hasAggTaskGroupName() const { return this->aggTaskGroupName_ != nullptr;};
      void deleteAggTaskGroupName() { this->aggTaskGroupName_ = nullptr;};
      inline string getAggTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupName_, "") };
      inline AggTaskGroups& setAggTaskGroupName(string aggTaskGroupName) { DARABONBA_PTR_SET_VALUE(aggTaskGroupName_, aggTaskGroupName) };


      // cronExpr Field Functions 
      bool hasCronExpr() const { return this->cronExpr_ != nullptr;};
      void deleteCronExpr() { this->cronExpr_ = nullptr;};
      inline string getCronExpr() const { DARABONBA_PTR_GET_DEFAULT(cronExpr_, "") };
      inline AggTaskGroups& setCronExpr(string cronExpr) { DARABONBA_PTR_SET_VALUE(cronExpr_, cronExpr) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int32_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
      inline AggTaskGroups& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AggTaskGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fromTime Field Functions 
      bool hasFromTime() const { return this->fromTime_ != nullptr;};
      void deleteFromTime() { this->fromTime_ = nullptr;};
      inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
      inline AggTaskGroups& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
      inline AggTaskGroups& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // maxRetries Field Functions 
      bool hasMaxRetries() const { return this->maxRetries_ != nullptr;};
      void deleteMaxRetries() { this->maxRetries_ = nullptr;};
      inline int32_t getMaxRetries() const { DARABONBA_PTR_GET_DEFAULT(maxRetries_, 0) };
      inline AggTaskGroups& setMaxRetries(int32_t maxRetries) { DARABONBA_PTR_SET_VALUE(maxRetries_, maxRetries) };


      // maxRunTimeInSeconds Field Functions 
      bool hasMaxRunTimeInSeconds() const { return this->maxRunTimeInSeconds_ != nullptr;};
      void deleteMaxRunTimeInSeconds() { this->maxRunTimeInSeconds_ = nullptr;};
      inline int32_t getMaxRunTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunTimeInSeconds_, 0) };
      inline AggTaskGroups& setMaxRunTimeInSeconds(int32_t maxRunTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunTimeInSeconds_, maxRunTimeInSeconds) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AggTaskGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scheduleMode Field Functions 
      bool hasScheduleMode() const { return this->scheduleMode_ != nullptr;};
      void deleteScheduleMode() { this->scheduleMode_ = nullptr;};
      inline string getScheduleMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleMode_, "") };
      inline AggTaskGroups& setScheduleMode(string scheduleMode) { DARABONBA_PTR_SET_VALUE(scheduleMode_, scheduleMode) };


      // scheduleTimeExpr Field Functions 
      bool hasScheduleTimeExpr() const { return this->scheduleTimeExpr_ != nullptr;};
      void deleteScheduleTimeExpr() { this->scheduleTimeExpr_ = nullptr;};
      inline string getScheduleTimeExpr() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimeExpr_, "") };
      inline AggTaskGroups& setScheduleTimeExpr(string scheduleTimeExpr) { DARABONBA_PTR_SET_VALUE(scheduleTimeExpr_, scheduleTimeExpr) };


      // sourcePrometheusId Field Functions 
      bool hasSourcePrometheusId() const { return this->sourcePrometheusId_ != nullptr;};
      void deleteSourcePrometheusId() { this->sourcePrometheusId_ = nullptr;};
      inline string getSourcePrometheusId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrometheusId_, "") };
      inline AggTaskGroups& setSourcePrometheusId(string sourcePrometheusId) { DARABONBA_PTR_SET_VALUE(sourcePrometheusId_, sourcePrometheusId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AggTaskGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AggTaskGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AggTaskGroups::Tags>) };
      inline vector<AggTaskGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AggTaskGroups::Tags>) };
      inline AggTaskGroups& setTags(const vector<AggTaskGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AggTaskGroups& setTags(vector<AggTaskGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // targetPrometheusId Field Functions 
      bool hasTargetPrometheusId() const { return this->targetPrometheusId_ != nullptr;};
      void deleteTargetPrometheusId() { this->targetPrometheusId_ = nullptr;};
      inline string getTargetPrometheusId() const { DARABONBA_PTR_GET_DEFAULT(targetPrometheusId_, "") };
      inline AggTaskGroups& setTargetPrometheusId(string targetPrometheusId) { DARABONBA_PTR_SET_VALUE(targetPrometheusId_, targetPrometheusId) };


      // toTime Field Functions 
      bool hasToTime() const { return this->toTime_ != nullptr;};
      void deleteToTime() { this->toTime_ = nullptr;};
      inline int64_t getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
      inline AggTaskGroups& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AggTaskGroups& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Hash of the aggregation task group configuration.
      shared_ptr<string> aggTaskGroupConfigHash_ {};
      // ID of the aggregation task group.
      shared_ptr<string> aggTaskGroupId_ {};
      // Name of the aggregation task group.
      shared_ptr<string> aggTaskGroupName_ {};
      // Cron expression for the aggregation task group when the scheduling mode is set to \\"Cron\\".
      shared_ptr<string> cronExpr_ {};
      // Fixed delay time (in seconds) for scheduling.
      shared_ptr<int32_t> delay_ {};
      // Description of the aggregation task group.
      shared_ptr<string> description_ {};
      // Start time of the schedule in seconds since epoch.
      shared_ptr<int64_t> fromTime_ {};
      // Scheduling interval.
      shared_ptr<string> interval_ {};
      // Maximum number of retries for the aggregation task.
      shared_ptr<int32_t> maxRetries_ {};
      // Maximum retry time (in seconds) for the aggregation task.
      shared_ptr<int32_t> maxRunTimeInSeconds_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Scheduling mode.
      shared_ptr<string> scheduleMode_ {};
      // Scheduling time expression.
      shared_ptr<string> scheduleTimeExpr_ {};
      // The source Prometheus instance ID of the aggregation task group.
      shared_ptr<string> sourcePrometheusId_ {};
      // Status of the aggregation task group.
      shared_ptr<string> status_ {};
      // Resource group tags
      shared_ptr<vector<AggTaskGroups::Tags>> tags_ {};
      // The target Prometheus instance ID of the aggregation task group.
      shared_ptr<string> targetPrometheusId_ {};
      // The second-level timestamp corresponding to the end time of scheduling.
      shared_ptr<int64_t> toTime_ {};
      // Update time of the aggregation task group.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->aggTaskGroups_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // aggTaskGroups Field Functions 
    bool hasAggTaskGroups() const { return this->aggTaskGroups_ != nullptr;};
    void deleteAggTaskGroups() { this->aggTaskGroups_ = nullptr;};
    inline const vector<ListAggTaskGroupsResponseBody::AggTaskGroups> & getAggTaskGroups() const { DARABONBA_PTR_GET_CONST(aggTaskGroups_, vector<ListAggTaskGroupsResponseBody::AggTaskGroups>) };
    inline vector<ListAggTaskGroupsResponseBody::AggTaskGroups> getAggTaskGroups() { DARABONBA_PTR_GET(aggTaskGroups_, vector<ListAggTaskGroupsResponseBody::AggTaskGroups>) };
    inline ListAggTaskGroupsResponseBody& setAggTaskGroups(const vector<ListAggTaskGroupsResponseBody::AggTaskGroups> & aggTaskGroups) { DARABONBA_PTR_SET_VALUE(aggTaskGroups_, aggTaskGroups) };
    inline ListAggTaskGroupsResponseBody& setAggTaskGroups(vector<ListAggTaskGroupsResponseBody::AggTaskGroups> && aggTaskGroups) { DARABONBA_PTR_SET_RVALUE(aggTaskGroups_, aggTaskGroups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggTaskGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggTaskGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggTaskGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAggTaskGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of aggregation task groups.
    shared_ptr<vector<ListAggTaskGroupsResponseBody::AggTaskGroups>> aggTaskGroups_ {};
    // The maximum number of records returned.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next query.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
