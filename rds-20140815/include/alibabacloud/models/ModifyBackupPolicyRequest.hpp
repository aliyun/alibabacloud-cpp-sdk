// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
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
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_TO_JSON(AdvancedLogPolicies, advancedLogPolicies_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupPolicyMode, backupPolicyMode_);
      DARABONBA_PTR_TO_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CompressType, compressType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EnableAdvancedBackupPolicy, enableAdvancedBackupPolicy_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_TO_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_TO_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_TO_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvancedLogPolicies, advancedLogPolicies_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupPolicyMode, backupPolicyMode_);
      DARABONBA_PTR_FROM_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CompressType, compressType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EnableAdvancedBackupPolicy, enableAdvancedBackupPolicy_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_FROM_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_FROM_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_FROM_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest(ModifyBackupPolicyRequest &&) = default ;
    ModifyBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest& operator=(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest& operator=(ModifyBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedLogPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedLogPolicies& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AdvancedLogPolicies& obj) { 
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
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->destRegion_ == nullptr && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->filterKey_ == nullptr && this->filterValue_ == nullptr
        && this->logRetentionType_ == nullptr && this->logRetentionValue_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr && this->strategyId_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvancedLogPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvancedLogPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvancedLogPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // enableLogBackup Field Functions 
      bool hasEnableLogBackup() const { return this->enableLogBackup_ != nullptr;};
      void deleteEnableLogBackup() { this->enableLogBackup_ = nullptr;};
      inline int32_t getEnableLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableLogBackup_, 0) };
      inline AdvancedLogPolicies& setEnableLogBackup(int32_t enableLogBackup) { DARABONBA_PTR_SET_VALUE(enableLogBackup_, enableLogBackup) };


      // filterKey Field Functions 
      bool hasFilterKey() const { return this->filterKey_ != nullptr;};
      void deleteFilterKey() { this->filterKey_ = nullptr;};
      inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
      inline AdvancedLogPolicies& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


      // filterValue Field Functions 
      bool hasFilterValue() const { return this->filterValue_ != nullptr;};
      void deleteFilterValue() { this->filterValue_ = nullptr;};
      inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
      inline AdvancedLogPolicies& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


      // logRetentionType Field Functions 
      bool hasLogRetentionType() const { return this->logRetentionType_ != nullptr;};
      void deleteLogRetentionType() { this->logRetentionType_ = nullptr;};
      inline string getLogRetentionType() const { DARABONBA_PTR_GET_DEFAULT(logRetentionType_, "") };
      inline AdvancedLogPolicies& setLogRetentionType(string logRetentionType) { DARABONBA_PTR_SET_VALUE(logRetentionType_, logRetentionType) };


      // logRetentionValue Field Functions 
      bool hasLogRetentionValue() const { return this->logRetentionValue_ != nullptr;};
      void deleteLogRetentionValue() { this->logRetentionValue_ = nullptr;};
      inline int32_t getLogRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(logRetentionValue_, 0) };
      inline AdvancedLogPolicies& setLogRetentionValue(int32_t logRetentionValue) { DARABONBA_PTR_SET_VALUE(logRetentionValue_, logRetentionValue) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvancedLogPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvancedLogPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
      inline AdvancedLogPolicies& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


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

    class AdvancedDataPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedDataPolicies& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AdvancedDataPolicies& obj) { 
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
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->bakType_ == nullptr && this->destRegion_ == nullptr && this->destType_ == nullptr && this->filterKey_ == nullptr && this->filterType_ == nullptr
        && this->filterValue_ == nullptr && this->onlyPreserveOneEachDay_ == nullptr && this->onlyPreserveOneEachHour_ == nullptr && this->retentionType_ == nullptr && this->retentionValue_ == nullptr
        && this->srcRegion_ == nullptr && this->srcType_ == nullptr && this->strategyId_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvancedDataPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // bakType Field Functions 
      bool hasBakType() const { return this->bakType_ != nullptr;};
      void deleteBakType() { this->bakType_ = nullptr;};
      inline string getBakType() const { DARABONBA_PTR_GET_DEFAULT(bakType_, "") };
      inline AdvancedDataPolicies& setBakType(string bakType) { DARABONBA_PTR_SET_VALUE(bakType_, bakType) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvancedDataPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvancedDataPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // filterKey Field Functions 
      bool hasFilterKey() const { return this->filterKey_ != nullptr;};
      void deleteFilterKey() { this->filterKey_ = nullptr;};
      inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
      inline AdvancedDataPolicies& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


      // filterType Field Functions 
      bool hasFilterType() const { return this->filterType_ != nullptr;};
      void deleteFilterType() { this->filterType_ = nullptr;};
      inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
      inline AdvancedDataPolicies& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


      // filterValue Field Functions 
      bool hasFilterValue() const { return this->filterValue_ != nullptr;};
      void deleteFilterValue() { this->filterValue_ = nullptr;};
      inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
      inline AdvancedDataPolicies& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


      // onlyPreserveOneEachDay Field Functions 
      bool hasOnlyPreserveOneEachDay() const { return this->onlyPreserveOneEachDay_ != nullptr;};
      void deleteOnlyPreserveOneEachDay() { this->onlyPreserveOneEachDay_ = nullptr;};
      inline bool getOnlyPreserveOneEachDay() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachDay_, false) };
      inline AdvancedDataPolicies& setOnlyPreserveOneEachDay(bool onlyPreserveOneEachDay) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachDay_, onlyPreserveOneEachDay) };


      // onlyPreserveOneEachHour Field Functions 
      bool hasOnlyPreserveOneEachHour() const { return this->onlyPreserveOneEachHour_ != nullptr;};
      void deleteOnlyPreserveOneEachHour() { this->onlyPreserveOneEachHour_ = nullptr;};
      inline bool getOnlyPreserveOneEachHour() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachHour_, false) };
      inline AdvancedDataPolicies& setOnlyPreserveOneEachHour(bool onlyPreserveOneEachHour) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachHour_, onlyPreserveOneEachHour) };


      // retentionType Field Functions 
      bool hasRetentionType() const { return this->retentionType_ != nullptr;};
      void deleteRetentionType() { this->retentionType_ = nullptr;};
      inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
      inline AdvancedDataPolicies& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


      // retentionValue Field Functions 
      bool hasRetentionValue() const { return this->retentionValue_ != nullptr;};
      void deleteRetentionValue() { this->retentionValue_ = nullptr;};
      inline int32_t getRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(retentionValue_, 0) };
      inline AdvancedDataPolicies& setRetentionValue(int32_t retentionValue) { DARABONBA_PTR_SET_VALUE(retentionValue_, retentionValue) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvancedDataPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvancedDataPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
      inline AdvancedDataPolicies& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


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

    virtual bool empty() const override { return this->advancedDataPolicies_ == nullptr
        && this->advancedLogPolicies_ == nullptr && this->archiveBackupKeepCount_ == nullptr && this->archiveBackupKeepPolicy_ == nullptr && this->archiveBackupRetentionPeriod_ == nullptr && this->backupInterval_ == nullptr
        && this->backupLog_ == nullptr && this->backupMethod_ == nullptr && this->backupPolicyMode_ == nullptr && this->backupPriority_ == nullptr && this->backupRetentionPeriod_ == nullptr
        && this->category_ == nullptr && this->compressType_ == nullptr && this->DBInstanceId_ == nullptr && this->enableAdvancedBackupPolicy_ == nullptr && this->enableBackupLog_ == nullptr
        && this->enableIncrementDataBackup_ == nullptr && this->highSpaceUsageProtection_ == nullptr && this->localLogRetentionHours_ == nullptr && this->localLogRetentionSpace_ == nullptr && this->logBackupFrequency_ == nullptr
        && this->logBackupLocalRetentionNumber_ == nullptr && this->logBackupRetentionPeriod_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->preferredBackupPeriod_ == nullptr
        && this->preferredBackupTime_ == nullptr && this->releasedKeepPolicy_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // advancedDataPolicies Field Functions 
    bool hasAdvancedDataPolicies() const { return this->advancedDataPolicies_ != nullptr;};
    void deleteAdvancedDataPolicies() { this->advancedDataPolicies_ = nullptr;};
    inline const vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> & getAdvancedDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedDataPolicies_, vector<ModifyBackupPolicyRequest::AdvancedDataPolicies>) };
    inline vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> getAdvancedDataPolicies() { DARABONBA_PTR_GET(advancedDataPolicies_, vector<ModifyBackupPolicyRequest::AdvancedDataPolicies>) };
    inline ModifyBackupPolicyRequest& setAdvancedDataPolicies(const vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> & advancedDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedDataPolicies_, advancedDataPolicies) };
    inline ModifyBackupPolicyRequest& setAdvancedDataPolicies(vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> && advancedDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicies_, advancedDataPolicies) };


    // advancedLogPolicies Field Functions 
    bool hasAdvancedLogPolicies() const { return this->advancedLogPolicies_ != nullptr;};
    void deleteAdvancedLogPolicies() { this->advancedLogPolicies_ = nullptr;};
    inline const vector<ModifyBackupPolicyRequest::AdvancedLogPolicies> & getAdvancedLogPolicies() const { DARABONBA_PTR_GET_CONST(advancedLogPolicies_, vector<ModifyBackupPolicyRequest::AdvancedLogPolicies>) };
    inline vector<ModifyBackupPolicyRequest::AdvancedLogPolicies> getAdvancedLogPolicies() { DARABONBA_PTR_GET(advancedLogPolicies_, vector<ModifyBackupPolicyRequest::AdvancedLogPolicies>) };
    inline ModifyBackupPolicyRequest& setAdvancedLogPolicies(const vector<ModifyBackupPolicyRequest::AdvancedLogPolicies> & advancedLogPolicies) { DARABONBA_PTR_SET_VALUE(advancedLogPolicies_, advancedLogPolicies) };
    inline ModifyBackupPolicyRequest& setAdvancedLogPolicies(vector<ModifyBackupPolicyRequest::AdvancedLogPolicies> && advancedLogPolicies) { DARABONBA_PTR_SET_RVALUE(advancedLogPolicies_, advancedLogPolicies) };


    // archiveBackupKeepCount Field Functions 
    bool hasArchiveBackupKeepCount() const { return this->archiveBackupKeepCount_ != nullptr;};
    void deleteArchiveBackupKeepCount() { this->archiveBackupKeepCount_ = nullptr;};
    inline int32_t getArchiveBackupKeepCount() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepCount_, 0) };
    inline ModifyBackupPolicyRequest& setArchiveBackupKeepCount(int32_t archiveBackupKeepCount) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepCount_, archiveBackupKeepCount) };


    // archiveBackupKeepPolicy Field Functions 
    bool hasArchiveBackupKeepPolicy() const { return this->archiveBackupKeepPolicy_ != nullptr;};
    void deleteArchiveBackupKeepPolicy() { this->archiveBackupKeepPolicy_ = nullptr;};
    inline string getArchiveBackupKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepPolicy_, "") };
    inline ModifyBackupPolicyRequest& setArchiveBackupKeepPolicy(string archiveBackupKeepPolicy) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepPolicy_, archiveBackupKeepPolicy) };


    // archiveBackupRetentionPeriod Field Functions 
    bool hasArchiveBackupRetentionPeriod() const { return this->archiveBackupRetentionPeriod_ != nullptr;};
    void deleteArchiveBackupRetentionPeriod() { this->archiveBackupRetentionPeriod_ = nullptr;};
    inline string getArchiveBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setArchiveBackupRetentionPeriod(string archiveBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(archiveBackupRetentionPeriod_, archiveBackupRetentionPeriod) };


    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline string getBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, "") };
    inline ModifyBackupPolicyRequest& setBackupInterval(string backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline string getBackupLog() const { DARABONBA_PTR_GET_DEFAULT(backupLog_, "") };
    inline ModifyBackupPolicyRequest& setBackupLog(string backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline ModifyBackupPolicyRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupPolicyMode Field Functions 
    bool hasBackupPolicyMode() const { return this->backupPolicyMode_ != nullptr;};
    void deleteBackupPolicyMode() { this->backupPolicyMode_ = nullptr;};
    inline string getBackupPolicyMode() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyMode_, "") };
    inline ModifyBackupPolicyRequest& setBackupPolicyMode(string backupPolicyMode) { DARABONBA_PTR_SET_VALUE(backupPolicyMode_, backupPolicyMode) };


    // backupPriority Field Functions 
    bool hasBackupPriority() const { return this->backupPriority_ != nullptr;};
    void deleteBackupPriority() { this->backupPriority_ = nullptr;};
    inline int32_t getBackupPriority() const { DARABONBA_PTR_GET_DEFAULT(backupPriority_, 0) };
    inline ModifyBackupPolicyRequest& setBackupPriority(int32_t backupPriority) { DARABONBA_PTR_SET_VALUE(backupPriority_, backupPriority) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline string getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setBackupRetentionPeriod(string backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyBackupPolicyRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compressType Field Functions 
    bool hasCompressType() const { return this->compressType_ != nullptr;};
    void deleteCompressType() { this->compressType_ = nullptr;};
    inline string getCompressType() const { DARABONBA_PTR_GET_DEFAULT(compressType_, "") };
    inline ModifyBackupPolicyRequest& setCompressType(string compressType) { DARABONBA_PTR_SET_VALUE(compressType_, compressType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyBackupPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // enableAdvancedBackupPolicy Field Functions 
    bool hasEnableAdvancedBackupPolicy() const { return this->enableAdvancedBackupPolicy_ != nullptr;};
    void deleteEnableAdvancedBackupPolicy() { this->enableAdvancedBackupPolicy_ = nullptr;};
    inline int32_t getEnableAdvancedBackupPolicy() const { DARABONBA_PTR_GET_DEFAULT(enableAdvancedBackupPolicy_, 0) };
    inline ModifyBackupPolicyRequest& setEnableAdvancedBackupPolicy(int32_t enableAdvancedBackupPolicy) { DARABONBA_PTR_SET_VALUE(enableAdvancedBackupPolicy_, enableAdvancedBackupPolicy) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline ModifyBackupPolicyRequest& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableIncrementDataBackup Field Functions 
    bool hasEnableIncrementDataBackup() const { return this->enableIncrementDataBackup_ != nullptr;};
    void deleteEnableIncrementDataBackup() { this->enableIncrementDataBackup_ = nullptr;};
    inline bool getEnableIncrementDataBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncrementDataBackup_, false) };
    inline ModifyBackupPolicyRequest& setEnableIncrementDataBackup(bool enableIncrementDataBackup) { DARABONBA_PTR_SET_VALUE(enableIncrementDataBackup_, enableIncrementDataBackup) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline string getHighSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, "") };
    inline ModifyBackupPolicyRequest& setHighSpaceUsageProtection(string highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline string getLocalLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, "") };
    inline ModifyBackupPolicyRequest& setLocalLogRetentionHours(string localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline string getLocalLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, "") };
    inline ModifyBackupPolicyRequest& setLocalLogRetentionSpace(string localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupFrequency Field Functions 
    bool hasLogBackupFrequency() const { return this->logBackupFrequency_ != nullptr;};
    void deleteLogBackupFrequency() { this->logBackupFrequency_ = nullptr;};
    inline string getLogBackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(logBackupFrequency_, "") };
    inline ModifyBackupPolicyRequest& setLogBackupFrequency(string logBackupFrequency) { DARABONBA_PTR_SET_VALUE(logBackupFrequency_, logBackupFrequency) };


    // logBackupLocalRetentionNumber Field Functions 
    bool hasLogBackupLocalRetentionNumber() const { return this->logBackupLocalRetentionNumber_ != nullptr;};
    void deleteLogBackupLocalRetentionNumber() { this->logBackupLocalRetentionNumber_ = nullptr;};
    inline int32_t getLogBackupLocalRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(logBackupLocalRetentionNumber_, 0) };
    inline ModifyBackupPolicyRequest& setLogBackupLocalRetentionNumber(int32_t logBackupLocalRetentionNumber) { DARABONBA_PTR_SET_VALUE(logBackupLocalRetentionNumber_, logBackupLocalRetentionNumber) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline string getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setLogBackupRetentionPeriod(string logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBackupPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBackupPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // releasedKeepPolicy Field Functions 
    bool hasReleasedKeepPolicy() const { return this->releasedKeepPolicy_ != nullptr;};
    void deleteReleasedKeepPolicy() { this->releasedKeepPolicy_ = nullptr;};
    inline string getReleasedKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(releasedKeepPolicy_, "") };
    inline ModifyBackupPolicyRequest& setReleasedKeepPolicy(string releasedKeepPolicy) { DARABONBA_PTR_SET_VALUE(releasedKeepPolicy_, releasedKeepPolicy) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBackupPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBackupPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<vector<ModifyBackupPolicyRequest::AdvancedDataPolicies>> advancedDataPolicies_ {};
    shared_ptr<vector<ModifyBackupPolicyRequest::AdvancedLogPolicies>> advancedLogPolicies_ {};
    // The number of archived backup files that are retained. Default value: **1**. Valid values:
    // 
    // *   Valid values when **ArchiveBackupKeepPolicy** is set to **ByMonth**: **1** to **31**.
    // *   Valid values when **ArchiveBackupKeepPolicy** is set to **ByWeek**: **1** to **7**.
    // 
    // > *   You do not need to specify this parameter when **ArchiveBackupKeepPolicy** is set to **KeepAll**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<int32_t> archiveBackupKeepCount_ {};
    // The retention period of archived backup files. The number of archived backup files that can be retained within the specified retention period is specified by **ArchiveBackupKeepCount**. Default value: **0**. Valid values:
    // 
    // *   **ByMonth**
    // *   **ByWeek**
    // *   **KeepAll**
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> archiveBackupKeepPolicy_ {};
    // The number of days for which the archived backup is retained. The default value **0** specifies that the backup archiving feature is disabled. Valid values: **30** to **1095**.
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> archiveBackupRetentionPeriod_ {};
    // The frequency at which you want to perform a snapshot backup on the instance. Valid values:
    // 
    // *   **-1**: No backup frequencies are specified.
    // *   **30**: A snapshot backup is performed every 30 minutes.
    // *   **60**: A snapshot backup is performed every 60 minutes.
    // *   **120**: A snapshot backup is performed every 120 minutes.
    // *   **240**: A snapshot backup is performed every 240 minutes.
    // *   **480**: A snapshot backup is performed every 480 minutes.
    // 
    // > *   You can configure a backup policy by using this parameter and the **PreferredBackupPeriod** parameter. For example, if you set **PreferredBackupPeriod** to Saturday,Sunday and BackupInterval to \\*\\*-1\\*\\*, a snapshot backup is performed on every Saturday and Sunday.
    // > *   If the instance runs PostgreSQL, BackupInterval is supported only when the instance is equipped with cloud disks.
    // > *   If the instance runs SQL Server, BackupInterval is supported only when the snapshot backup feature is enabled for the instance. For more information, see [Enable snapshot backups for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/211143.html).
    // > *   If **Category** is set to **Flash**, BackupInterval is invalid.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> backupInterval_ {};
    // Specifies whether to enable the log backup feature. Valid values:
    // 
    // *   **Enable**: enables the feature.
    // *   **Disabled**: disables the feature.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> backupLog_ {};
    // The backup method of the instance. Valid values:
    // 
    // *   **Physical**: physical backup
    // *   **Snapshot**: snapshot backup
    // 
    // Default value: **Physical**.
    // 
    // > *   This parameter takes effect only on instances that run SQL Server with cloud disks.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> backupMethod_ {};
    // The type of the backup. Valid values:
    // 
    // *   **DataBackupPolicy**: data backup
    // *   **LogBackupPolicy**: log backup
    shared_ptr<string> backupPolicyMode_ {};
    // Specifies whether the backup settings of a secondary instance are configured. Valid values:
    // 
    // *   **1**: secondary instance preferred
    // *   **2**: primary instance preferred
    // 
    // > *   This parameter is suitable only for instances that run SQL Server on RDS Cluster Edition.
    // > *   This parameter takes effect only when **BackupMethod** is set to **Physical**. If **BackupMethod** is set to **Snapshot**, backups are forcefully performed on the primary instance that runs SQL Server on RDS Cluster Edition.
    shared_ptr<int32_t> backupPriority_ {};
    // The number of days for which you want to retain data backup files. Valid values: **7 to 730**.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> backupRetentionPeriod_ {};
    // Specifies whether to enable the single-digit second backup feature. Valid values:
    // 
    // *   **Flash**: enables the feature.
    // *   **Standard**: disables the feature.
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> category_ {};
    // The format that is used to compress backup data. Valid values:
    // 
    // *   **0**: Backups are not compressed.
    // *   **1**: The zlib tool is used to compress backups into .tar.gz files.
    // *   **2**: The zlib tool is used to compress backups in parallel.
    // *   **4**: The QuickLZ tool is used to compress backups into .xb.gz files. This compression format is supported for instances that run MySQL 5.6 or MySQL 5.7. Backups in this compression format can be used to restore individual databases and tables. For more information, see [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html).
    // *   **8**: The QuickLZ tool is used to compress backups into .xb.gz files. This compression format is supported only for instances that run MySQL 8.0. Backups in this compression format cannot be used to restore individual databases and tables.
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> compressType_ {};
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int32_t> enableAdvancedBackupPolicy_ {};
    // Specifies whether to enable the log backup feature. Valid values:
    // 
    // *   **True** or **1**: enables the log backup feature.
    // *   **False** or **0**: disables the log backup feature.
    // 
    // > 
    // 
    // *   You must specify this parameter when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    // 
    // *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    shared_ptr<string> enableBackupLog_ {};
    // Specifies whether to enable incremental backup. Valid values:
    // 
    // *   **false** (default): disables the feature.
    // *   **true**: enables the feature.
    // 
    // > *   This parameter takes effect only on instances that run SQL Server with cloud disks.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<bool> enableIncrementDataBackup_ {};
    // Specifies whether to forcefully delete log backup files from the instance when the storage usage of the instance exceeds 80% or the amount of remaining storage on the instance is less than 5 GB. Valid values: **Enable and Disable**. You can retain the default value.
    // 
    // > *   You must specify this parameter when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    // > *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    shared_ptr<string> highSpaceUsageProtection_ {};
    // The number of hours for which you want to retain log backup files on the instance. Valid values: **0 to 168**. The value 0 specifies that log backup files are not retained on the instance. The value 168 is calculated based on the following formula: 7 × 24.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **LogBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **LogBackupPolicy**.
    shared_ptr<string> localLogRetentionHours_ {};
    // The maximum storage usage that is allowed for log backup files on the instance. If the storage usage for log backup files on the instance exceeds the value of this parameter, the system deletes earlier log backup files until the storage usage falls below the value of this parameter. Valid values:**0 to 50**. You can retain the default value.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **LogBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **LogBackupPolicy**.
    shared_ptr<string> localLogRetentionSpace_ {};
    // The frequency at which you want to back up the logs of the instance. Valid values:
    // 
    // *   **LogInterval**: A log backup is performed every 30 minutes.
    // *   The default value is the same as the data backup frequency.
    // 
    // > *   The value **LogInterval** is supported only for instances that run SQL Server.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> logBackupFrequency_ {};
    // The number of binary log files that you want to retain on the instance. Default value: **60**. Valid values: **6** to **100**.
    // 
    // > 
    // 
    // *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    // 
    // *   If the instance runs MySQL, you can set this parameter to \\*\\*-1\\*\\*. The value \\*\\*-1\\*\\* specifies that an unlimited number of binary log files can be retained on the instance.
    shared_ptr<int32_t> logBackupLocalRetentionNumber_ {};
    // The number of days for which the log backup is retained. Valid values: **7 to 730**. The log backup retention period cannot be longer than the data backup retention period.
    // 
    // > *   If you enable the log backup feature, you can specify the log backup retention period. This parameter is supported for instances that run MySQL and PostgreSQL.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy** or **LogBackupPolicy**.
    shared_ptr<string> logBackupRetentionPeriod_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The backup cycle. Specify at least two days of the week and separate the days with commas (,). Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // > *   You can configure a backup policy by using this parameter and the **BackupInterval** parameter. For example, if you set this parameter to Saturday,Sunday and the **BackupInterval** parameter to 30, a backup is performed every 30 minutes on every Saturday and Sunday.
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The time at which you want to perform a backup. Specify the time in the ISO 8601 standard in the *HH:mm*Z-*HH:mm*Z format. The time must be in UTC.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    shared_ptr<string> preferredBackupTime_ {};
    // The policy that is used to retain archived backup files if the instance is released. Valid values:
    // 
    // *   **None**: No archived backup files are retained.
    // *   **Lastest**: Only the last archived backup file is retained.
    // *   **All**: All archived backup files are retained.
    // 
    // > *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **DataBackupPolicy**.
    // > *   If the instance uses cloud disks and was created on or after February 1, 2024, this parameter is automatically set to **Lastest**. If the instance uses local disks in the same scenario, this parameter is automatically set to **None**. For more information, see [Backup for deleted instances](https://help.aliyun.com/document_detail/2836955.html).
    shared_ptr<string> releasedKeepPolicy_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
