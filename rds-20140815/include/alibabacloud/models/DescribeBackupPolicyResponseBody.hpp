// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedBackupPolicyEnabled, advancedBackupPolicyEnabled_);
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_TO_JSON(AdvancedLogPolicies, advancedLogPolicies_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CompressType, compressType_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_TO_JSON(EnablePitrProtection, enablePitrProtection_);
      DARABONBA_PTR_TO_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_TO_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_TO_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PitrRetentionPeriod, pitrRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_TO_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportModifyBackupPriority, supportModifyBackupPriority_);
      DARABONBA_PTR_TO_JSON(SupportReleasedKeep, supportReleasedKeep_);
      DARABONBA_PTR_TO_JSON(SupportVolumeShadowCopy, supportVolumeShadowCopy_);
      DARABONBA_PTR_TO_JSON(SupportsHighFrequencyBackup, supportsHighFrequencyBackup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedBackupPolicyEnabled, advancedBackupPolicyEnabled_);
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvancedLogPolicies, advancedLogPolicies_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CompressType, compressType_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_FROM_JSON(EnablePitrProtection, enablePitrProtection_);
      DARABONBA_PTR_FROM_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_FROM_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_FROM_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PitrRetentionPeriod, pitrRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_FROM_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportModifyBackupPriority, supportModifyBackupPriority_);
      DARABONBA_PTR_FROM_JSON(SupportReleasedKeep, supportReleasedKeep_);
      DARABONBA_PTR_FROM_JSON(SupportVolumeShadowCopy, supportVolumeShadowCopy_);
      DARABONBA_PTR_FROM_JSON(SupportsHighFrequencyBackup, supportsHighFrequencyBackup_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedLogPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedLogPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedLogPolicy, advancedLogPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedLogPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedLogPolicy, advancedLogPolicy_);
      };
      AdvancedLogPolicies() = default ;
      AdvancedLogPolicies(const AdvancedLogPolicies &) = default ;
      AdvancedLogPolicies(AdvancedLogPolicies &&) = default ;
      AdvancedLogPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedLogPolicies() = default ;
      AdvancedLogPolicies& operator=(const AdvancedLogPolicies &) = default ;
      AdvancedLogPolicies& operator=(AdvancedLogPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdvancedLogPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvancedLogPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(ActionType, actionType_);
          DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_TO_JSON(DestType, destType_);
          DARABONBA_PTR_TO_JSON(EnableLogBackup, enableLogBackup_);
          DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
          DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
          DARABONBA_PTR_TO_JSON(LogRetentionType, logRetentionType_);
          DARABONBA_PTR_TO_JSON(LogRetentionValue, logRetentionValue_);
          DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_TO_JSON(SrcType, srcType_);
          DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        };
        friend void from_json(const Darabonba::Json& j, AdvancedLogPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
          DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_FROM_JSON(DestType, destType_);
          DARABONBA_PTR_FROM_JSON(EnableLogBackup, enableLogBackup_);
          DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
          DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
          DARABONBA_PTR_FROM_JSON(LogRetentionType, logRetentionType_);
          DARABONBA_PTR_FROM_JSON(LogRetentionValue, logRetentionValue_);
          DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
          DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        };
        AdvancedLogPolicy() = default ;
        AdvancedLogPolicy(const AdvancedLogPolicy &) = default ;
        AdvancedLogPolicy(AdvancedLogPolicy &&) = default ;
        AdvancedLogPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvancedLogPolicy() = default ;
        AdvancedLogPolicy& operator=(const AdvancedLogPolicy &) = default ;
        AdvancedLogPolicy& operator=(AdvancedLogPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionType_ == nullptr
        && this->destRegion_ == nullptr && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->filterKey_ == nullptr && this->filterValue_ == nullptr
        && this->logRetentionType_ == nullptr && this->logRetentionValue_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr && this->strategyId_ == nullptr; };
        // actionType Field Functions 
        bool hasActionType() const { return this->actionType_ != nullptr;};
        void deleteActionType() { this->actionType_ = nullptr;};
        inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
        inline AdvancedLogPolicy& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


        // destRegion Field Functions 
        bool hasDestRegion() const { return this->destRegion_ != nullptr;};
        void deleteDestRegion() { this->destRegion_ = nullptr;};
        inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
        inline AdvancedLogPolicy& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


        // destType Field Functions 
        bool hasDestType() const { return this->destType_ != nullptr;};
        void deleteDestType() { this->destType_ = nullptr;};
        inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
        inline AdvancedLogPolicy& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


        // enableLogBackup Field Functions 
        bool hasEnableLogBackup() const { return this->enableLogBackup_ != nullptr;};
        void deleteEnableLogBackup() { this->enableLogBackup_ = nullptr;};
        inline int32_t getEnableLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableLogBackup_, 0) };
        inline AdvancedLogPolicy& setEnableLogBackup(int32_t enableLogBackup) { DARABONBA_PTR_SET_VALUE(enableLogBackup_, enableLogBackup) };


        // filterKey Field Functions 
        bool hasFilterKey() const { return this->filterKey_ != nullptr;};
        void deleteFilterKey() { this->filterKey_ = nullptr;};
        inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
        inline AdvancedLogPolicy& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


        // filterValue Field Functions 
        bool hasFilterValue() const { return this->filterValue_ != nullptr;};
        void deleteFilterValue() { this->filterValue_ = nullptr;};
        inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
        inline AdvancedLogPolicy& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


        // logRetentionType Field Functions 
        bool hasLogRetentionType() const { return this->logRetentionType_ != nullptr;};
        void deleteLogRetentionType() { this->logRetentionType_ = nullptr;};
        inline string getLogRetentionType() const { DARABONBA_PTR_GET_DEFAULT(logRetentionType_, "") };
        inline AdvancedLogPolicy& setLogRetentionType(string logRetentionType) { DARABONBA_PTR_SET_VALUE(logRetentionType_, logRetentionType) };


        // logRetentionValue Field Functions 
        bool hasLogRetentionValue() const { return this->logRetentionValue_ != nullptr;};
        void deleteLogRetentionValue() { this->logRetentionValue_ = nullptr;};
        inline int32_t getLogRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(logRetentionValue_, 0) };
        inline AdvancedLogPolicy& setLogRetentionValue(int32_t logRetentionValue) { DARABONBA_PTR_SET_VALUE(logRetentionValue_, logRetentionValue) };


        // srcRegion Field Functions 
        bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
        void deleteSrcRegion() { this->srcRegion_ = nullptr;};
        inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
        inline AdvancedLogPolicy& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


        // srcType Field Functions 
        bool hasSrcType() const { return this->srcType_ != nullptr;};
        void deleteSrcType() { this->srcType_ = nullptr;};
        inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
        inline AdvancedLogPolicy& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


        // strategyId Field Functions 
        bool hasStrategyId() const { return this->strategyId_ != nullptr;};
        void deleteStrategyId() { this->strategyId_ = nullptr;};
        inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
        inline AdvancedLogPolicy& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      protected:
        shared_ptr<string> actionType_ {};
        shared_ptr<string> destRegion_ {};
        shared_ptr<string> destType_ {};
        shared_ptr<int32_t> enableLogBackup_ {};
        shared_ptr<string> filterKey_ {};
        shared_ptr<string> filterValue_ {};
        shared_ptr<string> logRetentionType_ {};
        shared_ptr<int32_t> logRetentionValue_ {};
        shared_ptr<string> srcRegion_ {};
        shared_ptr<string> srcType_ {};
        shared_ptr<string> strategyId_ {};
      };

      virtual bool empty() const override { return this->advancedLogPolicy_ == nullptr; };
      // advancedLogPolicy Field Functions 
      bool hasAdvancedLogPolicy() const { return this->advancedLogPolicy_ != nullptr;};
      void deleteAdvancedLogPolicy() { this->advancedLogPolicy_ = nullptr;};
      inline const vector<AdvancedLogPolicies::AdvancedLogPolicy> & getAdvancedLogPolicy() const { DARABONBA_PTR_GET_CONST(advancedLogPolicy_, vector<AdvancedLogPolicies::AdvancedLogPolicy>) };
      inline vector<AdvancedLogPolicies::AdvancedLogPolicy> getAdvancedLogPolicy() { DARABONBA_PTR_GET(advancedLogPolicy_, vector<AdvancedLogPolicies::AdvancedLogPolicy>) };
      inline AdvancedLogPolicies& setAdvancedLogPolicy(const vector<AdvancedLogPolicies::AdvancedLogPolicy> & advancedLogPolicy) { DARABONBA_PTR_SET_VALUE(advancedLogPolicy_, advancedLogPolicy) };
      inline AdvancedLogPolicies& setAdvancedLogPolicy(vector<AdvancedLogPolicies::AdvancedLogPolicy> && advancedLogPolicy) { DARABONBA_PTR_SET_RVALUE(advancedLogPolicy_, advancedLogPolicy) };


    protected:
      shared_ptr<vector<AdvancedLogPolicies::AdvancedLogPolicy>> advancedLogPolicy_ {};
    };

    class AdvancedDataPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedDataPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedDataPolicy, advancedDataPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedDataPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedDataPolicy, advancedDataPolicy_);
      };
      AdvancedDataPolicies() = default ;
      AdvancedDataPolicies(const AdvancedDataPolicies &) = default ;
      AdvancedDataPolicies(AdvancedDataPolicies &&) = default ;
      AdvancedDataPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedDataPolicies() = default ;
      AdvancedDataPolicies& operator=(const AdvancedDataPolicies &) = default ;
      AdvancedDataPolicies& operator=(AdvancedDataPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdvancedDataPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvancedDataPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(ActionType, actionType_);
          DARABONBA_PTR_TO_JSON(BakType, bakType_);
          DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_TO_JSON(DestType, destType_);
          DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
          DARABONBA_PTR_TO_JSON(FilterType, filterType_);
          DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
          DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
          DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
          DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
          DARABONBA_PTR_TO_JSON(RetentionValue, retentionValue_);
          DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_TO_JSON(SrcType, srcType_);
          DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        };
        friend void from_json(const Darabonba::Json& j, AdvancedDataPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
          DARABONBA_PTR_FROM_JSON(BakType, bakType_);
          DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_FROM_JSON(DestType, destType_);
          DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
          DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
          DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
          DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
          DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
          DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
          DARABONBA_PTR_FROM_JSON(RetentionValue, retentionValue_);
          DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
          DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        };
        AdvancedDataPolicy() = default ;
        AdvancedDataPolicy(const AdvancedDataPolicy &) = default ;
        AdvancedDataPolicy(AdvancedDataPolicy &&) = default ;
        AdvancedDataPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvancedDataPolicy() = default ;
        AdvancedDataPolicy& operator=(const AdvancedDataPolicy &) = default ;
        AdvancedDataPolicy& operator=(AdvancedDataPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionType_ == nullptr
        && this->bakType_ == nullptr && this->destRegion_ == nullptr && this->destType_ == nullptr && this->filterKey_ == nullptr && this->filterType_ == nullptr
        && this->filterValue_ == nullptr && this->onlyPreserveOneEachDay_ == nullptr && this->onlyPreserveOneEachHour_ == nullptr && this->retentionType_ == nullptr && this->retentionValue_ == nullptr
        && this->srcRegion_ == nullptr && this->srcType_ == nullptr && this->strategyId_ == nullptr; };
        // actionType Field Functions 
        bool hasActionType() const { return this->actionType_ != nullptr;};
        void deleteActionType() { this->actionType_ = nullptr;};
        inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
        inline AdvancedDataPolicy& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


        // bakType Field Functions 
        bool hasBakType() const { return this->bakType_ != nullptr;};
        void deleteBakType() { this->bakType_ = nullptr;};
        inline string getBakType() const { DARABONBA_PTR_GET_DEFAULT(bakType_, "") };
        inline AdvancedDataPolicy& setBakType(string bakType) { DARABONBA_PTR_SET_VALUE(bakType_, bakType) };


        // destRegion Field Functions 
        bool hasDestRegion() const { return this->destRegion_ != nullptr;};
        void deleteDestRegion() { this->destRegion_ = nullptr;};
        inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
        inline AdvancedDataPolicy& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


        // destType Field Functions 
        bool hasDestType() const { return this->destType_ != nullptr;};
        void deleteDestType() { this->destType_ = nullptr;};
        inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
        inline AdvancedDataPolicy& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


        // filterKey Field Functions 
        bool hasFilterKey() const { return this->filterKey_ != nullptr;};
        void deleteFilterKey() { this->filterKey_ = nullptr;};
        inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
        inline AdvancedDataPolicy& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


        // filterType Field Functions 
        bool hasFilterType() const { return this->filterType_ != nullptr;};
        void deleteFilterType() { this->filterType_ = nullptr;};
        inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
        inline AdvancedDataPolicy& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


        // filterValue Field Functions 
        bool hasFilterValue() const { return this->filterValue_ != nullptr;};
        void deleteFilterValue() { this->filterValue_ = nullptr;};
        inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
        inline AdvancedDataPolicy& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


        // onlyPreserveOneEachDay Field Functions 
        bool hasOnlyPreserveOneEachDay() const { return this->onlyPreserveOneEachDay_ != nullptr;};
        void deleteOnlyPreserveOneEachDay() { this->onlyPreserveOneEachDay_ = nullptr;};
        inline bool getOnlyPreserveOneEachDay() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachDay_, false) };
        inline AdvancedDataPolicy& setOnlyPreserveOneEachDay(bool onlyPreserveOneEachDay) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachDay_, onlyPreserveOneEachDay) };


        // onlyPreserveOneEachHour Field Functions 
        bool hasOnlyPreserveOneEachHour() const { return this->onlyPreserveOneEachHour_ != nullptr;};
        void deleteOnlyPreserveOneEachHour() { this->onlyPreserveOneEachHour_ = nullptr;};
        inline bool getOnlyPreserveOneEachHour() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachHour_, false) };
        inline AdvancedDataPolicy& setOnlyPreserveOneEachHour(bool onlyPreserveOneEachHour) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachHour_, onlyPreserveOneEachHour) };


        // retentionType Field Functions 
        bool hasRetentionType() const { return this->retentionType_ != nullptr;};
        void deleteRetentionType() { this->retentionType_ = nullptr;};
        inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
        inline AdvancedDataPolicy& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


        // retentionValue Field Functions 
        bool hasRetentionValue() const { return this->retentionValue_ != nullptr;};
        void deleteRetentionValue() { this->retentionValue_ = nullptr;};
        inline int32_t getRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(retentionValue_, 0) };
        inline AdvancedDataPolicy& setRetentionValue(int32_t retentionValue) { DARABONBA_PTR_SET_VALUE(retentionValue_, retentionValue) };


        // srcRegion Field Functions 
        bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
        void deleteSrcRegion() { this->srcRegion_ = nullptr;};
        inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
        inline AdvancedDataPolicy& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


        // srcType Field Functions 
        bool hasSrcType() const { return this->srcType_ != nullptr;};
        void deleteSrcType() { this->srcType_ = nullptr;};
        inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
        inline AdvancedDataPolicy& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


        // strategyId Field Functions 
        bool hasStrategyId() const { return this->strategyId_ != nullptr;};
        void deleteStrategyId() { this->strategyId_ = nullptr;};
        inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
        inline AdvancedDataPolicy& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      protected:
        shared_ptr<string> actionType_ {};
        shared_ptr<string> bakType_ {};
        shared_ptr<string> destRegion_ {};
        shared_ptr<string> destType_ {};
        shared_ptr<string> filterKey_ {};
        shared_ptr<string> filterType_ {};
        shared_ptr<string> filterValue_ {};
        shared_ptr<bool> onlyPreserveOneEachDay_ {};
        shared_ptr<bool> onlyPreserveOneEachHour_ {};
        shared_ptr<string> retentionType_ {};
        shared_ptr<int32_t> retentionValue_ {};
        shared_ptr<string> srcRegion_ {};
        shared_ptr<string> srcType_ {};
        shared_ptr<string> strategyId_ {};
      };

      virtual bool empty() const override { return this->advancedDataPolicy_ == nullptr; };
      // advancedDataPolicy Field Functions 
      bool hasAdvancedDataPolicy() const { return this->advancedDataPolicy_ != nullptr;};
      void deleteAdvancedDataPolicy() { this->advancedDataPolicy_ = nullptr;};
      inline const vector<AdvancedDataPolicies::AdvancedDataPolicy> & getAdvancedDataPolicy() const { DARABONBA_PTR_GET_CONST(advancedDataPolicy_, vector<AdvancedDataPolicies::AdvancedDataPolicy>) };
      inline vector<AdvancedDataPolicies::AdvancedDataPolicy> getAdvancedDataPolicy() { DARABONBA_PTR_GET(advancedDataPolicy_, vector<AdvancedDataPolicies::AdvancedDataPolicy>) };
      inline AdvancedDataPolicies& setAdvancedDataPolicy(const vector<AdvancedDataPolicies::AdvancedDataPolicy> & advancedDataPolicy) { DARABONBA_PTR_SET_VALUE(advancedDataPolicy_, advancedDataPolicy) };
      inline AdvancedDataPolicies& setAdvancedDataPolicy(vector<AdvancedDataPolicies::AdvancedDataPolicy> && advancedDataPolicy) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicy_, advancedDataPolicy) };


    protected:
      shared_ptr<vector<AdvancedDataPolicies::AdvancedDataPolicy>> advancedDataPolicy_ {};
    };

    virtual bool empty() const override { return this->advancedBackupPolicyEnabled_ == nullptr
        && this->advancedDataPolicies_ == nullptr && this->advancedLogPolicies_ == nullptr && this->archiveBackupKeepCount_ == nullptr && this->archiveBackupKeepPolicy_ == nullptr && this->archiveBackupRetentionPeriod_ == nullptr
        && this->backupInterval_ == nullptr && this->backupLog_ == nullptr && this->backupMethod_ == nullptr && this->backupPriority_ == nullptr && this->backupRetentionPeriod_ == nullptr
        && this->category_ == nullptr && this->compressType_ == nullptr && this->enableBackupLog_ == nullptr && this->enableIncrementDataBackup_ == nullptr && this->enablePitrProtection_ == nullptr
        && this->highSpaceUsageProtection_ == nullptr && this->localLogRetentionHours_ == nullptr && this->localLogRetentionSpace_ == nullptr && this->logBackupFrequency_ == nullptr && this->logBackupLocalRetentionNumber_ == nullptr
        && this->logBackupRetentionPeriod_ == nullptr && this->pitrRetentionPeriod_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->preferredNextBackupTime_ == nullptr
        && this->releasedKeepPolicy_ == nullptr && this->requestId_ == nullptr && this->supportModifyBackupPriority_ == nullptr && this->supportReleasedKeep_ == nullptr && this->supportVolumeShadowCopy_ == nullptr
        && this->supportsHighFrequencyBackup_ == nullptr; };
    // advancedBackupPolicyEnabled Field Functions 
    bool hasAdvancedBackupPolicyEnabled() const { return this->advancedBackupPolicyEnabled_ != nullptr;};
    void deleteAdvancedBackupPolicyEnabled() { this->advancedBackupPolicyEnabled_ = nullptr;};
    inline bool getAdvancedBackupPolicyEnabled() const { DARABONBA_PTR_GET_DEFAULT(advancedBackupPolicyEnabled_, false) };
    inline DescribeBackupPolicyResponseBody& setAdvancedBackupPolicyEnabled(bool advancedBackupPolicyEnabled) { DARABONBA_PTR_SET_VALUE(advancedBackupPolicyEnabled_, advancedBackupPolicyEnabled) };


    // advancedDataPolicies Field Functions 
    bool hasAdvancedDataPolicies() const { return this->advancedDataPolicies_ != nullptr;};
    void deleteAdvancedDataPolicies() { this->advancedDataPolicies_ = nullptr;};
    inline const DescribeBackupPolicyResponseBody::AdvancedDataPolicies & getAdvancedDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedDataPolicies_, DescribeBackupPolicyResponseBody::AdvancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody::AdvancedDataPolicies getAdvancedDataPolicies() { DARABONBA_PTR_GET(advancedDataPolicies_, DescribeBackupPolicyResponseBody::AdvancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedDataPolicies(const DescribeBackupPolicyResponseBody::AdvancedDataPolicies & advancedDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedDataPolicies_, advancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedDataPolicies(DescribeBackupPolicyResponseBody::AdvancedDataPolicies && advancedDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicies_, advancedDataPolicies) };


    // advancedLogPolicies Field Functions 
    bool hasAdvancedLogPolicies() const { return this->advancedLogPolicies_ != nullptr;};
    void deleteAdvancedLogPolicies() { this->advancedLogPolicies_ = nullptr;};
    inline const DescribeBackupPolicyResponseBody::AdvancedLogPolicies & getAdvancedLogPolicies() const { DARABONBA_PTR_GET_CONST(advancedLogPolicies_, DescribeBackupPolicyResponseBody::AdvancedLogPolicies) };
    inline DescribeBackupPolicyResponseBody::AdvancedLogPolicies getAdvancedLogPolicies() { DARABONBA_PTR_GET(advancedLogPolicies_, DescribeBackupPolicyResponseBody::AdvancedLogPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedLogPolicies(const DescribeBackupPolicyResponseBody::AdvancedLogPolicies & advancedLogPolicies) { DARABONBA_PTR_SET_VALUE(advancedLogPolicies_, advancedLogPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedLogPolicies(DescribeBackupPolicyResponseBody::AdvancedLogPolicies && advancedLogPolicies) { DARABONBA_PTR_SET_RVALUE(advancedLogPolicies_, advancedLogPolicies) };


    // archiveBackupKeepCount Field Functions 
    bool hasArchiveBackupKeepCount() const { return this->archiveBackupKeepCount_ != nullptr;};
    void deleteArchiveBackupKeepCount() { this->archiveBackupKeepCount_ = nullptr;};
    inline string getArchiveBackupKeepCount() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepCount_, "") };
    inline DescribeBackupPolicyResponseBody& setArchiveBackupKeepCount(string archiveBackupKeepCount) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepCount_, archiveBackupKeepCount) };


    // archiveBackupKeepPolicy Field Functions 
    bool hasArchiveBackupKeepPolicy() const { return this->archiveBackupKeepPolicy_ != nullptr;};
    void deleteArchiveBackupKeepPolicy() { this->archiveBackupKeepPolicy_ = nullptr;};
    inline string getArchiveBackupKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepPolicy_, "") };
    inline DescribeBackupPolicyResponseBody& setArchiveBackupKeepPolicy(string archiveBackupKeepPolicy) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepPolicy_, archiveBackupKeepPolicy) };


    // archiveBackupRetentionPeriod Field Functions 
    bool hasArchiveBackupRetentionPeriod() const { return this->archiveBackupRetentionPeriod_ != nullptr;};
    void deleteArchiveBackupRetentionPeriod() { this->archiveBackupRetentionPeriod_ = nullptr;};
    inline string getArchiveBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setArchiveBackupRetentionPeriod(string archiveBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(archiveBackupRetentionPeriod_, archiveBackupRetentionPeriod) };


    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline string getBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupInterval(string backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline string getBackupLog() const { DARABONBA_PTR_GET_DEFAULT(backupLog_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupLog(string backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupPriority Field Functions 
    bool hasBackupPriority() const { return this->backupPriority_ != nullptr;};
    void deleteBackupPriority() { this->backupPriority_ = nullptr;};
    inline int32_t getBackupPriority() const { DARABONBA_PTR_GET_DEFAULT(backupPriority_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupPriority(int32_t backupPriority) { DARABONBA_PTR_SET_VALUE(backupPriority_, backupPriority) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeBackupPolicyResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compressType Field Functions 
    bool hasCompressType() const { return this->compressType_ != nullptr;};
    void deleteCompressType() { this->compressType_ = nullptr;};
    inline string getCompressType() const { DARABONBA_PTR_GET_DEFAULT(compressType_, "") };
    inline DescribeBackupPolicyResponseBody& setCompressType(string compressType) { DARABONBA_PTR_SET_VALUE(compressType_, compressType) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline DescribeBackupPolicyResponseBody& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableIncrementDataBackup Field Functions 
    bool hasEnableIncrementDataBackup() const { return this->enableIncrementDataBackup_ != nullptr;};
    void deleteEnableIncrementDataBackup() { this->enableIncrementDataBackup_ = nullptr;};
    inline bool getEnableIncrementDataBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncrementDataBackup_, false) };
    inline DescribeBackupPolicyResponseBody& setEnableIncrementDataBackup(bool enableIncrementDataBackup) { DARABONBA_PTR_SET_VALUE(enableIncrementDataBackup_, enableIncrementDataBackup) };


    // enablePitrProtection Field Functions 
    bool hasEnablePitrProtection() const { return this->enablePitrProtection_ != nullptr;};
    void deleteEnablePitrProtection() { this->enablePitrProtection_ = nullptr;};
    inline bool getEnablePitrProtection() const { DARABONBA_PTR_GET_DEFAULT(enablePitrProtection_, false) };
    inline DescribeBackupPolicyResponseBody& setEnablePitrProtection(bool enablePitrProtection) { DARABONBA_PTR_SET_VALUE(enablePitrProtection_, enablePitrProtection) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline string getHighSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, "") };
    inline DescribeBackupPolicyResponseBody& setHighSpaceUsageProtection(string highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline int32_t getLocalLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, 0) };
    inline DescribeBackupPolicyResponseBody& setLocalLogRetentionHours(int32_t localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline string getLocalLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, "") };
    inline DescribeBackupPolicyResponseBody& setLocalLogRetentionSpace(string localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupFrequency Field Functions 
    bool hasLogBackupFrequency() const { return this->logBackupFrequency_ != nullptr;};
    void deleteLogBackupFrequency() { this->logBackupFrequency_ = nullptr;};
    inline string getLogBackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(logBackupFrequency_, "") };
    inline DescribeBackupPolicyResponseBody& setLogBackupFrequency(string logBackupFrequency) { DARABONBA_PTR_SET_VALUE(logBackupFrequency_, logBackupFrequency) };


    // logBackupLocalRetentionNumber Field Functions 
    bool hasLogBackupLocalRetentionNumber() const { return this->logBackupLocalRetentionNumber_ != nullptr;};
    void deleteLogBackupLocalRetentionNumber() { this->logBackupLocalRetentionNumber_ = nullptr;};
    inline int32_t getLogBackupLocalRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(logBackupLocalRetentionNumber_, 0) };
    inline DescribeBackupPolicyResponseBody& setLogBackupLocalRetentionNumber(int32_t logBackupLocalRetentionNumber) { DARABONBA_PTR_SET_VALUE(logBackupLocalRetentionNumber_, logBackupLocalRetentionNumber) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int32_t getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setLogBackupRetentionPeriod(int32_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // pitrRetentionPeriod Field Functions 
    bool hasPitrRetentionPeriod() const { return this->pitrRetentionPeriod_ != nullptr;};
    void deletePitrRetentionPeriod() { this->pitrRetentionPeriod_ = nullptr;};
    inline int32_t getPitrRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(pitrRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setPitrRetentionPeriod(int32_t pitrRetentionPeriod) { DARABONBA_PTR_SET_VALUE(pitrRetentionPeriod_, pitrRetentionPeriod) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // preferredNextBackupTime Field Functions 
    bool hasPreferredNextBackupTime() const { return this->preferredNextBackupTime_ != nullptr;};
    void deletePreferredNextBackupTime() { this->preferredNextBackupTime_ = nullptr;};
    inline string getPreferredNextBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredNextBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredNextBackupTime(string preferredNextBackupTime) { DARABONBA_PTR_SET_VALUE(preferredNextBackupTime_, preferredNextBackupTime) };


    // releasedKeepPolicy Field Functions 
    bool hasReleasedKeepPolicy() const { return this->releasedKeepPolicy_ != nullptr;};
    void deleteReleasedKeepPolicy() { this->releasedKeepPolicy_ = nullptr;};
    inline string getReleasedKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(releasedKeepPolicy_, "") };
    inline DescribeBackupPolicyResponseBody& setReleasedKeepPolicy(string releasedKeepPolicy) { DARABONBA_PTR_SET_VALUE(releasedKeepPolicy_, releasedKeepPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportModifyBackupPriority Field Functions 
    bool hasSupportModifyBackupPriority() const { return this->supportModifyBackupPriority_ != nullptr;};
    void deleteSupportModifyBackupPriority() { this->supportModifyBackupPriority_ = nullptr;};
    inline bool getSupportModifyBackupPriority() const { DARABONBA_PTR_GET_DEFAULT(supportModifyBackupPriority_, false) };
    inline DescribeBackupPolicyResponseBody& setSupportModifyBackupPriority(bool supportModifyBackupPriority) { DARABONBA_PTR_SET_VALUE(supportModifyBackupPriority_, supportModifyBackupPriority) };


    // supportReleasedKeep Field Functions 
    bool hasSupportReleasedKeep() const { return this->supportReleasedKeep_ != nullptr;};
    void deleteSupportReleasedKeep() { this->supportReleasedKeep_ = nullptr;};
    inline int32_t getSupportReleasedKeep() const { DARABONBA_PTR_GET_DEFAULT(supportReleasedKeep_, 0) };
    inline DescribeBackupPolicyResponseBody& setSupportReleasedKeep(int32_t supportReleasedKeep) { DARABONBA_PTR_SET_VALUE(supportReleasedKeep_, supportReleasedKeep) };


    // supportVolumeShadowCopy Field Functions 
    bool hasSupportVolumeShadowCopy() const { return this->supportVolumeShadowCopy_ != nullptr;};
    void deleteSupportVolumeShadowCopy() { this->supportVolumeShadowCopy_ = nullptr;};
    inline int32_t getSupportVolumeShadowCopy() const { DARABONBA_PTR_GET_DEFAULT(supportVolumeShadowCopy_, 0) };
    inline DescribeBackupPolicyResponseBody& setSupportVolumeShadowCopy(int32_t supportVolumeShadowCopy) { DARABONBA_PTR_SET_VALUE(supportVolumeShadowCopy_, supportVolumeShadowCopy) };


    // supportsHighFrequencyBackup Field Functions 
    bool hasSupportsHighFrequencyBackup() const { return this->supportsHighFrequencyBackup_ != nullptr;};
    void deleteSupportsHighFrequencyBackup() { this->supportsHighFrequencyBackup_ = nullptr;};
    inline int64_t getSupportsHighFrequencyBackup() const { DARABONBA_PTR_GET_DEFAULT(supportsHighFrequencyBackup_, 0L) };
    inline DescribeBackupPolicyResponseBody& setSupportsHighFrequencyBackup(int64_t supportsHighFrequencyBackup) { DARABONBA_PTR_SET_VALUE(supportsHighFrequencyBackup_, supportsHighFrequencyBackup) };


  protected:
    shared_ptr<bool> advancedBackupPolicyEnabled_ {};
    shared_ptr<DescribeBackupPolicyResponseBody::AdvancedDataPolicies> advancedDataPolicies_ {};
    shared_ptr<DescribeBackupPolicyResponseBody::AdvancedLogPolicies> advancedLogPolicies_ {};
    // The number of archived backup files that are retained.
    shared_ptr<string> archiveBackupKeepCount_ {};
    // The cycle based on which archived backup files are retained.
    shared_ptr<string> archiveBackupKeepPolicy_ {};
    // The number of days for which archived backup files are retained.
    shared_ptr<string> archiveBackupRetentionPeriod_ {};
    // The backup interval. Unit: minutes.
    // 
    // *   If the instance runs MySQL, the interval is the same as the value of the Snapshot Backup Start Time parameter rather than the Snapshot Backup Period parameter in the ApsaraDB RDS console. For more information, see [Back up an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98818.html).
    // *   If the instance runs SQL Server, the interval is the same as the log backup frequency.
    shared_ptr<string> backupInterval_ {};
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   **Enable**
    // *   **Disabled**
    shared_ptr<string> backupLog_ {};
    // The backup method of the instance. Valid values:
    // 
    // *   **Physical**: physical backup
    // *   **Snapshot**: snapshot backup
    // 
    // > This parameter is returned only when the instance runs SQL Server and uses cloud disks.
    shared_ptr<string> backupMethod_ {};
    // The backup settings of the secondary instance. Valid values:
    // 
    // *   **1**: Secondary instance preferred
    // *   **2**: Primary instance preferred
    // 
    // >  This parameter is available only for instances that run SQL Server on RDS Cluster Edition. This parameter is returned only when SupportModifyBackupPriority is set to True.
    shared_ptr<int32_t> backupPriority_ {};
    // The number of days for which data backup files are retained.
    shared_ptr<int32_t> backupRetentionPeriod_ {};
    // Indicates whether to enable the single-digit second backup feature. This feature allows ApsaraDB RDS to complete a backup within single-digit seconds. Valid values:
    // 
    // *   **Flash**: The single-digit second backup feature is enabled.
    // *   **Standard**: The single-digit second backup feature is disabled.
    // 
    // > This parameter takes effect only when you set the **BackupPolicyMode** parameter to **DataBackupPolicy**.
    shared_ptr<string> category_ {};
    // The method that is used to compress backup data. Valid values:
    // 
    // *   **0**: Backup data is not compressed.
    // *   **1**: Backup data is compressed by using zlib.
    // *   **2**: Backup data is compressed by using zlib that invokes more than one thread in parallel for each backup.
    // *   **4**: Backup data is compressed by using QuickLZ and can be used to restore individual databases or tables.
    // *   **8**: Backup data is compressed by using QuickLZ but cannot be used to restore individual databases or tables.
    shared_ptr<string> compressType_ {};
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    shared_ptr<string> enableBackupLog_ {};
    // Indicates whether incremental backup is enabled. Valid values:
    // 
    // *   **True**: Incremental backup is enabled.
    // *   **False**: Incremental backup is disabled.
    shared_ptr<bool> enableIncrementDataBackup_ {};
    // Indicates whether the point-in-time restoration (PITR) feature is enabled. The PITR feature is an enhancement of the log backup feature. Valid values:
    // 
    // *   **True**
    // *   **False**
    // 
    // >  This parameter is returned only when the instance runs MySQL. For more information, see [Configure the PITR feature](https://help.aliyun.com/document_detail/2666046.html).
    shared_ptr<bool> enablePitrProtection_ {};
    // Indicates whether the log backup deletion feature is enabled. If the disk usage exceeds 80% or the remaining disk space is less than 5 GB on the instance, this feature deletes binary log files. Valid values:
    // 
    // *   **Disable**
    // *   **Enable**
    shared_ptr<string> highSpaceUsageProtection_ {};
    // The number of hours for which log backup files are retained on the instance.
    shared_ptr<int32_t> localLogRetentionHours_ {};
    // The maximum storage usage that is allowed for log files on the instance.
    shared_ptr<string> localLogRetentionSpace_ {};
    // The backup frequency of logs. Valid values:
    // 
    // *   **LogInterval**: Log backups are performed every 30 minutes.
    // *   Default value: same as the value of the **PreferredBackupPeriod** parameter.
    // 
    // >  This parameter is returned only when the instance runs SQL Server.
    shared_ptr<string> logBackupFrequency_ {};
    // The number of binary log files that you want to retain on the instance.
    shared_ptr<int32_t> logBackupLocalRetentionNumber_ {};
    // The number of days for which log backup files are retained.
    shared_ptr<int32_t> logBackupRetentionPeriod_ {};
    // The number of days during which you can restore data of the instance to any point in time.
    shared_ptr<int32_t> pitrRetentionPeriod_ {};
    // The cycle based on which you want to perform a backup. Separate multiple values with commas (,). Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    shared_ptr<string> preferredBackupPeriod_ {};
    // The time when a data backup is performed. The time follows the ISO 8601 standard in the *HH:mm*Z-*HH:mm*Z format. The time is displayed in UTC.
    shared_ptr<string> preferredBackupTime_ {};
    // The time when the next backup is performed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    shared_ptr<string> preferredNextBackupTime_ {};
    // The policy that is used to retain archived backup files if the instance is released. Valid values:
    // 
    // *   **None**: No archived backup files are retained.
    // *   **Lastest**: Only the last archived backup file is retained.
    // *   **All**: All archived backup files are retained.
    shared_ptr<string> releasedKeepPolicy_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the backup settings of a secondary instance can be modified. Valid values:
    // 
    // *   **True**
    // *   **False**
    shared_ptr<bool> supportModifyBackupPriority_ {};
    // A reserved parameter.
    shared_ptr<int32_t> supportReleasedKeep_ {};
    // Indicates whether the instance supports snapshot backups. Valid values:
    // 
    // *   **1**: The instance supports snapshot backups.
    // *   **0**: The instance does not support snapshot backups.
    // 
    // >  This parameter is returned only when the instance runs SQL Server.
    shared_ptr<int32_t> supportVolumeShadowCopy_ {};
    // Indicates whether log backups for SQL Server are performed verery five minutes.
    // 
    // *   0: No
    // *   1: Yes
    shared_ptr<int64_t> supportsHighFrequencyBackup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
