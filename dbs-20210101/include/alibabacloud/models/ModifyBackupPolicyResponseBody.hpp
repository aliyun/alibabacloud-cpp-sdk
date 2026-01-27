// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYRESPONSEBODY_HPP_
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
  class ModifyBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyBackupPolicyResponseBody() = default ;
    ModifyBackupPolicyResponseBody(const ModifyBackupPolicyResponseBody &) = default ;
    ModifyBackupPolicyResponseBody(ModifyBackupPolicyResponseBody &&) = default ;
    ModifyBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyResponseBody() = default ;
    ModifyBackupPolicyResponseBody& operator=(const ModifyBackupPolicyResponseBody &) = default ;
    ModifyBackupPolicyResponseBody& operator=(ModifyBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdvanceDataPolicies, advanceDataPolicies_);
        DARABONBA_PTR_TO_JSON(AdvanceIncPolicies, advanceIncPolicies_);
        DARABONBA_PTR_TO_JSON(AdvanceLogPolicies, advanceLogPolicies_);
        DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_TO_JSON(BackupPriority, backupPriority_);
        DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(EnableIncBackup, enableIncBackup_);
        DARABONBA_PTR_TO_JSON(PreferredBackupWindow, preferredBackupWindow_);
        DARABONBA_PTR_TO_JSON(PreferredBackupWindowBegin, preferredBackupWindowBegin_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvanceDataPolicies, advanceDataPolicies_);
        DARABONBA_PTR_FROM_JSON(AdvanceIncPolicies, advanceIncPolicies_);
        DARABONBA_PTR_FROM_JSON(AdvanceLogPolicies, advanceLogPolicies_);
        DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_FROM_JSON(BackupPriority, backupPriority_);
        DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(EnableIncBackup, enableIncBackup_);
        DARABONBA_PTR_FROM_JSON(PreferredBackupWindow, preferredBackupWindow_);
        DARABONBA_PTR_FROM_JSON(PreferredBackupWindowBegin, preferredBackupWindowBegin_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdvanceLogPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvanceLogPolicies& obj) { 
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
        virtual bool empty() const override { return this->destRegion_ == nullptr
        && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->filterKey_ == nullptr && this->filterType_ == nullptr && this->filterValue_ == nullptr
        && this->logRetentionType_ == nullptr && this->logRetentionValue_ == nullptr && this->policyId_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
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
          DARABONBA_PTR_TO_JSON(AutoCreated, autoCreated_);
          DARABONBA_PTR_TO_JSON(BakType, bakType_);
          DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_TO_JSON(DestType, destType_);
          DARABONBA_PTR_TO_JSON(DumpAction, dumpAction_);
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
          DARABONBA_PTR_FROM_JSON(AutoCreated, autoCreated_);
          DARABONBA_PTR_FROM_JSON(BakType, bakType_);
          DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_FROM_JSON(DestType, destType_);
          DARABONBA_PTR_FROM_JSON(DumpAction, dumpAction_);
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
        virtual bool empty() const override { return this->autoCreated_ == nullptr
        && this->bakType_ == nullptr && this->destRegion_ == nullptr && this->destType_ == nullptr && this->dumpAction_ == nullptr && this->filterKey_ == nullptr
        && this->filterType_ == nullptr && this->filterValue_ == nullptr && this->onlyPreserveOneEachDay_ == nullptr && this->policyId_ == nullptr && this->retentionType_ == nullptr
        && this->retentionValue_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
        // autoCreated Field Functions 
        bool hasAutoCreated() const { return this->autoCreated_ != nullptr;};
        void deleteAutoCreated() { this->autoCreated_ = nullptr;};
        inline bool getAutoCreated() const { DARABONBA_PTR_GET_DEFAULT(autoCreated_, false) };
        inline AdvanceIncPolicies& setAutoCreated(bool autoCreated) { DARABONBA_PTR_SET_VALUE(autoCreated_, autoCreated) };


        // bakType Field Functions 
        bool hasBakType() const { return this->bakType_ != nullptr;};
        void deleteBakType() { this->bakType_ = nullptr;};
        inline string getBakType() const { DARABONBA_PTR_GET_DEFAULT(bakType_, "") };
        inline AdvanceIncPolicies& setBakType(string bakType) { DARABONBA_PTR_SET_VALUE(bakType_, bakType) };


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


        // dumpAction Field Functions 
        bool hasDumpAction() const { return this->dumpAction_ != nullptr;};
        void deleteDumpAction() { this->dumpAction_ = nullptr;};
        inline string getDumpAction() const { DARABONBA_PTR_GET_DEFAULT(dumpAction_, "") };
        inline AdvanceIncPolicies& setDumpAction(string dumpAction) { DARABONBA_PTR_SET_VALUE(dumpAction_, dumpAction) };


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
        shared_ptr<bool> autoCreated_ {};
        shared_ptr<string> bakType_ {};
        shared_ptr<string> destRegion_ {};
        shared_ptr<string> destType_ {};
        shared_ptr<string> dumpAction_ {};
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
          DARABONBA_PTR_TO_JSON(AutoCreated, autoCreated_);
          DARABONBA_PTR_TO_JSON(BakType, bakType_);
          DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_TO_JSON(DestType, destType_);
          DARABONBA_PTR_TO_JSON(DumpAction, dumpAction_);
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
          DARABONBA_PTR_FROM_JSON(AutoCreated, autoCreated_);
          DARABONBA_PTR_FROM_JSON(BakType, bakType_);
          DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_FROM_JSON(DestType, destType_);
          DARABONBA_PTR_FROM_JSON(DumpAction, dumpAction_);
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
        virtual bool empty() const override { return this->autoCreated_ == nullptr
        && this->bakType_ == nullptr && this->destRegion_ == nullptr && this->destType_ == nullptr && this->dumpAction_ == nullptr && this->filterKey_ == nullptr
        && this->filterType_ == nullptr && this->filterValue_ == nullptr && this->onlyPreserveOneEachDay_ == nullptr && this->policyId_ == nullptr && this->retentionType_ == nullptr
        && this->retentionValue_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr && this->storageClass_ == nullptr; };
        // autoCreated Field Functions 
        bool hasAutoCreated() const { return this->autoCreated_ != nullptr;};
        void deleteAutoCreated() { this->autoCreated_ = nullptr;};
        inline bool getAutoCreated() const { DARABONBA_PTR_GET_DEFAULT(autoCreated_, false) };
        inline AdvanceDataPolicies& setAutoCreated(bool autoCreated) { DARABONBA_PTR_SET_VALUE(autoCreated_, autoCreated) };


        // bakType Field Functions 
        bool hasBakType() const { return this->bakType_ != nullptr;};
        void deleteBakType() { this->bakType_ = nullptr;};
        inline string getBakType() const { DARABONBA_PTR_GET_DEFAULT(bakType_, "") };
        inline AdvanceDataPolicies& setBakType(string bakType) { DARABONBA_PTR_SET_VALUE(bakType_, bakType) };


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


        // dumpAction Field Functions 
        bool hasDumpAction() const { return this->dumpAction_ != nullptr;};
        void deleteDumpAction() { this->dumpAction_ = nullptr;};
        inline string getDumpAction() const { DARABONBA_PTR_GET_DEFAULT(dumpAction_, "") };
        inline AdvanceDataPolicies& setDumpAction(string dumpAction) { DARABONBA_PTR_SET_VALUE(dumpAction_, dumpAction) };


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
        // Indicates whether the backup policy is generated by the system. Valid values:
        // 
        // *   **true**: The backup policy is generated by the system.
        // *   **false**: The backup policy is a custom one.
        shared_ptr<bool> autoCreated_ {};
        // The backup type. Valid values:
        // 
        // *   **F**: full backup.
        // *   **L**: log backup.
        shared_ptr<string> bakType_ {};
        // The region in which backup files are stored.
        shared_ptr<string> destRegion_ {};
        // The storage method of backup files. Valid values:
        // 
        // *   **db**: database.
        // *   **level1**: level-1 backup.
        // *   **level2**: level-2 backup.
        // *   **level2Cross**: level-2 cross-region backup.
        shared_ptr<string> destType_ {};
        // The information about the dump policy. Valid values:
        // 
        // *   **copy**: The backup data is copied from the data source to the destination.
        // *   **move**: The backup data is moved from the data source to the destination.
        shared_ptr<string> dumpAction_ {};
        // The scheduling cycle. Valid values:
        // 
        // *   **dayOfWeek**: scheduling by week.
        // *   **dayOfMonth**: scheduling by month.
        // *   **dayOfYear**: scheduling by year.
        // *   **backupInterval**: scheduling at a specific interval.
        // 
        // >  This parameter is returned only when FilterType is set to **crontab**.
        shared_ptr<string> filterKey_ {};
        // The scheduling mode of the advanced backup policy. Valid values:
        // 
        // *   **crontab**: periodic scheduling.
        // *   **event**: event-based scheduling.
        shared_ptr<string> filterType_ {};
        // The backup cycle.
        shared_ptr<string> filterValue_ {};
        shared_ptr<bool> onlyPreserveOneEachDay_ {};
        // The ID of the advanced backup policy.
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
        && this->category_ == nullptr && this->enableIncBackup_ == nullptr && this->preferredBackupWindow_ == nullptr && this->preferredBackupWindowBegin_ == nullptr; };
      // advanceDataPolicies Field Functions 
      bool hasAdvanceDataPolicies() const { return this->advanceDataPolicies_ != nullptr;};
      void deleteAdvanceDataPolicies() { this->advanceDataPolicies_ = nullptr;};
      inline const vector<Data::AdvanceDataPolicies> & getAdvanceDataPolicies() const { DARABONBA_PTR_GET_CONST(advanceDataPolicies_, vector<Data::AdvanceDataPolicies>) };
      inline vector<Data::AdvanceDataPolicies> getAdvanceDataPolicies() { DARABONBA_PTR_GET(advanceDataPolicies_, vector<Data::AdvanceDataPolicies>) };
      inline Data& setAdvanceDataPolicies(const vector<Data::AdvanceDataPolicies> & advanceDataPolicies) { DARABONBA_PTR_SET_VALUE(advanceDataPolicies_, advanceDataPolicies) };
      inline Data& setAdvanceDataPolicies(vector<Data::AdvanceDataPolicies> && advanceDataPolicies) { DARABONBA_PTR_SET_RVALUE(advanceDataPolicies_, advanceDataPolicies) };


      // advanceIncPolicies Field Functions 
      bool hasAdvanceIncPolicies() const { return this->advanceIncPolicies_ != nullptr;};
      void deleteAdvanceIncPolicies() { this->advanceIncPolicies_ = nullptr;};
      inline const vector<Data::AdvanceIncPolicies> & getAdvanceIncPolicies() const { DARABONBA_PTR_GET_CONST(advanceIncPolicies_, vector<Data::AdvanceIncPolicies>) };
      inline vector<Data::AdvanceIncPolicies> getAdvanceIncPolicies() { DARABONBA_PTR_GET(advanceIncPolicies_, vector<Data::AdvanceIncPolicies>) };
      inline Data& setAdvanceIncPolicies(const vector<Data::AdvanceIncPolicies> & advanceIncPolicies) { DARABONBA_PTR_SET_VALUE(advanceIncPolicies_, advanceIncPolicies) };
      inline Data& setAdvanceIncPolicies(vector<Data::AdvanceIncPolicies> && advanceIncPolicies) { DARABONBA_PTR_SET_RVALUE(advanceIncPolicies_, advanceIncPolicies) };


      // advanceLogPolicies Field Functions 
      bool hasAdvanceLogPolicies() const { return this->advanceLogPolicies_ != nullptr;};
      void deleteAdvanceLogPolicies() { this->advanceLogPolicies_ = nullptr;};
      inline const vector<Data::AdvanceLogPolicies> & getAdvanceLogPolicies() const { DARABONBA_PTR_GET_CONST(advanceLogPolicies_, vector<Data::AdvanceLogPolicies>) };
      inline vector<Data::AdvanceLogPolicies> getAdvanceLogPolicies() { DARABONBA_PTR_GET(advanceLogPolicies_, vector<Data::AdvanceLogPolicies>) };
      inline Data& setAdvanceLogPolicies(const vector<Data::AdvanceLogPolicies> & advanceLogPolicies) { DARABONBA_PTR_SET_VALUE(advanceLogPolicies_, advanceLogPolicies) };
      inline Data& setAdvanceLogPolicies(vector<Data::AdvanceLogPolicies> && advanceLogPolicies) { DARABONBA_PTR_SET_RVALUE(advanceLogPolicies_, advanceLogPolicies) };


      // backupMethod Field Functions 
      bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
      void deleteBackupMethod() { this->backupMethod_ = nullptr;};
      inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
      inline Data& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


      // backupPriority Field Functions 
      bool hasBackupPriority() const { return this->backupPriority_ != nullptr;};
      void deleteBackupPriority() { this->backupPriority_ = nullptr;};
      inline int32_t getBackupPriority() const { DARABONBA_PTR_GET_DEFAULT(backupPriority_, 0) };
      inline Data& setBackupPriority(int32_t backupPriority) { DARABONBA_PTR_SET_VALUE(backupPriority_, backupPriority) };


      // backupRetentionPolicyOnClusterDeletion Field Functions 
      bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
      void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
      inline string getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
      inline Data& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // enableIncBackup Field Functions 
      bool hasEnableIncBackup() const { return this->enableIncBackup_ != nullptr;};
      void deleteEnableIncBackup() { this->enableIncBackup_ = nullptr;};
      inline bool getEnableIncBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncBackup_, false) };
      inline Data& setEnableIncBackup(bool enableIncBackup) { DARABONBA_PTR_SET_VALUE(enableIncBackup_, enableIncBackup) };


      // preferredBackupWindow Field Functions 
      bool hasPreferredBackupWindow() const { return this->preferredBackupWindow_ != nullptr;};
      void deletePreferredBackupWindow() { this->preferredBackupWindow_ = nullptr;};
      inline string getPreferredBackupWindow() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupWindow_, "") };
      inline Data& setPreferredBackupWindow(string preferredBackupWindow) { DARABONBA_PTR_SET_VALUE(preferredBackupWindow_, preferredBackupWindow) };


      // preferredBackupWindowBegin Field Functions 
      bool hasPreferredBackupWindowBegin() const { return this->preferredBackupWindowBegin_ != nullptr;};
      void deletePreferredBackupWindowBegin() { this->preferredBackupWindowBegin_ = nullptr;};
      inline string getPreferredBackupWindowBegin() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupWindowBegin_, "") };
      inline Data& setPreferredBackupWindowBegin(string preferredBackupWindowBegin) { DARABONBA_PTR_SET_VALUE(preferredBackupWindowBegin_, preferredBackupWindowBegin) };


    protected:
      // The details of data backup policies.
      shared_ptr<vector<Data::AdvanceDataPolicies>> advanceDataPolicies_ {};
      shared_ptr<vector<Data::AdvanceIncPolicies>> advanceIncPolicies_ {};
      shared_ptr<vector<Data::AdvanceLogPolicies>> advanceLogPolicies_ {};
      shared_ptr<string> backupMethod_ {};
      shared_ptr<int32_t> backupPriority_ {};
      shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ {};
      shared_ptr<string> category_ {};
      shared_ptr<bool> enableIncBackup_ {};
      // The time period during which a basic backup is performed.
      shared_ptr<string> preferredBackupWindow_ {};
      // The start time of a basic backup.
      shared_ptr<string> preferredBackupWindowBegin_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyBackupPolicyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyBackupPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyBackupPolicyResponseBody::Data) };
    inline ModifyBackupPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyBackupPolicyResponseBody::Data) };
    inline ModifyBackupPolicyResponseBody& setData(const ModifyBackupPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyBackupPolicyResponseBody& setData(ModifyBackupPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModifyBackupPolicyResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModifyBackupPolicyResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyBackupPolicyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ModifyBackupPolicyResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The details of the backup policy.
    shared_ptr<ModifyBackupPolicyResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
