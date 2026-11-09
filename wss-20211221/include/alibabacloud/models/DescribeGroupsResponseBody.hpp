// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupsResponseBody() = default ;
    DescribeGroupsResponseBody(const DescribeGroupsResponseBody &) = default ;
    DescribeGroupsResponseBody(DescribeGroupsResponseBody &&) = default ;
    DescribeGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupsResponseBody() = default ;
    DescribeGroupsResponseBody& operator=(const DescribeGroupsResponseBody &) = default ;
    DescribeGroupsResponseBody& operator=(DescribeGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(LastWeekUsedCoreTime, lastWeekUsedCoreTime_);
        DARABONBA_PTR_TO_JSON(LeftCoreTime, leftCoreTime_);
        DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
        DARABONBA_PTR_TO_JSON(TotalTimeDecimal, totalTimeDecimal_);
        DARABONBA_PTR_TO_JSON(UsedCoreTime, usedCoreTime_);
        DARABONBA_PTR_TO_JSON(UsedTimeDecimal, usedTimeDecimal_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(LastWeekUsedCoreTime, lastWeekUsedCoreTime_);
        DARABONBA_PTR_FROM_JSON(LeftCoreTime, leftCoreTime_);
        DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
        DARABONBA_PTR_FROM_JSON(TotalTimeDecimal, totalTimeDecimal_);
        DARABONBA_PTR_FROM_JSON(UsedCoreTime, usedCoreTime_);
        DARABONBA_PTR_FROM_JSON(UsedTimeDecimal, usedTimeDecimal_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(FreeTrial, freeTrial_);
          DARABONBA_PTR_TO_JSON(GroupResourceType, groupResourceType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(PriorityDeduction, priorityDeduction_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
          DARABONBA_PTR_TO_JSON(TotalTimeDecimal, totalTimeDecimal_);
          DARABONBA_PTR_TO_JSON(UsageAlertRule, usageAlertRule_);
          DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
          DARABONBA_PTR_TO_JSON(UsedTimeDecimal, usedTimeDecimal_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(FreeTrial, freeTrial_);
          DARABONBA_PTR_FROM_JSON(GroupResourceType, groupResourceType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(PriorityDeduction, priorityDeduction_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
          DARABONBA_PTR_FROM_JSON(TotalTimeDecimal, totalTimeDecimal_);
          DARABONBA_PTR_FROM_JSON(UsageAlertRule, usageAlertRule_);
          DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
          DARABONBA_PTR_FROM_JSON(UsedTimeDecimal, usedTimeDecimal_);
        };
        Instances() = default ;
        Instances(const Instances &) = default ;
        Instances(Instances &&) = default ;
        Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instances() = default ;
        Instances& operator=(const Instances &) = default ;
        Instances& operator=(Instances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UsageAlertRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UsageAlertRule& obj) { 
            DARABONBA_PTR_TO_JSON(ContactGroupNames, contactGroupNames_);
            DARABONBA_PTR_TO_JSON(LastTriggeredAt, lastTriggeredAt_);
            DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
          };
          friend void from_json(const Darabonba::Json& j, UsageAlertRule& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactGroupNames, contactGroupNames_);
            DARABONBA_PTR_FROM_JSON(LastTriggeredAt, lastTriggeredAt_);
            DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
          };
          UsageAlertRule() = default ;
          UsageAlertRule(const UsageAlertRule &) = default ;
          UsageAlertRule(UsageAlertRule &&) = default ;
          UsageAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UsageAlertRule() = default ;
          UsageAlertRule& operator=(const UsageAlertRule &) = default ;
          UsageAlertRule& operator=(UsageAlertRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contactGroupNames_ == nullptr
        && this->lastTriggeredAt_ == nullptr && this->thresholdPercent_ == nullptr; };
          // contactGroupNames Field Functions 
          bool hasContactGroupNames() const { return this->contactGroupNames_ != nullptr;};
          void deleteContactGroupNames() { this->contactGroupNames_ = nullptr;};
          inline const vector<string> & getContactGroupNames() const { DARABONBA_PTR_GET_CONST(contactGroupNames_, vector<string>) };
          inline vector<string> getContactGroupNames() { DARABONBA_PTR_GET(contactGroupNames_, vector<string>) };
          inline UsageAlertRule& setContactGroupNames(const vector<string> & contactGroupNames) { DARABONBA_PTR_SET_VALUE(contactGroupNames_, contactGroupNames) };
          inline UsageAlertRule& setContactGroupNames(vector<string> && contactGroupNames) { DARABONBA_PTR_SET_RVALUE(contactGroupNames_, contactGroupNames) };


          // lastTriggeredAt Field Functions 
          bool hasLastTriggeredAt() const { return this->lastTriggeredAt_ != nullptr;};
          void deleteLastTriggeredAt() { this->lastTriggeredAt_ = nullptr;};
          inline string getLastTriggeredAt() const { DARABONBA_PTR_GET_DEFAULT(lastTriggeredAt_, "") };
          inline UsageAlertRule& setLastTriggeredAt(string lastTriggeredAt) { DARABONBA_PTR_SET_VALUE(lastTriggeredAt_, lastTriggeredAt) };


          // thresholdPercent Field Functions 
          bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
          void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
          inline int32_t getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0) };
          inline UsageAlertRule& setThresholdPercent(int32_t thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


        protected:
          // The list of contact group names.
          shared_ptr<vector<string>> contactGroupNames_ {};
          // The last trigger time.
          shared_ptr<string> lastTriggeredAt_ {};
          // The percentage of the quota alert threshold.
          shared_ptr<int32_t> thresholdPercent_ {};
        };

        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->expiredTime_ == nullptr && this->freeTrial_ == nullptr && this->groupResourceType_ == nullptr && this->instanceId_ == nullptr && this->period_ == nullptr
        && this->periodEndTime_ == nullptr && this->periodStartTime_ == nullptr && this->periodUnit_ == nullptr && this->priorityDeduction_ == nullptr && this->resourceType_ == nullptr
        && this->startTime_ == nullptr && this->state_ == nullptr && this->totalTime_ == nullptr && this->totalTimeDecimal_ == nullptr && this->usageAlertRule_ == nullptr
        && this->usedTime_ == nullptr && this->usedTimeDecimal_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline Instances& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline Instances& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // freeTrial Field Functions 
        bool hasFreeTrial() const { return this->freeTrial_ != nullptr;};
        void deleteFreeTrial() { this->freeTrial_ = nullptr;};
        inline bool getFreeTrial() const { DARABONBA_PTR_GET_DEFAULT(freeTrial_, false) };
        inline Instances& setFreeTrial(bool freeTrial) { DARABONBA_PTR_SET_VALUE(freeTrial_, freeTrial) };


        // groupResourceType Field Functions 
        bool hasGroupResourceType() const { return this->groupResourceType_ != nullptr;};
        void deleteGroupResourceType() { this->groupResourceType_ = nullptr;};
        inline string getGroupResourceType() const { DARABONBA_PTR_GET_DEFAULT(groupResourceType_, "") };
        inline Instances& setGroupResourceType(string groupResourceType) { DARABONBA_PTR_SET_VALUE(groupResourceType_, groupResourceType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
        inline Instances& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // periodEndTime Field Functions 
        bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
        void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
        inline string getPeriodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
        inline Instances& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


        // periodStartTime Field Functions 
        bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
        void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
        inline string getPeriodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
        inline Instances& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline Instances& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // priorityDeduction Field Functions 
        bool hasPriorityDeduction() const { return this->priorityDeduction_ != nullptr;};
        void deletePriorityDeduction() { this->priorityDeduction_ = nullptr;};
        inline bool getPriorityDeduction() const { DARABONBA_PTR_GET_DEFAULT(priorityDeduction_, false) };
        inline Instances& setPriorityDeduction(bool priorityDeduction) { DARABONBA_PTR_SET_VALUE(priorityDeduction_, priorityDeduction) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Instances& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Instances& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Instances& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // totalTime Field Functions 
        bool hasTotalTime() const { return this->totalTime_ != nullptr;};
        void deleteTotalTime() { this->totalTime_ = nullptr;};
        inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
        inline Instances& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


        // totalTimeDecimal Field Functions 
        bool hasTotalTimeDecimal() const { return this->totalTimeDecimal_ != nullptr;};
        void deleteTotalTimeDecimal() { this->totalTimeDecimal_ = nullptr;};
        inline string getTotalTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(totalTimeDecimal_, "") };
        inline Instances& setTotalTimeDecimal(string totalTimeDecimal) { DARABONBA_PTR_SET_VALUE(totalTimeDecimal_, totalTimeDecimal) };


        // usageAlertRule Field Functions 
        bool hasUsageAlertRule() const { return this->usageAlertRule_ != nullptr;};
        void deleteUsageAlertRule() { this->usageAlertRule_ = nullptr;};
        inline const Instances::UsageAlertRule & getUsageAlertRule() const { DARABONBA_PTR_GET_CONST(usageAlertRule_, Instances::UsageAlertRule) };
        inline Instances::UsageAlertRule getUsageAlertRule() { DARABONBA_PTR_GET(usageAlertRule_, Instances::UsageAlertRule) };
        inline Instances& setUsageAlertRule(const Instances::UsageAlertRule & usageAlertRule) { DARABONBA_PTR_SET_VALUE(usageAlertRule_, usageAlertRule) };
        inline Instances& setUsageAlertRule(Instances::UsageAlertRule && usageAlertRule) { DARABONBA_PTR_SET_RVALUE(usageAlertRule_, usageAlertRule) };


        // usedTime Field Functions 
        bool hasUsedTime() const { return this->usedTime_ != nullptr;};
        void deleteUsedTime() { this->usedTime_ = nullptr;};
        inline int64_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
        inline Instances& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


        // usedTimeDecimal Field Functions 
        bool hasUsedTimeDecimal() const { return this->usedTimeDecimal_ != nullptr;};
        void deleteUsedTimeDecimal() { this->usedTimeDecimal_ = nullptr;};
        inline string getUsedTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(usedTimeDecimal_, "") };
        inline Instances& setUsedTimeDecimal(string usedTimeDecimal) { DARABONBA_PTR_SET_VALUE(usedTimeDecimal_, usedTimeDecimal) };


      protected:
        // The Alibaba Cloud user ID.
        shared_ptr<int64_t> aliUid_ {};
        // The expiration time. The time is in ISO 8601 format and the UTC time zone.
        shared_ptr<string> expiredTime_ {};
        // Specifies whether the instance is on a free trial.
        shared_ptr<bool> freeTrial_ {};
        // The group resource type.
        shared_ptr<string> groupResourceType_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The purchase period.
        shared_ptr<int32_t> period_ {};
        // The end time of the current period. The time is in the YYYY-MM-DD HH:mm:ss format.
        shared_ptr<string> periodEndTime_ {};
        // The start time of the current period. The time is in the YYYY-MM-DD HH:mm:ss format.
        shared_ptr<string> periodStartTime_ {};
        // The period unit.
        shared_ptr<string> periodUnit_ {};
        // Specifies whether priority deduction is enabled.
        shared_ptr<bool> priorityDeduction_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The start time. The time is in ISO 8601 format and the UTC time zone.
        shared_ptr<string> startTime_ {};
        // The state.
        shared_ptr<string> state_ {};
        // The total duration.
        shared_ptr<int64_t> totalTime_ {};
        // The total duration with a precision factor.
        shared_ptr<string> totalTimeDecimal_ {};
        // The usage Threshold Alerting rule.
        shared_ptr<Instances::UsageAlertRule> usageAlertRule_ {};
        // The usage duration.
        shared_ptr<int64_t> usedTime_ {};
        // The usage duration with a precision factor.
        shared_ptr<string> usedTimeDecimal_ {};
      };

      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceCount_ == nullptr && this->instances_ == nullptr && this->lastWeekUsedCoreTime_ == nullptr && this->leftCoreTime_ == nullptr && this->resourceIds_ == nullptr
        && this->totalTimeDecimal_ == nullptr && this->usedCoreTime_ == nullptr && this->usedTimeDecimal_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Groups& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Groups::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Groups::Instances>) };
      inline vector<Groups::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Groups::Instances>) };
      inline Groups& setInstances(const vector<Groups::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Groups& setInstances(vector<Groups::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // lastWeekUsedCoreTime Field Functions 
      bool hasLastWeekUsedCoreTime() const { return this->lastWeekUsedCoreTime_ != nullptr;};
      void deleteLastWeekUsedCoreTime() { this->lastWeekUsedCoreTime_ = nullptr;};
      inline float getLastWeekUsedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(lastWeekUsedCoreTime_, 0.0) };
      inline Groups& setLastWeekUsedCoreTime(float lastWeekUsedCoreTime) { DARABONBA_PTR_SET_VALUE(lastWeekUsedCoreTime_, lastWeekUsedCoreTime) };


      // leftCoreTime Field Functions 
      bool hasLeftCoreTime() const { return this->leftCoreTime_ != nullptr;};
      void deleteLeftCoreTime() { this->leftCoreTime_ = nullptr;};
      inline float getLeftCoreTime() const { DARABONBA_PTR_GET_DEFAULT(leftCoreTime_, 0.0) };
      inline Groups& setLeftCoreTime(float leftCoreTime) { DARABONBA_PTR_SET_VALUE(leftCoreTime_, leftCoreTime) };


      // resourceIds Field Functions 
      bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
      void deleteResourceIds() { this->resourceIds_ = nullptr;};
      inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
      inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
      inline Groups& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
      inline Groups& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


      // totalTimeDecimal Field Functions 
      bool hasTotalTimeDecimal() const { return this->totalTimeDecimal_ != nullptr;};
      void deleteTotalTimeDecimal() { this->totalTimeDecimal_ = nullptr;};
      inline string getTotalTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(totalTimeDecimal_, "") };
      inline Groups& setTotalTimeDecimal(string totalTimeDecimal) { DARABONBA_PTR_SET_VALUE(totalTimeDecimal_, totalTimeDecimal) };


      // usedCoreTime Field Functions 
      bool hasUsedCoreTime() const { return this->usedCoreTime_ != nullptr;};
      void deleteUsedCoreTime() { this->usedCoreTime_ = nullptr;};
      inline float getUsedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(usedCoreTime_, 0.0) };
      inline Groups& setUsedCoreTime(float usedCoreTime) { DARABONBA_PTR_SET_VALUE(usedCoreTime_, usedCoreTime) };


      // usedTimeDecimal Field Functions 
      bool hasUsedTimeDecimal() const { return this->usedTimeDecimal_ != nullptr;};
      void deleteUsedTimeDecimal() { this->usedTimeDecimal_ = nullptr;};
      inline string getUsedTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(usedTimeDecimal_, "") };
      inline Groups& setUsedTimeDecimal(string usedTimeDecimal) { DARABONBA_PTR_SET_VALUE(usedTimeDecimal_, usedTimeDecimal) };


    protected:
      // The group ID.
      shared_ptr<string> groupId_ {};
      // The number of instances.
      shared_ptr<int32_t> instanceCount_ {};
      // The list of instance information.
      shared_ptr<vector<Groups::Instances>> instances_ {};
      // The core-hour usage in the last week.
      shared_ptr<float> lastWeekUsedCoreTime_ {};
      // The remaining core-hours.
      shared_ptr<float> leftCoreTime_ {};
      // The list of resource IDs.
      shared_ptr<vector<string>> resourceIds_ {};
      // The total duration with a precision factor.
      shared_ptr<string> totalTimeDecimal_ {};
      // The used core-hours.
      shared_ptr<float> usedCoreTime_ {};
      // The usage duration with a precision factor.
      shared_ptr<string> usedTimeDecimal_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeGroupsResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeGroupsResponseBody::Groups>) };
    inline vector<DescribeGroupsResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribeGroupsResponseBody::Groups>) };
    inline DescribeGroupsResponseBody& setGroups(const vector<DescribeGroupsResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeGroupsResponseBody& setGroups(vector<DescribeGroupsResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of groups.
    shared_ptr<vector<DescribeGroupsResponseBody::Groups>> groups_ {};
    // The pagination token. Leave this parameter empty for the first request. For subsequent requests, use the `nextToken` value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
