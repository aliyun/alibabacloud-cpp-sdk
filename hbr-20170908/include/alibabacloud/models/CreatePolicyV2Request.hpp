// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYV2REQUEST_HPP_
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
  class CreatePolicyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreatePolicyV2Request() = default ;
    CreatePolicyV2Request(const CreatePolicyV2Request &) = default ;
    CreatePolicyV2Request(CreatePolicyV2Request &&) = default ;
    CreatePolicyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyV2Request() = default ;
    CreatePolicyV2Request& operator=(const CreatePolicyV2Request &) = default ;
    CreatePolicyV2Request& operator=(CreatePolicyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ArchiveDays, archiveDays_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(DataSourceFilters, dataSourceFilters_);
        DARABONBA_PTR_TO_JSON(Immutable, immutable_);
        DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
        DARABONBA_PTR_TO_JSON(ReplicationRegionId, replicationRegionId_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(RetentionRules, retentionRules_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
        DARABONBA_PTR_TO_JSON(TagFilters, tagFilters_);
        DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchiveDays, archiveDays_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(DataSourceFilters, dataSourceFilters_);
        DARABONBA_PTR_FROM_JSON(Immutable, immutable_);
        DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
        DARABONBA_PTR_FROM_JSON(ReplicationRegionId, replicationRegionId_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(RetentionRules, retentionRules_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
        DARABONBA_PTR_FROM_JSON(TagFilters, tagFilters_);
        DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
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
      class TagFilters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagFilters& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TagFilters& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        TagFilters() = default ;
        TagFilters(const TagFilters &) = default ;
        TagFilters(TagFilters &&) = default ;
        TagFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagFilters() = default ;
        TagFilters& operator=(const TagFilters &) = default ;
        TagFilters& operator=(TagFilters &&) = default ;
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
        inline TagFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline TagFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TagFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag matching rule. Valid values:
        // - **EQUAL**: matches both the tag key and tag value.
        // - **NOT**: matches the tag key but not the tag value.
        shared_ptr<string> operator_ {};
        // The tag value. An empty value indicates any value.
        shared_ptr<string> value_ {};
      };

      class RetentionRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetentionRules& obj) { 
          DARABONBA_PTR_TO_JSON(AdvancedRetentionType, advancedRetentionType_);
          DARABONBA_PTR_TO_JSON(Retention, retention_);
          DARABONBA_PTR_TO_JSON(WhichSnapshot, whichSnapshot_);
        };
        friend void from_json(const Darabonba::Json& j, RetentionRules& obj) { 
          DARABONBA_PTR_FROM_JSON(AdvancedRetentionType, advancedRetentionType_);
          DARABONBA_PTR_FROM_JSON(Retention, retention_);
          DARABONBA_PTR_FROM_JSON(WhichSnapshot, whichSnapshot_);
        };
        RetentionRules() = default ;
        RetentionRules(const RetentionRules &) = default ;
        RetentionRules(RetentionRules &&) = default ;
        RetentionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetentionRules() = default ;
        RetentionRules& operator=(const RetentionRules &) = default ;
        RetentionRules& operator=(RetentionRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->advancedRetentionType_ == nullptr
        && this->retention_ == nullptr && this->whichSnapshot_ == nullptr; };
        // advancedRetentionType Field Functions 
        bool hasAdvancedRetentionType() const { return this->advancedRetentionType_ != nullptr;};
        void deleteAdvancedRetentionType() { this->advancedRetentionType_ = nullptr;};
        inline string getAdvancedRetentionType() const { DARABONBA_PTR_GET_DEFAULT(advancedRetentionType_, "") };
        inline RetentionRules& setAdvancedRetentionType(string advancedRetentionType) { DARABONBA_PTR_SET_VALUE(advancedRetentionType_, advancedRetentionType) };


        // retention Field Functions 
        bool hasRetention() const { return this->retention_ != nullptr;};
        void deleteRetention() { this->retention_ = nullptr;};
        inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
        inline RetentionRules& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


        // whichSnapshot Field Functions 
        bool hasWhichSnapshot() const { return this->whichSnapshot_ != nullptr;};
        void deleteWhichSnapshot() { this->whichSnapshot_ = nullptr;};
        inline int64_t getWhichSnapshot() const { DARABONBA_PTR_GET_DEFAULT(whichSnapshot_, 0L) };
        inline RetentionRules& setWhichSnapshot(int64_t whichSnapshot) { DARABONBA_PTR_SET_VALUE(whichSnapshot_, whichSnapshot) };


      protected:
        // The type of the special retention rule. Valid values:
        // - **DAILY**: daily backup.
        // - **WEEKLY**: weekly backup.
        // - **MONTHLY**: monthly backup.
        // - **YEARLY**: yearly backup.
        shared_ptr<string> advancedRetentionType_ {};
        // The special retention period of the backup. Minimum value: 1. Unit: days.
        shared_ptr<int64_t> retention_ {};
        // The backup to which the rule applies. Currently, only the first backup is supported. Set the value to 1.
        shared_ptr<int64_t> whichSnapshot_ {};
      };

      class DataSourceFilters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceFilters& obj) { 
          DARABONBA_PTR_TO_JSON(AccountScope, accountScope_);
          DARABONBA_PTR_TO_JSON(Accounts, accounts_);
          DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceFilters& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountScope, accountScope_);
          DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
          DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        };
        DataSourceFilters() = default ;
        DataSourceFilters(const DataSourceFilters &) = default ;
        DataSourceFilters(DataSourceFilters &&) = default ;
        DataSourceFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceFilters() = default ;
        DataSourceFilters& operator=(const DataSourceFilters &) = default ;
        DataSourceFilters& operator=(DataSourceFilters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Accounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
            DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
            DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
            DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
          };
          friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
            DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
            DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
            DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
          };
          Accounts() = default ;
          Accounts(const Accounts &) = default ;
          Accounts(Accounts &&) = default ;
          Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Accounts() = default ;
          Accounts& operator=(const Accounts &) = default ;
          Accounts& operator=(Accounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->crossAccountRoleName_ == nullptr
        && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr; };
          // crossAccountRoleName Field Functions 
          bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
          void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
          inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
          inline Accounts& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


          // crossAccountType Field Functions 
          bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
          void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
          inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
          inline Accounts& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


          // crossAccountUserId Field Functions 
          bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
          void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
          inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
          inline Accounts& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


        protected:
          shared_ptr<string> crossAccountRoleName_ {};
          shared_ptr<string> crossAccountType_ {};
          shared_ptr<int64_t> crossAccountUserId_ {};
        };

        virtual bool empty() const override { return this->accountScope_ == nullptr
        && this->accounts_ == nullptr && this->dataSourceIds_ == nullptr && this->sourceType_ == nullptr; };
        // accountScope Field Functions 
        bool hasAccountScope() const { return this->accountScope_ != nullptr;};
        void deleteAccountScope() { this->accountScope_ = nullptr;};
        inline string getAccountScope() const { DARABONBA_PTR_GET_DEFAULT(accountScope_, "") };
        inline DataSourceFilters& setAccountScope(string accountScope) { DARABONBA_PTR_SET_VALUE(accountScope_, accountScope) };


        // accounts Field Functions 
        bool hasAccounts() const { return this->accounts_ != nullptr;};
        void deleteAccounts() { this->accounts_ = nullptr;};
        inline const vector<DataSourceFilters::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<DataSourceFilters::Accounts>) };
        inline vector<DataSourceFilters::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<DataSourceFilters::Accounts>) };
        inline DataSourceFilters& setAccounts(const vector<DataSourceFilters::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
        inline DataSourceFilters& setAccounts(vector<DataSourceFilters::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


        // dataSourceIds Field Functions 
        bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
        void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
        inline const vector<string> & getDataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
        inline vector<string> getDataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
        inline DataSourceFilters& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
        inline DataSourceFilters& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline DataSourceFilters& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      protected:
        shared_ptr<string> accountScope_ {};
        shared_ptr<vector<DataSourceFilters::Accounts>> accounts_ {};
        // Deprecated.
        shared_ptr<vector<string>> dataSourceIds_ {};
        // The data source type. Valid values:
        // - **UDM_ECS**: ECS instance backup. This data source type is supported only when **PolicyType** is set to **UDM_ECS_ONLY**.
        // - **OSS**: OSS backup. This data source type is supported only when **PolicyType** is set to **STANDARD**.
        // - **NAS**: Alibaba Cloud NAS backup. This data source type is supported only when **PolicyType** is set to **STANDARD**.
        // - **ECS_FILE**: ECS File Backup Essential Edition. This data source type is supported only when **PolicyType** is set to **STANDARD**.
        // - **OTS**: Tablestore backup. This data source type is supported only when **PolicyType** is set to **STANDARD**.
        shared_ptr<string> sourceType_ {};
      };

      virtual bool empty() const override { return this->archiveDays_ == nullptr
        && this->backupType_ == nullptr && this->dataSourceFilters_ == nullptr && this->immutable_ == nullptr && this->keepLatestSnapshots_ == nullptr && this->replicationRegionId_ == nullptr
        && this->retention_ == nullptr && this->retentionRules_ == nullptr && this->ruleType_ == nullptr && this->schedule_ == nullptr && this->tagFilters_ == nullptr
        && this->vaultId_ == nullptr; };
      // archiveDays Field Functions 
      bool hasArchiveDays() const { return this->archiveDays_ != nullptr;};
      void deleteArchiveDays() { this->archiveDays_ = nullptr;};
      inline int64_t getArchiveDays() const { DARABONBA_PTR_GET_DEFAULT(archiveDays_, 0L) };
      inline Rules& setArchiveDays(int64_t archiveDays) { DARABONBA_PTR_SET_VALUE(archiveDays_, archiveDays) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Rules& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // dataSourceFilters Field Functions 
      bool hasDataSourceFilters() const { return this->dataSourceFilters_ != nullptr;};
      void deleteDataSourceFilters() { this->dataSourceFilters_ = nullptr;};
      inline const vector<Rules::DataSourceFilters> & getDataSourceFilters() const { DARABONBA_PTR_GET_CONST(dataSourceFilters_, vector<Rules::DataSourceFilters>) };
      inline vector<Rules::DataSourceFilters> getDataSourceFilters() { DARABONBA_PTR_GET(dataSourceFilters_, vector<Rules::DataSourceFilters>) };
      inline Rules& setDataSourceFilters(const vector<Rules::DataSourceFilters> & dataSourceFilters) { DARABONBA_PTR_SET_VALUE(dataSourceFilters_, dataSourceFilters) };
      inline Rules& setDataSourceFilters(vector<Rules::DataSourceFilters> && dataSourceFilters) { DARABONBA_PTR_SET_RVALUE(dataSourceFilters_, dataSourceFilters) };


      // immutable Field Functions 
      bool hasImmutable() const { return this->immutable_ != nullptr;};
      void deleteImmutable() { this->immutable_ = nullptr;};
      inline bool getImmutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
      inline Rules& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


      // keepLatestSnapshots Field Functions 
      bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
      void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
      inline int64_t getKeepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
      inline Rules& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


      // replicationRegionId Field Functions 
      bool hasReplicationRegionId() const { return this->replicationRegionId_ != nullptr;};
      void deleteReplicationRegionId() { this->replicationRegionId_ = nullptr;};
      inline string getReplicationRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationRegionId_, "") };
      inline Rules& setReplicationRegionId(string replicationRegionId) { DARABONBA_PTR_SET_VALUE(replicationRegionId_, replicationRegionId) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
      inline Rules& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // retentionRules Field Functions 
      bool hasRetentionRules() const { return this->retentionRules_ != nullptr;};
      void deleteRetentionRules() { this->retentionRules_ = nullptr;};
      inline const vector<Rules::RetentionRules> & getRetentionRules() const { DARABONBA_PTR_GET_CONST(retentionRules_, vector<Rules::RetentionRules>) };
      inline vector<Rules::RetentionRules> getRetentionRules() { DARABONBA_PTR_GET(retentionRules_, vector<Rules::RetentionRules>) };
      inline Rules& setRetentionRules(const vector<Rules::RetentionRules> & retentionRules) { DARABONBA_PTR_SET_VALUE(retentionRules_, retentionRules) };
      inline Rules& setRetentionRules(vector<Rules::RetentionRules> && retentionRules) { DARABONBA_PTR_SET_RVALUE(retentionRules_, retentionRules) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Rules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
      inline Rules& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


      // tagFilters Field Functions 
      bool hasTagFilters() const { return this->tagFilters_ != nullptr;};
      void deleteTagFilters() { this->tagFilters_ = nullptr;};
      inline const vector<Rules::TagFilters> & getTagFilters() const { DARABONBA_PTR_GET_CONST(tagFilters_, vector<Rules::TagFilters>) };
      inline vector<Rules::TagFilters> getTagFilters() { DARABONBA_PTR_GET(tagFilters_, vector<Rules::TagFilters>) };
      inline Rules& setTagFilters(const vector<Rules::TagFilters> & tagFilters) { DARABONBA_PTR_SET_VALUE(tagFilters_, tagFilters) };
      inline Rules& setTagFilters(vector<Rules::TagFilters> && tagFilters) { DARABONBA_PTR_SET_RVALUE(tagFilters_, tagFilters) };


      // vaultId Field Functions 
      bool hasVaultId() const { return this->vaultId_ != nullptr;};
      void deleteVaultId() { this->vaultId_ = nullptr;};
      inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
      inline Rules& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    protected:
      // This parameter is required only when **RuleType** is set to **TRANSITION**. The number of days after which a backup is automatically moved to the archive tier. Backups must be retained in the standard tier for at least 30 days and in the archive tier for at least 60 days. Unit: days.
      shared_ptr<int64_t> archiveDays_ {};
      // This parameter is required only when **RuleType** is set to **BACKUP**. The backup type. Set the value to **COMPLETE**, which specifies full backup.
      shared_ptr<string> backupType_ {};
      // This parameter is required only when **RuleType** is set to **TAG**. The data source filter rules.
      shared_ptr<vector<Rules::DataSourceFilters>> dataSourceFilters_ {};
      // This parameter is required only when **PolicyType** is set to **UDM_ECS_ONLY** and **RuleType** is set to **SECURITY**. Specifies whether to enable backup locking.
      shared_ptr<bool> immutable_ {};
      // Specifies whether to retain at least one backup version. Valid values:
      // - 0: do not retain.
      // - 1: retain.
      shared_ptr<int64_t> keepLatestSnapshots_ {};
      // This parameter is required only when **RuleType** is set to **REPLICATION**. The ID of the destination region for replication.
      shared_ptr<string> replicationRegionId_ {};
      // This parameter is required only when **RuleType** is set to **BACKUP**, **TRANSITION**, or **REPLICATION**.
      // - If **RuleType** is set to **BACKUP**: the retention period of backups. The priority of this parameter is lower than the Retention parameter of the rule whose **RuleType** is **TRANSITION**. Minimum value: 1. Maximum value: 364635. Unit: days.
      // - If **RuleType** is set to **TRANSITION**: the retention period of backups. Minimum value: 1. Maximum value: 364635. Unit: days.
      // - If **RuleType** is set to **REPLICATION**: the retention period of cross-region backups. Minimum value: 1. Maximum value: 364635. Unit: days.
      shared_ptr<int64_t> retention_ {};
      // This parameter is required only when **RuleType** is set to **TRANSITION**. The special retention rules.
      shared_ptr<vector<Rules::RetentionRules>> retentionRules_ {};
      // The rule type. Each policy must have at least one **BACKUP** rule and exactly one **TRANSITION** rule. Valid values:
      // - **BACKUP**: backup rule.
      // - **TRANSITION**: lifecycle rule.
      // - **REPLICATION**: replication rule.
      // - **TAG**: tag-based resource association rule.
      // 
      // This parameter is required.
      shared_ptr<string> ruleType_ {};
      // This parameter is required only when **RuleType** is set to **BACKUP**. The backup schedule settings. Supported formats:
      // - `I|{startTime}|{interval}`: specifies that a backup job is executed at the specified interval starting from {startTime}. For example, `I|1631685600|P1D` specifies that a backup job is executed once a day starting from 2021-09-15 14:00:00.
      // 
      //   * startTime: the start time of the backup. This value is a UNIX timestamp. Unit: seconds.
      //   * interval: the ISO 8601 time interval. For example, `PT1H` specifies an interval of one hour. `P1D` specifies an interval of one day.
      // - `C|{startTime}|{crontab}`: specifies that a backup job is executed based on the {crontab} expression starting from {startTime}. For example, `C|1631685600|0 0 2 ? * 3,5,7` specifies that a backup job is executed at 02:00:00 every Tuesday, Thursday, and Saturday starting from 2021-09-15 14:00:00.
      //   * startTime: the start time of the backup. This value is a UNIX timestamp. Unit: seconds.
      //   * crontab: the crontab expression. For example, `0 0 2 ? * 3,5,7` specifies every Tuesday, Thursday, and Saturday at 02:00:00.
      // 
      // Backup jobs that are missed are not compensated. If the previous backup job is not complete, the next backup job is not triggered.
      shared_ptr<string> schedule_ {};
      // This parameter is required only when **RuleType** is set to **TAG**. The resource tag filter rules.
      shared_ptr<vector<Rules::TagFilters>> tagFilters_ {};
      // This parameter is required only when RuleType is set to BACKUP. The backup vault ID.
      shared_ptr<string> vaultId_ {};
    };

    virtual bool empty() const override { return this->policyDescription_ == nullptr
        && this->policyName_ == nullptr && this->policyType_ == nullptr && this->rules_ == nullptr; };
    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline CreatePolicyV2Request& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyV2Request& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreatePolicyV2Request& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreatePolicyV2Request::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreatePolicyV2Request::Rules>) };
    inline vector<CreatePolicyV2Request::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreatePolicyV2Request::Rules>) };
    inline CreatePolicyV2Request& setRules(const vector<CreatePolicyV2Request::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreatePolicyV2Request& setRules(vector<CreatePolicyV2Request::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The policy description.
    shared_ptr<string> policyDescription_ {};
    // The policy name.
    shared_ptr<string> policyName_ {};
    // The policy type. Valid values:
    // - **STANDARD**: general backup policy. Supports backing up data sources other than ECS instances.
    // - **UDM_ECS_ONLY**: ECS instance backup policy. Supports backing up only ECS instances.
    // 
    // If you do not specify the policy type, Cloud Backup automatically sets the policy type based on whether a backup vault is specified in the policy rules:
    // - A backup vault is specified in the policy rules: **STANDARD**
    // - No backup vault is specified in the policy rules: **UDM_ECS_ONLY**
    shared_ptr<string> policyType_ {};
    // The list of policy rules.
    shared_ptr<vector<CreatePolicyV2Request::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
