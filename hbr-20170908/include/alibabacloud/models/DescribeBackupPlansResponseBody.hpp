// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlans, backupPlans_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlans, backupPlans_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupPlansResponseBody() = default ;
    DescribeBackupPlansResponseBody(const DescribeBackupPlansResponseBody &) = default ;
    DescribeBackupPlansResponseBody(DescribeBackupPlansResponseBody &&) = default ;
    DescribeBackupPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBody() = default ;
    DescribeBackupPlansResponseBody& operator=(const DescribeBackupPlansResponseBody &) = default ;
    DescribeBackupPlansResponseBody& operator=(DescribeBackupPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupPlans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupPlans& obj) { 
        DARABONBA_PTR_TO_JSON(BackupPlan, backupPlan_);
      };
      friend void from_json(const Darabonba::Json& j, BackupPlans& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupPlan, backupPlan_);
      };
      BackupPlans() = default ;
      BackupPlans(const BackupPlans &) = default ;
      BackupPlans(BackupPlans &&) = default ;
      BackupPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupPlans() = default ;
      BackupPlans& operator=(const BackupPlans &) = default ;
      BackupPlans& operator=(BackupPlans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackupPlan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupPlan& obj) { 
          DARABONBA_PTR_TO_JSON(BackupSourceGroupId, backupSourceGroupId_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(ChangeListPath, changeListPath_);
          DARABONBA_PTR_TO_JSON(ClientId, clientId_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatedByTag, createdByTag_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
          DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
          DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
          DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_TO_JSON(DestDataSourceDetail, destDataSourceDetail_);
          DARABONBA_PTR_TO_JSON(DestDataSourceId, destDataSourceId_);
          DARABONBA_PTR_TO_JSON(DestSourceType, destSourceType_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(Exclude, exclude_);
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(HitTags, hitTags_);
          DARABONBA_PTR_TO_JSON(Include, include_);
          DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
          DARABONBA_PTR_TO_JSON(LatestExecuteJobId, latestExecuteJobId_);
          DARABONBA_PTR_TO_JSON(LatestFinishJobId, latestFinishJobId_);
          DARABONBA_PTR_TO_JSON(Options, options_);
          DARABONBA_PTR_TO_JSON(OtsDetail, otsDetail_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
          DARABONBA_PTR_TO_JSON(PlanId, planId_);
          DARABONBA_PTR_TO_JSON(PlanName, planName_);
          DARABONBA_PTR_TO_JSON(Prefix, prefix_);
          DARABONBA_PTR_TO_JSON(Resources, resources_);
          DARABONBA_PTR_TO_JSON(Retention, retention_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(Schedule, schedule_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
          DARABONBA_PTR_TO_JSON(TrialInfo, trialInfo_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
        };
        friend void from_json(const Darabonba::Json& j, BackupPlan& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupSourceGroupId, backupSourceGroupId_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(ChangeListPath, changeListPath_);
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatedByTag, createdByTag_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
          DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
          DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
          DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_FROM_JSON(DestDataSourceDetail, destDataSourceDetail_);
          DARABONBA_PTR_FROM_JSON(DestDataSourceId, destDataSourceId_);
          DARABONBA_PTR_FROM_JSON(DestSourceType, destSourceType_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(HitTags, hitTags_);
          DARABONBA_PTR_FROM_JSON(Include, include_);
          DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
          DARABONBA_PTR_FROM_JSON(LatestExecuteJobId, latestExecuteJobId_);
          DARABONBA_PTR_FROM_JSON(LatestFinishJobId, latestFinishJobId_);
          DARABONBA_PTR_FROM_JSON(Options, options_);
          DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetail_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
          DARABONBA_PTR_FROM_JSON(PlanId, planId_);
          DARABONBA_PTR_FROM_JSON(PlanName, planName_);
          DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
          DARABONBA_PTR_FROM_JSON(Resources, resources_);
          DARABONBA_PTR_FROM_JSON(Retention, retention_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
          DARABONBA_PTR_FROM_JSON(TrialInfo, trialInfo_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
        };
        BackupPlan() = default ;
        BackupPlan(const BackupPlan &) = default ;
        BackupPlan(BackupPlan &&) = default ;
        BackupPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupPlan() = default ;
        BackupPlan& operator=(const BackupPlan &) = default ;
        BackupPlan& operator=(BackupPlan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TrialInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrialInfo& obj) { 
            DARABONBA_PTR_TO_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
            DARABONBA_PTR_TO_JSON(TrialExpireTime, trialExpireTime_);
            DARABONBA_PTR_TO_JSON(TrialStartTime, trialStartTime_);
            DARABONBA_PTR_TO_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
          };
          friend void from_json(const Darabonba::Json& j, TrialInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
            DARABONBA_PTR_FROM_JSON(TrialExpireTime, trialExpireTime_);
            DARABONBA_PTR_FROM_JSON(TrialStartTime, trialStartTime_);
            DARABONBA_PTR_FROM_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
          };
          TrialInfo() = default ;
          TrialInfo(const TrialInfo &) = default ;
          TrialInfo(TrialInfo &&) = default ;
          TrialInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrialInfo() = default ;
          TrialInfo& operator=(const TrialInfo &) = default ;
          TrialInfo& operator=(TrialInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->keepAfterTrialExpiration_ == nullptr
        && this->trialExpireTime_ == nullptr && this->trialStartTime_ == nullptr && this->trialVaultReleaseTime_ == nullptr; };
          // keepAfterTrialExpiration Field Functions 
          bool hasKeepAfterTrialExpiration() const { return this->keepAfterTrialExpiration_ != nullptr;};
          void deleteKeepAfterTrialExpiration() { this->keepAfterTrialExpiration_ = nullptr;};
          inline bool getKeepAfterTrialExpiration() const { DARABONBA_PTR_GET_DEFAULT(keepAfterTrialExpiration_, false) };
          inline TrialInfo& setKeepAfterTrialExpiration(bool keepAfterTrialExpiration) { DARABONBA_PTR_SET_VALUE(keepAfterTrialExpiration_, keepAfterTrialExpiration) };


          // trialExpireTime Field Functions 
          bool hasTrialExpireTime() const { return this->trialExpireTime_ != nullptr;};
          void deleteTrialExpireTime() { this->trialExpireTime_ = nullptr;};
          inline int64_t getTrialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(trialExpireTime_, 0L) };
          inline TrialInfo& setTrialExpireTime(int64_t trialExpireTime) { DARABONBA_PTR_SET_VALUE(trialExpireTime_, trialExpireTime) };


          // trialStartTime Field Functions 
          bool hasTrialStartTime() const { return this->trialStartTime_ != nullptr;};
          void deleteTrialStartTime() { this->trialStartTime_ = nullptr;};
          inline int64_t getTrialStartTime() const { DARABONBA_PTR_GET_DEFAULT(trialStartTime_, 0L) };
          inline TrialInfo& setTrialStartTime(int64_t trialStartTime) { DARABONBA_PTR_SET_VALUE(trialStartTime_, trialStartTime) };


          // trialVaultReleaseTime Field Functions 
          bool hasTrialVaultReleaseTime() const { return this->trialVaultReleaseTime_ != nullptr;};
          void deleteTrialVaultReleaseTime() { this->trialVaultReleaseTime_ = nullptr;};
          inline int64_t getTrialVaultReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(trialVaultReleaseTime_, 0L) };
          inline TrialInfo& setTrialVaultReleaseTime(int64_t trialVaultReleaseTime) { DARABONBA_PTR_SET_VALUE(trialVaultReleaseTime_, trialVaultReleaseTime) };


        protected:
          shared_ptr<bool> keepAfterTrialExpiration_ {};
          shared_ptr<int64_t> trialExpireTime_ {};
          shared_ptr<int64_t> trialStartTime_ {};
          shared_ptr<int64_t> trialVaultReleaseTime_ {};
        };

        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(Rule, rule_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(Rule, rule_);
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
          class Rule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rule& obj) { 
              DARABONBA_PTR_TO_JSON(BackupType, backupType_);
              DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
              DARABONBA_PTR_TO_JSON(DestinationRetention, destinationRetention_);
              DARABONBA_PTR_TO_JSON(Disabled, disabled_);
              DARABONBA_PTR_TO_JSON(DoCopy, doCopy_);
              DARABONBA_PTR_TO_JSON(Retention, retention_);
              DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
              DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
              DARABONBA_PTR_TO_JSON(Schedule, schedule_);
            };
            friend void from_json(const Darabonba::Json& j, Rule& obj) { 
              DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
              DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
              DARABONBA_PTR_FROM_JSON(DestinationRetention, destinationRetention_);
              DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
              DARABONBA_PTR_FROM_JSON(DoCopy, doCopy_);
              DARABONBA_PTR_FROM_JSON(Retention, retention_);
              DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
              DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
              DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
            };
            Rule() = default ;
            Rule(const Rule &) = default ;
            Rule(Rule &&) = default ;
            Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Rule() = default ;
            Rule& operator=(const Rule &) = default ;
            Rule& operator=(Rule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->backupType_ == nullptr
        && this->destinationRegionId_ == nullptr && this->destinationRetention_ == nullptr && this->disabled_ == nullptr && this->doCopy_ == nullptr && this->retention_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->schedule_ == nullptr; };
            // backupType Field Functions 
            bool hasBackupType() const { return this->backupType_ != nullptr;};
            void deleteBackupType() { this->backupType_ = nullptr;};
            inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
            inline Rule& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


            // destinationRegionId Field Functions 
            bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
            void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
            inline string getDestinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
            inline Rule& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


            // destinationRetention Field Functions 
            bool hasDestinationRetention() const { return this->destinationRetention_ != nullptr;};
            void deleteDestinationRetention() { this->destinationRetention_ = nullptr;};
            inline int64_t getDestinationRetention() const { DARABONBA_PTR_GET_DEFAULT(destinationRetention_, 0L) };
            inline Rule& setDestinationRetention(int64_t destinationRetention) { DARABONBA_PTR_SET_VALUE(destinationRetention_, destinationRetention) };


            // disabled Field Functions 
            bool hasDisabled() const { return this->disabled_ != nullptr;};
            void deleteDisabled() { this->disabled_ = nullptr;};
            inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
            inline Rule& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


            // doCopy Field Functions 
            bool hasDoCopy() const { return this->doCopy_ != nullptr;};
            void deleteDoCopy() { this->doCopy_ = nullptr;};
            inline bool getDoCopy() const { DARABONBA_PTR_GET_DEFAULT(doCopy_, false) };
            inline Rule& setDoCopy(bool doCopy) { DARABONBA_PTR_SET_VALUE(doCopy_, doCopy) };


            // retention Field Functions 
            bool hasRetention() const { return this->retention_ != nullptr;};
            void deleteRetention() { this->retention_ = nullptr;};
            inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
            inline Rule& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


            // ruleId Field Functions 
            bool hasRuleId() const { return this->ruleId_ != nullptr;};
            void deleteRuleId() { this->ruleId_ = nullptr;};
            inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
            inline Rule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


            // ruleName Field Functions 
            bool hasRuleName() const { return this->ruleName_ != nullptr;};
            void deleteRuleName() { this->ruleName_ = nullptr;};
            inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
            inline Rule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


            // schedule Field Functions 
            bool hasSchedule() const { return this->schedule_ != nullptr;};
            void deleteSchedule() { this->schedule_ = nullptr;};
            inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
            inline Rule& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


          protected:
            shared_ptr<string> backupType_ {};
            shared_ptr<string> destinationRegionId_ {};
            shared_ptr<int64_t> destinationRetention_ {};
            shared_ptr<bool> disabled_ {};
            shared_ptr<bool> doCopy_ {};
            shared_ptr<int64_t> retention_ {};
            shared_ptr<string> ruleId_ {};
            shared_ptr<string> ruleName_ {};
            shared_ptr<string> schedule_ {};
          };

          virtual bool empty() const override { return this->rule_ == nullptr; };
          // rule Field Functions 
          bool hasRule() const { return this->rule_ != nullptr;};
          void deleteRule() { this->rule_ = nullptr;};
          inline const vector<Rules::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Rules::Rule>) };
          inline vector<Rules::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<Rules::Rule>) };
          inline Rules& setRule(const vector<Rules::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
          inline Rules& setRule(vector<Rules::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


        protected:
          shared_ptr<vector<Rules::Rule>> rule_ {};
        };

        class Resources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Resources& obj) { 
            DARABONBA_PTR_TO_JSON(Resource, resource_);
          };
          friend void from_json(const Darabonba::Json& j, Resources& obj) { 
            DARABONBA_PTR_FROM_JSON(Resource, resource_);
          };
          Resources() = default ;
          Resources(const Resources &) = default ;
          Resources(Resources &&) = default ;
          Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Resources() = default ;
          Resources& operator=(const Resources &) = default ;
          Resources& operator=(Resources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Resource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Resource& obj) { 
              DARABONBA_PTR_TO_JSON(Extra, extra_);
              DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
            };
            friend void from_json(const Darabonba::Json& j, Resource& obj) { 
              DARABONBA_PTR_FROM_JSON(Extra, extra_);
              DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
            };
            Resource() = default ;
            Resource(const Resource &) = default ;
            Resource(Resource &&) = default ;
            Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Resource() = default ;
            Resource& operator=(const Resource &) = default ;
            Resource& operator=(Resource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->extra_ == nullptr
        && this->resourceId_ == nullptr && this->sourceType_ == nullptr; };
            // extra Field Functions 
            bool hasExtra() const { return this->extra_ != nullptr;};
            void deleteExtra() { this->extra_ = nullptr;};
            inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
            inline Resource& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


            // resourceId Field Functions 
            bool hasResourceId() const { return this->resourceId_ != nullptr;};
            void deleteResourceId() { this->resourceId_ = nullptr;};
            inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
            inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


            // sourceType Field Functions 
            bool hasSourceType() const { return this->sourceType_ != nullptr;};
            void deleteSourceType() { this->sourceType_ = nullptr;};
            inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
            inline Resource& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


          protected:
            shared_ptr<string> extra_ {};
            shared_ptr<string> resourceId_ {};
            shared_ptr<string> sourceType_ {};
          };

          virtual bool empty() const override { return this->resource_ == nullptr; };
          // resource Field Functions 
          bool hasResource() const { return this->resource_ != nullptr;};
          void deleteResource() { this->resource_ = nullptr;};
          inline const vector<Resources::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Resources::Resource>) };
          inline vector<Resources::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Resources::Resource>) };
          inline Resources& setResource(const vector<Resources::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
          inline Resources& setResource(vector<Resources::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


        protected:
          shared_ptr<vector<Resources::Resource>> resource_ {};
        };

        class Paths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Paths& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
          };
          friend void from_json(const Darabonba::Json& j, Paths& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
          };
          Paths() = default ;
          Paths(const Paths &) = default ;
          Paths(Paths &&) = default ;
          Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Paths() = default ;
          Paths& operator=(const Paths &) = default ;
          Paths& operator=(Paths &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
          inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
          inline Paths& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
          inline Paths& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


        protected:
          shared_ptr<vector<string>> path_ {};
        };

        class OtsDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OtsDetail& obj) { 
            DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
          };
          friend void from_json(const Darabonba::Json& j, OtsDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
          };
          OtsDetail() = default ;
          OtsDetail(const OtsDetail &) = default ;
          OtsDetail(OtsDetail &&) = default ;
          OtsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OtsDetail() = default ;
          OtsDetail& operator=(const OtsDetail &) = default ;
          OtsDetail& operator=(OtsDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TableNames : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableNames& obj) { 
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, TableNames& obj) { 
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            TableNames() = default ;
            TableNames(const TableNames &) = default ;
            TableNames(TableNames &&) = default ;
            TableNames(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TableNames() = default ;
            TableNames& operator=(const TableNames &) = default ;
            TableNames& operator=(TableNames &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tableName_ == nullptr; };
            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline const vector<string> & getTableName() const { DARABONBA_PTR_GET_CONST(tableName_, vector<string>) };
            inline vector<string> getTableName() { DARABONBA_PTR_GET(tableName_, vector<string>) };
            inline TableNames& setTableName(const vector<string> & tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };
            inline TableNames& setTableName(vector<string> && tableName) { DARABONBA_PTR_SET_RVALUE(tableName_, tableName) };


          protected:
            shared_ptr<vector<string>> tableName_ {};
          };

          virtual bool empty() const override { return this->tableNames_ == nullptr; };
          // tableNames Field Functions 
          bool hasTableNames() const { return this->tableNames_ != nullptr;};
          void deleteTableNames() { this->tableNames_ = nullptr;};
          inline const OtsDetail::TableNames & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, OtsDetail::TableNames) };
          inline OtsDetail::TableNames getTableNames() { DARABONBA_PTR_GET(tableNames_, OtsDetail::TableNames) };
          inline OtsDetail& setTableNames(const OtsDetail::TableNames & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
          inline OtsDetail& setTableNames(OtsDetail::TableNames && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


        protected:
          shared_ptr<OtsDetail::TableNames> tableNames_ {};
        };

        class HitTags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HitTags& obj) { 
            DARABONBA_PTR_TO_JSON(HitTag, hitTag_);
          };
          friend void from_json(const Darabonba::Json& j, HitTags& obj) { 
            DARABONBA_PTR_FROM_JSON(HitTag, hitTag_);
          };
          HitTags() = default ;
          HitTags(const HitTags &) = default ;
          HitTags(HitTags &&) = default ;
          HitTags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HitTags() = default ;
          HitTags& operator=(const HitTags &) = default ;
          HitTags& operator=(HitTags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class HitTag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HitTag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, HitTag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            HitTag() = default ;
            HitTag(const HitTag &) = default ;
            HitTag(HitTag &&) = default ;
            HitTag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HitTag() = default ;
            HitTag& operator=(const HitTag &) = default ;
            HitTag& operator=(HitTag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline HitTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline HitTag& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline HitTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->hitTag_ == nullptr; };
          // hitTag Field Functions 
          bool hasHitTag() const { return this->hitTag_ != nullptr;};
          void deleteHitTag() { this->hitTag_ = nullptr;};
          inline const vector<HitTags::HitTag> & getHitTag() const { DARABONBA_PTR_GET_CONST(hitTag_, vector<HitTags::HitTag>) };
          inline vector<HitTags::HitTag> getHitTag() { DARABONBA_PTR_GET(hitTag_, vector<HitTags::HitTag>) };
          inline HitTags& setHitTag(const vector<HitTags::HitTag> & hitTag) { DARABONBA_PTR_SET_VALUE(hitTag_, hitTag) };
          inline HitTags& setHitTag(vector<HitTags::HitTag> && hitTag) { DARABONBA_PTR_SET_RVALUE(hitTag_, hitTag) };


        protected:
          shared_ptr<vector<HitTags::HitTag>> hitTag_ {};
        };

        virtual bool empty() const override { return this->backupSourceGroupId_ == nullptr
        && this->backupType_ == nullptr && this->bucket_ == nullptr && this->businessStatus_ == nullptr && this->changeListPath_ == nullptr && this->clientId_ == nullptr
        && this->clusterId_ == nullptr && this->createTime_ == nullptr && this->createdByTag_ == nullptr && this->createdTime_ == nullptr && this->crossAccountRoleName_ == nullptr
        && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->dataSourceId_ == nullptr && this->destDataSourceDetail_ == nullptr && this->destDataSourceId_ == nullptr
        && this->destSourceType_ == nullptr && this->detail_ == nullptr && this->disabled_ == nullptr && this->exclude_ == nullptr && this->fileSystemId_ == nullptr
        && this->hitTags_ == nullptr && this->include_ == nullptr && this->instanceGroupId_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->keepLatestSnapshots_ == nullptr && this->latestExecuteJobId_ == nullptr && this->latestFinishJobId_ == nullptr && this->options_ == nullptr && this->otsDetail_ == nullptr
        && this->paths_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr && this->prefix_ == nullptr && this->resources_ == nullptr
        && this->retention_ == nullptr && this->rules_ == nullptr && this->schedule_ == nullptr && this->sourceType_ == nullptr && this->speedLimit_ == nullptr
        && this->trialInfo_ == nullptr && this->updatedTime_ == nullptr && this->vaultId_ == nullptr; };
        // backupSourceGroupId Field Functions 
        bool hasBackupSourceGroupId() const { return this->backupSourceGroupId_ != nullptr;};
        void deleteBackupSourceGroupId() { this->backupSourceGroupId_ = nullptr;};
        inline string getBackupSourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(backupSourceGroupId_, "") };
        inline BackupPlan& setBackupSourceGroupId(string backupSourceGroupId) { DARABONBA_PTR_SET_VALUE(backupSourceGroupId_, backupSourceGroupId) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline BackupPlan& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline BackupPlan& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline BackupPlan& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // changeListPath Field Functions 
        bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
        void deleteChangeListPath() { this->changeListPath_ = nullptr;};
        inline string getChangeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
        inline BackupPlan& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline BackupPlan& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline BackupPlan& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline BackupPlan& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdByTag Field Functions 
        bool hasCreatedByTag() const { return this->createdByTag_ != nullptr;};
        void deleteCreatedByTag() { this->createdByTag_ = nullptr;};
        inline bool getCreatedByTag() const { DARABONBA_PTR_GET_DEFAULT(createdByTag_, false) };
        inline BackupPlan& setCreatedByTag(bool createdByTag) { DARABONBA_PTR_SET_VALUE(createdByTag_, createdByTag) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline BackupPlan& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // crossAccountRoleName Field Functions 
        bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
        void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
        inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
        inline BackupPlan& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


        // crossAccountType Field Functions 
        bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
        void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
        inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
        inline BackupPlan& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


        // crossAccountUserId Field Functions 
        bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
        void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
        inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
        inline BackupPlan& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


        // dataSourceId Field Functions 
        bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
        void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
        inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
        inline BackupPlan& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


        // destDataSourceDetail Field Functions 
        bool hasDestDataSourceDetail() const { return this->destDataSourceDetail_ != nullptr;};
        void deleteDestDataSourceDetail() { this->destDataSourceDetail_ = nullptr;};
        inline string getDestDataSourceDetail() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceDetail_, "") };
        inline BackupPlan& setDestDataSourceDetail(string destDataSourceDetail) { DARABONBA_PTR_SET_VALUE(destDataSourceDetail_, destDataSourceDetail) };


        // destDataSourceId Field Functions 
        bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
        void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
        inline string getDestDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
        inline BackupPlan& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


        // destSourceType Field Functions 
        bool hasDestSourceType() const { return this->destSourceType_ != nullptr;};
        void deleteDestSourceType() { this->destSourceType_ = nullptr;};
        inline string getDestSourceType() const { DARABONBA_PTR_GET_DEFAULT(destSourceType_, "") };
        inline BackupPlan& setDestSourceType(string destSourceType) { DARABONBA_PTR_SET_VALUE(destSourceType_, destSourceType) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline BackupPlan& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline BackupPlan& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // exclude Field Functions 
        bool hasExclude() const { return this->exclude_ != nullptr;};
        void deleteExclude() { this->exclude_ = nullptr;};
        inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
        inline BackupPlan& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline BackupPlan& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // hitTags Field Functions 
        bool hasHitTags() const { return this->hitTags_ != nullptr;};
        void deleteHitTags() { this->hitTags_ = nullptr;};
        inline const BackupPlan::HitTags & getHitTags() const { DARABONBA_PTR_GET_CONST(hitTags_, BackupPlan::HitTags) };
        inline BackupPlan::HitTags getHitTags() { DARABONBA_PTR_GET(hitTags_, BackupPlan::HitTags) };
        inline BackupPlan& setHitTags(const BackupPlan::HitTags & hitTags) { DARABONBA_PTR_SET_VALUE(hitTags_, hitTags) };
        inline BackupPlan& setHitTags(BackupPlan::HitTags && hitTags) { DARABONBA_PTR_SET_RVALUE(hitTags_, hitTags) };


        // include Field Functions 
        bool hasInclude() const { return this->include_ != nullptr;};
        void deleteInclude() { this->include_ = nullptr;};
        inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
        inline BackupPlan& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


        // instanceGroupId Field Functions 
        bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
        void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
        inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
        inline BackupPlan& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline BackupPlan& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline BackupPlan& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // keepLatestSnapshots Field Functions 
        bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
        void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
        inline int64_t getKeepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
        inline BackupPlan& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


        // latestExecuteJobId Field Functions 
        bool hasLatestExecuteJobId() const { return this->latestExecuteJobId_ != nullptr;};
        void deleteLatestExecuteJobId() { this->latestExecuteJobId_ = nullptr;};
        inline string getLatestExecuteJobId() const { DARABONBA_PTR_GET_DEFAULT(latestExecuteJobId_, "") };
        inline BackupPlan& setLatestExecuteJobId(string latestExecuteJobId) { DARABONBA_PTR_SET_VALUE(latestExecuteJobId_, latestExecuteJobId) };


        // latestFinishJobId Field Functions 
        bool hasLatestFinishJobId() const { return this->latestFinishJobId_ != nullptr;};
        void deleteLatestFinishJobId() { this->latestFinishJobId_ = nullptr;};
        inline string getLatestFinishJobId() const { DARABONBA_PTR_GET_DEFAULT(latestFinishJobId_, "") };
        inline BackupPlan& setLatestFinishJobId(string latestFinishJobId) { DARABONBA_PTR_SET_VALUE(latestFinishJobId_, latestFinishJobId) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
        inline BackupPlan& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


        // otsDetail Field Functions 
        bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
        void deleteOtsDetail() { this->otsDetail_ = nullptr;};
        inline const BackupPlan::OtsDetail & getOtsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, BackupPlan::OtsDetail) };
        inline BackupPlan::OtsDetail getOtsDetail() { DARABONBA_PTR_GET(otsDetail_, BackupPlan::OtsDetail) };
        inline BackupPlan& setOtsDetail(const BackupPlan::OtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
        inline BackupPlan& setOtsDetail(BackupPlan::OtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const BackupPlan::Paths & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, BackupPlan::Paths) };
        inline BackupPlan::Paths getPaths() { DARABONBA_PTR_GET(paths_, BackupPlan::Paths) };
        inline BackupPlan& setPaths(const BackupPlan::Paths & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline BackupPlan& setPaths(BackupPlan::Paths && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // planId Field Functions 
        bool hasPlanId() const { return this->planId_ != nullptr;};
        void deletePlanId() { this->planId_ = nullptr;};
        inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
        inline BackupPlan& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


        // planName Field Functions 
        bool hasPlanName() const { return this->planName_ != nullptr;};
        void deletePlanName() { this->planName_ = nullptr;};
        inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
        inline BackupPlan& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


        // prefix Field Functions 
        bool hasPrefix() const { return this->prefix_ != nullptr;};
        void deletePrefix() { this->prefix_ = nullptr;};
        inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
        inline BackupPlan& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


        // resources Field Functions 
        bool hasResources() const { return this->resources_ != nullptr;};
        void deleteResources() { this->resources_ = nullptr;};
        inline const BackupPlan::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, BackupPlan::Resources) };
        inline BackupPlan::Resources getResources() { DARABONBA_PTR_GET(resources_, BackupPlan::Resources) };
        inline BackupPlan& setResources(const BackupPlan::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
        inline BackupPlan& setResources(BackupPlan::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


        // retention Field Functions 
        bool hasRetention() const { return this->retention_ != nullptr;};
        void deleteRetention() { this->retention_ = nullptr;};
        inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
        inline BackupPlan& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const BackupPlan::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, BackupPlan::Rules) };
        inline BackupPlan::Rules getRules() { DARABONBA_PTR_GET(rules_, BackupPlan::Rules) };
        inline BackupPlan& setRules(const BackupPlan::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline BackupPlan& setRules(BackupPlan::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // schedule Field Functions 
        bool hasSchedule() const { return this->schedule_ != nullptr;};
        void deleteSchedule() { this->schedule_ = nullptr;};
        inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
        inline BackupPlan& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline BackupPlan& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // speedLimit Field Functions 
        bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
        void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
        inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
        inline BackupPlan& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


        // trialInfo Field Functions 
        bool hasTrialInfo() const { return this->trialInfo_ != nullptr;};
        void deleteTrialInfo() { this->trialInfo_ = nullptr;};
        inline const BackupPlan::TrialInfo & getTrialInfo() const { DARABONBA_PTR_GET_CONST(trialInfo_, BackupPlan::TrialInfo) };
        inline BackupPlan::TrialInfo getTrialInfo() { DARABONBA_PTR_GET(trialInfo_, BackupPlan::TrialInfo) };
        inline BackupPlan& setTrialInfo(const BackupPlan::TrialInfo & trialInfo) { DARABONBA_PTR_SET_VALUE(trialInfo_, trialInfo) };
        inline BackupPlan& setTrialInfo(BackupPlan::TrialInfo && trialInfo) { DARABONBA_PTR_SET_RVALUE(trialInfo_, trialInfo) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline BackupPlan& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline BackupPlan& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        shared_ptr<string> backupSourceGroupId_ {};
        shared_ptr<string> backupType_ {};
        shared_ptr<string> bucket_ {};
        shared_ptr<string> businessStatus_ {};
        shared_ptr<string> changeListPath_ {};
        shared_ptr<string> clientId_ {};
        shared_ptr<string> clusterId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<bool> createdByTag_ {};
        shared_ptr<int64_t> createdTime_ {};
        shared_ptr<string> crossAccountRoleName_ {};
        shared_ptr<string> crossAccountType_ {};
        shared_ptr<int64_t> crossAccountUserId_ {};
        shared_ptr<string> dataSourceId_ {};
        shared_ptr<string> destDataSourceDetail_ {};
        shared_ptr<string> destDataSourceId_ {};
        shared_ptr<string> destSourceType_ {};
        shared_ptr<string> detail_ {};
        shared_ptr<bool> disabled_ {};
        shared_ptr<string> exclude_ {};
        shared_ptr<string> fileSystemId_ {};
        shared_ptr<BackupPlan::HitTags> hitTags_ {};
        shared_ptr<string> include_ {};
        shared_ptr<string> instanceGroupId_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<int64_t> keepLatestSnapshots_ {};
        shared_ptr<string> latestExecuteJobId_ {};
        shared_ptr<string> latestFinishJobId_ {};
        shared_ptr<string> options_ {};
        shared_ptr<BackupPlan::OtsDetail> otsDetail_ {};
        shared_ptr<BackupPlan::Paths> paths_ {};
        shared_ptr<string> planId_ {};
        shared_ptr<string> planName_ {};
        shared_ptr<string> prefix_ {};
        shared_ptr<BackupPlan::Resources> resources_ {};
        shared_ptr<int64_t> retention_ {};
        shared_ptr<BackupPlan::Rules> rules_ {};
        shared_ptr<string> schedule_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> speedLimit_ {};
        shared_ptr<BackupPlan::TrialInfo> trialInfo_ {};
        shared_ptr<int64_t> updatedTime_ {};
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->backupPlan_ == nullptr; };
      // backupPlan Field Functions 
      bool hasBackupPlan() const { return this->backupPlan_ != nullptr;};
      void deleteBackupPlan() { this->backupPlan_ = nullptr;};
      inline const vector<BackupPlans::BackupPlan> & getBackupPlan() const { DARABONBA_PTR_GET_CONST(backupPlan_, vector<BackupPlans::BackupPlan>) };
      inline vector<BackupPlans::BackupPlan> getBackupPlan() { DARABONBA_PTR_GET(backupPlan_, vector<BackupPlans::BackupPlan>) };
      inline BackupPlans& setBackupPlan(const vector<BackupPlans::BackupPlan> & backupPlan) { DARABONBA_PTR_SET_VALUE(backupPlan_, backupPlan) };
      inline BackupPlans& setBackupPlan(vector<BackupPlans::BackupPlan> && backupPlan) { DARABONBA_PTR_SET_RVALUE(backupPlan_, backupPlan) };


    protected:
      shared_ptr<vector<BackupPlans::BackupPlan>> backupPlan_ {};
    };

    virtual bool empty() const override { return this->backupPlans_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // backupPlans Field Functions 
    bool hasBackupPlans() const { return this->backupPlans_ != nullptr;};
    void deleteBackupPlans() { this->backupPlans_ = nullptr;};
    inline const DescribeBackupPlansResponseBody::BackupPlans & getBackupPlans() const { DARABONBA_PTR_GET_CONST(backupPlans_, DescribeBackupPlansResponseBody::BackupPlans) };
    inline DescribeBackupPlansResponseBody::BackupPlans getBackupPlans() { DARABONBA_PTR_GET(backupPlans_, DescribeBackupPlansResponseBody::BackupPlans) };
    inline DescribeBackupPlansResponseBody& setBackupPlans(const DescribeBackupPlansResponseBody::BackupPlans & backupPlans) { DARABONBA_PTR_SET_VALUE(backupPlans_, backupPlans) };
    inline DescribeBackupPlansResponseBody& setBackupPlans(DescribeBackupPlansResponseBody::BackupPlans && backupPlans) { DARABONBA_PTR_SET_RVALUE(backupPlans_, backupPlans) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBackupPlansResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupPlansResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupPlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupPlansResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBackupPlansResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeBackupPlansResponseBody::BackupPlans> backupPlans_ {};
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of returned backup plans that meet the specified conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
