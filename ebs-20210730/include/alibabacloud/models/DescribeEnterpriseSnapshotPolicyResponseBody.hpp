// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBody() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBody(const DescribeEnterpriseSnapshotPolicyResponseBody &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBody(DescribeEnterpriseSnapshotPolicyResponseBody &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBody() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBody& operator=(const DescribeEnterpriseSnapshotPolicyResponseBody &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBody& operator=(DescribeEnterpriseSnapshotPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
        DARABONBA_PTR_TO_JSON(ManagedForEcs, managedForEcs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RetainRule, retainRule_);
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
        DARABONBA_PTR_TO_JSON(SpecialRetainRules, specialRetainRules_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(StorageRule, storageRule_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TargetCount, targetCount_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
        DARABONBA_PTR_FROM_JSON(ManagedForEcs, managedForEcs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RetainRule, retainRule_);
        DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
        DARABONBA_PTR_FROM_JSON(SpecialRetainRules, specialRetainRules_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(StorageRule, storageRule_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TargetCount, targetCount_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag of the enterprise-level snapshot policy.
        shared_ptr<string> tagKey_ {};
        // The value of the tag of the enterprise-level snapshot policy.
        shared_ptr<string> tagValue_ {};
      };

      class StorageRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageRule& obj) { 
          DARABONBA_PTR_TO_JSON(EnableImmediateAccess, enableImmediateAccess_);
        };
        friend void from_json(const Darabonba::Json& j, StorageRule& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableImmediateAccess, enableImmediateAccess_);
        };
        StorageRule() = default ;
        StorageRule(const StorageRule &) = default ;
        StorageRule(StorageRule &&) = default ;
        StorageRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageRule() = default ;
        StorageRule& operator=(const StorageRule &) = default ;
        StorageRule& operator=(StorageRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableImmediateAccess_ == nullptr; };
        // enableImmediateAccess Field Functions 
        bool hasEnableImmediateAccess() const { return this->enableImmediateAccess_ != nullptr;};
        void deleteEnableImmediateAccess() { this->enableImmediateAccess_ = nullptr;};
        inline bool getEnableImmediateAccess() const { DARABONBA_PTR_GET_DEFAULT(enableImmediateAccess_, false) };
        inline StorageRule& setEnableImmediateAccess(bool enableImmediateAccess) { DARABONBA_PTR_SET_VALUE(enableImmediateAccess_, enableImmediateAccess) };


      protected:
        // Indicates whether the instant access feature is enabled.
        shared_ptr<bool> enableImmediateAccess_ {};
      };

      class SpecialRetainRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpecialRetainRules& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, SpecialRetainRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
        };
        SpecialRetainRules() = default ;
        SpecialRetainRules(const SpecialRetainRules &) = default ;
        SpecialRetainRules(SpecialRetainRules &&) = default ;
        SpecialRetainRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpecialRetainRules() = default ;
        SpecialRetainRules& operator=(const SpecialRetainRules &) = default ;
        SpecialRetainRules& operator=(SpecialRetainRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(SpecialPeriodUnit, specialPeriodUnit_);
            DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
            DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(SpecialPeriodUnit, specialPeriodUnit_);
            DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
            DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->specialPeriodUnit_ == nullptr
        && this->timeInterval_ == nullptr && this->timeUnit_ == nullptr; };
          // specialPeriodUnit Field Functions 
          bool hasSpecialPeriodUnit() const { return this->specialPeriodUnit_ != nullptr;};
          void deleteSpecialPeriodUnit() { this->specialPeriodUnit_ = nullptr;};
          inline string getSpecialPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(specialPeriodUnit_, "") };
          inline Rules& setSpecialPeriodUnit(string specialPeriodUnit) { DARABONBA_PTR_SET_VALUE(specialPeriodUnit_, specialPeriodUnit) };


          // timeInterval Field Functions 
          bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
          void deleteTimeInterval() { this->timeInterval_ = nullptr;};
          inline int32_t getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
          inline Rules& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


          // timeUnit Field Functions 
          bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
          void deleteTimeUnit() { this->timeUnit_ = nullptr;};
          inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
          inline Rules& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


        protected:
          // The unit of the special retention period.
          shared_ptr<string> specialPeriodUnit_ {};
          // The value of the retention period.
          shared_ptr<int32_t> timeInterval_ {};
          // The unit of the retention period.
          shared_ptr<string> timeUnit_ {};
        };

        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->rules_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline SpecialRetainRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<SpecialRetainRules::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<SpecialRetainRules::Rules>) };
        inline vector<SpecialRetainRules::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<SpecialRetainRules::Rules>) };
        inline SpecialRetainRules& setRules(const vector<SpecialRetainRules::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline SpecialRetainRules& setRules(vector<SpecialRetainRules::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        // Indicates whether the special retention period is enabled.
        shared_ptr<bool> enabled_ {};
        // The special retention rules.
        shared_ptr<vector<SpecialRetainRules::Rules>> rules_ {};
      };

      class Schedule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        };
        friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        };
        Schedule() = default ;
        Schedule(const Schedule &) = default ;
        Schedule(Schedule &&) = default ;
        Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schedule() = default ;
        Schedule& operator=(const Schedule &) = default ;
        Schedule& operator=(Schedule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cronExpression_ == nullptr; };
        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline Schedule& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      protected:
        // The cron expression of the enterprise-level snapshot policy.
        shared_ptr<string> cronExpression_ {};
      };

      class RetainRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetainRule& obj) { 
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
          DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
        };
        friend void from_json(const Darabonba::Json& j, RetainRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
          DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
        };
        RetainRule() = default ;
        RetainRule(const RetainRule &) = default ;
        RetainRule(RetainRule &&) = default ;
        RetainRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetainRule() = default ;
        RetainRule& operator=(const RetainRule &) = default ;
        RetainRule& operator=(RetainRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->number_ == nullptr
        && this->timeInterval_ == nullptr && this->timeUnit_ == nullptr; };
        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
        inline RetainRule& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // timeInterval Field Functions 
        bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
        void deleteTimeInterval() { this->timeInterval_ = nullptr;};
        inline int32_t getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
        inline RetainRule& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


        // timeUnit Field Functions 
        bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
        void deleteTimeUnit() { this->timeUnit_ = nullptr;};
        inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
        inline RetainRule& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      protected:
        // The maximum number of snapshots that can be retained.
        shared_ptr<int32_t> number_ {};
        // The value of the retention period of snapshots.
        shared_ptr<int32_t> timeInterval_ {};
        // The unit of the retention period of snapshots.
        shared_ptr<string> timeUnit_ {};
      };

      class CrossRegionCopyInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CrossRegionCopyInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Regions, regions_);
        };
        friend void from_json(const Darabonba::Json& j, CrossRegionCopyInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Regions, regions_);
        };
        CrossRegionCopyInfo() = default ;
        CrossRegionCopyInfo(const CrossRegionCopyInfo &) = default ;
        CrossRegionCopyInfo(CrossRegionCopyInfo &&) = default ;
        CrossRegionCopyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CrossRegionCopyInfo() = default ;
        CrossRegionCopyInfo& operator=(const CrossRegionCopyInfo &) = default ;
        CrossRegionCopyInfo& operator=(CrossRegionCopyInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Regions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Regions& obj) { 
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(RetainDays, retainDays_);
          };
          friend void from_json(const Darabonba::Json& j, Regions& obj) { 
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(RetainDays, retainDays_);
          };
          Regions() = default ;
          Regions(const Regions &) = default ;
          Regions(Regions &&) = default ;
          Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Regions() = default ;
          Regions& operator=(const Regions &) = default ;
          Regions& operator=(Regions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->regionId_ == nullptr
        && this->retainDays_ == nullptr; };
          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline Regions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // retainDays Field Functions 
          bool hasRetainDays() const { return this->retainDays_ != nullptr;};
          void deleteRetainDays() { this->retainDays_ = nullptr;};
          inline int32_t getRetainDays() const { DARABONBA_PTR_GET_DEFAULT(retainDays_, 0) };
          inline Regions& setRetainDays(int32_t retainDays) { DARABONBA_PTR_SET_VALUE(retainDays_, retainDays) };


        protected:
          // The ID of the destination region.
          shared_ptr<string> regionId_ {};
          // The retention period of snapshot copies in the destination region. Unit: day.
          shared_ptr<int32_t> retainDays_ {};
        };

        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->regions_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline CrossRegionCopyInfo& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // regions Field Functions 
        bool hasRegions() const { return this->regions_ != nullptr;};
        void deleteRegions() { this->regions_ = nullptr;};
        inline const vector<CrossRegionCopyInfo::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<CrossRegionCopyInfo::Regions>) };
        inline vector<CrossRegionCopyInfo::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<CrossRegionCopyInfo::Regions>) };
        inline CrossRegionCopyInfo& setRegions(const vector<CrossRegionCopyInfo::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
        inline CrossRegionCopyInfo& setRegions(vector<CrossRegionCopyInfo::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


      protected:
        // Indicates whether the cross-region replication feature is enabled.
        shared_ptr<bool> enabled_ {};
        // The destination regions that store snapshot copies.
        shared_ptr<vector<CrossRegionCopyInfo::Regions>> regions_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->crossRegionCopyInfo_ == nullptr && this->desc_ == nullptr && this->diskIds_ == nullptr && this->managedForEcs_ == nullptr && this->name_ == nullptr
        && this->policyId_ == nullptr && this->resourceGroupId_ == nullptr && this->retainRule_ == nullptr && this->schedule_ == nullptr && this->specialRetainRules_ == nullptr
        && this->state_ == nullptr && this->storageRule_ == nullptr && this->tags_ == nullptr && this->targetCount_ == nullptr && this->targetType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Policies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossRegionCopyInfo Field Functions 
      bool hasCrossRegionCopyInfo() const { return this->crossRegionCopyInfo_ != nullptr;};
      void deleteCrossRegionCopyInfo() { this->crossRegionCopyInfo_ = nullptr;};
      inline const Policies::CrossRegionCopyInfo & getCrossRegionCopyInfo() const { DARABONBA_PTR_GET_CONST(crossRegionCopyInfo_, Policies::CrossRegionCopyInfo) };
      inline Policies::CrossRegionCopyInfo getCrossRegionCopyInfo() { DARABONBA_PTR_GET(crossRegionCopyInfo_, Policies::CrossRegionCopyInfo) };
      inline Policies& setCrossRegionCopyInfo(const Policies::CrossRegionCopyInfo & crossRegionCopyInfo) { DARABONBA_PTR_SET_VALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };
      inline Policies& setCrossRegionCopyInfo(Policies::CrossRegionCopyInfo && crossRegionCopyInfo) { DARABONBA_PTR_SET_RVALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Policies& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // diskIds Field Functions 
      bool hasDiskIds() const { return this->diskIds_ != nullptr;};
      void deleteDiskIds() { this->diskIds_ = nullptr;};
      inline const vector<string> & getDiskIds() const { DARABONBA_PTR_GET_CONST(diskIds_, vector<string>) };
      inline vector<string> getDiskIds() { DARABONBA_PTR_GET(diskIds_, vector<string>) };
      inline Policies& setDiskIds(const vector<string> & diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };
      inline Policies& setDiskIds(vector<string> && diskIds) { DARABONBA_PTR_SET_RVALUE(diskIds_, diskIds) };


      // managedForEcs Field Functions 
      bool hasManagedForEcs() const { return this->managedForEcs_ != nullptr;};
      void deleteManagedForEcs() { this->managedForEcs_ = nullptr;};
      inline bool getManagedForEcs() const { DARABONBA_PTR_GET_DEFAULT(managedForEcs_, false) };
      inline Policies& setManagedForEcs(bool managedForEcs) { DARABONBA_PTR_SET_VALUE(managedForEcs_, managedForEcs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Policies& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // retainRule Field Functions 
      bool hasRetainRule() const { return this->retainRule_ != nullptr;};
      void deleteRetainRule() { this->retainRule_ = nullptr;};
      inline const Policies::RetainRule & getRetainRule() const { DARABONBA_PTR_GET_CONST(retainRule_, Policies::RetainRule) };
      inline Policies::RetainRule getRetainRule() { DARABONBA_PTR_GET(retainRule_, Policies::RetainRule) };
      inline Policies& setRetainRule(const Policies::RetainRule & retainRule) { DARABONBA_PTR_SET_VALUE(retainRule_, retainRule) };
      inline Policies& setRetainRule(Policies::RetainRule && retainRule) { DARABONBA_PTR_SET_RVALUE(retainRule_, retainRule) };


      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline const Policies::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, Policies::Schedule) };
      inline Policies::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, Policies::Schedule) };
      inline Policies& setSchedule(const Policies::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
      inline Policies& setSchedule(Policies::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


      // specialRetainRules Field Functions 
      bool hasSpecialRetainRules() const { return this->specialRetainRules_ != nullptr;};
      void deleteSpecialRetainRules() { this->specialRetainRules_ = nullptr;};
      inline const Policies::SpecialRetainRules & getSpecialRetainRules() const { DARABONBA_PTR_GET_CONST(specialRetainRules_, Policies::SpecialRetainRules) };
      inline Policies::SpecialRetainRules getSpecialRetainRules() { DARABONBA_PTR_GET(specialRetainRules_, Policies::SpecialRetainRules) };
      inline Policies& setSpecialRetainRules(const Policies::SpecialRetainRules & specialRetainRules) { DARABONBA_PTR_SET_VALUE(specialRetainRules_, specialRetainRules) };
      inline Policies& setSpecialRetainRules(Policies::SpecialRetainRules && specialRetainRules) { DARABONBA_PTR_SET_RVALUE(specialRetainRules_, specialRetainRules) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Policies& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // storageRule Field Functions 
      bool hasStorageRule() const { return this->storageRule_ != nullptr;};
      void deleteStorageRule() { this->storageRule_ = nullptr;};
      inline const Policies::StorageRule & getStorageRule() const { DARABONBA_PTR_GET_CONST(storageRule_, Policies::StorageRule) };
      inline Policies::StorageRule getStorageRule() { DARABONBA_PTR_GET(storageRule_, Policies::StorageRule) };
      inline Policies& setStorageRule(const Policies::StorageRule & storageRule) { DARABONBA_PTR_SET_VALUE(storageRule_, storageRule) };
      inline Policies& setStorageRule(Policies::StorageRule && storageRule) { DARABONBA_PTR_SET_RVALUE(storageRule_, storageRule) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Policies::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Policies::Tags>) };
      inline vector<Policies::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Policies::Tags>) };
      inline Policies& setTags(const vector<Policies::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Policies& setTags(vector<Policies::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // targetCount Field Functions 
      bool hasTargetCount() const { return this->targetCount_ != nullptr;};
      void deleteTargetCount() { this->targetCount_ = nullptr;};
      inline int32_t getTargetCount() const { DARABONBA_PTR_GET_DEFAULT(targetCount_, 0) };
      inline Policies& setTargetCount(int32_t targetCount) { DARABONBA_PTR_SET_VALUE(targetCount_, targetCount) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Policies& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The time when the enterprise-level snapshot policy was created.
      shared_ptr<string> createTime_ {};
      // The replication rule of snapshots in the enterprise-level snapshot policy.
      shared_ptr<Policies::CrossRegionCopyInfo> crossRegionCopyInfo_ {};
      // The description of the enterprise-level snapshot policy.
      shared_ptr<string> desc_ {};
      // The disks that are associated with the snapshot policy.
      shared_ptr<vector<string>> diskIds_ {};
      // Indicates whether snapshots are managed.
      shared_ptr<bool> managedForEcs_ {};
      // The name of the enterprise-level snapshot policy.
      shared_ptr<string> name_ {};
      // The ID of the enterprise-level snapshot policy.
      shared_ptr<string> policyId_ {};
      // the resource group
      shared_ptr<string> resourceGroupId_ {};
      // The retention rule of the enterprise-level snapshot policy.
      shared_ptr<Policies::RetainRule> retainRule_ {};
      // The scheduling rule of the enterprise-level snapshot policy.
      shared_ptr<Policies::Schedule> schedule_ {};
      // The special retention rules of the enterprise-level snapshot policy.
      shared_ptr<Policies::SpecialRetainRules> specialRetainRules_ {};
      // The status of the enterprise-level snapshot policy.
      shared_ptr<string> state_ {};
      // The storage rule of snapshots in the enterprise-level snapshot policy.
      shared_ptr<Policies::StorageRule> storageRule_ {};
      // the pair tags
      shared_ptr<vector<Policies::Tags>> tags_ {};
      // The number of objects that are associated with the enterprise-level snapshot policy.
      shared_ptr<int32_t> targetCount_ {};
      // The type of the enterprise-level snapshot policy.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->policies_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnterpriseSnapshotPolicyResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnterpriseSnapshotPolicyResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribeEnterpriseSnapshotPolicyResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribeEnterpriseSnapshotPolicyResponseBody::Policies>) };
    inline vector<DescribeEnterpriseSnapshotPolicyResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<DescribeEnterpriseSnapshotPolicyResponseBody::Policies>) };
    inline DescribeEnterpriseSnapshotPolicyResponseBody& setPolicies(const vector<DescribeEnterpriseSnapshotPolicyResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeEnterpriseSnapshotPolicyResponseBody& setPolicies(vector<DescribeEnterpriseSnapshotPolicyResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeEnterpriseSnapshotPolicyResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The returned snapshot policies.
    shared_ptr<vector<DescribeEnterpriseSnapshotPolicyResponseBody::Policies>> policies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
