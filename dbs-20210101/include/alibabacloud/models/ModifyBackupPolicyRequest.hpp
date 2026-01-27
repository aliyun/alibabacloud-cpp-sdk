// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvanceDataPolicies, advanceDataPolicies_);
      DARABONBA_PTR_TO_JSON(AdvanceIncPolicies, advanceIncPolicies_);
      DARABONBA_PTR_TO_JSON(AdvanceLogPolicies, advanceLogPolicies_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EnableIncBackup, enableIncBackup_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PreferredBackupWindowBegin, preferredBackupWindowBegin_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvanceDataPolicies, advanceDataPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvanceIncPolicies, advanceIncPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvanceLogPolicies, advanceLogPolicies_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EnableIncBackup, enableIncBackup_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupWindowBegin, preferredBackupWindowBegin_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
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
    class AdvanceLogPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvanceLogPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestType, destType_);
        DARABONBA_PTR_TO_JSON(EnableLogBackup, enableLogBackup_);
        DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_TO_JSON(FilterType, filterType_);
        DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_TO_JSON(LogRetentionType, logRetentionType_);
        DARABONBA_PTR_TO_JSON(LogRetentionValue, logRetentionValue_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      };
      friend void from_json(const Darabonba::Json& j, AdvanceLogPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestType, destType_);
        DARABONBA_PTR_FROM_JSON(EnableLogBackup, enableLogBackup_);
        DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
        DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_FROM_JSON(LogRetentionType, logRetentionType_);
        DARABONBA_PTR_FROM_JSON(LogRetentionValue, logRetentionValue_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      };
      AdvanceLogPolicies() = default ;
      AdvanceLogPolicies(const AdvanceLogPolicies &) = default ;
      AdvanceLogPolicies(AdvanceLogPolicies &&) = default ;
      AdvanceLogPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvanceLogPolicies() = default ;
      AdvanceLogPolicies& operator=(const AdvanceLogPolicies &) = default ;
      AdvanceLogPolicies& operator=(AdvanceLogPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->destRegion_ == nullptr && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->filterKey_ == nullptr && this->filterType_ == nullptr
        && this->filterValue_ == nullptr && this->logRetentionType_ == nullptr && this->logRetentionValue_ == nullptr && this->policyId_ == nullptr && this->srcRegion_ == nullptr
        && this->srcType_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvanceLogPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvanceLogPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvanceLogPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // enableLogBackup Field Functions 
      bool hasEnableLogBackup() const { return this->enableLogBackup_ != nullptr;};
      void deleteEnableLogBackup() { this->enableLogBackup_ = nullptr;};
      inline int64_t getEnableLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableLogBackup_, 0L) };
      inline AdvanceLogPolicies& setEnableLogBackup(int64_t enableLogBackup) { DARABONBA_PTR_SET_VALUE(enableLogBackup_, enableLogBackup) };


      // filterKey Field Functions 
      bool hasFilterKey() const { return this->filterKey_ != nullptr;};
      void deleteFilterKey() { this->filterKey_ = nullptr;};
      inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
      inline AdvanceLogPolicies& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


      // filterType Field Functions 
      bool hasFilterType() const { return this->filterType_ != nullptr;};
      void deleteFilterType() { this->filterType_ = nullptr;};
      inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
      inline AdvanceLogPolicies& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


      // filterValue Field Functions 
      bool hasFilterValue() const { return this->filterValue_ != nullptr;};
      void deleteFilterValue() { this->filterValue_ = nullptr;};
      inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
      inline AdvanceLogPolicies& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


      // logRetentionType Field Functions 
      bool hasLogRetentionType() const { return this->logRetentionType_ != nullptr;};
      void deleteLogRetentionType() { this->logRetentionType_ = nullptr;};
      inline string getLogRetentionType() const { DARABONBA_PTR_GET_DEFAULT(logRetentionType_, "") };
      inline AdvanceLogPolicies& setLogRetentionType(string logRetentionType) { DARABONBA_PTR_SET_VALUE(logRetentionType_, logRetentionType) };


      // logRetentionValue Field Functions 
      bool hasLogRetentionValue() const { return this->logRetentionValue_ != nullptr;};
      void deleteLogRetentionValue() { this->logRetentionValue_ = nullptr;};
      inline string getLogRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(logRetentionValue_, "") };
      inline AdvanceLogPolicies& setLogRetentionValue(string logRetentionValue) { DARABONBA_PTR_SET_VALUE(logRetentionValue_, logRetentionValue) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AdvanceLogPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvanceLogPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvanceLogPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    protected:
      shared_ptr<string> actionType_ {};
      shared_ptr<string> destRegion_ {};
      shared_ptr<string> destType_ {};
      shared_ptr<int64_t> enableLogBackup_ {};
      shared_ptr<string> filterKey_ {};
      shared_ptr<string> filterType_ {};
      shared_ptr<string> filterValue_ {};
      shared_ptr<string> logRetentionType_ {};
      shared_ptr<string> logRetentionValue_ {};
      shared_ptr<string> policyId_ {};
      shared_ptr<string> srcRegion_ {};
      shared_ptr<string> srcType_ {};
    };

    class AdvanceIncPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvanceIncPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestType, destType_);
        DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_TO_JSON(FilterType, filterType_);
        DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_TO_JSON(RetentionValue, retentionValue_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      };
      friend void from_json(const Darabonba::Json& j, AdvanceIncPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestType, destType_);
        DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
        DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_FROM_JSON(RetentionValue, retentionValue_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      };
      AdvanceIncPolicies() = default ;
      AdvanceIncPolicies(const AdvanceIncPolicies &) = default ;
      AdvanceIncPolicies(AdvanceIncPolicies &&) = default ;
      AdvanceIncPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvanceIncPolicies() = default ;
      AdvanceIncPolicies& operator=(const AdvanceIncPolicies &) = default ;
      AdvanceIncPolicies& operator=(AdvanceIncPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->destRegion_ == nullptr && this->destType_ == nullptr && this->filterKey_ == nullptr && this->filterType_ == nullptr && this->filterValue_ == nullptr
        && this->onlyPreserveOneEachDay_ == nullptr && this->policyId_ == nullptr && this->retentionType_ == nullptr && this->retentionValue_ == nullptr && this->srcRegion_ == nullptr
        && this->srcType_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvanceIncPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvanceIncPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvanceIncPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // filterKey Field Functions 
      bool hasFilterKey() const { return this->filterKey_ != nullptr;};
      void deleteFilterKey() { this->filterKey_ = nullptr;};
      inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
      inline AdvanceIncPolicies& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


      // filterType Field Functions 
      bool hasFilterType() const { return this->filterType_ != nullptr;};
      void deleteFilterType() { this->filterType_ = nullptr;};
      inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
      inline AdvanceIncPolicies& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


      // filterValue Field Functions 
      bool hasFilterValue() const { return this->filterValue_ != nullptr;};
      void deleteFilterValue() { this->filterValue_ = nullptr;};
      inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
      inline AdvanceIncPolicies& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


      // onlyPreserveOneEachDay Field Functions 
      bool hasOnlyPreserveOneEachDay() const { return this->onlyPreserveOneEachDay_ != nullptr;};
      void deleteOnlyPreserveOneEachDay() { this->onlyPreserveOneEachDay_ = nullptr;};
      inline bool getOnlyPreserveOneEachDay() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachDay_, false) };
      inline AdvanceIncPolicies& setOnlyPreserveOneEachDay(bool onlyPreserveOneEachDay) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachDay_, onlyPreserveOneEachDay) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AdvanceIncPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // retentionType Field Functions 
      bool hasRetentionType() const { return this->retentionType_ != nullptr;};
      void deleteRetentionType() { this->retentionType_ = nullptr;};
      inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
      inline AdvanceIncPolicies& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


      // retentionValue Field Functions 
      bool hasRetentionValue() const { return this->retentionValue_ != nullptr;};
      void deleteRetentionValue() { this->retentionValue_ = nullptr;};
      inline string getRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(retentionValue_, "") };
      inline AdvanceIncPolicies& setRetentionValue(string retentionValue) { DARABONBA_PTR_SET_VALUE(retentionValue_, retentionValue) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvanceIncPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvanceIncPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    protected:
      shared_ptr<string> actionType_ {};
      shared_ptr<string> destRegion_ {};
      shared_ptr<string> destType_ {};
      shared_ptr<string> filterKey_ {};
      shared_ptr<string> filterType_ {};
      shared_ptr<string> filterValue_ {};
      shared_ptr<bool> onlyPreserveOneEachDay_ {};
      shared_ptr<string> policyId_ {};
      shared_ptr<string> retentionType_ {};
      shared_ptr<string> retentionValue_ {};
      shared_ptr<string> srcRegion_ {};
      shared_ptr<string> srcType_ {};
    };

    class AdvanceDataPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvanceDataPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestType, destType_);
        DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_TO_JSON(FilterType, filterType_);
        DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_TO_JSON(RetentionValue, retentionValue_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      };
      friend void from_json(const Darabonba::Json& j, AdvanceDataPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestType, destType_);
        DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
        DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
        DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
        DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
        DARABONBA_PTR_FROM_JSON(RetentionValue, retentionValue_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      };
      AdvanceDataPolicies() = default ;
      AdvanceDataPolicies(const AdvanceDataPolicies &) = default ;
      AdvanceDataPolicies(AdvanceDataPolicies &&) = default ;
      AdvanceDataPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvanceDataPolicies() = default ;
      AdvanceDataPolicies& operator=(const AdvanceDataPolicies &) = default ;
      AdvanceDataPolicies& operator=(AdvanceDataPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->destRegion_ == nullptr && this->destType_ == nullptr && this->filterKey_ == nullptr && this->filterType_ == nullptr && this->filterValue_ == nullptr
        && this->onlyPreserveOneEachDay_ == nullptr && this->policyId_ == nullptr && this->retentionType_ == nullptr && this->retentionValue_ == nullptr && this->srcRegion_ == nullptr
        && this->srcType_ == nullptr && this->storageClass_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvanceDataPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvanceDataPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvanceDataPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // filterKey Field Functions 
      bool hasFilterKey() const { return this->filterKey_ != nullptr;};
      void deleteFilterKey() { this->filterKey_ = nullptr;};
      inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
      inline AdvanceDataPolicies& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


      // filterType Field Functions 
      bool hasFilterType() const { return this->filterType_ != nullptr;};
      void deleteFilterType() { this->filterType_ = nullptr;};
      inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
      inline AdvanceDataPolicies& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


      // filterValue Field Functions 
      bool hasFilterValue() const { return this->filterValue_ != nullptr;};
      void deleteFilterValue() { this->filterValue_ = nullptr;};
      inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
      inline AdvanceDataPolicies& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


      // onlyPreserveOneEachDay Field Functions 
      bool hasOnlyPreserveOneEachDay() const { return this->onlyPreserveOneEachDay_ != nullptr;};
      void deleteOnlyPreserveOneEachDay() { this->onlyPreserveOneEachDay_ = nullptr;};
      inline bool getOnlyPreserveOneEachDay() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachDay_, false) };
      inline AdvanceDataPolicies& setOnlyPreserveOneEachDay(bool onlyPreserveOneEachDay) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachDay_, onlyPreserveOneEachDay) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AdvanceDataPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // retentionType Field Functions 
      bool hasRetentionType() const { return this->retentionType_ != nullptr;};
      void deleteRetentionType() { this->retentionType_ = nullptr;};
      inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
      inline AdvanceDataPolicies& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


      // retentionValue Field Functions 
      bool hasRetentionValue() const { return this->retentionValue_ != nullptr;};
      void deleteRetentionValue() { this->retentionValue_ = nullptr;};
      inline string getRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(retentionValue_, "") };
      inline AdvanceDataPolicies& setRetentionValue(string retentionValue) { DARABONBA_PTR_SET_VALUE(retentionValue_, retentionValue) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvanceDataPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvanceDataPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline AdvanceDataPolicies& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    protected:
      // The type of the operation. Valid values:
      // 
      // *   **CREATE**
      // *   **UPDATE**
      // *   **DELETE**
      shared_ptr<string> actionType_ {};
      // The region in which backup files are stored.
      shared_ptr<string> destRegion_ {};
      // The storage method of backup files. Valid values:
      // 
      // *   **db**: database.
      // *   **level1**: level-1 backup.
      // *   **level2**: level-2 backup.
      // *   **level2Cross**: level-2 cross-region backup.
      shared_ptr<string> destType_ {};
      // The scheduling cycle. Valid values:
      // 
      // *   **dayOfWeek**: scheduling by week.
      // *   **dayOfMonth**: scheduling by month.
      // *   **dayOfYear**: scheduling by year.
      // *   **backupInterval**: scheduling at a specific interval.
      // 
      // >  This parameter is required only when FilterType is set to **crontab**.
      shared_ptr<string> filterKey_ {};
      // The scheduling mode of the advanced backup policy. Valid values:
      // 
      // *   **crontab**: periodic scheduling.
      // *   **event**: event-based scheduling.
      shared_ptr<string> filterType_ {};
      // The backup cycle.
      shared_ptr<string> filterValue_ {};
      shared_ptr<bool> onlyPreserveOneEachDay_ {};
      // The ID of the advanced backup policy. You can call the [DescribeBackupPolicy](https://help.aliyun.com/document_detail/2869783.html) operation to query the ID.
      shared_ptr<string> policyId_ {};
      // The retention type of backup sets. Valid values:
      // 
      // *   **never**: Backup sets never expire.
      // *   **delay**: Backup sets are retained for a specific number of days.
      shared_ptr<string> retentionType_ {};
      // The retention period. Unit: day.
      shared_ptr<string> retentionValue_ {};
      // The region in which the data source of the backup policy resides.
      shared_ptr<string> srcRegion_ {};
      // The type of the data source of the backup policy. Valid values:
      // 
      // *   **db**: database.
      // *   **level1**: level-1 backup.
      // *   **level2**: level-2 backup.
      // *   **level2Cross**: level-2 cross-region backup.
      shared_ptr<string> srcType_ {};
      shared_ptr<string> storageClass_ {};
    };

    virtual bool empty() const override { return this->advanceDataPolicies_ == nullptr
        && this->advanceIncPolicies_ == nullptr && this->advanceLogPolicies_ == nullptr && this->backupMethod_ == nullptr && this->backupPriority_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr
        && this->category_ == nullptr && this->enableIncBackup_ == nullptr && this->instanceName_ == nullptr && this->preferredBackupWindowBegin_ == nullptr && this->regionCode_ == nullptr; };
    // advanceDataPolicies Field Functions 
    bool hasAdvanceDataPolicies() const { return this->advanceDataPolicies_ != nullptr;};
    void deleteAdvanceDataPolicies() { this->advanceDataPolicies_ = nullptr;};
    inline const vector<ModifyBackupPolicyRequest::AdvanceDataPolicies> & getAdvanceDataPolicies() const { DARABONBA_PTR_GET_CONST(advanceDataPolicies_, vector<ModifyBackupPolicyRequest::AdvanceDataPolicies>) };
    inline vector<ModifyBackupPolicyRequest::AdvanceDataPolicies> getAdvanceDataPolicies() { DARABONBA_PTR_GET(advanceDataPolicies_, vector<ModifyBackupPolicyRequest::AdvanceDataPolicies>) };
    inline ModifyBackupPolicyRequest& setAdvanceDataPolicies(const vector<ModifyBackupPolicyRequest::AdvanceDataPolicies> & advanceDataPolicies) { DARABONBA_PTR_SET_VALUE(advanceDataPolicies_, advanceDataPolicies) };
    inline ModifyBackupPolicyRequest& setAdvanceDataPolicies(vector<ModifyBackupPolicyRequest::AdvanceDataPolicies> && advanceDataPolicies) { DARABONBA_PTR_SET_RVALUE(advanceDataPolicies_, advanceDataPolicies) };


    // advanceIncPolicies Field Functions 
    bool hasAdvanceIncPolicies() const { return this->advanceIncPolicies_ != nullptr;};
    void deleteAdvanceIncPolicies() { this->advanceIncPolicies_ = nullptr;};
    inline const vector<ModifyBackupPolicyRequest::AdvanceIncPolicies> & getAdvanceIncPolicies() const { DARABONBA_PTR_GET_CONST(advanceIncPolicies_, vector<ModifyBackupPolicyRequest::AdvanceIncPolicies>) };
    inline vector<ModifyBackupPolicyRequest::AdvanceIncPolicies> getAdvanceIncPolicies() { DARABONBA_PTR_GET(advanceIncPolicies_, vector<ModifyBackupPolicyRequest::AdvanceIncPolicies>) };
    inline ModifyBackupPolicyRequest& setAdvanceIncPolicies(const vector<ModifyBackupPolicyRequest::AdvanceIncPolicies> & advanceIncPolicies) { DARABONBA_PTR_SET_VALUE(advanceIncPolicies_, advanceIncPolicies) };
    inline ModifyBackupPolicyRequest& setAdvanceIncPolicies(vector<ModifyBackupPolicyRequest::AdvanceIncPolicies> && advanceIncPolicies) { DARABONBA_PTR_SET_RVALUE(advanceIncPolicies_, advanceIncPolicies) };


    // advanceLogPolicies Field Functions 
    bool hasAdvanceLogPolicies() const { return this->advanceLogPolicies_ != nullptr;};
    void deleteAdvanceLogPolicies() { this->advanceLogPolicies_ = nullptr;};
    inline const vector<ModifyBackupPolicyRequest::AdvanceLogPolicies> & getAdvanceLogPolicies() const { DARABONBA_PTR_GET_CONST(advanceLogPolicies_, vector<ModifyBackupPolicyRequest::AdvanceLogPolicies>) };
    inline vector<ModifyBackupPolicyRequest::AdvanceLogPolicies> getAdvanceLogPolicies() { DARABONBA_PTR_GET(advanceLogPolicies_, vector<ModifyBackupPolicyRequest::AdvanceLogPolicies>) };
    inline ModifyBackupPolicyRequest& setAdvanceLogPolicies(const vector<ModifyBackupPolicyRequest::AdvanceLogPolicies> & advanceLogPolicies) { DARABONBA_PTR_SET_VALUE(advanceLogPolicies_, advanceLogPolicies) };
    inline ModifyBackupPolicyRequest& setAdvanceLogPolicies(vector<ModifyBackupPolicyRequest::AdvanceLogPolicies> && advanceLogPolicies) { DARABONBA_PTR_SET_RVALUE(advanceLogPolicies_, advanceLogPolicies) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline ModifyBackupPolicyRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupPriority Field Functions 
    bool hasBackupPriority() const { return this->backupPriority_ != nullptr;};
    void deleteBackupPriority() { this->backupPriority_ = nullptr;};
    inline int32_t getBackupPriority() const { DARABONBA_PTR_GET_DEFAULT(backupPriority_, 0) };
    inline ModifyBackupPolicyRequest& setBackupPriority(int32_t backupPriority) { DARABONBA_PTR_SET_VALUE(backupPriority_, backupPriority) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline ModifyBackupPolicyRequest& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyBackupPolicyRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // enableIncBackup Field Functions 
    bool hasEnableIncBackup() const { return this->enableIncBackup_ != nullptr;};
    void deleteEnableIncBackup() { this->enableIncBackup_ = nullptr;};
    inline bool getEnableIncBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncBackup_, false) };
    inline ModifyBackupPolicyRequest& setEnableIncBackup(bool enableIncBackup) { DARABONBA_PTR_SET_VALUE(enableIncBackup_, enableIncBackup) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyBackupPolicyRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // preferredBackupWindowBegin Field Functions 
    bool hasPreferredBackupWindowBegin() const { return this->preferredBackupWindowBegin_ != nullptr;};
    void deletePreferredBackupWindowBegin() { this->preferredBackupWindowBegin_ = nullptr;};
    inline string getPreferredBackupWindowBegin() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupWindowBegin_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupWindowBegin(string preferredBackupWindowBegin) { DARABONBA_PTR_SET_VALUE(preferredBackupWindowBegin_, preferredBackupWindowBegin) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline ModifyBackupPolicyRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


  protected:
    // The details of data backup policies.
    shared_ptr<vector<ModifyBackupPolicyRequest::AdvanceDataPolicies>> advanceDataPolicies_ {};
    shared_ptr<vector<ModifyBackupPolicyRequest::AdvanceIncPolicies>> advanceIncPolicies_ {};
    shared_ptr<vector<ModifyBackupPolicyRequest::AdvanceLogPolicies>> advanceLogPolicies_ {};
    shared_ptr<string> backupMethod_ {};
    shared_ptr<int32_t> backupPriority_ {};
    shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ {};
    shared_ptr<string> category_ {};
    shared_ptr<bool> enableIncBackup_ {};
    // The ID of the PolarDB instance.
    shared_ptr<string> instanceName_ {};
    // The start time of a basic backup.
    shared_ptr<string> preferredBackupWindowBegin_ {};
    // The region in which backup sets reside.
    shared_ptr<string> regionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
