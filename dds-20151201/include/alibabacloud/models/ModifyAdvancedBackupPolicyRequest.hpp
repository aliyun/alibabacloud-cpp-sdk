// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADVANCEDBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADVANCEDBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyAdvancedBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAdvancedBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedBackupDataPolicies, advancedBackupDataPolicies_);
      DARABONBA_PTR_TO_JSON(AdvancedBackupLogPolicies, advancedBackupLogPolicies_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(SnapshotBackupType, snapshotBackupType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAdvancedBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedBackupDataPolicies, advancedBackupDataPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvancedBackupLogPolicies, advancedBackupLogPolicies_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(SnapshotBackupType, snapshotBackupType_);
    };
    ModifyAdvancedBackupPolicyRequest() = default ;
    ModifyAdvancedBackupPolicyRequest(const ModifyAdvancedBackupPolicyRequest &) = default ;
    ModifyAdvancedBackupPolicyRequest(ModifyAdvancedBackupPolicyRequest &&) = default ;
    ModifyAdvancedBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAdvancedBackupPolicyRequest() = default ;
    ModifyAdvancedBackupPolicyRequest& operator=(const ModifyAdvancedBackupPolicyRequest &) = default ;
    ModifyAdvancedBackupPolicyRequest& operator=(ModifyAdvancedBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedBackupLogPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedBackupLogPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestType, destType_);
        DARABONBA_PTR_TO_JSON(EnableLogBackup, enableLogBackup_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(RetentionPeriod, retentionPeriod_);
        DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedBackupLogPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestType, destType_);
        DARABONBA_PTR_FROM_JSON(EnableLogBackup, enableLogBackup_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(RetentionPeriod, retentionPeriod_);
        DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      };
      AdvancedBackupLogPolicies() = default ;
      AdvancedBackupLogPolicies(const AdvancedBackupLogPolicies &) = default ;
      AdvancedBackupLogPolicies(AdvancedBackupLogPolicies &&) = default ;
      AdvancedBackupLogPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedBackupLogPolicies() = default ;
      AdvancedBackupLogPolicies& operator=(const AdvancedBackupLogPolicies &) = default ;
      AdvancedBackupLogPolicies& operator=(AdvancedBackupLogPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->destRegion_ == nullptr && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->policyId_ == nullptr && this->retentionPeriod_ == nullptr
        && this->retentionType_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvancedBackupLogPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvancedBackupLogPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvancedBackupLogPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // enableLogBackup Field Functions 
      bool hasEnableLogBackup() const { return this->enableLogBackup_ != nullptr;};
      void deleteEnableLogBackup() { this->enableLogBackup_ = nullptr;};
      inline int32_t getEnableLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableLogBackup_, 0) };
      inline AdvancedBackupLogPolicies& setEnableLogBackup(int32_t enableLogBackup) { DARABONBA_PTR_SET_VALUE(enableLogBackup_, enableLogBackup) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AdvancedBackupLogPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // retentionPeriod Field Functions 
      bool hasRetentionPeriod() const { return this->retentionPeriod_ != nullptr;};
      void deleteRetentionPeriod() { this->retentionPeriod_ = nullptr;};
      inline int32_t getRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(retentionPeriod_, 0) };
      inline AdvancedBackupLogPolicies& setRetentionPeriod(int32_t retentionPeriod) { DARABONBA_PTR_SET_VALUE(retentionPeriod_, retentionPeriod) };


      // retentionType Field Functions 
      bool hasRetentionType() const { return this->retentionType_ != nullptr;};
      void deleteRetentionType() { this->retentionType_ = nullptr;};
      inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
      inline AdvancedBackupLogPolicies& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvancedBackupLogPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvancedBackupLogPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    protected:
      // The operation type. Valid values:
      // 
      // - CREATE: Creates a policy.
      // - UPDATE: Updates a policy.
      // 
      // >Notice: This parameter takes effect only for geo-redundancy. To delete geo-redundancy, set EnableLogBackup to 0 and set ActionType to UPDATE.
      // 
      // This parameter is required.
      shared_ptr<string> actionType_ {};
      // The region where the geo-redundancy log backup is stored.
      // 
      // > Required for geo-redundancy.
      shared_ptr<string> destRegion_ {};
      // The destination type of the log backup policy. Valid values:
      //  
      // - level1: same-region backup. 
      // - level2Cross: cross-region backup.
      shared_ptr<string> destType_ {};
      // Specifies whether to enable log backup. Valid values:
      // 
      // - **1**: enabled.
      // - **0**: disabled.
      // 
      // > 
      // > - Log backup must be enabled for sharded instances.
      // > - You must enable same-region log backup before you can enable cross-region log backup.
      // 
      // This parameter is required.
      shared_ptr<int32_t> enableLogBackup_ {};
      // The ID of the log backup policy. This parameter is required only for cross-region log backup policies.
      shared_ptr<string> policyId_ {};
      // The retention period of the log backup in days. This parameter takes effect when RetentionType is set to delay. Valid values:
      // 
      // - Same-region backup: 7 to 7300 days. 
      // - Geo-redundancy: 3 to 1825 days. The value must be less than the backup retention period of the geo-redundancy policy.
      shared_ptr<int32_t> retentionPeriod_ {};
      // The retention cycle type of the log backup. Valid values:
      // 
      // - **never**: long-term retention (LTR).
      // - **delay**: retention for a fixed number of days.
      shared_ptr<string> retentionType_ {};
      // The region where the source instance resides.
      shared_ptr<string> srcRegion_ {};
      // The source type of the log backup policy. Valid values:
      //   
      // - db: same-region backup.
      // - level1: cross-region backup.
      shared_ptr<string> srcType_ {};
    };

    class AdvancedBackupDataPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedBackupDataPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(BackupPolicy, backupPolicy_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestType, destType_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
        DARABONBA_PTR_TO_JSON(PreserveOneEachHour, preserveOneEachHour_);
        DARABONBA_PTR_TO_JSON(RetentionPeriod, retentionPeriod_);
        DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedBackupDataPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(BackupPolicy, backupPolicy_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestType, destType_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
        DARABONBA_PTR_FROM_JSON(PreserveOneEachHour, preserveOneEachHour_);
        DARABONBA_PTR_FROM_JSON(RetentionPeriod, retentionPeriod_);
        DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      };
      AdvancedBackupDataPolicies() = default ;
      AdvancedBackupDataPolicies(const AdvancedBackupDataPolicies &) = default ;
      AdvancedBackupDataPolicies(AdvancedBackupDataPolicies &&) = default ;
      AdvancedBackupDataPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedBackupDataPolicies() = default ;
      AdvancedBackupDataPolicies& operator=(const AdvancedBackupDataPolicies &) = default ;
      AdvancedBackupDataPolicies& operator=(AdvancedBackupDataPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->backupPolicy_ == nullptr && this->destRegion_ == nullptr && this->destType_ == nullptr && this->policyId_ == nullptr && this->preferredBackupPeriod_ == nullptr
        && this->preserveOneEachHour_ == nullptr && this->retentionPeriod_ == nullptr && this->retentionType_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvancedBackupDataPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // backupPolicy Field Functions 
      bool hasBackupPolicy() const { return this->backupPolicy_ != nullptr;};
      void deleteBackupPolicy() { this->backupPolicy_ = nullptr;};
      inline string getBackupPolicy() const { DARABONBA_PTR_GET_DEFAULT(backupPolicy_, "") };
      inline AdvancedBackupDataPolicies& setBackupPolicy(string backupPolicy) { DARABONBA_PTR_SET_VALUE(backupPolicy_, backupPolicy) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvancedBackupDataPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvancedBackupDataPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AdvancedBackupDataPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // preferredBackupPeriod Field Functions 
      bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
      void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
      inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
      inline AdvancedBackupDataPolicies& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


      // preserveOneEachHour Field Functions 
      bool hasPreserveOneEachHour() const { return this->preserveOneEachHour_ != nullptr;};
      void deletePreserveOneEachHour() { this->preserveOneEachHour_ = nullptr;};
      inline bool getPreserveOneEachHour() const { DARABONBA_PTR_GET_DEFAULT(preserveOneEachHour_, false) };
      inline AdvancedBackupDataPolicies& setPreserveOneEachHour(bool preserveOneEachHour) { DARABONBA_PTR_SET_VALUE(preserveOneEachHour_, preserveOneEachHour) };


      // retentionPeriod Field Functions 
      bool hasRetentionPeriod() const { return this->retentionPeriod_ != nullptr;};
      void deleteRetentionPeriod() { this->retentionPeriod_ = nullptr;};
      inline int32_t getRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(retentionPeriod_, 0) };
      inline AdvancedBackupDataPolicies& setRetentionPeriod(int32_t retentionPeriod) { DARABONBA_PTR_SET_VALUE(retentionPeriod_, retentionPeriod) };


      // retentionType Field Functions 
      bool hasRetentionType() const { return this->retentionType_ != nullptr;};
      void deleteRetentionType() { this->retentionType_ = nullptr;};
      inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
      inline AdvancedBackupDataPolicies& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvancedBackupDataPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvancedBackupDataPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    protected:
      // The action. Valid values:
      // 
      // - **CREATE**: Creates a policy.
      // - **UPDATE**: Updates a policy.
      // - **DELETE**: Deletes a policy. If this value is specified, only the PolicyId parameter is required.
      // 
      // This parameter is required.
      shared_ptr<string> actionType_ {};
      // The scheduling type of the advanced policy. Valid values:
      // 
      // - dayOfWeek: scheduled by week.
      // - dayOfMonth: scheduled by month.
      // - dayOfYear: scheduled by year.
      // - backupInterval: scheduled at a fixed interval (high-frequency backup).
      // 
      // > 
      // > - Multiple high-frequency backup policies are not supported.
      // > - Multiple geo-redundancy backups are not supported, and geo-redundancy policies only support dayOfWeek.
      // 
      // >Notice: Required when ActionType is not DELETE.
      shared_ptr<string> backupPolicy_ {};
      // The destination region of the backup policy.
      // 
      // >Notice: Required when ActionType is not DELETE.
      shared_ptr<string> destRegion_ {};
      // The destination type of the backup policy. Valid values:
      //  
      // - level1: same-region backup.
      // - level2Cross: cross-region backup.
      // 
      // >Notice: Required when ActionType is not DELETE.
      shared_ptr<string> destType_ {};
      // The ID of the backup policy.
      // 
      // 
      // >Notice: Required when ActionType is not CREATE.
      shared_ptr<string> policyId_ {};
      // The backup cycle. Valid values:
      // 
      // - When BackupPolicy is set to dayOfWeek: 1, 2, 3, 4, 5, 6, and 7 represent Monday to Sunday. At least two backups must be performed per week.
      // - When BackupPolicy is set to dayOfMonth: 1, 3, and -1 represent the 1st, 3rd, and last day of each month. -1 represents the last day of the month.
      // - When BackupPolicy is set to dayOfYear: 01-07 represents January 7. Only one day can be selected.
      // - When BackupPolicy is set to backupInterval: specify one of the following numbers in minutes. For sharded clusters, the valid values are 30, 60, 120, 180, 240, 360, 480, and 720. For replica sets, the valid values are 15, 30, 60, 120, 180, 240, 360, 480, and 720.
      // 
      // Note:
      // 
      // >Notice: Required when ActionType is not DELETE.
      // Geo-redundancy policies only support dayOfWeek.
      shared_ptr<string> preferredBackupPeriod_ {};
      // Specifies whether to enable hourly sparse backup. Valid values:
      // 
      // - true: When the backup frequency is in minutes, all snapshots taken within 1 hour from the current time are retained. For snapshots taken more than 1 hour but within 24 hours from the current time, only the first snapshot after the hour is retained.
      // - false: All snapshots within the retention period of high-frequency backups are retained.
      shared_ptr<bool> preserveOneEachHour_ {};
      // The retention period of the backup plan in days. Valid values:
      // 
      // - Same-region backup: 7 to 7300 days.
      // - Geo-redundancy: 3 to 1825 days.
      // 
      // >Notice: Required when RetentionType is set to delay.
      shared_ptr<int32_t> retentionPeriod_ {};
      // The retention cycle type of the backup set. Valid values:
      // 
      // - **never**: long-term retention (LTR).
      // - **delay**: retention for a fixed number of days.
      // 
      // >Notice: Required when ActionType is not DELETE.
      shared_ptr<string> retentionType_ {};
      // The region where the instance resides.
      // 
      // >Notice: Required when ActionType is not DELETE.
      shared_ptr<string> srcRegion_ {};
      // The source type of the backup policy. Valid values:
      //   
      // - db: same-region backup.
      // - level1: cross-region backup.
      // 
      // >Notice: Required when ActionType is not DELETE.
      shared_ptr<string> srcType_ {};
    };

    virtual bool empty() const override { return this->advancedBackupDataPolicies_ == nullptr
        && this->advancedBackupLogPolicies_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->DBInstanceId_ == nullptr && this->preferredBackupTime_ == nullptr && this->snapshotBackupType_ == nullptr; };
    // advancedBackupDataPolicies Field Functions 
    bool hasAdvancedBackupDataPolicies() const { return this->advancedBackupDataPolicies_ != nullptr;};
    void deleteAdvancedBackupDataPolicies() { this->advancedBackupDataPolicies_ = nullptr;};
    inline const vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies> & getAdvancedBackupDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedBackupDataPolicies_, vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies>) };
    inline vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies> getAdvancedBackupDataPolicies() { DARABONBA_PTR_GET(advancedBackupDataPolicies_, vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies>) };
    inline ModifyAdvancedBackupPolicyRequest& setAdvancedBackupDataPolicies(const vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies> & advancedBackupDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedBackupDataPolicies_, advancedBackupDataPolicies) };
    inline ModifyAdvancedBackupPolicyRequest& setAdvancedBackupDataPolicies(vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies> && advancedBackupDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedBackupDataPolicies_, advancedBackupDataPolicies) };


    // advancedBackupLogPolicies Field Functions 
    bool hasAdvancedBackupLogPolicies() const { return this->advancedBackupLogPolicies_ != nullptr;};
    void deleteAdvancedBackupLogPolicies() { this->advancedBackupLogPolicies_ = nullptr;};
    inline const vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies> & getAdvancedBackupLogPolicies() const { DARABONBA_PTR_GET_CONST(advancedBackupLogPolicies_, vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies>) };
    inline vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies> getAdvancedBackupLogPolicies() { DARABONBA_PTR_GET(advancedBackupLogPolicies_, vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies>) };
    inline ModifyAdvancedBackupPolicyRequest& setAdvancedBackupLogPolicies(const vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies> & advancedBackupLogPolicies) { DARABONBA_PTR_SET_VALUE(advancedBackupLogPolicies_, advancedBackupLogPolicies) };
    inline ModifyAdvancedBackupPolicyRequest& setAdvancedBackupLogPolicies(vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies> && advancedBackupLogPolicies) { DARABONBA_PTR_SET_RVALUE(advancedBackupLogPolicies_, advancedBackupLogPolicies) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline int32_t getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, 0) };
    inline ModifyAdvancedBackupPolicyRequest& setBackupRetentionPolicyOnClusterDeletion(int32_t backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAdvancedBackupPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyAdvancedBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // snapshotBackupType Field Functions 
    bool hasSnapshotBackupType() const { return this->snapshotBackupType_ != nullptr;};
    void deleteSnapshotBackupType() { this->snapshotBackupType_ = nullptr;};
    inline string getSnapshotBackupType() const { DARABONBA_PTR_GET_DEFAULT(snapshotBackupType_, "") };
    inline ModifyAdvancedBackupPolicyRequest& setSnapshotBackupType(string snapshotBackupType) { DARABONBA_PTR_SET_VALUE(snapshotBackupType_, snapshotBackupType) };


  protected:
    // The list of backup policies.
    shared_ptr<vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies>> advancedBackupDataPolicies_ {};
    // The list of log backup policies.
    shared_ptr<vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies>> advancedBackupLogPolicies_ {};
    // The backup retention policy. Valid values:
    // 
    // - 0: All backup sets of the instance are deleted immediately when the instance is released.
    // - 1: The last backup set is retained for long-term retention (LTR) when the instance is released.
    // - 2: All backup sets are retained for long-term retention (LTR) when the instance is released.
    // 
    // This parameter is required.
    shared_ptr<int32_t> backupRetentionPolicyOnClusterDeletion_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The time period during which the backup is performed. The format is <i>HH:mm</i>Z-<i>HH:mm</i>Z (UTC).
    // 
    // > The time range is limited to 1 hour.
    shared_ptr<string> preferredBackupTime_ {};
    // The snapshot backup type. Valid values:
    // 
    // - **Flash**: backup within seconds.
    // - **Standard**: standard backup. This is the default value.
    shared_ptr<string> snapshotBackupType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
