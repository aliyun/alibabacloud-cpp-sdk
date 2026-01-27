// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
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
  class UpdateEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageRule, storageRule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageRule, storageRule_);
    };
    UpdateEnterpriseSnapshotPolicyRequest() = default ;
    UpdateEnterpriseSnapshotPolicyRequest(const UpdateEnterpriseSnapshotPolicyRequest &) = default ;
    UpdateEnterpriseSnapshotPolicyRequest(UpdateEnterpriseSnapshotPolicyRequest &&) = default ;
    UpdateEnterpriseSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnterpriseSnapshotPolicyRequest() = default ;
    UpdateEnterpriseSnapshotPolicyRequest& operator=(const UpdateEnterpriseSnapshotPolicyRequest &) = default ;
    UpdateEnterpriseSnapshotPolicyRequest& operator=(UpdateEnterpriseSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // Whether to enable the rapid availability of snapshots. The range of values:
      // 
      // - true
      // 
      // - false
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
        // The periodic unit for specially retained snapshots. If configured to WEEKS, it provides special retention for the first snapshot of each week. The retention period is determined by TimeUnit and TimeInterval. The range of values are:
        // - WEEKS
        // - MONTHS
        // - YEARS"
        shared_ptr<string> specialPeriodUnit_ {};
        // Retention Time Value. The range of values is greater than 1.
        shared_ptr<int32_t> timeInterval_ {};
        // Retention time unit for special snapshots. The range of values:
        // 
        // - DAYS
        // 
        // - WEEKS
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
      // Indicates whether the special retention is enabled.
      // 
      // *   true: enable
      // *   false: disable
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
      // The time when the policy will to be scheduled. Valid values: Set the parameter in a cron expression.
      // 
      // For example, you can use `0 0 4 1/1 * ?` to specify 04:00:00 (UTC+8) on the first day of each month.
      // 
      // This parameter is required.
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
      // Maximum number of retained snapshots.
      shared_ptr<int32_t> number_ {};
      // The time interval , valid value greater than 1.
      shared_ptr<int32_t> timeInterval_ {};
      // The unit of time, valid values:
      // 
      // - DAYS
      // - WEEKS
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
        // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which async replication is supported.
        shared_ptr<string> regionId_ {};
        // Number of days to retain the destination snapshot. The range of values is greater than 1.
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
      // Whether cross-region replication is enabled. The range of values:
      // 
      // - true
      // 
      // - false
      shared_ptr<bool> enabled_ {};
      // Destination region information.
      shared_ptr<vector<CrossRegionCopyInfo::Regions>> regions_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->crossRegionCopyInfo_ == nullptr && this->desc_ == nullptr && this->name_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr
        && this->retainRule_ == nullptr && this->schedule_ == nullptr && this->specialRetainRules_ == nullptr && this->state_ == nullptr && this->storageRule_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossRegionCopyInfo Field Functions 
    bool hasCrossRegionCopyInfo() const { return this->crossRegionCopyInfo_ != nullptr;};
    void deleteCrossRegionCopyInfo() { this->crossRegionCopyInfo_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequest::CrossRegionCopyInfo & getCrossRegionCopyInfo() const { DARABONBA_PTR_GET_CONST(crossRegionCopyInfo_, UpdateEnterpriseSnapshotPolicyRequest::CrossRegionCopyInfo) };
    inline UpdateEnterpriseSnapshotPolicyRequest::CrossRegionCopyInfo getCrossRegionCopyInfo() { DARABONBA_PTR_GET(crossRegionCopyInfo_, UpdateEnterpriseSnapshotPolicyRequest::CrossRegionCopyInfo) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setCrossRegionCopyInfo(const UpdateEnterpriseSnapshotPolicyRequest::CrossRegionCopyInfo & crossRegionCopyInfo) { DARABONBA_PTR_SET_VALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setCrossRegionCopyInfo(UpdateEnterpriseSnapshotPolicyRequest::CrossRegionCopyInfo && crossRegionCopyInfo) { DARABONBA_PTR_SET_RVALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainRule Field Functions 
    bool hasRetainRule() const { return this->retainRule_ != nullptr;};
    void deleteRetainRule() { this->retainRule_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequest::RetainRule & getRetainRule() const { DARABONBA_PTR_GET_CONST(retainRule_, UpdateEnterpriseSnapshotPolicyRequest::RetainRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest::RetainRule getRetainRule() { DARABONBA_PTR_GET(retainRule_, UpdateEnterpriseSnapshotPolicyRequest::RetainRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setRetainRule(const UpdateEnterpriseSnapshotPolicyRequest::RetainRule & retainRule) { DARABONBA_PTR_SET_VALUE(retainRule_, retainRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setRetainRule(UpdateEnterpriseSnapshotPolicyRequest::RetainRule && retainRule) { DARABONBA_PTR_SET_RVALUE(retainRule_, retainRule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequest::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, UpdateEnterpriseSnapshotPolicyRequest::Schedule) };
    inline UpdateEnterpriseSnapshotPolicyRequest::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, UpdateEnterpriseSnapshotPolicyRequest::Schedule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSchedule(const UpdateEnterpriseSnapshotPolicyRequest::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSchedule(UpdateEnterpriseSnapshotPolicyRequest::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // specialRetainRules Field Functions 
    bool hasSpecialRetainRules() const { return this->specialRetainRules_ != nullptr;};
    void deleteSpecialRetainRules() { this->specialRetainRules_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequest::SpecialRetainRules & getSpecialRetainRules() const { DARABONBA_PTR_GET_CONST(specialRetainRules_, UpdateEnterpriseSnapshotPolicyRequest::SpecialRetainRules) };
    inline UpdateEnterpriseSnapshotPolicyRequest::SpecialRetainRules getSpecialRetainRules() { DARABONBA_PTR_GET(specialRetainRules_, UpdateEnterpriseSnapshotPolicyRequest::SpecialRetainRules) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSpecialRetainRules(const UpdateEnterpriseSnapshotPolicyRequest::SpecialRetainRules & specialRetainRules) { DARABONBA_PTR_SET_VALUE(specialRetainRules_, specialRetainRules) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSpecialRetainRules(UpdateEnterpriseSnapshotPolicyRequest::SpecialRetainRules && specialRetainRules) { DARABONBA_PTR_SET_RVALUE(specialRetainRules_, specialRetainRules) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageRule Field Functions 
    bool hasStorageRule() const { return this->storageRule_ != nullptr;};
    void deleteStorageRule() { this->storageRule_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequest::StorageRule & getStorageRule() const { DARABONBA_PTR_GET_CONST(storageRule_, UpdateEnterpriseSnapshotPolicyRequest::StorageRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest::StorageRule getStorageRule() { DARABONBA_PTR_GET(storageRule_, UpdateEnterpriseSnapshotPolicyRequest::StorageRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setStorageRule(const UpdateEnterpriseSnapshotPolicyRequest::StorageRule & storageRule) { DARABONBA_PTR_SET_VALUE(storageRule_, storageRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setStorageRule(UpdateEnterpriseSnapshotPolicyRequest::StorageRule && storageRule) { DARABONBA_PTR_SET_RVALUE(storageRule_, storageRule) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Snapshot replication destination information.
    shared_ptr<UpdateEnterpriseSnapshotPolicyRequest::CrossRegionCopyInfo> crossRegionCopyInfo_ {};
    // The description of the policy.
    shared_ptr<string> desc_ {};
    // The name of the policy.
    shared_ptr<string> name_ {};
    // The id of the policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The region ID . You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which snapshot policy is supported.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Snapshot retention rule.
    shared_ptr<UpdateEnterpriseSnapshotPolicyRequest::RetainRule> retainRule_ {};
    // The rule for scheduling.
    shared_ptr<UpdateEnterpriseSnapshotPolicyRequest::Schedule> schedule_ {};
    // The special snapshot retention rules.
    shared_ptr<UpdateEnterpriseSnapshotPolicyRequest::SpecialRetainRules> specialRetainRules_ {};
    // The status of the policy. Valid values:
    // 
    // *   **ENABLED**: Enable snapshot policy execution.
    // *   **DISABLED**: Disable snapshot policy execution.
    shared_ptr<string> state_ {};
    // Advanced snapshot features.
    shared_ptr<UpdateEnterpriseSnapshotPolicyRequest::StorageRule> storageRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
