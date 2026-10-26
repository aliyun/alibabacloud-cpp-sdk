// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_TO_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_TO_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_FROM_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_FROM_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
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
    class AdvancedDataPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedDataPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(AutoCreated, autoCreated_);
        DARABONBA_PTR_TO_JSON(BakType, bakType_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestType, destType_);
        DARABONBA_PTR_TO_JSON(DumpAction, dumpAction_);
        DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_TO_JSON(FilterType, filterType_);
        DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
        DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_TO_JSON(RetentionValue, retentionValue_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedDataPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(AutoCreated, autoCreated_);
        DARABONBA_PTR_FROM_JSON(BakType, bakType_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestType, destType_);
        DARABONBA_PTR_FROM_JSON(DumpAction, dumpAction_);
        DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
        DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
        DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_FROM_JSON(RetentionValue, retentionValue_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
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
        && this->autoCreated_ == nullptr && this->bakType_ == nullptr && this->destRegion_ == nullptr && this->destType_ == nullptr && this->dumpAction_ == nullptr
        && this->filterKey_ == nullptr && this->filterType_ == nullptr && this->filterValue_ == nullptr && this->onlyPreserveOneEachDay_ == nullptr && this->onlyPreserveOneEachHour_ == nullptr
        && this->policyId_ == nullptr && this->retentionType_ == nullptr && this->retentionValue_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr
        && this->storageClass_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvancedDataPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // autoCreated Field Functions 
      bool hasAutoCreated() const { return this->autoCreated_ != nullptr;};
      void deleteAutoCreated() { this->autoCreated_ = nullptr;};
      inline bool getAutoCreated() const { DARABONBA_PTR_GET_DEFAULT(autoCreated_, false) };
      inline AdvancedDataPolicies& setAutoCreated(bool autoCreated) { DARABONBA_PTR_SET_VALUE(autoCreated_, autoCreated) };


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


      // dumpAction Field Functions 
      bool hasDumpAction() const { return this->dumpAction_ != nullptr;};
      void deleteDumpAction() { this->dumpAction_ = nullptr;};
      inline string getDumpAction() const { DARABONBA_PTR_GET_DEFAULT(dumpAction_, "") };
      inline AdvancedDataPolicies& setDumpAction(string dumpAction) { DARABONBA_PTR_SET_VALUE(dumpAction_, dumpAction) };


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


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AdvancedDataPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // retentionType Field Functions 
      bool hasRetentionType() const { return this->retentionType_ != nullptr;};
      void deleteRetentionType() { this->retentionType_ = nullptr;};
      inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
      inline AdvancedDataPolicies& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


      // retentionValue Field Functions 
      bool hasRetentionValue() const { return this->retentionValue_ != nullptr;};
      void deleteRetentionValue() { this->retentionValue_ = nullptr;};
      inline string getRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(retentionValue_, "") };
      inline AdvancedDataPolicies& setRetentionValue(string retentionValue) { DARABONBA_PTR_SET_VALUE(retentionValue_, retentionValue) };


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


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline AdvancedDataPolicies& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    protected:
      // The operation type. Valid values:
      // 
      // - **CREATE**: creates a policy
      // - **UPDATE**: updates a policy
      // - **DELETE**: deletes a policy
      shared_ptr<string> actionType_ {};
      // Specifies whether the backup policy is automatically generated by the system.
      // 
      // > This parameter value is automatically generated. You do not need to specify this parameter.
      shared_ptr<bool> autoCreated_ {};
      // The backup type. Valid values:
      // 
      // - **F**: full backup
      // > This parameter cannot be modified and is fixed to F.
      shared_ptr<string> bakType_ {};
      // The destination region of the backup policy.
      shared_ptr<string> destRegion_ {};
      // The destination type of the backup policy. Valid values:
      // 
      // - **level1**: level-1 backup
      // - **level2**: level-2 backup
      // - **level2Cross**: cross-region backup of level-2 backups
      shared_ptr<string> destType_ {};
      // The method to convert level-1 backups to level-2 backups. Valid values:
      // 
      // - **copy**: copy
      shared_ptr<string> dumpAction_ {};
      // The scheduling type. Valid values:
      // 
      // - **dayOfWeek**: schedules by week
      // - **dayOfMonth**: schedules by month
      // - **dayOfYear**: schedules by year
      // - **backupInterval**: schedules at a fixed interval
      // 
      // > This parameter is required only when FilterType is set to **crontab**.
      shared_ptr<string> filterKey_ {};
      // The filter type of the advanced policy. Valid values:
      // 
      // - **crontab**: periodic scheduling
      // - **event**: event-based scheduling
      shared_ptr<string> filterType_ {};
      // The backup cycle.
      shared_ptr<string> filterValue_ {};
      // The 24-hour data retention policy. Valid values:
      // - **true**: retains only the first backup set of the day after 24 hours.
      // - **false**: retains all backup sets.
      shared_ptr<bool> onlyPreserveOneEachDay_ {};
      // The hourly data retention policy. Valid values:
      // * **true**: retains only the earliest backup set of each hour after 1 hour.
      // * **false**: retains all backup sets.
      // 
      // > This parameter cannot be modified and is fixed to true.
      shared_ptr<bool> onlyPreserveOneEachHour_ {};
      // The ID of the backup policy. You can call the [DescribeBackupPolicy](https://help.aliyun.com/document_detail/2319231.html) operation to query the ID.
      shared_ptr<string> policyId_ {};
      // The retention period type of the backup set. Valid values:
      // 
      // - **never**: never expires
      // - **delay**: expires after a fixed number of days
      shared_ptr<string> retentionType_ {};
      // The number of days for which backups are retained.
      shared_ptr<string> retentionValue_ {};
      // The source region of the backup policy.
      shared_ptr<string> srcRegion_ {};
      // The source type of the backup policy. Valid values:
      // 
      // - **db**: database cluster
      // - **level1**: level-1 backup
      // - **level2**: level-2 backup
      // - **level2Cross**: cross-region backup of level-2 backups
      shared_ptr<string> srcType_ {};
      // The storage class used by the advanced backup policy.
      shared_ptr<string> storageClass_ {};
    };

    virtual bool empty() const override { return this->advancedDataPolicies_ == nullptr
        && this->backupFrequency_ == nullptr && this->backupPolicyLevel_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->DBClusterId_ == nullptr && this->dataLevel1BackupFrequency_ == nullptr
        && this->dataLevel1BackupPeriod_ == nullptr && this->dataLevel1BackupRetentionPeriod_ == nullptr && this->dataLevel1BackupTime_ == nullptr && this->dataLevel2BackupAnotherRegionRegion_ == nullptr && this->dataLevel2BackupAnotherRegionRetentionPeriod_ == nullptr
        && this->dataLevel2BackupPeriod_ == nullptr && this->dataLevel2BackupRetentionPeriod_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->preferredBackupPeriod_ == nullptr
        && this->preferredBackupTime_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // advancedDataPolicies Field Functions 
    bool hasAdvancedDataPolicies() const { return this->advancedDataPolicies_ != nullptr;};
    void deleteAdvancedDataPolicies() { this->advancedDataPolicies_ = nullptr;};
    inline const vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> & getAdvancedDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedDataPolicies_, vector<ModifyBackupPolicyRequest::AdvancedDataPolicies>) };
    inline vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> getAdvancedDataPolicies() { DARABONBA_PTR_GET(advancedDataPolicies_, vector<ModifyBackupPolicyRequest::AdvancedDataPolicies>) };
    inline ModifyBackupPolicyRequest& setAdvancedDataPolicies(const vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> & advancedDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedDataPolicies_, advancedDataPolicies) };
    inline ModifyBackupPolicyRequest& setAdvancedDataPolicies(vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> && advancedDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicies_, advancedDataPolicies) };


    // backupFrequency Field Functions 
    bool hasBackupFrequency() const { return this->backupFrequency_ != nullptr;};
    void deleteBackupFrequency() { this->backupFrequency_ = nullptr;};
    inline string getBackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(backupFrequency_, "") };
    inline ModifyBackupPolicyRequest& setBackupFrequency(string backupFrequency) { DARABONBA_PTR_SET_VALUE(backupFrequency_, backupFrequency) };


    // backupPolicyLevel Field Functions 
    bool hasBackupPolicyLevel() const { return this->backupPolicyLevel_ != nullptr;};
    void deleteBackupPolicyLevel() { this->backupPolicyLevel_ = nullptr;};
    inline string getBackupPolicyLevel() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyLevel_, "") };
    inline ModifyBackupPolicyRequest& setBackupPolicyLevel(string backupPolicyLevel) { DARABONBA_PTR_SET_VALUE(backupPolicyLevel_, backupPolicyLevel) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline ModifyBackupPolicyRequest& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyBackupPolicyRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataLevel1BackupFrequency Field Functions 
    bool hasDataLevel1BackupFrequency() const { return this->dataLevel1BackupFrequency_ != nullptr;};
    void deleteDataLevel1BackupFrequency() { this->dataLevel1BackupFrequency_ = nullptr;};
    inline string getDataLevel1BackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupFrequency_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupFrequency(string dataLevel1BackupFrequency) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupFrequency_, dataLevel1BackupFrequency) };


    // dataLevel1BackupPeriod Field Functions 
    bool hasDataLevel1BackupPeriod() const { return this->dataLevel1BackupPeriod_ != nullptr;};
    void deleteDataLevel1BackupPeriod() { this->dataLevel1BackupPeriod_ = nullptr;};
    inline string getDataLevel1BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupPeriod(string dataLevel1BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupPeriod_, dataLevel1BackupPeriod) };


    // dataLevel1BackupRetentionPeriod Field Functions 
    bool hasDataLevel1BackupRetentionPeriod() const { return this->dataLevel1BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel1BackupRetentionPeriod() { this->dataLevel1BackupRetentionPeriod_ = nullptr;};
    inline string getDataLevel1BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupRetentionPeriod(string dataLevel1BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupRetentionPeriod_, dataLevel1BackupRetentionPeriod) };


    // dataLevel1BackupTime Field Functions 
    bool hasDataLevel1BackupTime() const { return this->dataLevel1BackupTime_ != nullptr;};
    void deleteDataLevel1BackupTime() { this->dataLevel1BackupTime_ = nullptr;};
    inline string getDataLevel1BackupTime() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupTime_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel1BackupTime(string dataLevel1BackupTime) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupTime_, dataLevel1BackupTime) };


    // dataLevel2BackupAnotherRegionRegion Field Functions 
    bool hasDataLevel2BackupAnotherRegionRegion() const { return this->dataLevel2BackupAnotherRegionRegion_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRegion() { this->dataLevel2BackupAnotherRegionRegion_ = nullptr;};
    inline string getDataLevel2BackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRegion_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupAnotherRegionRegion(string dataLevel2BackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRegion_, dataLevel2BackupAnotherRegionRegion) };


    // dataLevel2BackupAnotherRegionRetentionPeriod Field Functions 
    bool hasDataLevel2BackupAnotherRegionRetentionPeriod() const { return this->dataLevel2BackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRetentionPeriod() { this->dataLevel2BackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string getDataLevel2BackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupAnotherRegionRetentionPeriod(string dataLevel2BackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRetentionPeriod_, dataLevel2BackupAnotherRegionRetentionPeriod) };


    // dataLevel2BackupPeriod Field Functions 
    bool hasDataLevel2BackupPeriod() const { return this->dataLevel2BackupPeriod_ != nullptr;};
    void deleteDataLevel2BackupPeriod() { this->dataLevel2BackupPeriod_ = nullptr;};
    inline string getDataLevel2BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupPeriod(string dataLevel2BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupPeriod_, dataLevel2BackupPeriod) };


    // dataLevel2BackupRetentionPeriod Field Functions 
    bool hasDataLevel2BackupRetentionPeriod() const { return this->dataLevel2BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupRetentionPeriod() { this->dataLevel2BackupRetentionPeriod_ = nullptr;};
    inline string getDataLevel2BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setDataLevel2BackupRetentionPeriod(string dataLevel2BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupRetentionPeriod_, dataLevel2BackupRetentionPeriod) };


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
    // The advanced backup policy.
    // > *  * This parameter is not supported by PolarDB for PostgreSQL (Compatible with Oracle) and PolarDB for PostgreSQL.
    // > * * This parameter is supported only by clusters whose BackupPolicyLevel is set to Advanced.
    shared_ptr<vector<ModifyBackupPolicyRequest::AdvancedDataPolicies>> advancedDataPolicies_ {};
    // The backup frequency. Valid values:
    // 
    // - **Normal** (default): standard backup, performed once a day at a scheduled time.
    // - **2/24H**: high-frequency backup, performed once every 2 hours.
    // - **3/24H**: high-frequency backup, performed once every 3 hours.
    // - **4/24H**: high-frequency backup, performed once every 4 hours.
    // 
    // > * * After high-frequency backup is enabled, all backups completed within 24 hours are retained. For backups that exceed 24 hours, the system retains only the first backup completed after 00:00 each day and deletes the rest.
    // > * * After high-frequency backup is enabled, all days of the week (Monday to Sunday) are selected by default for the backup epoch **PreferredBackupPeriod** parameter.
    // > *  * This parameter is not supported if the region where your PolarDB for MySQL cluster resides supports the cross-region backup feature. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // > * * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> backupFrequency_ {};
    // The level of the backup policy. Valid values:
    // * **Normal**: standard backup
    // * **Advanced**: advanced backup
    // > *  * This parameter is not supported by PolarDB for PostgreSQL (Compatible with Oracle) and PolarDB for PostgreSQL.
    // > * * You can check the AdvancedPolicyOption parameter in the response of the [DescribeBackupPolicy](https://help.aliyun.com/document_detail/2319231.html) operation to determine whether the cluster supports advanced backup. If the cluster supports advanced backup, you can apply for this feature in [Advanced backup settings](~611727~~).
    // > * * After advanced backup is enabled, you **cannot** roll back to standard backup.
    shared_ptr<string> backupPolicyLevel_ {};
    // Specifies whether to retain backups when a cluster is deleted. Valid values:
    // 
    // - **ALL**: long-term retention (LTR) of all backups.
    // 
    // - **LATEST**: long-term retention (LTR) of the last backup.
    // 
    // - **NONE**: does not retain backup sets.
    // 
    // > Default value: NONE.
    shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ {};
    // The cluster ID.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query all clusters in a specific region, including their cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The backup frequency. Valid values:
    // 
    // - **Normal** (default): standard backup, performed once a day at a scheduled time
    // - **2/24H**: high-frequency backup, performed once every 2 hours
    // - **3/24H**: high-frequency backup, performed once every 3 hours
    // - **4/24H**: high-frequency backup, performed once every 4 hours
    // 
    // > * * This parameter is not supported by PolarDB for PostgreSQL (Compatible with Oracle) and PolarDB for PostgreSQL.
    // > * * This parameter is not supported if the region where your PolarDB for MySQL cluster resides does not support cross-region backup. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // > * * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> dataLevel1BackupFrequency_ {};
    // The backup cycle for level-1 backups. Valid values: 
    // * **Monday**: Monday
    // * **Tuesday**: Tuesday
    // * **Wednesday**: Wednesday
    // * **Thursday**: Thursday
    // * **Friday**: Friday
    // * **Saturday**: Saturday
    // * **Sunday**: Sunday
    // 
    // > * * You must select at least two days. Separate multiple values with commas (,).
    // > * * This parameter is not supported by PolarDB for PostgreSQL (Compatible with Oracle) and PolarDB for PostgreSQL.
    // > * * This parameter is not supported if the region where your PolarDB for MySQL cluster resides does not support cross-region backup. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // > * * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> dataLevel1BackupPeriod_ {};
    // The retention period of level-1 backups. Valid values: 3 to 14. Unit: days.
    // 
    // > * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> dataLevel1BackupRetentionPeriod_ {};
    // The time period during which automatic backups are performed. The time must be in the `hh:mmZ-hh:mmZ` format (UTC time) and must be on the hour with a 1-hour interval, such as `14:00Z-15:00Z`.
    // 
    // > * This parameter is not supported by PolarDB for PostgreSQL (Compatible with Oracle) and PolarDB for PostgreSQL.
    // > * This parameter is not supported if the region where your PolarDB for MySQL cluster resides does not support cross-region backup. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> dataLevel1BackupTime_ {};
    // The destination region for cross-region backup of level-2 backups. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // > * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> dataLevel2BackupAnotherRegionRegion_ {};
    // The retention epoch for cross-region backup of level-2 backups. Valid values:
    // 
    // - **0**: shutdown of the level-2 backup feature.
    // 
    // - **30 to 7300**: the retention epoch of level-2 backups, in days.
    // 
    // - **-1**: long-term retention (LTR) of level-2 backups.
    // 
    //  > * * When a cluster is created, the default value is **0**, which indicates the shutdown of the cross-region backup feature for level-2 backups.
    // > * * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> dataLevel2BackupAnotherRegionRetentionPeriod_ {};
    // The backup cycle for level-2 backups. Valid values: 
    // * **Monday**: Monday
    // * **Tuesday**: Tuesday
    // * **Wednesday**: Wednesday
    // * **Thursday**: Thursday
    // * **Friday**: Friday
    // * **Saturday**: Saturday
    // * **Sunday**: Sunday
    // 
    // > * * You must select at least two days. Separate multiple values with commas (,).
    // > * * This parameter is not supported by PolarDB for PostgreSQL (Compatible with Oracle) and PolarDB for PostgreSQL.
    // > * * This parameter is not supported if the region where your PolarDB for MySQL cluster resides does not support cross-region backup. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // > * * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> dataLevel2BackupPeriod_ {};
    // The retention epoch of level-2 backups. Valid values:
    // 
    // - **0**: shutdown of the level-2 backup feature.
    // 
    // - **30 to 7300**: the retention epoch of level-2 backups, in days.
    // 
    // - **-1**: long-term retention (LTR) of level-2 backups.
    // 
    //  >* * When a cluster is created, the default value is **0**, which indicates the shutdown of the level-2 backup feature.
    // > * * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> dataLevel2BackupRetentionPeriod_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The backup cycle. Valid values: 
    // * **Monday**: Monday
    // * **Tuesday**: Tuesday
    // * **Wednesday**: Wednesday
    // * **Thursday**: Thursday
    // * **Friday**: Friday
    // * **Saturday**: Saturday
    // * **Sunday**: Sunday
    // 
    // > * * You must select at least two days. Separate multiple values with commas (,).
    // > * * This parameter is not supported if the region where your PolarDB for MySQL cluster resides supports cross-region backup. For more information about the regions that support cross-region backup, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    // > * * After advanced backup is enabled, this parameter no longer takes effect. Use the AdvancedDataPolicies parameter instead.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The time period during which automatic backups are performed. The time must be in the `hh:mmZ-hh:mmZ` format (UTC time) and must be on the hour with a 1-hour interval, such as `14:00Z-15:00Z`.
    shared_ptr<string> preferredBackupTime_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
