// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDBACKUPPOLICYRESPONSEBODY_HPP_
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
  class DescribeAdvancedBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedBackupDataPolicies, advancedBackupDataPolicies_);
      DARABONBA_PTR_TO_JSON(AdvancedBackupLogPolicies, advancedBackupLogPolicies_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotBackupType, snapshotBackupType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedBackupDataPolicies, advancedBackupDataPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvancedBackupLogPolicies, advancedBackupLogPolicies_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotBackupType, snapshotBackupType_);
    };
    DescribeAdvancedBackupPolicyResponseBody() = default ;
    DescribeAdvancedBackupPolicyResponseBody(const DescribeAdvancedBackupPolicyResponseBody &) = default ;
    DescribeAdvancedBackupPolicyResponseBody(DescribeAdvancedBackupPolicyResponseBody &&) = default ;
    DescribeAdvancedBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedBackupPolicyResponseBody() = default ;
    DescribeAdvancedBackupPolicyResponseBody& operator=(const DescribeAdvancedBackupPolicyResponseBody &) = default ;
    DescribeAdvancedBackupPolicyResponseBody& operator=(DescribeAdvancedBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedBackupLogPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedBackupLogPolicies& obj) { 
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
      virtual bool empty() const override { return this->destRegion_ == nullptr
        && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->policyId_ == nullptr && this->retentionPeriod_ == nullptr && this->retentionType_ == nullptr
        && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
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
      inline string getRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(retentionPeriod_, "") };
      inline AdvancedBackupLogPolicies& setRetentionPeriod(string retentionPeriod) { DARABONBA_PTR_SET_VALUE(retentionPeriod_, retentionPeriod) };


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
      // The destination region of the log backup policy.
      shared_ptr<string> destRegion_ {};
      // The destination type of the log backup policy. Valid values:
      // - level1: same-region backup
      // - level2Cross: cross-region backup
      shared_ptr<string> destType_ {};
      // Specifies whether log backup is enabled. Valid values:
      // - **1**: enabled
      // - **0**: disabled
      shared_ptr<int32_t> enableLogBackup_ {};
      // The ID of the log backup policy. This parameter is returned only for cross-region log backup policies.
      shared_ptr<string> policyId_ {};
      // The number of days for which log backups are retained. This parameter takes effect only when RetentionType is set to delay.
      shared_ptr<string> retentionPeriod_ {};
      // The retention epoch type of log backups. Valid values:
      // - **never**: long-term retention (LTR)
      // - **delay**: fixed-day retention
      shared_ptr<string> retentionType_ {};
      // The region where the source instance resides.
      shared_ptr<string> srcRegion_ {};
      // The source type of the log backup policy. Valid values:
      // - db: same-region backup
      // - level1: cross-region backup
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
      // The action type.
      shared_ptr<string> actionType_ {};
      // The scheduling type of the advanced policy. Valid values:
      // - dayOfWeek: weekly scheduling
      // - dayOfMonth: monthly scheduling
      // - dayOfYear: yearly scheduling
      // - backupInterval: fixed-interval scheduling (high-frequency backup)
      shared_ptr<string> backupPolicy_ {};
      // The destination region of the backup policy.
      shared_ptr<string> destRegion_ {};
      // The destination type of the backup policy. Valid values:
      // - level1: same-region backup
      // - level2Cross: cross-region backup
      shared_ptr<string> destType_ {};
      // The ID of the backup policy.
      shared_ptr<string> policyId_ {};
      // The backup cycle. 
      // - When **BackupPolicy** is set to **dayOfWeek**, the values 1, 2, 3, 4, 5, 6, and 7 represent Monday to Sunday.
      // - When **BackupPolicy** is set to **dayOfMonth**, the values 1, 3, and -1 represent the 1st, 3rd, and last day of each month.
      // - When **BackupPolicy** is set to **dayOfYear**, the value 01-07 represents January 7.
      // - When **BackupPolicy** is set to **backupInterval**, the value 30 represents a backup every 30 minutes.
      shared_ptr<string> preferredBackupPeriod_ {};
      // Specifies whether to enable sparse backup within an hour. Valid values:
      // - true: When the backup frequency is minute-level, all snapshots taken within 1 hour from the current time are retained. For snapshots taken more than 1 hour but within 24 hours from the current time, only the first snapshot after each hour is retained.
      // - false: Sparse backup within an hour is disabled. All snapshots within the retention period of high-frequency backups are retained.
      shared_ptr<bool> preserveOneEachHour_ {};
      // The number of days for which backups are retained.
      shared_ptr<int32_t> retentionPeriod_ {};
      // The retention epoch type of the backup set. Valid values:
      // - **never**: long-term retention (LTR)
      // - **delay**: fixed-day retention
      shared_ptr<string> retentionType_ {};
      // The region where the instance resides.
      shared_ptr<string> srcRegion_ {};
      // The source type of the backup policy. Valid values:
      // - db: same-region backup
      // - level1: cross-region backup
      shared_ptr<string> srcType_ {};
    };

    virtual bool empty() const override { return this->advancedBackupDataPolicies_ == nullptr
        && this->advancedBackupLogPolicies_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->DBInstanceId_ == nullptr && this->preferredBackupTime_ == nullptr && this->preferredNextBackupTime_ == nullptr
        && this->requestId_ == nullptr && this->snapshotBackupType_ == nullptr; };
    // advancedBackupDataPolicies Field Functions 
    bool hasAdvancedBackupDataPolicies() const { return this->advancedBackupDataPolicies_ != nullptr;};
    void deleteAdvancedBackupDataPolicies() { this->advancedBackupDataPolicies_ = nullptr;};
    inline const vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupDataPolicies> & getAdvancedBackupDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedBackupDataPolicies_, vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupDataPolicies>) };
    inline vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupDataPolicies> getAdvancedBackupDataPolicies() { DARABONBA_PTR_GET(advancedBackupDataPolicies_, vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupDataPolicies>) };
    inline DescribeAdvancedBackupPolicyResponseBody& setAdvancedBackupDataPolicies(const vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupDataPolicies> & advancedBackupDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedBackupDataPolicies_, advancedBackupDataPolicies) };
    inline DescribeAdvancedBackupPolicyResponseBody& setAdvancedBackupDataPolicies(vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupDataPolicies> && advancedBackupDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedBackupDataPolicies_, advancedBackupDataPolicies) };


    // advancedBackupLogPolicies Field Functions 
    bool hasAdvancedBackupLogPolicies() const { return this->advancedBackupLogPolicies_ != nullptr;};
    void deleteAdvancedBackupLogPolicies() { this->advancedBackupLogPolicies_ = nullptr;};
    inline const vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupLogPolicies> & getAdvancedBackupLogPolicies() const { DARABONBA_PTR_GET_CONST(advancedBackupLogPolicies_, vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupLogPolicies>) };
    inline vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupLogPolicies> getAdvancedBackupLogPolicies() { DARABONBA_PTR_GET(advancedBackupLogPolicies_, vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupLogPolicies>) };
    inline DescribeAdvancedBackupPolicyResponseBody& setAdvancedBackupLogPolicies(const vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupLogPolicies> & advancedBackupLogPolicies) { DARABONBA_PTR_SET_VALUE(advancedBackupLogPolicies_, advancedBackupLogPolicies) };
    inline DescribeAdvancedBackupPolicyResponseBody& setAdvancedBackupLogPolicies(vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupLogPolicies> && advancedBackupLogPolicies) { DARABONBA_PTR_SET_RVALUE(advancedBackupLogPolicies_, advancedBackupLogPolicies) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline int32_t getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, 0) };
    inline DescribeAdvancedBackupPolicyResponseBody& setBackupRetentionPolicyOnClusterDeletion(int32_t backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeAdvancedBackupPolicyResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeAdvancedBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // preferredNextBackupTime Field Functions 
    bool hasPreferredNextBackupTime() const { return this->preferredNextBackupTime_ != nullptr;};
    void deletePreferredNextBackupTime() { this->preferredNextBackupTime_ = nullptr;};
    inline string getPreferredNextBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredNextBackupTime_, "") };
    inline DescribeAdvancedBackupPolicyResponseBody& setPreferredNextBackupTime(string preferredNextBackupTime) { DARABONBA_PTR_SET_VALUE(preferredNextBackupTime_, preferredNextBackupTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvancedBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotBackupType Field Functions 
    bool hasSnapshotBackupType() const { return this->snapshotBackupType_ != nullptr;};
    void deleteSnapshotBackupType() { this->snapshotBackupType_ = nullptr;};
    inline string getSnapshotBackupType() const { DARABONBA_PTR_GET_DEFAULT(snapshotBackupType_, "") };
    inline DescribeAdvancedBackupPolicyResponseBody& setSnapshotBackupType(string snapshotBackupType) { DARABONBA_PTR_SET_VALUE(snapshotBackupType_, snapshotBackupType) };


  protected:
    // The list of backup policies.
    shared_ptr<vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupDataPolicies>> advancedBackupDataPolicies_ {};
    // The list of log backup policies.
    shared_ptr<vector<DescribeAdvancedBackupPolicyResponseBody::AdvancedBackupLogPolicies>> advancedBackupLogPolicies_ {};
    // The data retention policy. Valid values:
    // - 0: All backup sets of the instance are immediately deleted when the instance is released.
    // - 1: The last backup set is retained for long-term retention (LTR) when the instance is released.
    // - 2: All backup sets are retained for long-term retention (LTR) when the instance is released.
    shared_ptr<int32_t> backupRetentionPolicyOnClusterDeletion_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The backup time in the <i>HH:mm</i>Z-<i>HH:mm</i>Z format (UTC).
    shared_ptr<string> preferredBackupTime_ {};
    // The time range for starting a backup. The time is in the `HH:mmZ-HH:mmZ` format (UTC). Example: 01:00Z-02:00Z. The backup starts within this time range.
    shared_ptr<string> preferredNextBackupTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The snapshot backup type. Valid values:
    // - **Flash**: backup within seconds
    // - **Standard**: standard backup
    shared_ptr<string> snapshotBackupType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
